
 
#include "../SDK.hpp"

namespace SDK
{







void ACreateBackpackRepActor::InitCustomItemDataInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreateBackpackRepActor.InitCustomItemDataInfo");

	ACreateBackpackRepActor_InitCustomItemDataInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ACreateBackpackRepActor::CustomItemDataInitComplete()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreateBackpackRepActor.CustomItemDataInitComplete");

	ACreateBackpackRepActor_CustomItemDataInitComplete_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativeAbilitySystemComponent::UpdateGridGhostBuildingLocation(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.UpdateGridGhostBuildingLocation");

	UCreativeAbilitySystemComponent_UpdateGridGhostBuildingLocation_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeAbilitySystemComponent::UpdateGhostBuildingTransform()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.UpdateGhostBuildingTransform");

	UCreativeAbilitySystemComponent_UpdateGhostBuildingTransform_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeAbilitySystemComponent::SetSnapTargetTransform(const struct FTransform& SnapTargetTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.SetSnapTargetTransform");

	UCreativeAbilitySystemComponent_SetSnapTargetTransform_Params params;
	params.SnapTargetTransform = SnapTargetTransform;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeAbilitySystemComponent::SetOverrideBuild(const struct FVector& Position, const struct FRotator& Rotation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.SetOverrideBuild");

	UCreativeAbilitySystemComponent_SetOverrideBuild_Params params;
	params.Position = Position;
	params.Rotation = Rotation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativeAbilitySystemComponent::SetLuaGhostBuildingTransformScale(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformScale");

	UCreativeAbilitySystemComponent_SetLuaGhostBuildingTransformScale_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativeAbilitySystemComponent::SetLuaGhostBuildingTransformRotation(float Roll, float Yaw, float Pitch)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformRotation");

	UCreativeAbilitySystemComponent_SetLuaGhostBuildingTransformRotation_Params params;
	params.Roll = Roll;
	params.Yaw = Yaw;
	params.Pitch = Pitch;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativeAbilitySystemComponent::SetLuaGhostBuildingTransformLocation(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformLocation");

	UCreativeAbilitySystemComponent_SetLuaGhostBuildingTransformLocation_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeAbilitySystemComponent::LuaGhostBuildingInstaUpdate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.LuaGhostBuildingInstaUpdate");

	UCreativeAbilitySystemComponent_LuaGhostBuildingInstaUpdate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









float UCreativeAbilitySystemComponent::GetSnappedLocAxisZ(float Loc, float Base)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.GetSnappedLocAxisZ");

	UCreativeAbilitySystemComponent_GetSnappedLocAxisZ_Params params;
	params.Loc = Loc;
	params.Base = Base;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









float UCreativeAbilitySystemComponent::GetSnappedLocAxis(float Value, int AxisType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.GetSnappedLocAxis");

	UCreativeAbilitySystemComponent_GetSnappedLocAxis_Params params;
	params.Value = Value;
	params.AxisType = AxisType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UCreativeAbilitySystemComponent::GetSetupBuildingID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.GetSetupBuildingID");

	UCreativeAbilitySystemComponent_GetSetupBuildingID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class ASTExtraPlayerController* UCreativeAbilitySystemComponent::GetPlayerController()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.GetPlayerController");

	UCreativeAbilitySystemComponent_GetPlayerController_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UCreativeAbilitySystemComponent::GetLuaSnapTargetTransform()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.GetLuaSnapTargetTransform");

	UCreativeAbilitySystemComponent_GetLuaSnapTargetTransform_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UCreativeAbilitySystemComponent::GetLuaInstanceBoundingBox()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.GetLuaInstanceBoundingBox");

	UCreativeAbilitySystemComponent_GetLuaInstanceBoundingBox_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FTransform UCreativeAbilitySystemComponent::GetGhostBuildingTransform()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.GetGhostBuildingTransform");

	UCreativeAbilitySystemComponent_GetGhostBuildingTransform_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UCreativeAbilitySystemComponent::GetBuildingInstanceID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.GetBuildingInstanceID");

	UCreativeAbilitySystemComponent_GetBuildingInstanceID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UCreativeAbilitySystemComponent::GetBuildDistance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.GetBuildDistance");

	UCreativeAbilitySystemComponent_GetBuildDistance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeAbilitySystemComponent::ClearOverrideBuild()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.ClearOverrideBuild");

	UCreativeAbilitySystemComponent_ClearOverrideBuild_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeActorDataManager::SetNeedInitAbstractClassIDList(TArray<int> InNeedInitAbstractClassIDList, const struct FString& InAuthorID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeActorDataManager.SetNeedInitAbstractClassIDList");

	UCreativeActorDataManager_SetNeedInitAbstractClassIDList_Params params;
	params.InNeedInitAbstractClassIDList = InNeedInitAbstractClassIDList;
	params.InAuthorID = InAuthorID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeActorDataManager::SetActorDataNodes(TArray<struct FCreativeActorDataNode> ActorDataNodes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeActorDataManager.SetActorDataNodes");

	UCreativeActorDataManager_SetActorDataNodes_Params params;
	params.ActorDataNodes = ActorDataNodes;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeActorDataManager::RemoveActorData(uint32_t ID, unsigned char Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeActorDataManager.RemoveActorData");

	UCreativeActorDataManager_RemoveActorData_Params params;
	params.ID = ID;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeActorDataManager::ReceiveOnPostSetLuaEventBridgeInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeActorDataManager.ReceiveOnPostSetLuaEventBridgeInstance");

	UCreativeActorDataManager_ReceiveOnPostSetLuaEventBridgeInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeActorDataManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeActorDataManager.ReceiveOnGameStateBeginPlay");

	UCreativeActorDataManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeActorDataManager::OnRep_NeedInitAbstractClassIDList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeActorDataManager.OnRep_NeedInitAbstractClassIDList");

	UCreativeActorDataManager_OnRep_NeedInitAbstractClassIDList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeActorDataManager::OnPostSetLuaEventBridgeInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeActorDataManager.OnPostSetLuaEventBridgeInstance");

	UCreativeActorDataManager_OnPostSetLuaEventBridgeInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeActorDataManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeActorDataManager.OnGameStateBeginPlay");

	UCreativeActorDataManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








TArray<struct FCreativeActorDataNode> UCreativeActorDataManager::GetActorDataNodes(TArray<uint32_t> DataHashKeys)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeActorDataManager.GetActorDataNodes");

	UCreativeActorDataManager_GetActorDataNodes_Params params;
	params.DataHashKeys = DataHashKeys;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UCreativeActorDataManager::GetActorDataContent(uint32_t ID, unsigned char Type, TArray<unsigned char>* OutContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeActorDataManager.GetActorDataContent");

	UCreativeActorDataManager_GetActorDataContent_Params params;
	params.ID = ID;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutContent != nullptr)
		*OutContent = params.OutContent;

	return params.ReturnValue;
}








class UCreativeActorDataManager* UCreativeActorDataManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeActorDataManager.Get");

	UCreativeActorDataManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UCreativeActorDataManager::ChangeActorData(uint32_t ID, unsigned char Type, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeActorDataManager.ChangeActorData");

	UCreativeActorDataManager_ChangeActorData_Params params;
	params.ID = ID;
	params.Type = Type;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeActorDataManager::CallOnReceivePreActorDataRemove(uint32_t ID, unsigned char Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeActorDataManager.CallOnReceivePreActorDataRemove");

	UCreativeActorDataManager_CallOnReceivePreActorDataRemove_Params params;
	params.ID = ID;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativeActorDataManager::CallOnReceivePostActorDataChange(uint32_t ID, unsigned char Type, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeActorDataManager.CallOnReceivePostActorDataChange");

	UCreativeActorDataManager_CallOnReceivePostActorDataChange_Params params;
	params.ID = ID;
	params.Type = Type;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativeActorDataManager::CallOnReceivePostActorDataAdd(uint32_t ID, unsigned char Type, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeActorDataManager.CallOnReceivePostActorDataAdd");

	UCreativeActorDataManager_CallOnReceivePostActorDataAdd_Params params;
	params.ID = ID;
	params.Type = Type;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativeActorDataManager::AddActorData(uint32_t ID, unsigned char Type, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeActorDataManager.AddActorData");

	UCreativeActorDataManager_AddActorData_Params params;
	params.ID = ID;
	params.Type = Type;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeModeActorInteractionComponent::SortCanEditParamsObjs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.SortCanEditParamsObjs");

	UCreativeModeActorInteractionComponent_SortCanEditParamsObjs_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeModeActorInteractionComponent::SetCrossHairTransformObjInstanceID(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.SetCrossHairTransformObjInstanceID");

	UCreativeModeActorInteractionComponent_SetCrossHairTransformObjInstanceID_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeModeActorInteractionComponent::SetCrossHairSelectedObjInstanceID(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.SetCrossHairSelectedObjInstanceID");

	UCreativeModeActorInteractionComponent_SetCrossHairSelectedObjInstanceID_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeModeActorInteractionComponent::SetCrossHairPickActor(class AActor* PickActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.SetCrossHairPickActor");

	UCreativeModeActorInteractionComponent_SetCrossHairPickActor_Params params;
	params.PickActor = PickActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeModeActorInteractionComponent::SectorCheckImplement(float CheckDistance, float CheckAngle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.SectorCheckImplement");

	UCreativeModeActorInteractionComponent_SectorCheckImplement_Params params;
	params.CheckDistance = CheckDistance;
	params.CheckAngle = CheckAngle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







float UCreativeModeActorInteractionComponent::GetSectorCheckIntervalCfg()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckIntervalCfg");

	UCreativeModeActorInteractionComponent_GetSectorCheckIntervalCfg_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UCreativeModeActorInteractionComponent::GetSectorCheckDistance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckDistance");

	UCreativeModeActorInteractionComponent_GetSectorCheckDistance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UCreativeModeActorInteractionComponent::GetSectorCheckAngle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckAngle");

	UCreativeModeActorInteractionComponent_GetSectorCheckAngle_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UCreativeModeActorInteractionComponent::GetPlayerHalfHeight()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetPlayerHalfHeight");

	UCreativeModeActorInteractionComponent_GetPlayerHalfHeight_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class ASTExtraPlayerController* UCreativeModeActorInteractionComponent::GetPlayerController()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetPlayerController");

	UCreativeModeActorInteractionComponent_GetPlayerController_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UCreativeModeActorInteractionComponent::GetCrossHairTransformDistanceCfg()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetCrossHairTransformDistanceCfg");

	UCreativeModeActorInteractionComponent_GetCrossHairTransformDistanceCfg_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UCreativeModeActorInteractionComponent::GetCrossHairPickDistanceCfg()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetCrossHairPickDistanceCfg");

	UCreativeModeActorInteractionComponent_GetCrossHairPickDistanceCfg_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UCreativeModeActorInteractionComponent::GetCrossHairCheckIntervalCfg()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetCrossHairCheckIntervalCfg");

	UCreativeModeActorInteractionComponent_GetCrossHairCheckIntervalCfg_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UCreativeModeActorInteractionComponent::GetCrossHairCheckDistanceCfg()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetCrossHairCheckDistanceCfg");

	UCreativeModeActorInteractionComponent_GetCrossHairCheckDistanceCfg_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeModeActorInteractionComponent::CrossHairCheckImplement(float Distance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.CrossHairCheckImplement");

	UCreativeModeActorInteractionComponent_CrossHairCheckImplement_Params params;
	params.Distance = Distance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeModeActorInteractionComponent::ClearCanEditParamsObjs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.ClearCanEditParamsObjs");

	UCreativeModeActorInteractionComponent_ClearCanEditParamsObjs_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativeModeActorInteractionComponent::AddCanEditObject(class UObject* uCanEditObject, float Angle, float Distance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.AddCanEditObject");

	UCreativeModeActorInteractionComponent_AddCanEditObject_Params params;
	params.uCanEditObject = uCanEditObject;
	params.Angle = Angle;
	params.Distance = Distance;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeAdaptiveSchedulManager::SetObjectProfile(bool bOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.SetObjectProfile");

	UCreativeAdaptiveSchedulManager_SetObjectProfile_Params params;
	params.bOpen = bOpen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeAdaptiveSchedulManager::SetLuaProfile(bool bOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.SetLuaProfile");

	UCreativeAdaptiveSchedulManager_SetLuaProfile_Params params;
	params.bOpen = bOpen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









int UCreativeAdaptiveSchedulManager::RecordFunctionStart(const struct FString& ClassName, const struct FString& FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.RecordFunctionStart");

	UCreativeAdaptiveSchedulManager_RecordFunctionStart_Params params;
	params.ClassName = ClassName;
	params.FunctionName = FunctionName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UCreativeAdaptiveSchedulManager::RecordFunctionEnd(const struct FString& ClassName, const struct FString& FunctionName, int Cycles)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.RecordFunctionEnd");

	UCreativeAdaptiveSchedulManager_RecordFunctionEnd_Params params;
	params.ClassName = ClassName;
	params.FunctionName = FunctionName;
	params.Cycles = Cycles;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









int UCreativeAdaptiveSchedulManager::LuaPath2Tag(const struct FString& luaPath, const struct FString& FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.LuaPath2Tag");

	UCreativeAdaptiveSchedulManager_LuaPath2Tag_Params params;
	params.luaPath = luaPath;
	params.FunctionName = FunctionName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeAdaptiveSchedulManager::LogOutputObjectMemoryInfo(bool bClear)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.LogOutputObjectMemoryInfo");

	UCreativeAdaptiveSchedulManager_LogOutputObjectMemoryInfo_Params params;
	params.bClear = bClear;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeAdaptiveSchedulManager::LogOutputLuaFunctionCallInfo(bool bClear)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.LogOutputLuaFunctionCallInfo");

	UCreativeAdaptiveSchedulManager_LogOutputLuaFunctionCallInfo_Params params;
	params.bClear = bClear;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







TMap<int, int64_t> UCreativeAdaptiveSchedulManager::LogoutLuaRecord()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.LogoutLuaRecord");

	UCreativeAdaptiveSchedulManager_LogoutLuaRecord_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UCreativeAdaptiveSchedulManager::LLMEnabled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.LLMEnabled");

	UCreativeAdaptiveSchedulManager_LLMEnabled_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UCreativeAdaptiveSchedulManager::InitTagIfNotExist(const struct FString& TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.InitTagIfNotExist");

	UCreativeAdaptiveSchedulManager_InitTagIfNotExist_Params params;
	params.TagName = TagName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









int UCreativeAdaptiveSchedulManager::InitNewLuaPath2Tag(const struct FString& luaPath, const struct FString& FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.InitNewLuaPath2Tag");

	UCreativeAdaptiveSchedulManager_InitNewLuaPath2Tag_Params params;
	params.luaPath = luaPath;
	params.FunctionName = FunctionName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







uint64_t UCreativeAdaptiveSchedulManager::GetPureLuaUsedBytes()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.GetPureLuaUsedBytes");

	UCreativeAdaptiveSchedulManager_GetPureLuaUsedBytes_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







uint64_t UCreativeAdaptiveSchedulManager::GetLuaUsedBytes()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.GetLuaUsedBytes");

	UCreativeAdaptiveSchedulManager_GetLuaUsedBytes_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UCreativeAdaptiveSchedulManager* UCreativeAdaptiveSchedulManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.Get");

	UCreativeAdaptiveSchedulManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeAdaptiveSchedulManager::AfterDead(int SpecType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.AfterDead");

	UCreativeAdaptiveSchedulManager_AfterDead_Params params;
	params.SpecType = SpecType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeLuaSignalObjectBase::TryBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalObjectBase.TryBeginPlay");

	UCreativeLuaSignalObjectBase_TryBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeLuaSignalObjectBase::SetLuaFilePath(const struct FString& FilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalObjectBase.SetLuaFilePath");

	UCreativeLuaSignalObjectBase_SetLuaFilePath_Params params;
	params.FilePath = FilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeLuaSignalObjectBase::RemoveCommonEvent(int EventHandle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalObjectBase.RemoveCommonEvent");

	UCreativeLuaSignalObjectBase_RemoveCommonEvent_Params params;
	params.EventHandle = EventHandle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeLuaSignalObjectBase::ReceivePostBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalObjectBase.ReceivePostBeginPlay");

	UCreativeLuaSignalObjectBase_ReceivePostBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeLuaSignalObjectBase::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalObjectBase.ReceiveBeginPlay");

	UCreativeLuaSignalObjectBase_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeLuaSignalObjectBase::HookObject()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalObjectBase.HookObject");

	UCreativeLuaSignalObjectBase_HookObject_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeLuaSignalObjectBase::ClearAllCommonEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalObjectBase.ClearAllCommonEvent");

	UCreativeLuaSignalObjectBase_ClearAllCommonEvent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativeLuaSignalObjectBase::AddCommonEvent(const struct FString& EventType, const struct FString& EventID, const struct FString& FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalObjectBase.AddCommonEvent");

	UCreativeLuaSignalObjectBase_AddCommonEvent_Params params;
	params.EventType = EventType;
	params.EventID = EventID;
	params.FunctionName = FunctionName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeApiObject::SetModuleName(const struct FString& NewName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeApiObject.SetModuleName");

	UCreativeApiObject_SetModuleName_Params params;
	params.NewName = NewName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FString UCreativeApiObject::GetModuleName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeApiObject.GetModuleName");

	UCreativeApiObject_GetModuleName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeAssetManager::RemoveAssetInfo(int AssetId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAssetManager.RemoveAssetInfo");

	UCreativeAssetManager_RemoveAssetInfo_Params params;
	params.AssetId = AssetId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeAssetManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAssetManager.ReceiveOnGameStateBeginPlay");

	UCreativeAssetManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeAssetManager::ReceiveInitAssetInfo(int AssetId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAssetManager.ReceiveInitAssetInfo");

	UCreativeAssetManager_ReceiveInitAssetInfo_Params params;
	params.AssetId = AssetId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeAssetManager::ReceiveGetCustomAssetAsyncWithStringForManage(const struct FString& CustomAssetKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAssetManager.ReceiveGetCustomAssetAsyncWithStringForManage");

	UCreativeAssetManager_ReceiveGetCustomAssetAsyncWithStringForManage_Params params;
	params.CustomAssetKey = CustomAssetKey;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeAssetManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAssetManager.OnGameStateBeginPlay");

	UCreativeAssetManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeAssetManager::OnCustomAssetLoadComplete(const struct FString& CustomAssetKey, class UObject* LoadObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAssetManager.OnCustomAssetLoadComplete");

	UCreativeAssetManager_OnCustomAssetLoadComplete_Params params;
	params.CustomAssetKey = CustomAssetKey;
	params.LoadObject = LoadObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FString UCreativeAssetManager::GetObbyMeshPath(int AssetId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAssetManager.GetObbyMeshPath");

	UCreativeAssetManager_GetObbyMeshPath_Params params;
	params.AssetId = AssetId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCreativeAssetManager::GetMaterialPath(int MaterialID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAssetManager.GetMaterialPath");

	UCreativeAssetManager_GetMaterialPath_Params params;
	params.MaterialID = MaterialID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UCreativeAssetManager::GetCustomAssetAsyncWithStringForManage(const struct FString& CustomAssetKey, const struct FString& InputString, const struct FScriptDelegate& AssetLoadSuccessDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAssetManager.GetCustomAssetAsyncWithStringForManage");

	UCreativeAssetManager_GetCustomAssetAsyncWithStringForManage_Params params;
	params.CustomAssetKey = CustomAssetKey;
	params.InputString = InputString;
	params.AssetLoadSuccessDelegate = AssetLoadSuccessDelegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class UCreativeAssetManager* UCreativeAssetManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAssetManager.Get");

	UCreativeAssetManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UCreativeAssetManager::AddAssetInfo(int AssetId, const struct FCreativeAssetInfo& AssetInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAssetManager.AddAssetInfo");

	UCreativeAssetManager_AddAssetInfo_Params params;
	params.AssetId = AssetId;
	params.AssetInfo = AssetInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UCreativeAudioBlueprintFunctionLibrary::SaveWemToConvert(TArray<unsigned char> WemData, const struct FString& SavePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAudioBlueprintFunctionLibrary.SaveWemToConvert");

	UCreativeAudioBlueprintFunctionLibrary_SaveWemToConvert_Params params;
	params.WemData = WemData;
	params.SavePath = SavePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeAudioBlueprintFunctionLibrary::RegisterWwiseBaseDir(const struct FString& BaseDir)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAudioBlueprintFunctionLibrary.RegisterWwiseBaseDir");

	UCreativeAudioBlueprintFunctionLibrary_RegisterWwiseBaseDir_Params params;
	params.BaseDir = BaseDir;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








float UCreativeAudioBlueprintFunctionLibrary::GetWavLength(TArray<unsigned char> WavData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAudioBlueprintFunctionLibrary.GetWavLength");

	UCreativeAudioBlueprintFunctionLibrary_GetWavLength_Params params;
	params.WavData = WavData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








float UCreativeAudioBlueprintFunctionLibrary::GetMp3Length(TArray<unsigned char> Mp3Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAudioBlueprintFunctionLibrary.GetMp3Length");

	UCreativeAudioBlueprintFunctionLibrary_GetMp3Length_Params params;
	params.Mp3Data = Mp3Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UCreativeAudioBlueprintFunctionLibrary::GetAudioWaveform(uint32_t WemMediaID, float SampleInterval, const struct FScriptDelegate& Callback)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAudioBlueprintFunctionLibrary.GetAudioWaveform");

	UCreativeAudioBlueprintFunctionLibrary_GetAudioWaveform_Params params;
	params.WemMediaID = WemMediaID;
	params.SampleInterval = SampleInterval;
	params.Callback = Callback;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








TArray<unsigned char> UCreativeAutoGenComponent::GetNodeSegmentContent(struct FCreativeAutoGenItemDataSegment* Segment)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAutoGenComponent.GetNodeSegmentContent");

	UCreativeAutoGenComponent_GetNodeSegmentContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Segment != nullptr)
		*Segment = params.Segment;

	return params.ReturnValue;
}









bool UCreativeAutoGenComponent::AddInstanceDataContent(TArray<unsigned char> Content, struct FCreativeAutoGenDataSegment* Segment)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAutoGenComponent.AddInstanceDataContent");

	UCreativeAutoGenComponent_AddInstanceDataContent_Params params;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Segment != nullptr)
		*Segment = params.Segment;

	return params.ReturnValue;
}










int UCreativeModeBackpackUtils::ResCanAddToBackpackNum(class UBackpackComponent* BackpackComponent, int resID, int AddNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBackpackUtils.ResCanAddToBackpackNum");

	UCreativeModeBackpackUtils_ResCanAddToBackpackNum_Params params;
	params.BackpackComponent = BackpackComponent;
	params.resID = resID;
	params.AddNum = AddNum;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









int UCreativeModeBackpackUtils::GetItemMaxCount(class UBackpackComponent* BackpackComponent, int resID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBackpackUtils.GetItemMaxCount");

	UCreativeModeBackpackUtils_GetItemMaxCount_Params params;
	params.BackpackComponent = BackpackComponent;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











void UCreativeModeBackpackUtils::AddAIAvatarItem(class UBackpackComponent* BackpackComponent, int ID, int Color, int Pattern, int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBackpackUtils.AddAIAvatarItem");

	UCreativeModeBackpackUtils_AddAIAvatarItem_Params params;
	params.BackpackComponent = BackpackComponent;
	params.ID = ID;
	params.Color = Color;
	params.Pattern = Pattern;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBaseWidget::StopCustomAnimation(bool bReset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBaseWidget.StopCustomAnimation");

	UCreativeBaseWidget_StopCustomAnimation_Params params;
	params.bReset = bReset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeBaseWidget::SetZOrderBatchData(const struct FString& InInstanceID, int InOriginalLayer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBaseWidget.SetZOrderBatchData");

	UCreativeBaseWidget_SetZOrderBatchData_Params params;
	params.InInstanceID = InInstanceID;
	params.InOriginalLayer = InOriginalLayer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBaseWidget::SetEndForceVolatileDelayTime(float InDelayTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBaseWidget.SetEndForceVolatileDelayTime");

	UCreativeBaseWidget_SetEndForceVolatileDelayTime_Params params;
	params.InDelayTime = InDelayTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBaseWidget::SetAnimationForceVolatileEnable(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBaseWidget.SetAnimationForceVolatileEnable");

	UCreativeBaseWidget_SetAnimationForceVolatileEnable_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeBaseWidget::ResumeCustomAnimation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBaseWidget.ResumeCustomAnimation");

	UCreativeBaseWidget_ResumeCustomAnimation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeBaseWidget::PlayCustomAnimation(const struct FCreativeUITweenInfo& InTweenInfo, const struct FCreativeUIAnimationGoal& InGoal)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBaseWidget.PlayCustomAnimation");

	UCreativeBaseWidget_PlayCustomAnimation_Params params;
	params.InTweenInfo = InTweenInfo;
	params.InGoal = InGoal;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeBaseWidget::PauseCustomAnimation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBaseWidget.PauseCustomAnimation");

	UCreativeBaseWidget_PauseCustomAnimation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UCreativeBaseWidget::IsCustomAnimationPlaying()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBaseWidget.IsCustomAnimationPlaying");

	UCreativeBaseWidget_IsCustomAnimationPlaying_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UCreativeBaseWidget::IsCustomAnimationPaused()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBaseWidget.IsCustomAnimationPaused");

	UCreativeBaseWidget_IsCustomAnimationPaused_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FVector2D UCreativeBaseWidget::GetZOrderBatchSize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBaseWidget.GetZOrderBatchSize");

	UCreativeBaseWidget_GetZOrderBatchSize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeBinaryDataManager::SetInitBinaryDataSize(uint32_t DataSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBinaryDataManager.SetInitBinaryDataSize");

	UCreativeBinaryDataManager_SetInitBinaryDataSize_Params params;
	params.DataSize = DataSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBinaryDataManager::ReceiveOnPreLoadMap(const struct FString& MapName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBinaryDataManager.ReceiveOnPreLoadMap");

	UCreativeBinaryDataManager_ReceiveOnPreLoadMap_Params params;
	params.MapName = MapName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeBinaryDataManager::ReceiveOnPostSetLuaEventBridgeInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBinaryDataManager.ReceiveOnPostSetLuaEventBridgeInstance");

	UCreativeBinaryDataManager_ReceiveOnPostSetLuaEventBridgeInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBinaryDataManager::ReceiveOnPostLoadMapWithWorld(class UWorld* World)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBinaryDataManager.ReceiveOnPostLoadMapWithWorld");

	UCreativeBinaryDataManager_ReceiveOnPostLoadMapWithWorld_Params params;
	params.World = World;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeBinaryDataManager::OnRep_InitBinaryDataSize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBinaryDataManager.OnRep_InitBinaryDataSize");

	UCreativeBinaryDataManager_OnRep_InitBinaryDataSize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBinaryDataManager::OnPreLoadMap(const struct FString& MapName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBinaryDataManager.OnPreLoadMap");

	UCreativeBinaryDataManager_OnPreLoadMap_Params params;
	params.MapName = MapName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeBinaryDataManager::OnPostSetLuaEventBridgeInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBinaryDataManager.OnPostSetLuaEventBridgeInstance");

	UCreativeBinaryDataManager_OnPostSetLuaEventBridgeInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBinaryDataManager::OnPostLoadMapWithWorld(class UWorld* World)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBinaryDataManager.OnPostLoadMapWithWorld");

	UCreativeBinaryDataManager_OnPostLoadMapWithWorld_Params params;
	params.World = World;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







uint32_t UCreativeBinaryDataManager::GetInitBinaryDataSize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBinaryDataManager.GetInitBinaryDataSize");

	UCreativeBinaryDataManager_GetInitBinaryDataSize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UCreativeBinaryDataManager* UCreativeBinaryDataManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBinaryDataManager.Get");

	UCreativeBinaryDataManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeBlockyLuaManager::SetRTLOffsetY(float Offset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.SetRTLOffsetY");

	UCreativeBlockyLuaManager_SetRTLOffsetY_Params params;
	params.Offset = Offset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBlockyLuaManager::SetLTROffsetY(float Offset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.SetLTROffsetY");

	UCreativeBlockyLuaManager_SetLTROffsetY_Params params;
	params.Offset = Offset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBlockyLuaManager::SetFontSize(int FontSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.SetFontSize");

	UCreativeBlockyLuaManager_SetFontSize_Params params;
	params.FontSize = FontSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeBlockyLuaManager::SetBlockIdFromSlotString(const struct FString& blockId, struct FBlockySlotString* SlotString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.SetBlockIdFromSlotString");

	UCreativeBlockyLuaManager_SetBlockIdFromSlotString_Params params;
	params.blockId = blockId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SlotString != nullptr)
		*SlotString = params.SlotString;
}







void UCreativeBlockyLuaManager::ReturnPresetDescsToCache(TArray<class UPresetDesc*> ReturnDescs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.ReturnPresetDescsToCache");

	UCreativeBlockyLuaManager_ReturnPresetDescsToCache_Params params;
	params.ReturnDescs = ReturnDescs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UCreativeBlockyLuaManager::ReturnGraphDataObject(class UBlockyGraphData* GraphDataObj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.ReturnGraphDataObject");

	UCreativeBlockyLuaManager_ReturnGraphDataObject_Params params;
	params.GraphDataObj = GraphDataObj;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeBlockyLuaManager::RemoveDynamicPresetDescs(TArray<class UPresetDesc*> PresetDescs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.RemoveDynamicPresetDescs");

	UCreativeBlockyLuaManager_RemoveDynamicPresetDescs_Params params;
	params.PresetDescs = PresetDescs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBlockyLuaManager::RegisterNameCache(class UBlockyGraphData* GraphData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.RegisterNameCache");

	UCreativeBlockyLuaManager_RegisterNameCache_Params params;
	params.GraphData = GraphData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBlockyLuaManager::RefreshBlockyFont(struct FSlateFontInfo* DefaultFont)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.RefreshBlockyFont");

	UCreativeBlockyLuaManager_RefreshBlockyFont_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DefaultFont != nullptr)
		*DefaultFont = params.DefaultFont;
}







void UCreativeBlockyLuaManager::ReceivePresetFromCustomSelection(class UObjectDesc* Desc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.ReceivePresetFromCustomSelection");

	UCreativeBlockyLuaManager_ReceivePresetFromCustomSelection_Params params;
	params.Desc = Desc;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeBlockyLuaManager::ReceiveOutBlockyluaDownloadImage(class UTexture2D* Texture, const struct FString& IconPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.ReceiveOutBlockyluaDownloadImage");

	UCreativeBlockyLuaManager_ReceiveOutBlockyluaDownloadImage_Params params;
	params.Texture = Texture;
	params.IconPath = IconPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeBlockyLuaManager::ReceiveOpenGuide()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.ReceiveOpenGuide");

	UCreativeBlockyLuaManager_ReceiveOpenGuide_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBlockyLuaManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.ReceiveOnGameStateBeginPlay");

	UCreativeBlockyLuaManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FString UCreativeBlockyLuaManager::ReceivedGetLocalizeResStrHandleFailed(const struct FString& IdOrStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.ReceivedGetLocalizeResStrHandleFailed");

	UCreativeBlockyLuaManager_ReceivedGetLocalizeResStrHandleFailed_Params params;
	params.IdOrStr = IdOrStr;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UCreativeBlockyLuaManager::ReceiveCheckStringValidFunction(const struct FString& CheckString, const struct FCheckStringHandleData& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.ReceiveCheckStringValidFunction");

	UCreativeBlockyLuaManager_ReceiveCheckStringValidFunction_Params params;
	params.CheckString = CheckString;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativeBlockyLuaManager::ReceiveCheckStringResult(bool Result, const struct FString& ValidString, const struct FCheckStringHandleData& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.ReceiveCheckStringResult");

	UCreativeBlockyLuaManager_ReceiveCheckStringResult_Params params;
	params.Result = Result;
	params.ValidString = ValidString;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBlockyLuaManager::OnReceiveMessageData(TArray<struct FMessageDataWrapper> MessageDatas)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.OnReceiveMessageData");

	UCreativeBlockyLuaManager_OnReceiveMessageData_Params params;
	params.MessageDatas = MessageDatas;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeBlockyLuaManager::OnReceiveInitDisableFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.OnReceiveInitDisableFunc");

	UCreativeBlockyLuaManager_OnReceiveInitDisableFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeBlockyLuaManager::OnInitBlockyLuaConfig()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.OnInitBlockyLuaConfig");

	UCreativeBlockyLuaManager_OnInitBlockyLuaConfig_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeBlockyLuaManager::OnGameTypePreChanged(unsigned char LastGameType, unsigned char CurrentGameType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.OnGameTypePreChanged");

	UCreativeBlockyLuaManager_OnGameTypePreChanged_Params params;
	params.LastGameType = LastGameType;
	params.CurrentGameType = CurrentGameType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBlockyLuaManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.OnGameStateBeginPlay");

	UCreativeBlockyLuaManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UCreativeBlockyLuaManager::IsLTRLanguage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.IsLTRLanguage");

	UCreativeBlockyLuaManager_IsLTRLanguage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UCreativeBlockyLuaManager::IsLTR()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.IsLTR");

	UCreativeBlockyLuaManager_IsLTR_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeBlockyLuaManager::InitDisableFunction(TArray<struct FString> funcs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.InitDisableFunction");

	UCreativeBlockyLuaManager_InitDisableFunction_Params params;
	params.funcs = funcs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









TArray<class UPresetDesc*> UCreativeBlockyLuaManager::GetPresetDescs(int GetCount, struct FString* TypeName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.GetPresetDescs");

	UCreativeBlockyLuaManager_GetPresetDescs_Params params;
	params.GetCount = GetCount;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TypeName != nullptr)
		*TypeName = params.TypeName;

	return params.ReturnValue;
}








class UPresetDesc* UCreativeBlockyLuaManager::GetPresetDesc(struct FString* TypeName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.GetPresetDesc");

	UCreativeBlockyLuaManager_GetPresetDesc_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TypeName != nullptr)
		*TypeName = params.TypeName;

	return params.ReturnValue;
}










class UBlockyGraphData* UCreativeBlockyLuaManager::GetGraphDataObjectFormTemplateContent(TArray<unsigned char> GrapbAstContent, bool CallLoadFinish, bool IsLoadPresetsInGraph)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.GetGraphDataObjectFormTemplateContent");

	UCreativeBlockyLuaManager_GetGraphDataObjectFormTemplateContent_Params params;
	params.GrapbAstContent = GrapbAstContent;
	params.CallLoadFinish = CallLoadFinish;
	params.IsLoadPresetsInGraph = IsLoadPresetsInGraph;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











class UBlockyGraphData* UCreativeBlockyLuaManager::GetGraphDataObjectFormContent(TArray<unsigned char> GrapbAstContent, TArray<unsigned char> GlobalVarAstContent, bool CallLoadFinish, bool IsSingleton)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.GetGraphDataObjectFormContent");

	UCreativeBlockyLuaManager_GetGraphDataObjectFormContent_Params params;
	params.GrapbAstContent = GrapbAstContent;
	params.GlobalVarAstContent = GlobalVarAstContent;
	params.CallLoadFinish = CallLoadFinish;
	params.IsSingleton = IsSingleton;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UPresetDesc* UCreativeBlockyLuaManager::GetDynamicPresetDescsByKey(const struct FString& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.GetDynamicPresetDescsByKey");

	UCreativeBlockyLuaManager_GetDynamicPresetDescsByKey_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UBlockyLuaConfig* UCreativeBlockyLuaManager::GetBlockyLuaConfig()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.GetBlockyLuaConfig");

	UCreativeBlockyLuaManager_GetBlockyLuaConfig_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCreativeBlockyLuaManager::GetBlockNameByStr(const struct FString& BlockyId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.GetBlockNameByStr");

	UCreativeBlockyLuaManager_GetBlockNameByStr_Params params;
	params.BlockyId = BlockyId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCreativeBlockyLuaManager::GetBlockIdFromSlotString(struct FBlockySlotString* SlotString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.GetBlockIdFromSlotString");

	UCreativeBlockyLuaManager_GetBlockIdFromSlotString_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SlotString != nullptr)
		*SlotString = params.SlotString;

	return params.ReturnValue;
}







struct FString UCreativeBlockyLuaManager::GetAllDynamicPresetJson()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.GetAllDynamicPresetJson");

	UCreativeBlockyLuaManager_GetAllDynamicPresetJson_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UCreativeBlockyLuaManager* UCreativeBlockyLuaManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.Get");

	UCreativeBlockyLuaManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










TArray<struct FString> UCreativeBlockyLuaManager::GenerateLuaCodeFormJson(const struct FString& JsonText, const struct FString& GlobalVarJsonText, bool GenGlobalVarLua)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.GenerateLuaCodeFormJson");

	UCreativeBlockyLuaManager_GenerateLuaCodeFormJson_Params params;
	params.JsonText = JsonText;
	params.GlobalVarJsonText = GlobalVarJsonText;
	params.GenGlobalVarLua = GenGlobalVarLua;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









TArray<struct FString> UCreativeBlockyLuaManager::GenerateLuaCodeFormGraphDataObject(class UBlockyGraphData* GraphDataObj, bool GenGlobalVarLua)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.GenerateLuaCodeFormGraphDataObject");

	UCreativeBlockyLuaManager_GenerateLuaCodeFormGraphDataObject_Params params;
	params.GraphDataObj = GraphDataObj;
	params.GenGlobalVarLua = GenGlobalVarLua;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











TArray<struct FString> UCreativeBlockyLuaManager::GenerateLuaCodeFormContent(TArray<unsigned char> GrapbAstContent, TArray<unsigned char> GlobalVarAstContent, bool GenGlobalVarLua, bool CallLoadFinish)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.GenerateLuaCodeFormContent");

	UCreativeBlockyLuaManager_GenerateLuaCodeFormContent_Params params;
	params.GrapbAstContent = GrapbAstContent;
	params.GlobalVarAstContent = GlobalVarAstContent;
	params.GenGlobalVarLua = GenGlobalVarLua;
	params.CallLoadFinish = CallLoadFinish;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeBlockyLuaManager::ClearNameIndexCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.ClearNameIndexCache");

	UCreativeBlockyLuaManager_ClearNameIndexCache_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







TArray<class UPresetDesc*> UCreativeBlockyLuaManager::ClearDynamicPresetDescs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.ClearDynamicPresetDescs");

	UCreativeBlockyLuaManager_ClearDynamicPresetDescs_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeBlockyLuaManager::ClearCacheObjects(bool CallBeginDestroy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.ClearCacheObjects");

	UCreativeBlockyLuaManager_ClearCacheObjects_Params params;
	params.CallBeginDestroy = CallBeginDestroy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeBlockyLuaManager::ClearBlockyLuaHotfixUtility()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.ClearBlockyLuaHotfixUtility");

	UCreativeBlockyLuaManager_ClearBlockyLuaHotfixUtility_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBlockyLuaManager::BlockyluaShowPresetPanelHandle(bool IsShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.BlockyluaShowPresetPanelHandle");

	UCreativeBlockyLuaManager_BlockyluaShowPresetPanelHandle_Params params;
	params.IsShow = IsShow;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBlockyLuaManager::BlockyluaPresetSoundFunctionHandle(const struct FString& SoundPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.BlockyluaPresetSoundFunctionHandle");

	UCreativeBlockyLuaManager_BlockyluaPresetSoundFunctionHandle_Params params;
	params.SoundPath = SoundPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FString UCreativeBlockyLuaManager::BlockyluaPresetSelectCheckHandle(class UObjectDesc* Desc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.BlockyluaPresetSelectCheckHandle");

	UCreativeBlockyLuaManager_BlockyluaPresetSelectCheckHandle_Params params;
	params.Desc = Desc;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FText UCreativeBlockyLuaManager::BlockyluaModifyTipHandle(const struct FText& OriginalTip)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.BlockyluaModifyTipHandle");

	UCreativeBlockyLuaManager_BlockyluaModifyTipHandle_Params params;
	params.OriginalTip = OriginalTip;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeBlockyLuaManager::BlockyluaMessageDataHandle(TArray<struct FMessageDataStruct> MessageDatas)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.BlockyluaMessageDataHandle");

	UCreativeBlockyLuaManager_BlockyluaMessageDataHandle_Params params;
	params.MessageDatas = MessageDatas;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FString UCreativeBlockyLuaManager::BlockyluaGetLocalizeResStrHandle(const struct FString& IdOrStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.BlockyluaGetLocalizeResStrHandle");

	UCreativeBlockyLuaManager_BlockyluaGetLocalizeResStrHandle_Params params;
	params.IdOrStr = IdOrStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeBlockyLuaManager::BlockyluaDownloadImage(const struct FString& IconPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.BlockyluaDownloadImage");

	UCreativeBlockyLuaManager_BlockyluaDownloadImage_Params params;
	params.IconPath = IconPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativeBlockyLuaManager::BlockyluaCustomInputHandle(const struct FString& CustomClickType, class UObjectDesc* Desc, TArray<class UObjectDesc*> followers)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.BlockyluaCustomInputHandle");

	UCreativeBlockyLuaManager_BlockyluaCustomInputHandle_Params params;
	params.CustomClickType = CustomClickType;
	params.Desc = Desc;
	params.followers = followers;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UCreativeBlockyLuaManager::BlockyluaCheckShowPresetFitlerBtnHandle(const struct FString& TypeName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.BlockyluaCheckShowPresetFitlerBtnHandle");

	UCreativeBlockyLuaManager_BlockyluaCheckShowPresetFitlerBtnHandle_Params params;
	params.TypeName = TypeName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UCreativeBlockyLuaManager::BlockyluaCheckShowCustomInputHandle(const struct FString& CustomClickType, class UObjectDesc* Desc, TArray<class UObjectDesc*> followers)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.BlockyluaCheckShowCustomInputHandle");

	UCreativeBlockyLuaManager_BlockyluaCheckShowCustomInputHandle_Params params;
	params.CustomClickType = CustomClickType;
	params.Desc = Desc;
	params.followers = followers;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeBlockyLuaManager::BindUndoCustomCommandHandle(bool IsUndo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.BindUndoCustomCommandHandle");

	UCreativeBlockyLuaManager_BindUndoCustomCommandHandle_Params params;
	params.IsUndo = IsUndo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeBlockyLuaManager::BindSetBlockNewStatusHandle(const struct FString& blockId, bool showstate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.BindSetBlockNewStatusHandle");

	UCreativeBlockyLuaManager_BindSetBlockNewStatusHandle_Params params;
	params.blockId = blockId;
	params.showstate = showstate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








int UCreativeBlockyLuaManager::BindGetPresetValidityDurationHandle(class UPresetDesc* PresetDesc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.BindGetPresetValidityDurationHandle");

	UCreativeBlockyLuaManager_BindGetPresetValidityDurationHandle_Params params;
	params.PresetDesc = PresetDesc;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeBlockyLuaManager::BindGetBlockNewStatusHandle(const struct FString& blockId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.BindGetBlockNewStatusHandle");

	UCreativeBlockyLuaManager_BindGetBlockNewStatusHandle_Params params;
	params.blockId = blockId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeBlockyLuaManager::BindCallShortCutKeyHandleHandle(int ShortCutKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.BindCallShortCutKeyHandleHandle");

	UCreativeBlockyLuaManager_BindCallShortCutKeyHandleHandle_Params params;
	params.ShortCutKey = ShortCutKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeBlockyLuaManager::BindBlockyLuaStubFunc(const struct FString& BindFuncName, const struct FString& OverrdeFuncName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.BindBlockyLuaStubFunc");

	UCreativeBlockyLuaManager_BindBlockyLuaStubFunc_Params params;
	params.BindFuncName = BindFuncName;
	params.OverrdeFuncName = OverrdeFuncName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBlockyLuaManager::AddEmptyCustomCommand(class UBlockyGraphData* GraphData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.AddEmptyCustomCommand");

	UCreativeBlockyLuaManager_AddEmptyCustomCommand_Params params;
	params.GraphData = GraphData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBlockyLuaManager::AddDynamicPresetDescs(TArray<class UPresetDesc*> PresetDescs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.AddDynamicPresetDescs");

	UCreativeBlockyLuaManager_AddDynamicPresetDescs_Params params;
	params.PresetDescs = PresetDescs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeBlockyLuaManager::AddCustomCommand(class UBlockyCustomCommand* Command, class UBlockyGraphData* GraphData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.AddCustomCommand");

	UCreativeBlockyLuaManager_AddCustomCommand_Params params;
	params.Command = Command;
	params.GraphData = GraphData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UCreativeModeBlueprintLibrary::ZSTDDecompressData(TArray<unsigned char> CompressedData, TArray<unsigned char>* DecompressedData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.ZSTDDecompressData");

	UCreativeModeBlueprintLibrary_ZSTDDecompressData_Params params;
	params.CompressedData = CompressedData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DecompressedData != nullptr)
		*DecompressedData = params.DecompressedData;

	return params.ReturnValue;
}










bool UCreativeModeBlueprintLibrary::ZSTDCompressData(TArray<unsigned char> UncompressedData, int CompressionLevel, TArray<unsigned char>* CompressedData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.ZSTDCompressData");

	UCreativeModeBlueprintLibrary_ZSTDCompressData_Params params;
	params.UncompressedData = UncompressedData;
	params.CompressionLevel = CompressionLevel;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (CompressedData != nullptr)
		*CompressedData = params.CompressedData;

	return params.ReturnValue;
}









struct FString UCreativeModeBlueprintLibrary::WindowsReadFileSummary(const struct FString& FilePath, TArray<struct FString> Properties)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.WindowsReadFileSummary");

	UCreativeModeBlueprintLibrary_WindowsReadFileSummary_Params params;
	params.FilePath = FilePath;
	params.Properties = Properties;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCreativeModeBlueprintLibrary::WindowsPickFile(const struct FString& filter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.WindowsPickFile");

	UCreativeModeBlueprintLibrary_WindowsPickFile_Params params;
	params.filter = filter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FVector2D UCreativeModeBlueprintLibrary::WidgetAbsoluteSizeToLocalSize(class UWidget* Widget, const struct FVector2D& AbsoluteSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.WidgetAbsoluteSizeToLocalSize");

	UCreativeModeBlueprintLibrary_WidgetAbsoluteSizeToLocalSize_Params params;
	params.Widget = Widget;
	params.AbsoluteSize = AbsoluteSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeModeBlueprintLibrary::UObjSnapshot(class UWorld* MyWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.UObjSnapshot");

	UCreativeModeBlueprintLibrary_UObjSnapshot_Params params;
	params.MyWorld = MyWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









struct FTransform UCreativeModeBlueprintLibrary::TransformRevert(const struct FTransform& TransformB, struct FTransform* TransformRelative)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.TransformRevert");

	UCreativeModeBlueprintLibrary_TransformRevert_Params params;
	params.TransformB = TransformB;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TransformRelative != nullptr)
		*TransformRelative = params.TransformRelative;

	return params.ReturnValue;
}








void UCreativeModeBlueprintLibrary::TransformMultiplyBy(const struct FTransform& M, struct FTransform* Source)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.TransformMultiplyBy");

	UCreativeModeBlueprintLibrary_TransformMultiplyBy_Params params;
	params.M = M;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Source != nullptr)
		*Source = params.Source;
}








void UCreativeModeBlueprintLibrary::TransformBounds(const struct FTransform& M, struct FBoxSphereBounds* Bounds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.TransformBounds");

	UCreativeModeBlueprintLibrary_TransformBounds_Params params;
	params.M = M;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Bounds != nullptr)
		*Bounds = params.Bounds;
}








double UCreativeModeBlueprintLibrary::ToMilliseconds64(uint64_t Cycles)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.ToMilliseconds64");

	UCreativeModeBlueprintLibrary_ToMilliseconds64_Params params;
	params.Cycles = Cycles;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<unsigned char> UCreativeModeBlueprintLibrary::TextureToPNG(class UTexture2D* Texture)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.TextureToPNG");

	UCreativeModeBlueprintLibrary_TextureToPNG_Params params;
	params.Texture = Texture;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<unsigned char> UCreativeModeBlueprintLibrary::TextureToJPEG(class UTexture2D* Texture)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.TextureToJPEG");

	UCreativeModeBlueprintLibrary_TextureToJPEG_Params params;
	params.Texture = Texture;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}















struct FString UCreativeModeBlueprintLibrary::TakeSnapshot(class UWidget* WindowWidget, int X1, int Y1, int X2, int Y2, const struct FString& Filename, bool bUseCrop, bool bFillRect)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.TakeSnapshot");

	UCreativeModeBlueprintLibrary_TakeSnapshot_Params params;
	params.WindowWidget = WindowWidget;
	params.X1 = X1;
	params.Y1 = Y1;
	params.X2 = X2;
	params.Y2 = Y2;
	params.Filename = Filename;
	params.bUseCrop = bUseCrop;
	params.bFillRect = bFillRect;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeModeBlueprintLibrary::SynchronizePropertiesWidget(class UWidget* TargetWidget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SynchronizePropertiesWidget");

	UCreativeModeBlueprintLibrary_SynchronizePropertiesWidget_Params params;
	params.TargetWidget = TargetWidget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}














bool UCreativeModeBlueprintLibrary::SphereOverlapComponentsByChannel(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, TArray<TEnumAsByte<ECollisionChannel>> Channels, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SphereOverlapComponentsByChannel");

	UCreativeModeBlueprintLibrary_SphereOverlapComponentsByChannel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SpherePos = SpherePos;
	params.SphereRadius = SphereRadius;
	params.Channels = Channels;
	params.ComponentClassFilter = ComponentClassFilter;
	params.ActorsToIgnore = ActorsToIgnore;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutComponents != nullptr)
		*OutComponents = params.OutComponents;

	return params.ReturnValue;
}














bool UCreativeModeBlueprintLibrary::SphereOverlapActorsByChannel(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, TArray<TEnumAsByte<ECollisionChannel>> Channels, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SphereOverlapActorsByChannel");

	UCreativeModeBlueprintLibrary_SphereOverlapActorsByChannel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SpherePos = SpherePos;
	params.SphereRadius = SphereRadius;
	params.Channels = Channels;
	params.ActorClassFilter = ActorClassFilter;
	params.ActorsToIgnore = ActorsToIgnore;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

	return params.ReturnValue;
}








bool UCreativeModeBlueprintLibrary::ShouldCreatePhysicsState(class UPrimitiveComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.ShouldCreatePhysicsState");

	UCreativeModeBlueprintLibrary_ShouldCreatePhysicsState_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









float UCreativeModeBlueprintLibrary::SetWorldGravityZ(float GravityZ, class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetWorldGravityZ");

	UCreativeModeBlueprintLibrary_SetWorldGravityZ_Params params;
	params.GravityZ = GravityZ;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UCreativeModeBlueprintLibrary::SetWidgetVisiblePass(class UWidget* Widget, bool bVisiblePass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetWidgetVisiblePass");

	UCreativeModeBlueprintLibrary_SetWidgetVisiblePass_Params params;
	params.Widget = Widget;
	params.bVisiblePass = bVisiblePass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeModeBlueprintLibrary::SetStaticMeshMobility(class UStaticMeshComponent* StaticMeshComponent, TEnumAsByte<EComponentMobility> NewMobility)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetStaticMeshMobility");

	UCreativeModeBlueprintLibrary_SetStaticMeshMobility_Params params;
	params.StaticMeshComponent = StaticMeshComponent;
	params.NewMobility = NewMobility;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeModeBlueprintLibrary::SetSpeedOverLimit(class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetSpeedOverLimit");

	UCreativeModeBlueprintLibrary_SetSpeedOverLimit_Params params;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeModeBlueprintLibrary::SetRelativeCamRotation(class APlayerController* PlayerController, class USceneComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetRelativeCamRotation");

	UCreativeModeBlueprintLibrary_SetRelativeCamRotation_Params params;
	params.PlayerController = PlayerController;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeModeBlueprintLibrary::SetParticleCullingDistance(class UParticleSystemComponent* ParticleSystemComponent, float Distance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetParticleCullingDistance");

	UCreativeModeBlueprintLibrary_SetParticleCullingDistance_Params params;
	params.ParticleSystemComponent = ParticleSystemComponent;
	params.Distance = Distance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UCreativeModeBlueprintLibrary::SetInstanceValue(class UObject* WorldContextObject, const struct FString& InstanceID, const struct FString& Key, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetInstanceValue");

	UCreativeModeBlueprintLibrary_SetInstanceValue_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InstanceID = InstanceID;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeModeBlueprintLibrary::SetCreativeLuaReplicatedBytes2048(TArray<unsigned char> InData, struct FCreativeLuaReplicatedBytes2048* ReplicatedBytes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetCreativeLuaReplicatedBytes2048");

	UCreativeModeBlueprintLibrary_SetCreativeLuaReplicatedBytes2048_Params params;
	params.InData = InData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ReplicatedBytes != nullptr)
		*ReplicatedBytes = params.ReplicatedBytes;
}








void UCreativeModeBlueprintLibrary::SetCreativeLuaReplicatedBytes1024(TArray<unsigned char> InData, struct FCreativeLuaReplicatedBytes1024* ReplicatedBytes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetCreativeLuaReplicatedBytes1024");

	UCreativeModeBlueprintLibrary_SetCreativeLuaReplicatedBytes1024_Params params;
	params.InData = InData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ReplicatedBytes != nullptr)
		*ReplicatedBytes = params.ReplicatedBytes;
}








void UCreativeModeBlueprintLibrary::SetCreativeInstanceDataContentSegment(TArray<unsigned char> DataContent, struct FCreativeInstanceDataContentSegment* InstanceDataContentSegment)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetCreativeInstanceDataContentSegment");

	UCreativeModeBlueprintLibrary_SetCreativeInstanceDataContentSegment_Params params;
	params.DataContent = DataContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InstanceDataContentSegment != nullptr)
		*InstanceDataContentSegment = params.InstanceDataContentSegment;
}








void UCreativeModeBlueprintLibrary::SetCreativeInstanceDataContent(TArray<unsigned char> DataContent, struct FCreativeInstanceDataContent* InstanceDataContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetCreativeInstanceDataContent");

	UCreativeModeBlueprintLibrary_SetCreativeInstanceDataContent_Params params;
	params.DataContent = DataContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InstanceDataContent != nullptr)
		*InstanceDataContent = params.InstanceDataContent;
}








void UCreativeModeBlueprintLibrary::SetCommandLineValue(const struct FString& Key, const struct FString& NewValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetCommandLineValue");

	UCreativeModeBlueprintLibrary_SetCommandLineValue_Params params;
	params.Key = Key;
	params.NewValue = NewValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeModeBlueprintLibrary::SetCollisionMobility(class UShapeComponent* Component, TEnumAsByte<EComponentMobility> NewMobility)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetCollisionMobility");

	UCreativeModeBlueprintLibrary_SetCollisionMobility_Params params;
	params.Component = Component;
	params.NewMobility = NewMobility;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeModeBlueprintLibrary::SetAICrowdSimulationState(class AAIController* AICtrl, unsigned char NewState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetAICrowdSimulationState");

	UCreativeModeBlueprintLibrary_SetAICrowdSimulationState_Params params;
	params.AICtrl = AICtrl;
	params.NewState = NewState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativeModeBlueprintLibrary::SetAICrowdObstacleAvoidance(class AAIController* AICtrl, bool bEnable, bool bUpdateAgent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetAICrowdObstacleAvoidance");

	UCreativeModeBlueprintLibrary_SetAICrowdObstacleAvoidance_Params params;
	params.AICtrl = AICtrl;
	params.bEnable = bEnable;
	params.bUpdateAgent = bUpdateAgent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeModeBlueprintLibrary::SetActorRegionBasedNetConsideration(class AActor* Actor, bool bNewValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetActorRegionBasedNetConsideration");

	UCreativeModeBlueprintLibrary_SetActorRegionBasedNetConsideration_Params params;
	params.Actor = Actor;
	params.bNewValue = bNewValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UCreativeModeBlueprintLibrary::SaveStringToFileByFullPath(const struct FString& String, const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SaveStringToFileByFullPath");

	UCreativeModeBlueprintLibrary_SaveStringToFileByFullPath_Params params;
	params.String = String;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UCreativeModeBlueprintLibrary::SaveStringToFile(const struct FString& String, const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SaveStringToFile");

	UCreativeModeBlueprintLibrary_SaveStringToFile_Params params;
	params.String = String;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeModeBlueprintLibrary::SaveRawStringToFile(TArray<unsigned char> Content, const struct FString& FilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SaveRawStringToFile");

	UCreativeModeBlueprintLibrary_SaveRawStringToFile_Params params;
	params.Content = Content;
	params.FilePath = FilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeModeBlueprintLibrary::SaveAssetStringToFile(const struct FString& String, const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SaveAssetStringToFile");

	UCreativeModeBlueprintLibrary_SaveAssetStringToFile_Params params;
	params.String = String;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









struct FRotator UCreativeModeBlueprintLibrary::RotatorCrossInverse(const struct FRotator& Rot1, const struct FRotator& Rot2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.RotatorCrossInverse");

	UCreativeModeBlueprintLibrary_RotatorCrossInverse_Params params;
	params.Rot1 = Rot1;
	params.Rot2 = Rot2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FRotator UCreativeModeBlueprintLibrary::RotatorCross(const struct FRotator& Rot1, const struct FRotator& Rot2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.RotatorCross");

	UCreativeModeBlueprintLibrary_RotatorCross_Params params;
	params.Rot1 = Rot1;
	params.Rot2 = Rot2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FVector UCreativeModeBlueprintLibrary::Rotation2Vector(const struct FRotator& Rotator, int Axis)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.Rotation2Vector");

	UCreativeModeBlueprintLibrary_Rotation2Vector_Params params;
	params.Rotator = Rotator;
	params.Axis = Axis;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<unsigned char> UCreativeModeBlueprintLibrary::RenderTargetToRGB(class UTextureRenderTarget2D* RenderTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.RenderTargetToRGB");

	UCreativeModeBlueprintLibrary_RenderTargetToRGB_Params params;
	params.RenderTarget = RenderTarget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









TArray<unsigned char> UCreativeModeBlueprintLibrary::RenderTargetToPNG(class UTextureRenderTarget2D* RenderTarget, bool bLinearToGamma)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.RenderTargetToPNG");

	UCreativeModeBlueprintLibrary_RenderTargetToPNG_Params params;
	params.RenderTarget = RenderTarget;
	params.bLinearToGamma = bLinearToGamma;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UCreativeModeBlueprintLibrary::RenameObject(class UObject* Object, const struct FString& NewName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.RenameObject");

	UCreativeModeBlueprintLibrary_RenameObject_Params params;
	params.Object = Object;
	params.NewName = NewName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeModeBlueprintLibrary::RecreatePhysicsState(class UPrimitiveComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.RecreatePhysicsState");

	UCreativeModeBlueprintLibrary_RecreatePhysicsState_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









struct FQuat UCreativeModeBlueprintLibrary::QuatCrossInverse(const struct FQuat& Quat1, const struct FQuat& Quat2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.QuatCrossInverse");

	UCreativeModeBlueprintLibrary_QuatCrossInverse_Params params;
	params.Quat1 = Quat1;
	params.Quat2 = Quat2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FQuat UCreativeModeBlueprintLibrary::QuatCross(const struct FQuat& Quat1, const struct FQuat& Quat2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.QuatCross");

	UCreativeModeBlueprintLibrary_QuatCross_Params params;
	params.Quat1 = Quat1;
	params.Quat2 = Quat2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UCreativeModeBlueprintLibrary::ProjectSavedDir()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.ProjectSavedDir");

	UCreativeModeBlueprintLibrary_ProjectSavedDir_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









TArray<unsigned char> UCreativeModeBlueprintLibrary::PrependInt32ToBytes(int Number, TArray<unsigned char> InBytes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.PrependInt32ToBytes");

	UCreativeModeBlueprintLibrary_PrependInt32ToBytes_Params params;
	params.Number = Number;
	params.InBytes = InBytes;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeModeBlueprintLibrary::PopulateParticleProperties(class UParticleSystemComponent* ParticleSystemComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.PopulateParticleProperties");

	UCreativeModeBlueprintLibrary_PopulateParticleProperties_Params params;
	params.ParticleSystemComponent = ParticleSystemComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










bool UCreativeModeBlueprintLibrary::ParseInt32FromBytes(TArray<unsigned char> InBytes, int* OutNumber, TArray<unsigned char>* OutBytes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.ParseInt32FromBytes");

	UCreativeModeBlueprintLibrary_ParseInt32FromBytes_Params params;
	params.InBytes = InBytes;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutNumber != nullptr)
		*OutNumber = params.OutNumber;
	if (OutBytes != nullptr)
		*OutBytes = params.OutBytes;

	return params.ReturnValue;
}














void UCreativeModeBlueprintLibrary::MoveComponentToNoLatent(class USceneComponent* Component, const struct FVector& TargetRelativeLocation, const struct FRotator& TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, TEnumAsByte<EMoveComponentAction> MoveAction)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.MoveComponentToNoLatent");

	UCreativeModeBlueprintLibrary_MoveComponentToNoLatent_Params params;
	params.Component = Component;
	params.TargetRelativeLocation = TargetRelativeLocation;
	params.TargetRelativeRotation = TargetRelativeRotation;
	params.bEaseOut = bEaseOut;
	params.bEaseIn = bEaseIn;
	params.OverTime = OverTime;
	params.bForceShortestRotationPath = bForceShortestRotationPath;
	params.MoveAction = MoveAction;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}














void UCreativeModeBlueprintLibrary::MoveComponentTo(class USceneComponent* Component, const struct FVector& WorldLocation, const struct FRotator& WorldRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, TEnumAsByte<EMoveComponentAction> MoveAction)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.MoveComponentTo");

	UCreativeModeBlueprintLibrary_MoveComponentTo_Params params;
	params.Component = Component;
	params.WorldLocation = WorldLocation;
	params.WorldRotation = WorldRotation;
	params.bEaseOut = bEaseOut;
	params.bEaseIn = bEaseIn;
	params.OverTime = OverTime;
	params.bForceShortestRotationPath = bForceShortestRotationPath;
	params.MoveAction = MoveAction;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}















void UCreativeModeBlueprintLibrary::MinAreaRectangle(class UObject* WorldContextObject, TArray<struct FVector> InPoints, const struct FVector& SampleSurfaceNormal, bool bDebugDraw, struct FRotator* OutRectRotation, float* OutRectLengthX, float* OutRectLengthY, struct FVector* OutRectCenter, TArray<int>* PolyVertIndices)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.MinAreaRectangle");

	UCreativeModeBlueprintLibrary_MinAreaRectangle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InPoints = InPoints;
	params.SampleSurfaceNormal = SampleSurfaceNormal;
	params.bDebugDraw = bDebugDraw;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutRectCenter != nullptr)
		*OutRectCenter = params.OutRectCenter;
	if (OutRectRotation != nullptr)
		*OutRectRotation = params.OutRectRotation;
	if (OutRectLengthX != nullptr)
		*OutRectLengthX = params.OutRectLengthX;
	if (OutRectLengthY != nullptr)
		*OutRectLengthY = params.OutRectLengthY;
	if (PolyVertIndices != nullptr)
		*PolyVertIndices = params.PolyVertIndices;
}








struct FString UCreativeModeBlueprintLibrary::MD5HashByteArray(TArray<unsigned char> inArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.MD5HashByteArray");

	UCreativeModeBlueprintLibrary_MD5HashByteArray_Params params;
	params.inArray = inArray;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCreativeModeBlueprintLibrary::MD5HashAnsiString(const struct FString& str)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.MD5HashAnsiString");

	UCreativeModeBlueprintLibrary_MD5HashAnsiString_Params params;
	params.str = str;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UCreativeModeBlueprintLibrary::Lz4DecompressData(TArray<unsigned char> CompressedData, TArray<unsigned char>* DecompressedData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.Lz4DecompressData");

	UCreativeModeBlueprintLibrary_Lz4DecompressData_Params params;
	params.CompressedData = CompressedData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DecompressedData != nullptr)
		*DecompressedData = params.DecompressedData;

	return params.ReturnValue;
}









bool UCreativeModeBlueprintLibrary::Lz4CompressData(TArray<unsigned char> UncompressedData, TArray<unsigned char>* CompressedData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.Lz4CompressData");

	UCreativeModeBlueprintLibrary_Lz4CompressData_Params params;
	params.UncompressedData = UncompressedData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (CompressedData != nullptr)
		*CompressedData = params.CompressedData;

	return params.ReturnValue;
}








TArray<unsigned char> UCreativeModeBlueprintLibrary::LoadRawFileToString(const struct FString& FilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.LoadRawFileToString");

	UCreativeModeBlueprintLibrary_LoadRawFileToString_Params params;
	params.FilePath = FilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<unsigned char> UCreativeModeBlueprintLibrary::LoadFileToArrayByFullPath(const struct FString& FullPathName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.LoadFileToArrayByFullPath");

	UCreativeModeBlueprintLibrary_LoadFileToArrayByFullPath_Params params;
	params.FullPathName = FullPathName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCreativeModeBlueprintLibrary::LoadAssetFileToString(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.LoadAssetFileToString");

	UCreativeModeBlueprintLibrary_LoadAssetFileToString_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











class USceneComponent* UCreativeModeBlueprintLibrary::LineTraceTouchComponent(const struct FVector2D& TouchPos, class APlayerController* PlayerController, TArray<class AActor*> IgnoreActors, struct FVector* TouchHitLoc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.LineTraceTouchComponent");

	UCreativeModeBlueprintLibrary_LineTraceTouchComponent_Params params;
	params.TouchPos = TouchPos;
	params.PlayerController = PlayerController;
	params.IgnoreActors = IgnoreActors;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TouchHitLoc != nullptr)
		*TouchHitLoc = params.TouchHitLoc;

	return params.ReturnValue;
}











int UCreativeModeBlueprintLibrary::LineTraceTouchAxis(const struct FVector2D& TouchPos, class APlayerController* PlayerController, TArray<class AActor*> IgnoreActors, struct FVector* TouchHitLoc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.LineTraceTouchAxis");

	UCreativeModeBlueprintLibrary_LineTraceTouchAxis_Params params;
	params.TouchPos = TouchPos;
	params.PlayerController = PlayerController;
	params.IgnoreActors = IgnoreActors;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TouchHitLoc != nullptr)
		*TouchHitLoc = params.TouchHitLoc;

	return params.ReturnValue;
}











struct FString UCreativeModeBlueprintLibrary::LineTraceInstance(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<class AActor*> IgnoreActors)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.LineTraceInstance");

	UCreativeModeBlueprintLibrary_LineTraceInstance_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.IgnoreActors = IgnoreActors;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UCreativeModeBlueprintLibrary::IsWindows()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.IsWindows");

	UCreativeModeBlueprintLibrary_IsWindows_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











bool UCreativeModeBlueprintLibrary::IsPointWithinRotatedBounds(const struct FVector& BoxCenter, const struct FVector& BoxExtent, float YawDegrees, const struct FVector& Point)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.IsPointWithinRotatedBounds");

	UCreativeModeBlueprintLibrary_IsPointWithinRotatedBounds_Params params;
	params.BoxCenter = BoxCenter;
	params.BoxExtent = BoxExtent;
	params.YawDegrees = YawDegrees;
	params.Point = Point;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UCreativeModeBlueprintLibrary::IsPointInVolume(class AVolume* Volume, const struct FVector& Position)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.IsPointInVolume");

	UCreativeModeBlueprintLibrary_IsPointInVolume_Params params;
	params.Volume = Volume;
	params.Position = Position;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeModeBlueprintLibrary::IsPhysicsStateCreated(class UPrimitiveComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.IsPhysicsStateCreated");

	UCreativeModeBlueprintLibrary_IsPhysicsStateCreated_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UCreativeModeBlueprintLibrary::IsPersistentModeEnabled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.IsPersistentModeEnabled");

	UCreativeModeBlueprintLibrary_IsPersistentModeEnabled_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UCreativeModeBlueprintLibrary::IsPerformanceSensitive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.IsPerformanceSensitive");

	UCreativeModeBlueprintLibrary_IsPerformanceSensitive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UCreativeModeBlueprintLibrary::IsOfflineBuild()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.IsOfflineBuild");

	UCreativeModeBlueprintLibrary_IsOfflineBuild_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UCreativeModeBlueprintLibrary::IsMCPModeEnabled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.IsMCPModeEnabled");

	UCreativeModeBlueprintLibrary_IsMCPModeEnabled_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UCreativeModeBlueprintLibrary::IsLLMEnabled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.IsLLMEnabled");

	UCreativeModeBlueprintLibrary_IsLLMEnabled_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeModeBlueprintLibrary::IsCreativeMode(class UWorld* World)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.IsCreativeMode");

	UCreativeModeBlueprintLibrary_IsCreativeMode_Params params;
	params.World = World;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}












bool UCreativeModeBlueprintLibrary::IsBoxOverlapWithRotatedBox(const struct FVector& StaticBoxCenter, const struct FVector& StaticBoxExtent, const struct FVector& RotatedBoxCenter, const struct FVector& RotatedBoxExtent, float RotatedBoxYaw)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.IsBoxOverlapWithRotatedBox");

	UCreativeModeBlueprintLibrary_IsBoxOverlapWithRotatedBox_Params params;
	params.StaticBoxCenter = StaticBoxCenter;
	params.StaticBoxExtent = StaticBoxExtent;
	params.RotatedBoxCenter = RotatedBoxCenter;
	params.RotatedBoxExtent = RotatedBoxExtent;
	params.RotatedBoxYaw = RotatedBoxYaw;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}












TArray<struct FString> UCreativeModeBlueprintLibrary::IsAABBVisible(TArray<struct FBox> TargetBoxs, TArray<struct FString> InstanceIDs, const struct FVector& FarPlanePoint, const struct FVector& CameraForward, TArray<float>* PlanesParams)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.IsAABBVisible");

	UCreativeModeBlueprintLibrary_IsAABBVisible_Params params;
	params.TargetBoxs = TargetBoxs;
	params.InstanceIDs = InstanceIDs;
	params.FarPlanePoint = FarPlanePoint;
	params.CameraForward = CameraForward;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (PlanesParams != nullptr)
		*PlanesParams = params.PlanesParams;

	return params.ReturnValue;
}








void UCreativeModeBlueprintLibrary::IgnoreClientMovementErrorChecksAndCorrection(class ACharacter* Charcter, bool bIsIgnore)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.IgnoreClientMovementErrorChecksAndCorrection");

	UCreativeModeBlueprintLibrary_IgnoreClientMovementErrorChecksAndCorrection_Params params;
	params.Charcter = Charcter;
	params.bIsIgnore = bIsIgnore;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}












int UCreativeModeBlueprintLibrary::HideEnvironmentalActorsInSceneCapture(class USceneCaptureComponent2D* SceneCapture, class ADirectionalLight* LightToKeep, bool bHideSkyBox, bool bHideEnvironmentLights, bool bHideAtmosphere)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.HideEnvironmentalActorsInSceneCapture");

	UCreativeModeBlueprintLibrary_HideEnvironmentalActorsInSceneCapture_Params params;
	params.SceneCapture = SceneCapture;
	params.LightToKeep = LightToKeep;
	params.bHideSkyBox = bHideSkyBox;
	params.bHideEnvironmentLights = bHideEnvironmentLights;
	params.bHideAtmosphere = bHideAtmosphere;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











void UCreativeModeBlueprintLibrary::GetWidgetRect(class UWidget* Widget, int* X1, int* Y1, int* X2, int* Y2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetWidgetRect");

	UCreativeModeBlueprintLibrary_GetWidgetRect_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (X1 != nullptr)
		*X1 = params.X1;
	if (Y1 != nullptr)
		*Y1 = params.Y1;
	if (X2 != nullptr)
		*X2 = params.X2;
	if (Y2 != nullptr)
		*Y2 = params.Y2;
}









struct FString UCreativeModeBlueprintLibrary::GetUrlValue(class UObject* WorldContext, const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetUrlValue");

	UCreativeModeBlueprintLibrary_GetUrlValue_Params params;
	params.WorldContext = WorldContext;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCreativeModeBlueprintLibrary::GetUObjAssetPath(class UObject* Level)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetUObjAssetPath");

	UCreativeModeBlueprintLibrary_GetUObjAssetPath_Params params;
	params.Level = Level;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCreativeModeBlueprintLibrary::GetUClassName(class UClass* UClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetUClassName");

	UCreativeModeBlueprintLibrary_GetUClassName_Params params;
	params.UClass = UClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UTexture2D* UCreativeModeBlueprintLibrary::GetTexture2DFromDiskFile(const struct FString& FilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetTexture2DFromDiskFile");

	UCreativeModeBlueprintLibrary_GetTexture2DFromDiskFile_Params params;
	params.FilePath = FilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UCreativeModeBlueprintLibrary::GetSyncDataIsEqual(struct FNetAvatarSyncData* SyncDataFirst, struct FNetAvatarSyncData* SyncDataSecond)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetSyncDataIsEqual");

	UCreativeModeBlueprintLibrary_GetSyncDataIsEqual_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SyncDataFirst != nullptr)
		*SyncDataFirst = params.SyncDataFirst;
	if (SyncDataSecond != nullptr)
		*SyncDataSecond = params.SyncDataSecond;

	return params.ReturnValue;
}









void UCreativeModeBlueprintLibrary::GetStaticMeshTriangleAndDrawCallCount(class UStaticMesh* StaticMesh, int* TriangleCount, int* DrawCallCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetStaticMeshTriangleAndDrawCallCount");

	UCreativeModeBlueprintLibrary_GetStaticMeshTriangleAndDrawCallCount_Params params;
	params.StaticMesh = StaticMesh;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TriangleCount != nullptr)
		*TriangleCount = params.TriangleCount;
	if (DrawCallCount != nullptr)
		*DrawCallCount = params.DrawCallCount;
}









void UCreativeModeBlueprintLibrary::GetSkeletalMeshTriangleAndDrawCallCount(class USkeletalMesh* SkeletalMesh, int* TriangleCount, int* DrawCallCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetSkeletalMeshTriangleAndDrawCallCount");

	UCreativeModeBlueprintLibrary_GetSkeletalMeshTriangleAndDrawCallCount_Params params;
	params.SkeletalMesh = SkeletalMesh;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TriangleCount != nullptr)
		*TriangleCount = params.TriangleCount;
	if (DrawCallCount != nullptr)
		*DrawCallCount = params.DrawCallCount;
}








int UCreativeModeBlueprintLibrary::GetRTValidMaxArea(class UTextureRenderTarget2D* TextureTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetRTValidMaxArea");

	UCreativeModeBlueprintLibrary_GetRTValidMaxArea_Params params;
	params.TextureTarget = TextureTarget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










int UCreativeModeBlueprintLibrary::GetReplicateAddDataArrayVaildNum(class UObject* WorldContextObject, const struct FReplicateAddDataArray& ReplicateAddDataArray, int StartIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetReplicateAddDataArrayVaildNum");

	UCreativeModeBlueprintLibrary_GetReplicateAddDataArrayVaildNum_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ReplicateAddDataArray = ReplicateAddDataArray;
	params.StartIndex = StartIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FTransform UCreativeModeBlueprintLibrary::GetRelativeTransform(const struct FTransform& Base, const struct FTransform& Other)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetRelativeTransform");

	UCreativeModeBlueprintLibrary_GetRelativeTransform_Params params;
	params.Base = Base;
	params.Other = Other;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UCreativeModeBlueprintLibrary::GetPlatformSeconds()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetPlatformSeconds");

	UCreativeModeBlueprintLibrary_GetPlatformSeconds_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UCreativeModeBlueprintLibrary::GetObjectScreenPos(class UObject* WorldContextObject, const struct FString& InstanceID, struct FVector2D* pos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetObjectScreenPos");

	UCreativeModeBlueprintLibrary_GetObjectScreenPos_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (pos != nullptr)
		*pos = params.pos;

	return params.ReturnValue;
}








TMap<struct FString, class UObject*> UCreativeModeBlueprintLibrary::GetObjectMap(class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetObjectMap");

	UCreativeModeBlueprintLibrary_GetObjectMap_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<class UClass*> UCreativeModeBlueprintLibrary::GetObjectInheritanceChain(class UObject* Object)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetObjectInheritanceChain");

	UCreativeModeBlueprintLibrary_GetObjectInheritanceChain_Params params;
	params.Object = Object;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











float UCreativeModeBlueprintLibrary::GetMinFovForAABB(const struct FVector& CameraLocation, const struct FRotator& CameraRotation, TArray<struct FVector> AABBVertices, float AspectRatio)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetMinFovForAABB");

	UCreativeModeBlueprintLibrary_GetMinFovForAABB_Params params;
	params.CameraLocation = CameraLocation;
	params.CameraRotation = CameraRotation;
	params.AABBVertices = AABBVertices;
	params.AspectRatio = AspectRatio;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UCreativeModeBlueprintLibrary::GetLastInteractionElapsedTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetLastInteractionElapsedTime");

	UCreativeModeBlueprintLibrary_GetLastInteractionElapsedTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UCreativeModeBlueprintLibrary::GetInstanceSpaceBoundingBox(const struct FString& InstanceID, float Yaw, class UCreativeAbilitySystemComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetInstanceSpaceBoundingBox");

	UCreativeModeBlueprintLibrary_GetInstanceSpaceBoundingBox_Params params;
	params.InstanceID = InstanceID;
	params.Yaw = Yaw;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









struct FVector2D UCreativeModeBlueprintLibrary::GetImageSize(TArray<unsigned char> ImageBuffer, int Format)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetImageSize");

	UCreativeModeBlueprintLibrary_GetImageSize_Params params;
	params.ImageBuffer = ImageBuffer;
	params.Format = Format;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








uint32_t UCreativeModeBlueprintLibrary::GetHashByString(const struct FString& str)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetHashByString");

	UCreativeModeBlueprintLibrary_GetHashByString_Params params;
	params.str = str;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











void UCreativeModeBlueprintLibrary::GetGroupInstanceSpaceBoundingBox(const struct FString& GroupID, TArray<struct FString> ChildrenIds, TMap<struct FString, struct FTransform> ChildrenTransforms, float Yaw, class UCreativeAbilitySystemComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetGroupInstanceSpaceBoundingBox");

	UCreativeModeBlueprintLibrary_GetGroupInstanceSpaceBoundingBox_Params params;
	params.GroupID = GroupID;
	params.ChildrenIds = ChildrenIds;
	params.ChildrenTransforms = ChildrenTransforms;
	params.Yaw = Yaw;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class UWorld* UCreativeModeBlueprintLibrary::GetGameWorld(class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetGameWorld");

	UCreativeModeBlueprintLibrary_GetGameWorld_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCreativeModeBlueprintLibrary::GetGameTypeAsString(ECreativeModeGameType GameType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetGameTypeAsString");

	UCreativeModeBlueprintLibrary_GetGameTypeAsString_Params params;
	params.GameType = GameType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<unsigned char> UCreativeModeBlueprintLibrary::GetDataConttentByInstanceDataContent(struct FCreativeInstanceDataContent* InstanceDataContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetDataConttentByInstanceDataContent");

	UCreativeModeBlueprintLibrary_GetDataConttentByInstanceDataContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InstanceDataContent != nullptr)
		*InstanceDataContent = params.InstanceDataContent;

	return params.ReturnValue;
}








TArray<unsigned char> UCreativeModeBlueprintLibrary::GetDataContentByInstanceDataContentSegment(struct FCreativeInstanceDataContentSegment* InstanceDataContentSegment)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetDataContentByInstanceDataContentSegment");

	UCreativeModeBlueprintLibrary_GetDataContentByInstanceDataContentSegment_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InstanceDataContentSegment != nullptr)
		*InstanceDataContentSegment = params.InstanceDataContentSegment;

	return params.ReturnValue;
}









struct FString UCreativeModeBlueprintLibrary::GetCustomEventHashString(const struct FString& CustomEventName, bool isSampleHash)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetCustomEventHashString");

	UCreativeModeBlueprintLibrary_GetCustomEventHashString_Params params;
	params.CustomEventName = CustomEventName;
	params.isSampleHash = isSampleHash;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







uint32_t UCreativeModeBlueprintLibrary::GetCurFrameNumber()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetCurFrameNumber");

	UCreativeModeBlueprintLibrary_GetCurFrameNumber_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







uint32_t UCreativeModeBlueprintLibrary::GetCurFrameCounter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetCurFrameCounter");

	UCreativeModeBlueprintLibrary_GetCurFrameCounter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}












int UCreativeModeBlueprintLibrary::GetCubeTouchAxisFace(class UWidget* Widget, float Width, float Distance, struct FVector2D* ScreenPosition, struct FVector* OffsetLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetCubeTouchAxisFace");

	UCreativeModeBlueprintLibrary_GetCubeTouchAxisFace_Params params;
	params.Widget = Widget;
	params.Width = Width;
	params.Distance = Distance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ScreenPosition != nullptr)
		*ScreenPosition = params.ScreenPosition;
	if (OffsetLocation != nullptr)
		*OffsetLocation = params.OffsetLocation;

	return params.ReturnValue;
}








TArray<unsigned char> UCreativeModeBlueprintLibrary::GetCreativeLuaReplicatedBytes2048(struct FCreativeLuaReplicatedBytes2048* ReplicatedBytes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetCreativeLuaReplicatedBytes2048");

	UCreativeModeBlueprintLibrary_GetCreativeLuaReplicatedBytes2048_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ReplicatedBytes != nullptr)
		*ReplicatedBytes = params.ReplicatedBytes;

	return params.ReturnValue;
}








TArray<unsigned char> UCreativeModeBlueprintLibrary::GetCreativeLuaReplicatedBytes1024(struct FCreativeLuaReplicatedBytes1024* ReplicatedBytes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetCreativeLuaReplicatedBytes1024");

	UCreativeModeBlueprintLibrary_GetCreativeLuaReplicatedBytes1024_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ReplicatedBytes != nullptr)
		*ReplicatedBytes = params.ReplicatedBytes;

	return params.ReturnValue;
}








struct FNetAvatarSyncData UCreativeModeBlueprintLibrary::GetCopiedAvatarSyncData(const struct FNetAvatarSyncData& SyncData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetCopiedAvatarSyncData");

	UCreativeModeBlueprintLibrary_GetCopiedAvatarSyncData_Params params;
	params.SyncData = SyncData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UCreativeModeBlueprintLibrary::GetContentPatchData(TArray<unsigned char> OldData, TArray<unsigned char> DiffData, TArray<unsigned char>* outNewData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetContentPatchData");

	UCreativeModeBlueprintLibrary_GetContentPatchData_Params params;
	params.OldData = OldData;
	params.DiffData = DiffData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (outNewData != nullptr)
		*outNewData = params.outNewData;

	return params.ReturnValue;
}










bool UCreativeModeBlueprintLibrary::GetContentDiffData(TArray<unsigned char> OldData, TArray<unsigned char> NewData, TArray<unsigned char>* outDiffData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetContentDiffData");

	UCreativeModeBlueprintLibrary_GetContentDiffData_Params params;
	params.OldData = OldData;
	params.NewData = NewData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (outDiffData != nullptr)
		*outDiffData = params.outDiffData;

	return params.ReturnValue;
}








struct FString UCreativeModeBlueprintLibrary::GetCommandLineValue(const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetCommandLineValue");

	UCreativeModeBlueprintLibrary_GetCommandLineValue_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<class UClass*> UCreativeModeBlueprintLibrary::GetClassInheritanceChain(class UClass* UClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetClassInheritanceChain");

	UCreativeModeBlueprintLibrary_GetClassInheritanceChain_Params params;
	params.UClass = UClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FVector UCreativeModeBlueprintLibrary::GetCharacterSocketPos(class ACharacter* Character, const struct FName& SocketName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetCharacterSocketPos");

	UCreativeModeBlueprintLibrary_GetCharacterSocketPos_Params params;
	params.Character = Character;
	params.SocketName = SocketName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<struct FVector4> UCreativeModeBlueprintLibrary::GetCameraFrustumPlane(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetCameraFrustumPlane");

	UCreativeModeBlueprintLibrary_GetCameraFrustumPlane_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











void UCreativeModeBlueprintLibrary::GetBoundingBoxOfInstances(class UObject* WorldContext, TArray<struct FString> Ids, float Yaw, struct FVector* Center, struct FVector* BoxExtent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetBoundingBoxOfInstances");

	UCreativeModeBlueprintLibrary_GetBoundingBoxOfInstances_Params params;
	params.WorldContext = WorldContext;
	params.Ids = Ids;
	params.Yaw = Yaw;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Center != nullptr)
		*Center = params.Center;
	if (BoxExtent != nullptr)
		*BoxExtent = params.BoxExtent;
}










void UCreativeModeBlueprintLibrary::GetBoundingBoxOfActors(TArray<class AActor*> Actors, float Yaw, struct FVector* Center, struct FVector* BoxExtent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetBoundingBoxOfActors");

	UCreativeModeBlueprintLibrary_GetBoundingBoxOfActors_Params params;
	params.Actors = Actors;
	params.Yaw = Yaw;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Center != nullptr)
		*Center = params.Center;
	if (BoxExtent != nullptr)
		*BoxExtent = params.BoxExtent;
}








struct FString UCreativeModeBlueprintLibrary::GetBlockyListInDisplayName(class UBlockBase* BlockBase)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetBlockyListInDisplayName");

	UCreativeModeBlueprintLibrary_GetBlockyListInDisplayName_Params params;
	params.BlockBase = BlockBase;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCreativeModeBlueprintLibrary::GetBigUObject(int MaxN)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetBigUObject");

	UCreativeModeBlueprintLibrary_GetBigUObject_Params params;
	params.MaxN = MaxN;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCreativeModeBlueprintLibrary::GetBigLuaValue(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetBigLuaValue");

	UCreativeModeBlueprintLibrary_GetBigLuaValue_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}












TArray<struct FString> UCreativeModeBlueprintLibrary::GetAllInstanceInScreenBox(class UObject* WorldContext, const struct FVector2D& Start, const struct FVector2D& End, int CheckDistance, int CountLimit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetAllInstanceInScreenBox");

	UCreativeModeBlueprintLibrary_GetAllInstanceInScreenBox_Params params;
	params.WorldContext = WorldContext;
	params.Start = Start;
	params.End = End;
	params.CheckDistance = CheckDistance;
	params.CountLimit = CountLimit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











TArray<struct FString> UCreativeModeBlueprintLibrary::GetAllInstanceInBox(class UObject* WorldContext, const struct FVector& Center, const struct FVector& Extent, const struct FRotator& Rotator)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetAllInstanceInBox");

	UCreativeModeBlueprintLibrary_GetAllInstanceInBox_Params params;
	params.WorldContext = WorldContext;
	params.Center = Center;
	params.Extent = Extent;
	params.Rotator = Rotator;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










TArray<struct FString> UCreativeModeBlueprintLibrary::GetAllFilesInDir(const struct FString& Dir, const struct FString& Pattern, bool bRelative)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetAllFilesInDir");

	UCreativeModeBlueprintLibrary_GetAllFilesInDir_Params params;
	params.Dir = Dir;
	params.Pattern = Pattern;
	params.bRelative = bRelative;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


















TArray<struct FOverlapResult> UCreativeModeBlueprintLibrary::GetActorsInCameraFrustumByLayer(class UWorld* World, const struct FVector& Origin, const struct FRotator& CameraRot, float MaxDistance, float AngleWidth, float AngleHeight, int NumLayers, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bDrawDebug, const struct FColor& DebugColor, float DebugLifeTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetActorsInCameraFrustumByLayer");

	UCreativeModeBlueprintLibrary_GetActorsInCameraFrustumByLayer_Params params;
	params.World = World;
	params.Origin = Origin;
	params.CameraRot = CameraRot;
	params.MaxDistance = MaxDistance;
	params.AngleWidth = AngleWidth;
	params.AngleHeight = AngleHeight;
	params.NumLayers = NumLayers;
	params.ObjectTypes = ObjectTypes;
	params.bDrawDebug = bDrawDebug;
	params.DebugColor = DebugColor;
	params.DebugLifeTime = DebugLifeTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











void UCreativeModeBlueprintLibrary::GetActorMeshBoundsByTag(class AActor* Actor, const struct FString& IgnoreTag, const struct FString& IncludeTag, struct FVector* Origin, struct FVector* BoxExtent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetActorMeshBoundsByTag");

	UCreativeModeBlueprintLibrary_GetActorMeshBoundsByTag_Params params;
	params.Actor = Actor;
	params.IgnoreTag = IgnoreTag;
	params.IncludeTag = IncludeTag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Origin != nullptr)
		*Origin = params.Origin;
	if (BoxExtent != nullptr)
		*BoxExtent = params.BoxExtent;
}







uint32_t UCreativeModeBlueprintLibrary::GenerateUIntGuid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GenerateUIntGuid");

	UCreativeModeBlueprintLibrary_GenerateUIntGuid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<int> UCreativeModeBlueprintLibrary::GenerateMemoryArray(int SizeInMB)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GenerateMemoryArray");

	UCreativeModeBlueprintLibrary_GenerateMemoryArray_Params params;
	params.SizeInMB = SizeInMB;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UCreativeModeBlueprintLibrary::GenerateGuid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GenerateGuid");

	UCreativeModeBlueprintLibrary_GenerateGuid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class AActor* UCreativeModeBlueprintLibrary::FindAttachedActorByName(class AActor* ParentActor, const struct FString& PartialName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.FindAttachedActorByName");

	UCreativeModeBlueprintLibrary_FindAttachedActorByName_Params params;
	params.ParentActor = ParentActor;
	params.PartialName = PartialName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class AActor* UCreativeModeBlueprintLibrary::FindActorByName(class UWorld* World, const struct FString& PartialName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.FindActorByName");

	UCreativeModeBlueprintLibrary_FindActorByName_Params params;
	params.World = World;
	params.PartialName = PartialName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCreativeModeBlueprintLibrary::EncryptToBase64(TArray<unsigned char> inArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.EncryptToBase64");

	UCreativeModeBlueprintLibrary_EncryptToBase64_Params params;
	params.inArray = inArray;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UCreativeModeBlueprintLibrary::EditorMessage(const struct FString& Message, float Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.EditorMessage");

	UCreativeModeBlueprintLibrary_EditorMessage_Params params;
	params.Message = Message;
	params.Time = Time;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeModeBlueprintLibrary::DumpCurrentWorldObjects(class UObject* WorldContextObject, const struct FString& Suffix)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.DumpCurrentWorldObjects");

	UCreativeModeBlueprintLibrary_DumpCurrentWorldObjects_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Suffix = Suffix;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeModeBlueprintLibrary::DumpActorNetReplicate(class UObject* WorldContext, const struct FString& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.DumpActorNetReplicate");

	UCreativeModeBlueprintLibrary_DumpActorNetReplicate_Params params;
	params.WorldContext = WorldContext;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}













void UCreativeModeBlueprintLibrary::DrawLine(const struct FPaintContext& InContext, const struct FVector2D& Start, const struct FVector2D& End, const struct FLinearColor& LineColor, int LayerOffset, float LineThickness, bool bAntiAlias)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.DrawLine");

	UCreativeModeBlueprintLibrary_DrawLine_Params params;
	params.InContext = InContext;
	params.Start = Start;
	params.End = End;
	params.LineColor = LineColor;
	params.LayerOffset = LayerOffset;
	params.LineThickness = LineThickness;
	params.bAntiAlias = bAntiAlias;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}
















void UCreativeModeBlueprintLibrary::DrawGrids(const struct FPaintContext& InContext, float CellSize, int CellCountX, int CellCountY, float PosOffsetX, float PosOffsetY, const struct FLinearColor& LineColor, float LineThickness, bool bAntiAlias, int LayerOffset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.DrawGrids");

	UCreativeModeBlueprintLibrary_DrawGrids_Params params;
	params.InContext = InContext;
	params.CellSize = CellSize;
	params.CellCountX = CellCountX;
	params.CellCountY = CellCountY;
	params.PosOffsetX = PosOffsetX;
	params.PosOffsetY = PosOffsetY;
	params.LineColor = LineColor;
	params.LineThickness = LineThickness;
	params.bAntiAlias = bAntiAlias;
	params.LayerOffset = LayerOffset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}














void UCreativeModeBlueprintLibrary::DrawGridCell(const struct FPaintContext& InContext, float CellSize, int CellIndexX, int CellIndexY, float PosOffsetX, float PosOffsetY, const struct FLinearColor& LineColor, int LayerOffset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.DrawGridCell");

	UCreativeModeBlueprintLibrary_DrawGridCell_Params params;
	params.InContext = InContext;
	params.CellSize = CellSize;
	params.CellIndexX = CellIndexX;
	params.CellIndexY = CellIndexY;
	params.PosOffsetX = PosOffsetX;
	params.PosOffsetY = PosOffsetY;
	params.LineColor = LineColor;
	params.LayerOffset = LayerOffset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeModeBlueprintLibrary::DestroyUObject(class UObject* Object)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.DestroyUObject");

	UCreativeModeBlueprintLibrary_DestroyUObject_Params params;
	params.Object = Object;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









struct FString UCreativeModeBlueprintLibrary::DestroyInstance(class UObject* WorldContextObject, const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.DestroyInstance");

	UCreativeModeBlueprintLibrary_DestroyInstance_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<unsigned char> UCreativeModeBlueprintLibrary::DecryptFromBase64(const struct FString& inString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.DecryptFromBase64");

	UCreativeModeBlueprintLibrary_DecryptFromBase64_Params params;
	params.inString = inString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











void UCreativeModeBlueprintLibrary::DarwCameraFrustumDebugLine(class UObject* WorldContext, const struct FVector& FarPlanePoint, const struct FVector& CameraForward, float Duration, TArray<float>* PlanesParams)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.DarwCameraFrustumDebugLine");

	UCreativeModeBlueprintLibrary_DarwCameraFrustumDebugLine_Params params;
	params.WorldContext = WorldContext;
	params.FarPlanePoint = FarPlanePoint;
	params.CameraForward = CameraForward;
	params.Duration = Duration;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (PlanesParams != nullptr)
		*PlanesParams = params.PlanesParams;
}








struct FCreativeInstanceDataContentSegment UCreativeModeBlueprintLibrary::CreativeInstanceDataContentSegment(TArray<unsigned char> DataContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.CreativeInstanceDataContentSegment");

	UCreativeModeBlueprintLibrary_CreativeInstanceDataContentSegment_Params params;
	params.DataContent = DataContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FCreativeInstanceDataContent UCreativeModeBlueprintLibrary::CreativeInstanceDataContent(TArray<unsigned char> DataContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.CreativeInstanceDataContent");

	UCreativeModeBlueprintLibrary_CreativeInstanceDataContent_Params params;
	params.DataContent = DataContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










class UTexture2D* UCreativeModeBlueprintLibrary::CreateRGBATexture(int Width, int Height, bool bSRGB)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.CreateRGBATexture");

	UCreativeModeBlueprintLibrary_CreateRGBATexture_Params params;
	params.Width = Width;
	params.Height = Height;
	params.bSRGB = bSRGB;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}













struct FCreativeMovingAudio UCreativeModeBlueprintLibrary::CreateCreativeMovingAudio(class AActor* Actor, int Sequence, uint64_t ConfigID, bool bShowMark, int Duration, float Volume)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.CreateCreativeMovingAudio");

	UCreativeModeBlueprintLibrary_CreateCreativeMovingAudio_Params params;
	params.Actor = Actor;
	params.Sequence = Sequence;
	params.ConfigID = ConfigID;
	params.bShowMark = bShowMark;
	params.Duration = Duration;
	params.Volume = Volume;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FRotator UCreativeModeBlueprintLibrary::ConvertForwardToRotator(const struct FVector& Forward)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.ConvertForwardToRotator");

	UCreativeModeBlueprintLibrary_ConvertForwardToRotator_Params params;
	params.Forward = Forward;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}

















void UCreativeModeBlueprintLibrary::CombineRGBATexture(class UTexture2D* DstTexture, class UTexture2D* RGSourceTexture, class UTexture2D* BSourceTexture, class UTexture2D* ASourceTexture, bool bRGSrgb, bool bBSrgb, bool bASrgb, unsigned char DefaultR, unsigned char DefaultG, unsigned char DefaultB, unsigned char DefaultA)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.CombineRGBATexture");

	UCreativeModeBlueprintLibrary_CombineRGBATexture_Params params;
	params.DstTexture = DstTexture;
	params.RGSourceTexture = RGSourceTexture;
	params.BSourceTexture = BSourceTexture;
	params.ASourceTexture = ASourceTexture;
	params.bRGSrgb = bRGSrgb;
	params.bBSrgb = bBSrgb;
	params.bASrgb = bASrgb;
	params.DefaultR = DefaultR;
	params.DefaultG = DefaultG;
	params.DefaultB = DefaultB;
	params.DefaultA = DefaultA;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}













void UCreativeModeBlueprintLibrary::CombineChannelsToRGBATexture(class UTexture2D* DstTexture, class UTexture2D* RGSourceTexture, class UTexture2D* BSourceTexture, class UTexture2D* ASourceTexture, bool bRGSrgb, bool bBSrgb, bool bASrgb)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.CombineChannelsToRGBATexture");

	UCreativeModeBlueprintLibrary_CombineChannelsToRGBATexture_Params params;
	params.DstTexture = DstTexture;
	params.RGSourceTexture = RGSourceTexture;
	params.BSourceTexture = BSourceTexture;
	params.ASourceTexture = ASourceTexture;
	params.bRGSrgb = bRGSrgb;
	params.bBSrgb = bBSrgb;
	params.bASrgb = bASrgb;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UCreativeModeBlueprintLibrary::ClearGrassByMaskTexture(class UObject* WorldContextObject, class UTexture2D* MaskTexture, const struct FVector2D& WorldStart, const struct FVector2D& WorldEnd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.ClearGrassByMaskTexture");

	UCreativeModeBlueprintLibrary_ClearGrassByMaskTexture_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MaskTexture = MaskTexture;
	params.WorldStart = WorldStart;
	params.WorldEnd = WorldEnd;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UCreativeModeBlueprintLibrary::CheckWidgetsOverlap(class UWidget* Widget1, class UWidget* Widget2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.CheckWidgetsOverlap");

	UCreativeModeBlueprintLibrary_CheckWidgetsOverlap_Params params;
	params.Widget1 = Widget1;
	params.Widget2 = Widget2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}















void UCreativeModeBlueprintLibrary::CharacterPlayCreativeDynamicMontage(class ACharacter* CharacterOwner, class UAnimSequenceBase* Asset, float BlendInTime, float BlendOutTime, float InPlayRate, int LoopCount, bool bIsLoop, float InTimeToStartMontageAt, const struct FName& SlotNodeName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.CharacterPlayCreativeDynamicMontage");

	UCreativeModeBlueprintLibrary_CharacterPlayCreativeDynamicMontage_Params params;
	params.CharacterOwner = CharacterOwner;
	params.Asset = Asset;
	params.BlendInTime = BlendInTime;
	params.BlendOutTime = BlendOutTime;
	params.InPlayRate = InPlayRate;
	params.LoopCount = LoopCount;
	params.bIsLoop = bIsLoop;
	params.InTimeToStartMontageAt = InTimeToStartMontageAt;
	params.SlotNodeName = SlotNodeName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}













bool UCreativeModeBlueprintLibrary::CaptureWidget(class UObject* WorldContext, class UClass* WidgetClass, struct FString* Path, int* X, int* Y, bool* FlipY)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.CaptureWidget");

	UCreativeModeBlueprintLibrary_CaptureWidget_Params params;
	params.WorldContext = WorldContext;
	params.WidgetClass = WidgetClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;
	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
	if (FlipY != nullptr)
		*FlipY = params.FlipY;

	return params.ReturnValue;
}














bool UCreativeModeBlueprintLibrary::BoxOverlapComponentsByChannel(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TArray<TEnumAsByte<ECollisionChannel>> Channels, class UClass* ComponentClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.BoxOverlapComponentsByChannel");

	UCreativeModeBlueprintLibrary_BoxOverlapComponentsByChannel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.BoxPos = BoxPos;
	params.BoxExtent = BoxExtent;
	params.Channels = Channels;
	params.ComponentClassFilter = ComponentClassFilter;
	params.ActorsToIgnore = ActorsToIgnore;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutComponents != nullptr)
		*OutComponents = params.OutComponents;

	return params.ReturnValue;
}














bool UCreativeModeBlueprintLibrary::BoxOverlapComponents(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TArray<int> ObjectTypes, class UClass* CompClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComps)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.BoxOverlapComponents");

	UCreativeModeBlueprintLibrary_BoxOverlapComponents_Params params;
	params.WorldContextObject = WorldContextObject;
	params.BoxPos = BoxPos;
	params.BoxExtent = BoxExtent;
	params.ObjectTypes = ObjectTypes;
	params.CompClassFilter = CompClassFilter;
	params.ActorsToIgnore = ActorsToIgnore;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutComps != nullptr)
		*OutComps = params.OutComps;

	return params.ReturnValue;
}














bool UCreativeModeBlueprintLibrary::BoxOverlapActorsByChannel(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TArray<TEnumAsByte<ECollisionChannel>> Channels, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.BoxOverlapActorsByChannel");

	UCreativeModeBlueprintLibrary_BoxOverlapActorsByChannel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.BoxPos = BoxPos;
	params.BoxExtent = BoxExtent;
	params.Channels = Channels;
	params.ActorClassFilter = ActorClassFilter;
	params.ActorsToIgnore = ActorsToIgnore;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

	return params.ReturnValue;
}














bool UCreativeModeBlueprintLibrary::BoxOverlapActors(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TArray<int> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.BoxOverlapActors");

	UCreativeModeBlueprintLibrary_BoxOverlapActors_Params params;
	params.WorldContextObject = WorldContextObject;
	params.BoxPos = BoxPos;
	params.BoxExtent = BoxExtent;
	params.ObjectTypes = ObjectTypes;
	params.ActorClassFilter = ActorClassFilter;
	params.ActorsToIgnore = ActorsToIgnore;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

	return params.ReturnValue;
}



















bool UCreativeModeBlueprintLibrary::BlueprintSuggestProjectileVelocity(class UObject* WorldContextObject, TArray<class AActor*> ActorsToIgnore, const struct FVector& StartLocation, const struct FVector& EndLocation, float LaunchSpeed, float OverrideGravityZ, TEnumAsByte<ESuggestProjVelocityTraceOption> TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug, float Tolerance, struct FVector* TossVelocity)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.BlueprintSuggestProjectileVelocity");

	UCreativeModeBlueprintLibrary_BlueprintSuggestProjectileVelocity_Params params;
	params.WorldContextObject = WorldContextObject;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;
	params.LaunchSpeed = LaunchSpeed;
	params.OverrideGravityZ = OverrideGravityZ;
	params.TraceOption = TraceOption;
	params.CollisionRadius = CollisionRadius;
	params.bFavorHighArc = bFavorHighArc;
	params.bDrawDebug = bDrawDebug;
	params.Tolerance = Tolerance;
	params.ActorsToIgnore = ActorsToIgnore;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TossVelocity != nullptr)
		*TossVelocity = params.TossVelocity;

	return params.ReturnValue;
}













class AActor* UCreativeModeBlueprintLibrary::BeginDeferredActorSpawnWithName(class UObject* WorldContextObject, class UClass* ActorClass, const struct FTransform& SpawnTransform, const struct FName& Name, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.BeginDeferredActorSpawnWithName");

	UCreativeModeBlueprintLibrary_BeginDeferredActorSpawnWithName_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;
	params.SpawnTransform = SpawnTransform;
	params.Name = Name;
	params.CollisionHandlingOverride = CollisionHandlingOverride;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UCreativeModeBlueprintLibrary::AttachOutlineBox(class AActor* AttachedActor, float Yaw, class AActor* OutlineBox)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.AttachOutlineBox");

	UCreativeModeBlueprintLibrary_AttachOutlineBox_Params params;
	params.AttachedActor = AttachedActor;
	params.Yaw = Yaw;
	params.OutlineBox = OutlineBox;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UCreativeModeBlueprintLibrary::AttachInstanceOutlineBox(const struct FString& AttachedId, bool bGridEnable, float Yaw, class AActor* OutlineBox)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.AttachInstanceOutlineBox");

	UCreativeModeBlueprintLibrary_AttachInstanceOutlineBox_Params params;
	params.AttachedId = AttachedId;
	params.bGridEnable = bGridEnable;
	params.Yaw = Yaw;
	params.OutlineBox = OutlineBox;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UCreativeModeBlueprintLibrary::AttachGroupOutlineBox(class AActor* GroupObject, TArray<class AActor*> AttachedActors, float Yaw, class AActor* OutlineBox)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.AttachGroupOutlineBox");

	UCreativeModeBlueprintLibrary_AttachGroupOutlineBox_Params params;
	params.GroupObject = GroupObject;
	params.AttachedActors = AttachedActors;
	params.Yaw = Yaw;
	params.OutlineBox = OutlineBox;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}












void UCreativeModeBlueprintLibrary::AttachGroupInstanceOutlineBox(const struct FString& GroupID, TArray<struct FString> ChildrenIds, TMap<struct FString, struct FTransform> ChildrenTransforms, bool bGridEnable, float Yaw, class AActor* OutlineBox)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.AttachGroupInstanceOutlineBox");

	UCreativeModeBlueprintLibrary_AttachGroupInstanceOutlineBox_Params params;
	params.GroupID = GroupID;
	params.ChildrenIds = ChildrenIds;
	params.ChildrenTransforms = ChildrenTransforms;
	params.bGridEnable = bGridEnable;
	params.Yaw = Yaw;
	params.OutlineBox = OutlineBox;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}














bool UCreativeModeBlueprintLibrary::AimSceneCaptureAtPawnSocket(class USceneComponent* SceneCapture, class APawn* TargetPawn, const struct FName& SocketName, float Distance, float FOV, const struct FVector& Offset, float PawnHeight)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.AimSceneCaptureAtPawnSocket");

	UCreativeModeBlueprintLibrary_AimSceneCaptureAtPawnSocket_Params params;
	params.SceneCapture = SceneCapture;
	params.TargetPawn = TargetPawn;
	params.SocketName = SocketName;
	params.Distance = Distance;
	params.FOV = FOV;
	params.Offset = Offset;
	params.PawnHeight = PawnHeight;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}












void UCreativeModeBlueprintLibrary::AddVectorCurvePoint(float InVal, const struct FVector& OutVal, const struct FVector& ArriveTangent, const struct FVector& LeaveTangent, int InterpCurveMode, struct FInterpCurveVector* Curve)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.AddVectorCurvePoint");

	UCreativeModeBlueprintLibrary_AddVectorCurvePoint_Params params;
	params.InVal = InVal;
	params.OutVal = OutVal;
	params.ArriveTangent = ArriveTangent;
	params.LeaveTangent = LeaveTangent;
	params.InterpCurveMode = InterpCurveMode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Curve != nullptr)
		*Curve = params.Curve;
}







void UCreativeModeBlueprintLibrary::AddOnScreenDebugMessage(const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.AddOnScreenDebugMessage");

	UCreativeModeBlueprintLibrary_AddOnScreenDebugMessage_Params params;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}












void UCreativeModeBlueprintLibrary::AddLinearColorCurvePoint(float InVal, const struct FLinearColor& OutVal, const struct FLinearColor& ArriveTangent, const struct FLinearColor& LeaveTangent, int InterpCurveMode, struct FInterpCurveLinearColor* Curve)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.AddLinearColorCurvePoint");

	UCreativeModeBlueprintLibrary_AddLinearColorCurvePoint_Params params;
	params.InVal = InVal;
	params.OutVal = OutVal;
	params.ArriveTangent = ArriveTangent;
	params.LeaveTangent = LeaveTangent;
	params.InterpCurveMode = InterpCurveMode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Curve != nullptr)
		*Curve = params.Curve;
}












void UCreativeModeBlueprintLibrary::AddFloatCurvePoint(float InVal, float OutVal, float ArriveTangent, float LeaveTangent, int InterpCurveMode, struct FInterpCurveFloat* Curve)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.AddFloatCurvePoint");

	UCreativeModeBlueprintLibrary_AddFloatCurvePoint_Params params;
	params.InVal = InVal;
	params.OutVal = OutVal;
	params.ArriveTangent = ArriveTangent;
	params.LeaveTangent = LeaveTangent;
	params.InterpCurveMode = InterpCurveMode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Curve != nullptr)
		*Curve = params.Curve;
}





void UCreativeBounceMovementComponent::SyncUpdatedComponentDS()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBounceMovementComponent.SyncUpdatedComponentDS");

	UCreativeBounceMovementComponent_SyncUpdatedComponentDS_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBounceMovementComponent::SetVelocityInLocalSpaceDS(const struct FVector& InVelocity)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBounceMovementComponent.SetVelocityInLocalSpaceDS");

	UCreativeBounceMovementComponent_SetVelocityInLocalSpaceDS_Params params;
	params.InVelocity = InVelocity;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBounceMovementComponent::SetUpdatedComponentDSCPP(class USceneComponent* NewUpdatedComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBounceMovementComponent.SetUpdatedComponentDSCPP");

	UCreativeBounceMovementComponent_SetUpdatedComponentDSCPP_Params params;
	params.NewUpdatedComponent = NewUpdatedComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBounceMovementComponent::SetSlideableFloorAngleDS(float InSlideableFloorAngle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBounceMovementComponent.SetSlideableFloorAngleDS");

	UCreativeBounceMovementComponent_SetSlideableFloorAngleDS_Params params;
	params.InSlideableFloorAngle = InSlideableFloorAngle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBounceMovementComponent::SetSlideableFloorAngle(float InSlideableFloorAngle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBounceMovementComponent.SetSlideableFloorAngle");

	UCreativeBounceMovementComponent_SetSlideableFloorAngle_Params params;
	params.InSlideableFloorAngle = InSlideableFloorAngle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBounceMovementComponent::SetProjectileGravityScaleDS(float InGravityScale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBounceMovementComponent.SetProjectileGravityScaleDS");

	UCreativeBounceMovementComponent_SetProjectileGravityScaleDS_Params params;
	params.InGravityScale = InGravityScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBounceMovementComponent::SetMassDS(float InMass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBounceMovementComponent.SetMassDS");

	UCreativeBounceMovementComponent_SetMassDS_Params params;
	params.InMass = InMass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBounceMovementComponent::SetFrictionDS(float InFriction)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBounceMovementComponent.SetFrictionDS");

	UCreativeBounceMovementComponent_SetFrictionDS_Params params;
	params.InFriction = InFriction;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBounceMovementComponent::SetBouncinessDS(float InBounciness)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBounceMovementComponent.SetBouncinessDS");

	UCreativeBounceMovementComponent_SetBouncinessDS_Params params;
	params.InBounciness = InBounciness;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBounceMovementComponent::OnRep_UpdatedComponentDS(class USceneComponent* OldUpdatedComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBounceMovementComponent.OnRep_UpdatedComponentDS");

	UCreativeBounceMovementComponent_OnRep_UpdatedComponentDS_Params params;
	params.OldUpdatedComponent = OldUpdatedComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBounceMovementComponent::OnRep_SlideableFloorAngleDS(float OldValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBounceMovementComponent.OnRep_SlideableFloorAngleDS");

	UCreativeBounceMovementComponent_OnRep_SlideableFloorAngleDS_Params params;
	params.OldValue = OldValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBounceMovementComponent::OnRep_ProjectileGravityScaleDS(float OldValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBounceMovementComponent.OnRep_ProjectileGravityScaleDS");

	UCreativeBounceMovementComponent_OnRep_ProjectileGravityScaleDS_Params params;
	params.OldValue = OldValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBounceMovementComponent::OnRep_MassDS(float OldValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBounceMovementComponent.OnRep_MassDS");

	UCreativeBounceMovementComponent_OnRep_MassDS_Params params;
	params.OldValue = OldValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBounceMovementComponent::OnRep_FrictionDS(float OldValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBounceMovementComponent.OnRep_FrictionDS");

	UCreativeBounceMovementComponent_OnRep_FrictionDS_Params params;
	params.OldValue = OldValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBounceMovementComponent::OnRep_BouncinessDS(float OldValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBounceMovementComponent.OnRep_BouncinessDS");

	UCreativeBounceMovementComponent_OnRep_BouncinessDS_Params params;
	params.OldValue = OldValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBounceMovementComponent::MulticastSyncVelocity(const struct FBounceMovementSnapshot& Snapshot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBounceMovementComponent.MulticastSyncVelocity");

	UCreativeBounceMovementComponent_MulticastSyncVelocity_Params params;
	params.Snapshot = Snapshot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBounceMovementComponent::MulticastSyncStop(const struct FBounceMovementSnapshot& Snapshot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBounceMovementComponent.MulticastSyncStop");

	UCreativeBounceMovementComponent_MulticastSyncStop_Params params;
	params.Snapshot = Snapshot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBounceMovementComponent::MulticastSyncMove(const struct FBounceMovementSnapshot& Snapshot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBounceMovementComponent.MulticastSyncMove");

	UCreativeBounceMovementComponent_MulticastSyncMove_Params params;
	params.Snapshot = Snapshot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBounceMovementComponent::MulticastSyncLocation(const struct FBounceMovementSnapshot& Snapshot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBounceMovementComponent.MulticastSyncLocation");

	UCreativeBounceMovementComponent_MulticastSyncLocation_Params params;
	params.Snapshot = Snapshot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeBounceMovementComponent::MulticastSyncBounce(const struct FBounceMovementSnapshot& Snapshot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBounceMovementComponent.MulticastSyncBounce");

	UCreativeBounceMovementComponent_MulticastSyncBounce_Params params;
	params.Snapshot = Snapshot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UCreativeBounceMovementComponent::IsInAir()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBounceMovementComponent.IsInAir");

	UCreativeBounceMovementComponent_IsInAir_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class AActor* UCreativeBounceMovementComponent::GetBaseFloorActor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBounceMovementComponent.GetBaseFloorActor");

	UCreativeBounceMovementComponent_GetBaseFloorActor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UPrimitiveComponent* UCreativeBounceMovementComponent::GetBaseFloor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBounceMovementComponent.GetBaseFloor");

	UCreativeBounceMovementComponent_GetBaseFloor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void ACreativeModeLuaSpectatorPawn::UnRegistLuaTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeLuaSpectatorPawn.UnRegistLuaTick");

	ACreativeModeLuaSpectatorPawn_UnRegistLuaTick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeLuaSpectatorPawn::SetController(class APlayerController* InController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeLuaSpectatorPawn.SetController");

	ACreativeModeLuaSpectatorPawn_SetController_Params params;
	params.InController = InController;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ACreativeModeLuaSpectatorPawn::SetAbilitySystemComponentAvatar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeLuaSpectatorPawn.SetAbilitySystemComponentAvatar");

	ACreativeModeLuaSpectatorPawn_SetAbilitySystemComponentAvatar_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeLuaSpectatorPawn::RegistLuaTick(float TickInterval)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeLuaSpectatorPawn.RegistLuaTick");

	ACreativeModeLuaSpectatorPawn_RegistLuaTick_Params params;
	params.TickInterval = TickInterval;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeLuaSpectatorPawn::MoveRight(float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeLuaSpectatorPawn.MoveRight");

	ACreativeModeLuaSpectatorPawn_MoveRight_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeLuaSpectatorPawn::MoveForward(float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeLuaSpectatorPawn.MoveForward");

	ACreativeModeLuaSpectatorPawn_MoveForward_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







class USpringArmComponent* ACreativeModeLuaSpectatorPawn::GetActiveSpringArm()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeLuaSpectatorPawn.GetActiveSpringArm");

	ACreativeModeLuaSpectatorPawn_GetActiveSpringArm_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void ACreativeCameraDeviceActor::UpdateFollowStatus()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.UpdateFollowStatus");

	ACreativeCameraDeviceActor_UpdateFollowStatus_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ACreativeCameraDeviceActor::UpdateFollowPos()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.UpdateFollowPos");

	ACreativeCameraDeviceActor_UpdateFollowPos_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ACreativeCameraDeviceActor::RotCamera(float Yaw, float Pitch)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.RotCamera");

	ACreativeCameraDeviceActor_RotCamera_Params params;
	params.Yaw = Yaw;
	params.Pitch = Pitch;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeCameraDeviceActor::OnEndViewTarget(class APlayerController* PC)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.OnEndViewTarget");

	ACreativeCameraDeviceActor_OnEndViewTarget_Params params;
	params.PC = PC;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeCameraDeviceActor::OnBecomeViewTarget(class APlayerController* PC)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.OnBecomeViewTarget");

	ACreativeCameraDeviceActor_OnBecomeViewTarget_Params params;
	params.PC = PC;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeCameraDeviceActor::MoveUp(float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.MoveUp");

	ACreativeCameraDeviceActor_MoveUp_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeCameraDeviceActor::MoveRight(float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.MoveRight");

	ACreativeCameraDeviceActor_MoveRight_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeCameraDeviceActor::MoveForward(float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.MoveForward");

	ACreativeCameraDeviceActor_MoveForward_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeCameraDeviceActor::LerpToTarget(float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.LerpToTarget");

	ACreativeCameraDeviceActor_LerpToTarget_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeCameraDeviceActor::LerpActor(float BlendPct)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.LerpActor");

	ACreativeCameraDeviceActor_LerpActor_Params params;
	params.BlendPct = BlendPct;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool ACreativeCameraDeviceActor::IsVecInvalid(const struct FVector& Vect)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.IsVecInvalid");

	ACreativeCameraDeviceActor_IsVecInvalid_Params params;
	params.Vect = Vect;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool ACreativeCameraDeviceActor::IsRotInvalid(const struct FRotator& Rot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.IsRotInvalid");

	ACreativeCameraDeviceActor_IsRotInvalid_Params params;
	params.Rot = Rot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void ACreativeCameraDeviceActor::InterpolateToSpringRotation(float LerpValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.InterpolateToSpringRotation");

	ACreativeCameraDeviceActor_InterpolateToSpringRotation_Params params;
	params.LerpValue = LerpValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool ACreativeCameraDeviceActor::InitStartPoint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.InitStartPoint");

	ACreativeCameraDeviceActor_InitStartPoint_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class USpringArmComponent* ACreativeCameraDeviceActor::GetSpringArmForCamera(class UCameraComponent* Camera)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.GetSpringArmForCamera");

	ACreativeCameraDeviceActor_GetSpringArmForCamera_Params params;
	params.Camera = Camera;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








float ACreativeCameraDeviceActor::GetLerpTime(float BlendTimeToGo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.GetLerpTime");

	ACreativeCameraDeviceActor_GetLerpTime_Params params;
	params.BlendTimeToGo = BlendTimeToGo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FVector ACreativeCameraDeviceActor::GetCameraPointPosition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.GetCameraPointPosition");

	ACreativeCameraDeviceActor_GetCameraPointPosition_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UCameraComponent* ACreativeCameraDeviceActor::GetActiveCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.GetActiveCamera");

	ACreativeCameraDeviceActor_GetActiveCamera_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FVector UCreativeCameraGetter::GetCameraLocation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraGetter.GetCameraLocation");

	UCreativeCameraGetter_GetCameraLocation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeCustomActorManager::UnhookUserConstructionScript(class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomActorManager.UnhookUserConstructionScript");

	UCreativeCustomActorManager_UnhookUserConstructionScript_Params params;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class AActor* UCreativeCustomActorManager::SpawnCustomActor(class UClass* ActorClass, const struct FTransform& Transform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomActorManager.SpawnCustomActor");

	UCreativeCustomActorManager_SpawnCustomActor_Params params;
	params.ActorClass = ActorClass;
	params.Transform = Transform;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeCustomActorManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomActorManager.ReceiveOnGameStateBeginPlay");

	UCreativeCustomActorManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeCustomActorManager::ReceiveClearAllCustomActor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomActorManager.ReceiveClearAllCustomActor");

	UCreativeCustomActorManager_ReceiveClearAllCustomActor_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeCustomActorManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomActorManager.OnGameStateBeginPlay");

	UCreativeCustomActorManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UCreativeCustomActorManager::IsUserConstructionScriptHooked(class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomActorManager.IsUserConstructionScriptHooked");

	UCreativeCustomActorManager_IsUserConstructionScriptHooked_Params params;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeCustomActorManager::HookUserConstructionScript(class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomActorManager.HookUserConstructionScript");

	UCreativeCustomActorManager_HookUserConstructionScript_Params params;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UCreativeCustomActorManager* UCreativeCustomActorManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomActorManager.Get");

	UCreativeCustomActorManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeCustomActorManager::ClearAllCustomActor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomActorManager.ClearAllCustomActor");

	UCreativeCustomActorManager_ClearAllCustomActor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeCustomCameraComponent::InterpolateToTargetRotation(float LerpValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomCameraComponent.InterpolateToTargetRotation");

	UCreativeCustomCameraComponent_InterpolateToTargetRotation_Params params;
	params.LerpValue = LerpValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeCustomCameraComponent::InterpolateToTargetFOV(float LerpValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomCameraComponent.InterpolateToTargetFOV");

	UCreativeCustomCameraComponent_InterpolateToTargetFOV_Params params;
	params.LerpValue = LerpValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeCustomParameterManager::RemoveCustomParameter(uint32_t ParameterID, uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomParameterManager.RemoveCustomParameter");

	UCreativeCustomParameterManager_RemoveCustomParameter_Params params;
	params.ParameterID = ParameterID;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeCustomParameterManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomParameterManager.ReceiveOnGameStateBeginPlay");

	UCreativeCustomParameterManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeCustomParameterManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomParameterManager.OnGameStateBeginPlay");

	UCreativeCustomParameterManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeCustomParameterManager::GetCustomParameterDataNodes(uint32_t ParameterID, TArray<struct FCreativeCustomParameterDataNode>* OutCustomParameterDataNodes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomParameterManager.GetCustomParameterDataNodes");

	UCreativeCustomParameterManager_GetCustomParameterDataNodes_Params params;
	params.ParameterID = ParameterID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutCustomParameterDataNodes != nullptr)
		*OutCustomParameterDataNodes = params.OutCustomParameterDataNodes;
}








class UCreativeCustomParameterManager* UCreativeCustomParameterManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomParameterManager.Get");

	UCreativeCustomParameterManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










void UCreativeCustomParameterManager::ChangeCustomParameter(uint32_t ParameterID, uint32_t PlayerKey, int8_t TeamID, TArray<unsigned char> DataContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomParameterManager.ChangeCustomParameter");

	UCreativeCustomParameterManager_ChangeCustomParameter_Params params;
	params.ParameterID = ParameterID;
	params.PlayerKey = PlayerKey;
	params.TeamID = TeamID;
	params.DataContent = DataContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void UCreativeCustomParameterManager::AddCustomParameter(uint32_t ParameterID, uint32_t PlayerKey, int8_t TeamID, TArray<unsigned char> DataContent, bool bPropagateToChildren)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomParameterManager.AddCustomParameter");

	UCreativeCustomParameterManager_AddCustomParameter_Params params;
	params.ParameterID = ParameterID;
	params.PlayerKey = PlayerKey;
	params.TeamID = TeamID;
	params.DataContent = DataContent;
	params.bPropagateToChildren = bPropagateToChildren;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








TArray<unsigned char> UCreativeCustomPrefabComponent::GetNodeSegmentContent(struct FCreativePrefabDataSegment* Segment)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomPrefabComponent.GetNodeSegmentContent");

	UCreativeCustomPrefabComponent_GetNodeSegmentContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Segment != nullptr)
		*Segment = params.Segment;

	return params.ReturnValue;
}









bool UCreativeCustomPrefabComponent::AddInstanceDataContent(TArray<unsigned char> Content, struct FCreativeCustomPrefabDataSegment* Segment)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomPrefabComponent.AddInstanceDataContent");

	UCreativeCustomPrefabComponent_AddInstanceDataContent_Params params;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Segment != nullptr)
		*Segment = params.Segment;

	return params.ReturnValue;
}







void UCreativeCustomUIDataComponent::SetCustomUIDataFromTransferNodes(TArray<struct FCreativeCustomUIDataTransferNode>* TransferNodes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomUIDataComponent.SetCustomUIDataFromTransferNodes");

	UCreativeCustomUIDataComponent_SetCustomUIDataFromTransferNodes_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TransferNodes != nullptr)
		*TransferNodes = params.TransferNodes;
}








void UCreativeCustomUIDataComponent::SetCustomUIDataById(uint32_t ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomUIDataComponent.SetCustomUIDataById");

	UCreativeCustomUIDataComponent_SetCustomUIDataById_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeCustomUIDataComponent::RemovePullRequestById(uint32_t ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomUIDataComponent.RemovePullRequestById");

	UCreativeCustomUIDataComponent_RemovePullRequestById_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeCustomUIDataComponent::RemoveCustomUI(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomUIDataComponent.RemoveCustomUI");

	UCreativeCustomUIDataComponent_RemoveCustomUI_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








TArray<struct FCreativeCustomUIDataTransferNode> UCreativeCustomUIDataComponent::GetCustomUIDataTransferNodes(TArray<uint32_t>* IDList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomUIDataComponent.GetCustomUIDataTransferNodes");

	UCreativeCustomUIDataComponent_GetCustomUIDataTransferNodes_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (IDList != nullptr)
		*IDList = params.IDList;

	return params.ReturnValue;
}









bool UCreativeCustomUIDataComponent::GetCustomUIContent(const struct FString& ID, TArray<unsigned char>* OutContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomUIDataComponent.GetCustomUIContent");

	UCreativeCustomUIDataComponent_GetCustomUIContent_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutContent != nullptr)
		*OutContent = params.OutContent;

	return params.ReturnValue;
}








void UCreativeCustomUIDataComponent::ChangeCustomUI(const struct FString& ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomUIDataComponent.ChangeCustomUI");

	UCreativeCustomUIDataComponent_ChangeCustomUI_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeCustomUIDataComponent::CallOnReceivePreCustomUIDataRemove(uint32_t ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomUIDataComponent.CallOnReceivePreCustomUIDataRemove");

	UCreativeCustomUIDataComponent_CallOnReceivePreCustomUIDataRemove_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeCustomUIDataComponent::CallOnReceivePostCustomUIDataChange(uint32_t ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomUIDataComponent.CallOnReceivePostCustomUIDataChange");

	UCreativeCustomUIDataComponent_CallOnReceivePostCustomUIDataChange_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeCustomUIDataComponent::CallOnReceivePostCustomUIDataAdd(uint32_t ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomUIDataComponent.CallOnReceivePostCustomUIDataAdd");

	UCreativeCustomUIDataComponent_CallOnReceivePostCustomUIDataAdd_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeCustomUIDataComponent::AddCustomUI(const struct FString& ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomUIDataComponent.AddCustomUI");

	UCreativeCustomUIDataComponent_AddCustomUI_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeCustomUIVFXWidget::SetImageBrushMaterialBlend(float V)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomUIVFXWidget.SetImageBrushMaterialBlend");

	UCreativeCustomUIVFXWidget_SetImageBrushMaterialBlend_Params params;
	params.V = V;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeDestructibleMeshActor::SetDamageEnable(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeDestructibleMeshActor.SetDamageEnable");

	ACreativeDestructibleMeshActor_SetDamageEnable_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void ACreativeDestructibleMeshActor::OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeDestructibleMeshActor.OnHit");

	ACreativeDestructibleMeshActor_OnHit_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeDestructibleMeshActor::InitHP(float fHP)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeDestructibleMeshActor.InitHP");

	ACreativeDestructibleMeshActor_InitHP_Params params;
	params.fHP = fHP;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







class UPhotonDestructibleMeshComponent* ACreativeDestructibleMeshActor::GetFracturedComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeDestructibleMeshActor.GetFracturedComponent");

	ACreativeDestructibleMeshActor_GetFracturedComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void ACreativeDestructibleMeshActor::AddCanDamageWeapon(const struct FString& Weapon)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeDestructibleMeshActor.AddCanDamageWeapon");

	ACreativeDestructibleMeshActor_AddCanDamageWeapon_Params params;
	params.Weapon = Weapon;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ACreativeDestructibleMeshBatchActor::RemoveAllCacheReplicationData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeDestructibleMeshBatchActor.RemoveAllCacheReplicationData");

	ACreativeDestructibleMeshBatchActor_RemoveAllCacheReplicationData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeDropItemCurveAnimComponent::StopItemClient(int Group, class AActor* Target)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeDropItemCurveAnimComponent.StopItemClient");

	UCreativeDropItemCurveAnimComponent_StopItemClient_Params params;
	params.Group = Group;
	params.Target = Target;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeDropItemCurveAnimComponent::OnParticleSystemComponentFinished(class UParticleSystemComponent* PSC)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeDropItemCurveAnimComponent.OnParticleSystemComponentFinished");

	UCreativeDropItemCurveAnimComponent_OnParticleSystemComponentFinished_Params params;
	params.PSC = PSC;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











bool UCreativeDropItemCurveAnimComponent::IsInViewport(class APlayerController* PC, int ViewportX, int ViewportY, const struct FVector& CenterPos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeDropItemCurveAnimComponent.IsInViewport");

	UCreativeDropItemCurveAnimComponent_IsInViewport_Params params;
	params.PC = PC;
	params.ViewportX = ViewportX;
	params.ViewportY = ViewportY;
	params.CenterPos = CenterPos;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UCreativeDropItemCurveAnimComponent::InitConfig(int BaseConfigID, struct FCreativeDropAnimConfig* Config)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeDropItemCurveAnimComponent.InitConfig");

	UCreativeDropItemCurveAnimComponent_InitConfig_Params params;
	params.BaseConfigID = BaseConfigID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Config != nullptr)
		*Config = params.Config;
}








void UCreativeDropItemCurveAnimComponent::DynamicReduceItemGroup(int CurrentGroup, int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeDropItemCurveAnimComponent.DynamicReduceItemGroup");

	UCreativeDropItemCurveAnimComponent_DynamicReduceItemGroup_Params params;
	params.CurrentGroup = CurrentGroup;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativeDropItemCurveAnimComponent::DecodeDropItemGroupID(int GroupID, int* ConfigID, int* Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeDropItemCurveAnimComponent.DecodeDropItemGroupID");

	UCreativeDropItemCurveAnimComponent_DecodeDropItemGroupID_Params params;
	params.GroupID = GroupID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ConfigID != nullptr)
		*ConfigID = params.ConfigID;
	if (Num != nullptr)
		*Num = params.Num;
}










void UCreativeDropItemCurveAnimComponent::AddItemClient(int Group, const struct FVector& InStartPos, const struct FVector& InEndPos, class AActor* Target)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeDropItemCurveAnimComponent.AddItemClient");

	UCreativeDropItemCurveAnimComponent_AddItemClient_Params params;
	params.Group = Group;
	params.InStartPos = InStartPos;
	params.InEndPos = InEndPos;
	params.Target = Target;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









class UDSLParserASTTree* UCreativeDSLParserLibrary::ParseDSLText(class UDSLParser* Parser, const struct FString& Source)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeDSLParserLibrary.ParseDSLText");

	UCreativeDSLParserLibrary_ParseDSLText_Params params;
	params.Parser = Parser;
	params.Source = Source;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class UDSLParserASTTree* UCreativeDSLParserLibrary::ParseDSLFile(class UDSLParser* Parser, const struct FString& FilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeDSLParserLibrary.ParseDSLFile");

	UCreativeDSLParserLibrary_ParseDSLFile_Params params;
	params.Parser = Parser;
	params.FilePath = FilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UCreativeDSLParserLibrary::LoadDSLGrammarFromString(class UDSLParser* Parser, const struct FString& GrammarText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeDSLParserLibrary.LoadDSLGrammarFromString");

	UCreativeDSLParserLibrary_LoadDSLGrammarFromString_Params params;
	params.Parser = Parser;
	params.GrammarText = GrammarText;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UCreativeDSLParserLibrary::LoadDSLGrammarFromFile(class UDSLParser* Parser, const struct FString& FilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeDSLParserLibrary.LoadDSLGrammarFromFile");

	UCreativeDSLParserLibrary_LoadDSLGrammarFromFile_Params params;
	params.Parser = Parser;
	params.FilePath = FilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UDSLParser* UCreativeDSLParserLibrary::CreateDSLParser(class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeDSLParserLibrary.CreateDSLParser");

	UCreativeDSLParserLibrary_CreateDSLParser_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UCreativeDSLParserLibrary::AddDSLGrammarRule(class UDSLParser* Parser, const struct FString& RuleName, const struct FString& RuleBody)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeDSLParserLibrary.AddDSLGrammarRule");

	UCreativeDSLParserLibrary_AddDSLGrammarRule_Params params;
	params.Parser = Parser;
	params.RuleName = RuleName;
	params.RuleBody = RuleBody;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UCreativeModeLiteComponent::OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeLiteComponent.OnReturnToPool");

	UCreativeModeLiteComponent_OnReturnToPool_Params params;
	params.NewOuter = NewOuter;
	params.RecycledSeq = RecycledSeq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










class UObject* UCreativeModeLiteComponent::GetObjectFromPool(int PoolId, class UObject* NewOuter, struct FString* InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeLiteComponent.GetObjectFromPool");

	UCreativeModeLiteComponent_GetObjectFromPool_Params params;
	params.PoolId = PoolId;
	params.NewOuter = NewOuter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InName != nullptr)
		*InName = params.InName;

	return params.ReturnValue;
}







void UCreativeModeGameModeBaseComponent::SetGameStateComponent(class UCreativeModeGameStateBaseComponent* NewGameStateComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameModeBaseComponent.SetGameStateComponent");

	UCreativeModeGameModeBaseComponent_SetGameStateComponent_Params params;
	params.NewGameStateComponent = NewGameStateComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeModeGameModeBaseComponent::ReceivePostInitializeComponents()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameModeBaseComponent.ReceivePostInitializeComponents");

	UCreativeModeGameModeBaseComponent_ReceivePostInitializeComponents_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







ECreativeModeGameType UCreativeModeGameModeBaseComponent::GetGameType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameModeBaseComponent.GetGameType");

	UCreativeModeGameModeBaseComponent_GetGameType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class ACreativeModeGameMode* UCreativeModeGameModeBaseComponent::GetGameMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameModeBaseComponent.GetGameMode");

	UCreativeModeGameModeBaseComponent_GetGameMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










class AActor* UCreativeModeGameModeBaseComponent::FindPlayerStartOverride(class AController* Player, const struct FString& IncomingName, bool bIsRevive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameModeBaseComponent.FindPlayerStartOverride");

	UCreativeModeGameModeBaseComponent_FindPlayerStartOverride_Params params;
	params.Player = Player;
	params.IncomingName = IncomingName;
	params.bIsRevive = bIsRevive;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void ACreativeModeEditorObject::UnregisterLiteComponent(class ULiteComponent* Component, bool Destroy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.UnregisterLiteComponent");

	ACreativeModeEditorObject_UnregisterLiteComponent_Params params;
	params.Component = Component;
	params.Destroy = Destroy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void ACreativeModeEditorObject::ShowSelectedEffect(bool ShowEff, const struct FLinearColor& OutlineColor, float OutlineThickness)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ShowSelectedEffect");

	ACreativeModeEditorObject_ShowSelectedEffect_Params params;
	params.ShowEff = ShowEff;
	params.OutlineColor = OutlineColor;
	params.OutlineThickness = OutlineThickness;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void ACreativeModeEditorObject::ShowOutlineEffect(bool ShowEff, class UMaterialInstance* Material, const struct FString& IgnoreTag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ShowOutlineEffect");

	ACreativeModeEditorObject_ShowOutlineEffect_Params params;
	params.ShowEff = ShowEff;
	params.Material = Material;
	params.IgnoreTag = IgnoreTag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeEditorObject::SetPhotographyMode(bool bIsCapturing)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.SetPhotographyMode");

	ACreativeModeEditorObject_SetPhotographyMode_Params params;
	params.bIsCapturing = bIsCapturing;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeEditorObject::SetLiteComponentTickEnable(bool bEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.SetLiteComponentTickEnable");

	ACreativeModeEditorObject_SetLiteComponentTickEnable_Params params;
	params.bEnabled = bEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeEditorObject::SetActorState(ECreativeModeActorState NewState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.SetActorState");

	ACreativeModeEditorObject_SetActorState_Params params;
	params.NewState = NewState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeEditorObject::ReturnObjectToPool(class UObject* Obj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ReturnObjectToPool");

	ACreativeModeEditorObject_ReturnObjectToPool_Params params;
	params.Obj = Obj;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeEditorObject::ReturnObjectsToPool(TArray<class UObject*> Objs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ReturnObjectsToPool");

	ACreativeModeEditorObject_ReturnObjectsToPool_Params params;
	params.Objs = Objs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeEditorObject::RegisterLiteComponent(class ULiteComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.RegisterLiteComponent");

	ACreativeModeEditorObject_RegisterLiteComponent_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ACreativeModeEditorObject::ReceivePostBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ReceivePostBeginPlay");

	ACreativeModeEditorObject_ReceivePostBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool ACreativeModeEditorObject::ReceiveIsDedicatedServer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ReceiveIsDedicatedServer");

	ACreativeModeEditorObject_ReceiveIsDedicatedServer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void ACreativeModeEditorObject::ReceiveInitializeLiteComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ReceiveInitializeLiteComponent");

	ACreativeModeEditorObject_ReceiveInitializeLiteComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ACreativeModeEditorObject::ReceiveInitCanEditFlag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ReceiveInitCanEditFlag");

	ACreativeModeEditorObject_ReceiveInitCanEditFlag_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool ACreativeModeEditorObject::ReceiveHasAuthority()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ReceiveHasAuthority");

	ACreativeModeEditorObject_ReceiveHasAuthority_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void ACreativeModeEditorObject::OnRepActorStateOverride(ECreativeModeActorState NewState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.OnRepActorStateOverride");

	ACreativeModeEditorObject_OnRepActorStateOverride_Params params;
	params.NewState = NewState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeEditorObject::OnRep_ActorState(ECreativeModeActorState LastState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.OnRep_ActorState");

	ACreativeModeEditorObject_OnRep_ActorState_Params params;
	params.LastState = LastState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool ACreativeModeEditorObject::InCollisionState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.InCollisionState");

	ACreativeModeEditorObject_InCollisionState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<class UObject*> ACreativeModeEditorObject::GetObjectsFromPool(TArray<struct FCreativePoolGetObjectParamInfo>* ObjectParams)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.GetObjectsFromPool");

	ACreativeModeEditorObject_GetObjectsFromPool_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ObjectParams != nullptr)
		*ObjectParams = params.ObjectParams;

	return params.ReturnValue;
}










class UObject* ACreativeModeEditorObject::GetObjectFromPool(int PoolId, class UObject* NewOuter, struct FString* InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.GetObjectFromPool");

	ACreativeModeEditorObject_GetObjectFromPool_Params params;
	params.PoolId = PoolId;
	params.NewOuter = NewOuter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InName != nullptr)
		*InName = params.InName;

	return params.ReturnValue;
}







TArray<class AActor*> ACreativeModeEditorObject::GetLocationToIgnoreActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.GetLocationToIgnoreActors");

	ACreativeModeEditorObject_GetLocationToIgnoreActors_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







ECreativeModeActorState ACreativeModeEditorObject::GetActorState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.GetActorState");

	ACreativeModeEditorObject_GetActorState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class ULiteComponent* ACreativeModeEditorObject::FindLiteComponentByClass(class UClass* ComponentClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.FindLiteComponentByClass");

	ACreativeModeEditorObject_FindLiteComponentByClass_Params params;
	params.ComponentClass = ComponentClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeModeGameStateBaseComponent::ReceivePostInitializeComponents()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateBaseComponent.ReceivePostInitializeComponents");

	UCreativeModeGameStateBaseComponent_ReceivePostInitializeComponents_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







ECreativeModePlayState UCreativeModeGameStateBaseComponent::GetPlayState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateBaseComponent.GetPlayState");

	UCreativeModeGameStateBaseComponent_GetPlayState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







ECreativeModeGameType UCreativeModeGameStateBaseComponent::GetGameType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateBaseComponent.GetGameType");

	UCreativeModeGameStateBaseComponent_GetGameType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class ACreativeModeGameState* UCreativeModeGameStateBaseComponent::GetGameState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateBaseComponent.GetGameState");

	UCreativeModeGameStateBaseComponent_GetGameState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeEventObject::ReHookObject()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeEventObject.ReHookObject");

	UCreativeEventObject_ReHookObject_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeEventObject::EventObjectConditionalBeginDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeEventObject.EventObjectConditionalBeginDestroy");

	UCreativeEventObject_EventObjectConditionalBeginDestroy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UCreativeExportSandboxApiLibrary::IsObjectValid(class UObject* Object)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeExportSandboxApiLibrary.IsObjectValid");

	UCreativeExportSandboxApiLibrary_IsObjectValid_Params params;
	params.Object = Object;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UCreativeExportSandboxApiLibrary::IsObjectA(class UObject* Object, const struct FString& ClassName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeExportSandboxApiLibrary.IsObjectA");

	UCreativeExportSandboxApiLibrary_IsObjectA_Params params;
	params.Object = Object;
	params.ClassName = ClassName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UWorld* UCreativeExportSandboxApiLibrary::GetObjectWorld(class UObject* Object)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeExportSandboxApiLibrary.GetObjectWorld");

	UCreativeExportSandboxApiLibrary_GetObjectWorld_Params params;
	params.Object = Object;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCreativeExportSandboxApiLibrary::GetObjectPathName(class UObject* Object)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeExportSandboxApiLibrary.GetObjectPathName");

	UCreativeExportSandboxApiLibrary_GetObjectPathName_Params params;
	params.Object = Object;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UObject* UCreativeExportSandboxApiLibrary::GetObjectOuter(class UObject* Object)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeExportSandboxApiLibrary.GetObjectOuter");

	UCreativeExportSandboxApiLibrary_GetObjectOuter_Params params;
	params.Object = Object;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCreativeExportSandboxApiLibrary::GetObjectName(class UObject* Object)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeExportSandboxApiLibrary.GetObjectName");

	UCreativeExportSandboxApiLibrary_GetObjectName_Params params;
	params.Object = Object;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCreativeExportSandboxApiLibrary::GetObjectFullName(class UObject* Object)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeExportSandboxApiLibrary.GetObjectFullName");

	UCreativeExportSandboxApiLibrary_GetObjectFullName_Params params;
	params.Object = Object;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UClass* UCreativeExportSandboxApiLibrary::GetObjectClass(class UObject* Object)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeExportSandboxApiLibrary.GetObjectClass");

	UCreativeExportSandboxApiLibrary_GetObjectClass_Params params;
	params.Object = Object;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class UFunction* UCreativeExportSandboxApiLibrary::FindObjectFunction(class UObject* Object, const struct FString& FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeExportSandboxApiLibrary.FindObjectFunction");

	UCreativeExportSandboxApiLibrary_FindObjectFunction_Params params;
	params.Object = Object;
	params.FunctionName = FunctionName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











TArray<int64_t> UCreativeGameAPIObject::GetPlayersInSphere(const struct FVector& SphereCenter, float SphereRadius, int TeamID, bool FilterNonPlayable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameAPIObject.GetPlayersInSphere");

	UCreativeGameAPIObject_GetPlayersInSphere_Params params;
	params.SphereCenter = SphereCenter;
	params.SphereRadius = SphereRadius;
	params.TeamID = TeamID;
	params.FilterNonPlayable = FilterNonPlayable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}













TArray<int64_t> UCreativeGameAPIObject::GetPlayersInRectangle(const struct FVector& RectangleCenter, float RectangleX, float RectangleY, float RectangleZ, int TeamID, bool FilterNonPlayable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameAPIObject.GetPlayersInRectangle");

	UCreativeGameAPIObject_GetPlayersInRectangle_Params params;
	params.RectangleCenter = RectangleCenter;
	params.RectangleX = RectangleX;
	params.RectangleY = RectangleY;
	params.RectangleZ = RectangleZ;
	params.TeamID = TeamID;
	params.FilterNonPlayable = FilterNonPlayable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void ACreativeModeGameMode::UnregisterLiteComponent(class ULiteComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.UnregisterLiteComponent");

	ACreativeModeGameMode_UnregisterLiteComponent_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeGameMode::SetShowDropEffectEnable(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.SetShowDropEffectEnable");

	ACreativeModeGameMode_SetShowDropEffectEnable_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeGameMode::SetLiteComponentTickEnable(bool bEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.SetLiteComponentTickEnable");

	ACreativeModeGameMode_SetLiteComponentTickEnable_Params params;
	params.bEnabled = bEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeGameMode::SetItemGenerate(bool bIsOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.SetItemGenerate");

	ACreativeModeGameMode_SetItemGenerate_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeGameMode::SetCurrentGameType(ECreativeModeGameType NewGameType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.SetCurrentGameType");

	ACreativeModeGameMode_SetCurrentGameType_Params params;
	params.NewGameType = NewGameType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeGameMode::ReInitItemGenerate(struct FString* NewItemClassPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.ReInitItemGenerate");

	ACreativeModeGameMode_ReInitItemGenerate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewItemClassPath != nullptr)
		*NewItemClassPath = params.NewItemClassPath;
}







void ACreativeModeGameMode::RegisterLiteComponent(class ULiteComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.RegisterLiteComponent");

	ACreativeModeGameMode_RegisterLiteComponent_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ACreativeModeGameMode::ReceiveInitializeLiteComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.ReceiveInitializeLiteComponent");

	ACreativeModeGameMode_ReceiveInitializeLiteComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool ACreativeModeGameMode::IsStandAloneGameMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.IsStandAloneGameMode");

	ACreativeModeGameMode_IsStandAloneGameMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool ACreativeModeGameMode::IsRestartPlayerUsePawnRotation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.IsRestartPlayerUsePawnRotation");

	ACreativeModeGameMode_IsRestartPlayerUsePawnRotation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UCreativeModeGameModeBaseComponent* ACreativeModeGameMode::GetCurrentModeComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.GetCurrentModeComponent");

	ACreativeModeGameMode_GetCurrentModeComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int ACreativeModeGameMode::GetCreativeModeRealTeamNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.GetCreativeModeRealTeamNum");

	ACreativeModeGameMode_GetCreativeModeRealTeamNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<int> ACreativeModeGameMode::GetCreativeModeRealTeamIDs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.GetCreativeModeRealTeamIDs");

	ACreativeModeGameMode_GetCreativeModeRealTeamIDs_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class ULiteComponent* ACreativeModeGameMode::FindLiteComponentByClass(class UClass* ComponentClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.FindLiteComponentByClass");

	ACreativeModeGameMode_FindLiteComponentByClass_Params params;
	params.ComponentClass = ComponentClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void ACreativeModeGameMode::DSPlayerKickOut(uint64_t UID, const struct FName& PlayerType, const struct FString& ExitReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.DSPlayerKickOut");

	ACreativeModeGameMode_DSPlayerKickOut_Params params;
	params.UID = UID;
	params.PlayerType = PlayerType;
	params.ExitReason = ExitReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










class AActor* ACreativeModeGameMode::CreativeModeFindPlayerStart(class AController* Player, const struct FString& IncomingName, bool bIsRevive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.CreativeModeFindPlayerStart");

	ACreativeModeGameMode_CreativeModeFindPlayerStart_Params params;
	params.Player = Player;
	params.IncomingName = IncomingName;
	params.bIsRevive = bIsRevive;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeModeGameModeComponent::ReceiveCallPlayStateFunction()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameModeComponent.ReceiveCallPlayStateFunction");

	UCreativeModeGameModeComponent_ReceiveCallPlayStateFunction_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeModeGameObject::UnregisterLiteComponent(class ULiteComponent* Component, bool Destroy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.UnregisterLiteComponent");

	UCreativeModeGameObject_UnregisterLiteComponent_Params params;
	params.Component = Component;
	params.Destroy = Destroy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeModeGameObject::ReturnObjectToPool(class UObject* Obj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.ReturnObjectToPool");

	UCreativeModeGameObject_ReturnObjectToPool_Params params;
	params.Obj = Obj;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeModeGameObject::ReturnObjectsToPool(TArray<class UObject*> Objs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.ReturnObjectsToPool");

	UCreativeModeGameObject_ReturnObjectsToPool_Params params;
	params.Objs = Objs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeModeGameObject::RegisterLiteComponent(class ULiteComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.RegisterLiteComponent");

	UCreativeModeGameObject_RegisterLiteComponent_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeModeGameObject::ReceivePostBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.ReceivePostBeginPlay");

	UCreativeModeGameObject_ReceivePostBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UCreativeModeGameObject::ReceiveIsDedicatedServer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.ReceiveIsDedicatedServer");

	UCreativeModeGameObject_ReceiveIsDedicatedServer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UCreativeModeGameObject::ReceiveHasAuthority()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.ReceiveHasAuthority");

	UCreativeModeGameObject_ReceiveHasAuthority_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeModeGameObject::ReceiveEndPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.ReceiveEndPlay");

	UCreativeModeGameObject_ReceiveEndPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeModeGameObject::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.ReceiveBeginPlay");

	UCreativeModeGameObject_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








TArray<class UObject*> UCreativeModeGameObject::GetObjectsFromPool(TArray<struct FCreativePoolGetObjectParamInfo>* ObjectParams)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.GetObjectsFromPool");

	UCreativeModeGameObject_GetObjectsFromPool_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ObjectParams != nullptr)
		*ObjectParams = params.ObjectParams;

	return params.ReturnValue;
}










class UObject* UCreativeModeGameObject::GetObjectFromPool(int PoolId, class UObject* NewOuter, struct FString* InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.GetObjectFromPool");

	UCreativeModeGameObject_GetObjectFromPool_Params params;
	params.PoolId = PoolId;
	params.NewOuter = NewOuter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InName != nullptr)
		*InName = params.InName;

	return params.ReturnValue;
}







TArray<struct FString> UCreativeModeGameObject::GetDynamicSpawnObjUUIDs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.GetDynamicSpawnObjUUIDs");

	UCreativeModeGameObject_GetDynamicSpawnObjUUIDs_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeGameParameterManager::SetGameParameterResumeNodes(TArray<struct FCreativeGameParameter> GameParameterNodes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.SetGameParameterResumeNodes");

	UCreativeGameParameterManager_SetGameParameterResumeNodes_Params params;
	params.GameParameterNodes = GameParameterNodes;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeGameParameterManager::RemoveGameParameter(const struct FString& ParameterKey, const struct FString& TemplateID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.RemoveGameParameter");

	UCreativeGameParameterManager_RemoveGameParameter_Params params;
	params.ParameterKey = ParameterKey;
	params.TemplateID = TemplateID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeGameParameterManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.ReceiveOnGameStateBeginPlay");

	UCreativeGameParameterManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeGameParameterManager::OnReceivePreGameParameterRemove(const struct FString& ParameterKey, const struct FString& TemplateID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.OnReceivePreGameParameterRemove");

	UCreativeGameParameterManager_OnReceivePreGameParameterRemove_Params params;
	params.ParameterKey = ParameterKey;
	params.TemplateID = TemplateID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativeGameParameterManager::OnReceivePostGameParameterChange(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.OnReceivePostGameParameterChange");

	UCreativeGameParameterManager_OnReceivePostGameParameterChange_Params params;
	params.ParameterKey = ParameterKey;
	params.TemplateID = TemplateID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativeGameParameterManager::OnReceivePostGameParameterAdd(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.OnReceivePostGameParameterAdd");

	UCreativeGameParameterManager_OnReceivePostGameParameterAdd_Params params;
	params.ParameterKey = ParameterKey;
	params.TemplateID = TemplateID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeGameParameterManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.OnGameStateBeginPlay");

	UCreativeGameParameterManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










bool UCreativeGameParameterManager::GetHistoryData(uint32_t HeadHash, unsigned char Seq, TArray<unsigned char>* OutContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.GetHistoryData");

	UCreativeGameParameterManager_GetHistoryData_Params params;
	params.HeadHash = HeadHash;
	params.Seq = Seq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutContent != nullptr)
		*OutContent = params.OutContent;

	return params.ReturnValue;
}








TArray<struct FCreativeGameParameter> UCreativeGameParameterManager::GetGameParameterResumeNodes(TArray<uint32_t> ParameterHeadHashs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.GetGameParameterResumeNodes");

	UCreativeGameParameterManager_GetGameParameterResumeNodes_Params params;
	params.ParameterHeadHashs = ParameterHeadHashs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UCreativeGameParameterManager::GetGameParameterContent(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char>* OutContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.GetGameParameterContent");

	UCreativeGameParameterManager_GetGameParameterContent_Params params;
	params.ParameterKey = ParameterKey;
	params.TemplateID = TemplateID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutContent != nullptr)
		*OutContent = params.OutContent;

	return params.ReturnValue;
}








class UCreativeGameParameterManager* UCreativeGameParameterManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.Get");

	UCreativeGameParameterManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UCreativeGameParameterManager::ChangeGameParameter(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.ChangeGameParameter");

	UCreativeGameParameterManager_ChangeGameParameter_Params params;
	params.ParameterKey = ParameterKey;
	params.TemplateID = TemplateID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativeGameParameterManager::AddGameParameter(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.AddGameParameter");

	UCreativeGameParameterManager_AddGameParameter_Params params;
	params.ParameterKey = ParameterKey;
	params.TemplateID = TemplateID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeGameState::UnregisterLiteComponent(class ULiteComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.UnregisterLiteComponent");

	ACreativeModeGameState_UnregisterLiteComponent_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeGameState::SetLiteComponentTickEnable(bool bEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.SetLiteComponentTickEnable");

	ACreativeModeGameState_SetLiteComponentTickEnable_Params params;
	params.bEnabled = bEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeGameState::SetLargeDataContent(TArray<unsigned char> NewContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.SetLargeDataContent");

	ACreativeModeGameState_SetLargeDataContent_Params params;
	params.NewContent = NewContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeGameState::SetEnvLuaRunning(bool bRunning)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.SetEnvLuaRunning");

	ACreativeModeGameState_SetEnvLuaRunning_Params params;
	params.bRunning = bRunning;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeGameState::SetCurrentGameType(ECreativeModeGameType NewGameType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.SetCurrentGameType");

	ACreativeModeGameState_SetCurrentGameType_Params params;
	params.NewGameType = NewGameType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ACreativeModeGameState::RPC_Replay_SetInstanceDataContent(uint32_t InstanceID, const struct FCreativeInstanceDataContent& InstanceDataContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.RPC_Replay_SetInstanceDataContent");

	ACreativeModeGameState_RPC_Replay_SetInstanceDataContent_Params params;
	params.InstanceID = InstanceID;
	params.InstanceDataContent = InstanceDataContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeGameState::RPC_Replay_GeneraicUGC_LuaImpl(TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.RPC_Replay_GeneraicUGC_LuaImpl");

	ACreativeModeGameState_RPC_Replay_GeneraicUGC_LuaImpl_Params params;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeGameState::RPC_Replay_GeneraicUGC(TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.RPC_Replay_GeneraicUGC");

	ACreativeModeGameState_RPC_Replay_GeneraicUGC_Params params;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeGameState::RegisterLiteComponent(class ULiteComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.RegisterLiteComponent");

	ACreativeModeGameState_RegisterLiteComponent_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ACreativeModeGameState::ReceiveInitializeLiteComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.ReceiveInitializeLiteComponent");

	ACreativeModeGameState_ReceiveInitializeLiteComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ACreativeModeGameState::ReceiveCreativeCollectGarbage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.ReceiveCreativeCollectGarbage");

	ACreativeModeGameState_ReceiveCreativeCollectGarbage_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ACreativeModeGameState::ReceiveAddEnvLuaRunningToCrashKit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.ReceiveAddEnvLuaRunningToCrashKit");

	ACreativeModeGameState_ReceiveAddEnvLuaRunningToCrashKit_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ACreativeModeGameState::ReceiveAddContextDataToCrashKit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.ReceiveAddContextDataToCrashKit");

	ACreativeModeGameState_ReceiveAddContextDataToCrashKit_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ACreativeModeGameState::OnViewportSizeChanged(const struct FVector2D& OldViewportSize, const struct FVector2D& NewViewportSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.OnViewportSizeChanged");

	ACreativeModeGameState_OnViewportSizeChanged_Params params;
	params.OldViewportSize = OldViewportSize;
	params.NewViewportSize = NewViewportSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ACreativeModeGameState::OnRep_LargeDataContent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.OnRep_LargeDataContent");

	ACreativeModeGameState_OnRep_LargeDataContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeGameState::OnRep_InitializeGameType(ECreativeModeGameType LastInitializeGameType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.OnRep_InitializeGameType");

	ACreativeModeGameState_OnRep_InitializeGameType_Params params;
	params.LastInitializeGameType = LastInitializeGameType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeGameState::OnRep_EnvLuaRunning(bool OldLuaRunning)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.OnRep_EnvLuaRunning");

	ACreativeModeGameState_OnRep_EnvLuaRunning_Params params;
	params.OldLuaRunning = OldLuaRunning;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeGameState::OnRep_CurrentStateComponent(class UCreativeModeGameStateBaseComponent* LastComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.OnRep_CurrentStateComponent");

	ACreativeModeGameState_OnRep_CurrentStateComponent_Params params;
	params.LastComponent = LastComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeGameState::OnRep_CurrentGameTypeReplicated(ECreativeModeGameType LastCurrentGameTypeReplicated)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.OnRep_CurrentGameTypeReplicated");

	ACreativeModeGameState_OnRep_CurrentGameTypeReplicated_Params params;
	params.LastCurrentGameTypeReplicated = LastCurrentGameTypeReplicated;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeGameState::OnRep_CreativeModTemplateId(int LastCreativeModTemplateId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.OnRep_CreativeModTemplateId");

	ACreativeModeGameState_OnRep_CreativeModTemplateId_Params params;
	params.LastCreativeModTemplateId = LastCreativeModTemplateId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeGameState::OnRep_CreativeModID(int LastCreativeModID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.OnRep_CreativeModID");

	ACreativeModeGameState_OnRep_CreativeModID_Params params;
	params.LastCreativeModID = LastCreativeModID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeGameState::OnRep_BlockySlotStrings(TArray<struct FExtendedBlockySlotString>* BlockySlotStrings)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.OnRep_BlockySlotStrings");

	ACreativeModeGameState_OnRep_BlockySlotStrings_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (BlockySlotStrings != nullptr)
		*BlockySlotStrings = params.BlockySlotStrings;
}







void ACreativeModeGameState::OnCurrentStateComponentChanged(class UCreativeModeGameStateBaseComponent* LastComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.OnCurrentStateComponentChanged");

	ACreativeModeGameState_OnCurrentStateComponentChanged_Params params;
	params.LastComponent = LastComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModeGameState::OnClientRecordingStateChange(EClientRecordingType Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.OnClientRecordingStateChange");

	ACreativeModeGameState_OnClientRecordingStateChange_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool ACreativeModeGameState::IsOfficialGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.IsOfficialGame");

	ACreativeModeGameState_IsOfficialGame_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool ACreativeModeGameState::IsEditorMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.IsEditorMode");

	ACreativeModeGameState_IsEditorMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool ACreativeModeGameState::IsDemoGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.IsDemoGame");

	ACreativeModeGameState_IsDemoGame_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool ACreativeModeGameState::IsCreativeMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.IsCreativeMode");

	ACreativeModeGameState_IsCreativeMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool ACreativeModeGameState::IsCreativeEditor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.IsCreativeEditor");

	ACreativeModeGameState_IsCreativeEditor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool ACreativeModeGameState::IsAIUseDynamicBehaviorTaskNode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.IsAIUseDynamicBehaviorTaskNode");

	ACreativeModeGameState_IsAIUseDynamicBehaviorTaskNode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void ACreativeModeGameState::InitCreativeModID(int ModID, int TemplateID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.InitCreativeModID");

	ACreativeModeGameState_InitCreativeModID_Params params;
	params.ModID = ModID;
	params.TemplateID = TemplateID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







ECreativeModePlayState ACreativeModeGameState::GetPlayState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetPlayState");

	ACreativeModeGameState_GetPlayState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<unsigned char> ACreativeModeGameState::GetLargeDataContent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetLargeDataContent");

	ACreativeModeGameState_GetLargeDataContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







ECreativeModeGameType ACreativeModeGameState::GetInitializeGameType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetInitializeGameType");

	ACreativeModeGameState_GetInitializeGameType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool ACreativeModeGameState::GetEnvLuaRunning()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetEnvLuaRunning");

	ACreativeModeGameState_GetEnvLuaRunning_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}













TArray<struct FString> ACreativeModeGameState::GetDisableDistanceLevelsOutsideBox(float X, float Y, int W, int L, float RotationAngle, bool bUseFilter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetDisableDistanceLevelsOutsideBox");

	ACreativeModeGameState_GetDisableDistanceLevelsOutsideBox_Params params;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.L = L;
	params.RotationAngle = RotationAngle;
	params.bUseFilter = bUseFilter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UCreativeModeGameStateBaseComponent* ACreativeModeGameState::GetCurrentStateComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetCurrentStateComponent");

	ACreativeModeGameState_GetCurrentStateComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







ECreativeModeGameType ACreativeModeGameState::GetCurrentGameTypeReplicated()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetCurrentGameTypeReplicated");

	ACreativeModeGameState_GetCurrentGameTypeReplicated_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







ECreativeModeGameType ACreativeModeGameState::GetCurrentGameType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetCurrentGameType");

	ACreativeModeGameState_GetCurrentGameType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int ACreativeModeGameState::GetCurCreativeType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetCurCreativeType");

	ACreativeModeGameState_GetCurCreativeType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString ACreativeModeGameState::GetCurCreativeModResList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetCurCreativeModResList");

	ACreativeModeGameState_GetCurCreativeModResList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString ACreativeModeGameState::GetCurCreativeModMapID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetCurCreativeModMapID");

	ACreativeModeGameState_GetCurCreativeModMapID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int ACreativeModeGameState::GetCurCreativeModID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetCurCreativeModID");

	ACreativeModeGameState_GetCurCreativeModID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int ACreativeModeGameState::GetCreativeModTemplateId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetCreativeModTemplateId");

	ACreativeModeGameState_GetCreativeModTemplateId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int ACreativeModeGameState::GetCreativeModID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetCreativeModID");

	ACreativeModeGameState_GetCreativeModID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class ULiteComponent* ACreativeModeGameState::FindLiteComponentByClass(class UClass* ComponentClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.FindLiteComponentByClass");

	ACreativeModeGameState_FindLiteComponentByClass_Params params;
	params.ComponentClass = ComponentClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool ACreativeModeGameState::FilterLevelByName(const struct FName& LevelName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.FilterLevelByName");

	ACreativeModeGameState_FilterLevelByName_Params params;
	params.LevelName = LevelName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void ACreativeModeGameState::ClientSetCurrentStateComponent(class UCreativeModeGameStateBaseComponent* CurStateComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.ClientSetCurrentStateComponent");

	ACreativeModeGameState_ClientSetCurrentStateComponent_Params params;
	params.CurStateComponent = CurStateComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ACreativeModeGameState::ClearInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.ClearInstance");

	ACreativeModeGameState_ClearInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ACreativeModeGameState::ClearAndReImportInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.ClearAndReImportInstance");

	ACreativeModeGameState_ClearAndReImportInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool ACreativeModeGameState::CanShowDropEffectByItemID(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.CanShowDropEffectByItemID");

	ACreativeModeGameState_CanShowDropEffectByItemID_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeModeGameStateComponent::SetPlayState(ECreativeModePlayState newPlayState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateComponent.SetPlayState");

	UCreativeModeGameStateComponent_SetPlayState_Params params;
	params.newPlayState = newPlayState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeModeGameStateComponent::OnRep_RuntimePlayerBattleDataObject()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateComponent.OnRep_RuntimePlayerBattleDataObject");

	UCreativeModeGameStateComponent_OnRep_RuntimePlayerBattleDataObject_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeModeGameStateComponent::OnRep_IntegralMechanismComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateComponent.OnRep_IntegralMechanismComponent");

	UCreativeModeGameStateComponent_OnRep_IntegralMechanismComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeModeGameStateComponent::OnRep_CurPlayState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateComponent.OnRep_CurPlayState");

	UCreativeModeGameStateComponent_OnRep_CurPlayState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







ECreativeModePlayState UCreativeModeGameStateComponent::GetPlayState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateComponent.GetPlayState");

	UCreativeModeGameStateComponent_GetPlayState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeGlobalApiObject::Print(const struct FString& LogText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGlobalApiObject.Print");

	UCreativeGlobalApiObject_Print_Params params;
	params.LogText = LogText;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










float UCreativeGlobalApiObject::CPPExecutionConsumptionTest(int A, float B, double C)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGlobalApiObject.CPPExecutionConsumptionTest");

	UCreativeGlobalApiObject_CPPExecutionConsumptionTest_Params params;
	params.A = A;
	params.B = B;
	params.C = C;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










void UCreativeGridLevelsManager::UpdateBatchActorInstances(const struct FString& GridName, int AssetId, int MaterialID, bool ReplaceAll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.UpdateBatchActorInstances");

	UCreativeGridLevelsManager_UpdateBatchActorInstances_Params params;
	params.GridName = GridName;
	params.AssetId = AssetId;
	params.MaterialID = MaterialID;
	params.ReplaceAll = ReplaceAll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeGridLevelsManager::UnLoadGridLevelsBatchActor(const struct FString& GridName, const struct FIntVector& CellIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.UnLoadGridLevelsBatchActor");

	UCreativeGridLevelsManager_UnLoadGridLevelsBatchActor_Params params;
	params.GridName = GridName;
	params.CellIndex = CellIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeGridLevelsManager::StaticMeshObjectRelieveBatch(struct FString* InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.StaticMeshObjectRelieveBatch");

	UCreativeGridLevelsManager_StaticMeshObjectRelieveBatch_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InstanceID != nullptr)
		*InstanceID = params.InstanceID;
}







void UCreativeGridLevelsManager::StaticMeshObjectReBatch(struct FString* InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.StaticMeshObjectReBatch");

	UCreativeGridLevelsManager_StaticMeshObjectReBatch_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InstanceID != nullptr)
		*InstanceID = params.InstanceID;
}








bool UCreativeGridLevelsManager::RemoveObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.RemoveObject");

	UCreativeGridLevelsManager_RemoveObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeGridLevelsManager::ReceiveRegistInstanceValueListener()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ReceiveRegistInstanceValueListener");

	UCreativeGridLevelsManager_ReceiveRegistInstanceValueListener_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void UCreativeGridLevelsManager::ReceiveDelayUpdateBatchActorInstances(const struct FString& GridName, int AssetId, int MaterialID, bool ReplaceAll, float MoveForwardTimeStamp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ReceiveDelayUpdateBatchActorInstances");

	UCreativeGridLevelsManager_ReceiveDelayUpdateBatchActorInstances_Params params;
	params.GridName = GridName;
	params.AssetId = AssetId;
	params.MaterialID = MaterialID;
	params.ReplaceAll = ReplaceAll;
	params.MoveForwardTimeStamp = MoveForwardTimeStamp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeGridLevelsManager::ReceiveClearAllData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ReceiveClearAllData");

	UCreativeGridLevelsManager_ReceiveClearAllData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UCreativeGridLevelsManager::ReceiveCheckObjectCanBatch(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ReceiveCheckObjectCanBatch");

	UCreativeGridLevelsManager_ReceiveCheckObjectCanBatch_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UCreativeGridLevelsManager::ObjectAddToGridCellMap(const struct FString& GridName, const struct FIntVector& Index, const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ObjectAddToGridCellMap");

	UCreativeGridLevelsManager_ObjectAddToGridCellMap_Params params;
	params.GridName = GridName;
	params.Index = Index;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeGridLevelsManager::LoadGridLevelsBatchActor(const struct FString& GridName, const struct FIntVector& CellIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.LoadGridLevelsBatchActor");

	UCreativeGridLevelsManager_LoadGridLevelsBatchActor_Params params;
	params.GridName = GridName;
	params.CellIndex = CellIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UCreativeGridLevelsManager::IsCreativeEidtMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.IsCreativeEidtMode");

	UCreativeGridLevelsManager_IsCreativeEidtMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UCreativeGridLevelsManager::GridCellMapRemoveObject(const struct FString& GridName, const struct FIntVector& Index, const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GridCellMapRemoveObject");

	UCreativeGridLevelsManager_GridCellMapRemoveObject_Params params;
	params.GridName = GridName;
	params.Index = Index;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FString UCreativeGridLevelsManager::GetStaticMeshBatchActorPath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetStaticMeshBatchActorPath");

	UCreativeGridLevelsManager_GetStaticMeshBatchActorPath_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class ACreativeDestructibleMeshBatchActor* UCreativeGridLevelsManager::GetSingleDestructibleMeshBatchActor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetSingleDestructibleMeshBatchActor");

	UCreativeGridLevelsManager_GetSingleDestructibleMeshBatchActor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class ACreativeModeStaticMeshBatchActor* UCreativeGridLevelsManager::GetSingleBatchActor(const struct FString& GridName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetSingleBatchActor");

	UCreativeGridLevelsManager_GetSingleBatchActor_Params params;
	params.GridName = GridName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UCreativeGridLevelsManager::GetRelieveBatchDistance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetRelieveBatchDistance");

	UCreativeGridLevelsManager_GetRelieveBatchDistance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UCreativeGridLevelsManager::GetReBatchDistance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetReBatchDistance");

	UCreativeGridLevelsManager_GetReBatchDistance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FIntVector UCreativeGridLevelsManager::GetOnCellIndex(const struct FString& GridName, const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetOnCellIndex");

	UCreativeGridLevelsManager_GetOnCellIndex_Params params;
	params.GridName = GridName;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FTransform UCreativeGridLevelsManager::GetObjectTransform(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetObjectTransform");

	UCreativeGridLevelsManager_GetObjectTransform_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








ECreativeModeActorStreamingType UCreativeGridLevelsManager::GetObjectStreamingType(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetObjectStreamingType");

	UCreativeGridLevelsManager_GetObjectStreamingType_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCreativeGridLevelsManager::GetObjectRuntimeGrid(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetObjectRuntimeGrid");

	UCreativeGridLevelsManager_GetObjectRuntimeGrid_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










struct FIntVector UCreativeGridLevelsManager::GetObjectOnCellIndexByLocation(const struct FString& InstanceID, const struct FString& GridName, const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetObjectOnCellIndexByLocation");

	UCreativeGridLevelsManager_GetObjectOnCellIndexByLocation_Params params;
	params.InstanceID = InstanceID;
	params.GridName = GridName;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FIntVector UCreativeGridLevelsManager::GetObjectOnCellIndex(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetObjectOnCellIndex");

	UCreativeGridLevelsManager_GetObjectOnCellIndex_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeGridLevelsManager::GetObjectIsPrefab(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetObjectIsPrefab");

	UCreativeGridLevelsManager_GetObjectIsPrefab_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UCreativeGridLevelsManager::GetObjectAssetID(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetObjectAssetID");

	UCreativeGridLevelsManager_GetObjectAssetID_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








float UCreativeGridLevelsManager::GetGridLoadingRange(const struct FString& GridName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetGridLoadingRange");

	UCreativeGridLevelsManager_GetGridLoadingRange_Params params;
	params.GridName = GridName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<struct FString> UCreativeGridLevelsManager::GetGridList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetGridList");

	UCreativeGridLevelsManager_GetGridList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UCreativeGridLevelsManager::GetDestructibleMeshBatchActorPath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetDestructibleMeshBatchActorPath");

	UCreativeGridLevelsManager_GetDestructibleMeshBatchActorPath_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UCreativeGridLevelsManager::GetDefaultGridName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetDefaultGridName");

	UCreativeGridLevelsManager_GetDefaultGridName_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FVector2D UCreativeGridLevelsManager::GetCellWidthHeight(const struct FString& GridName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetCellWidthHeight");

	UCreativeGridLevelsManager_GetCellWidthHeight_Params params;
	params.GridName = GridName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FVector UCreativeGridLevelsManager::GetCellCenterLocation(const struct FString& GridName, const struct FIntVector& CellIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetCellCenterLocation");

	UCreativeGridLevelsManager_GetCellCenterLocation_Params params;
	params.GridName = GridName;
	params.CellIndex = CellIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









int UCreativeGridLevelsManager::GetAxisIndex(float pos, float BlockLenght)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetAxisIndex");

	UCreativeGridLevelsManager_GetAxisIndex_Params params;
	params.pos = pos;
	params.BlockLenght = BlockLenght;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UCreativeGridLevelsManager* UCreativeGridLevelsManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.Get");

	UCreativeGridLevelsManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeGridLevelsManager::CheckObjectBeRelieveBatch(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.CheckObjectBeRelieveBatch");

	UCreativeGridLevelsManager_CheckObjectBeRelieveBatch_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeGridLevelsManager::CheckObjectBeBatch(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.CheckObjectBeBatch");

	UCreativeGridLevelsManager_CheckObjectBeBatch_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeGridLevelsManager::CheckAndRemoveObjectForBatchData(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.CheckAndRemoveObjectForBatchData");

	UCreativeGridLevelsManager_CheckAndRemoveObjectForBatchData_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeGridLevelsManager::CheckAndAddObjectToBatchData(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.CheckAndAddObjectToBatchData");

	UCreativeGridLevelsManager_CheckAndAddObjectToBatchData_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeGridLevelsManager::ChangeObjectTransform(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ChangeObjectTransform");

	UCreativeGridLevelsManager_ChangeObjectTransform_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UCreativeGridLevelsManager::ChangeObjectStreamingType(const struct FString& InstanceID, ECreativeModeActorStreamingType NewStremaingType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ChangeObjectStreamingType");

	UCreativeGridLevelsManager_ChangeObjectStreamingType_Params params;
	params.InstanceID = InstanceID;
	params.NewStremaingType = NewStremaingType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UCreativeGridLevelsManager::ChangeObjectMaterialIds()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ChangeObjectMaterialIds");

	UCreativeGridLevelsManager_ChangeObjectMaterialIds_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeGridLevelsManager::ChangeObjectMaterialId(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ChangeObjectMaterialId");

	UCreativeGridLevelsManager_ChangeObjectMaterialId_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UCreativeGridLevelsManager::ChangeObjectIsPrefab(const struct FString& InstanceID, bool bIsPrefab)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ChangeObjectIsPrefab");

	UCreativeGridLevelsManager_ChangeObjectIsPrefab_Params params;
	params.InstanceID = InstanceID;
	params.bIsPrefab = bIsPrefab;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeGridLevelsManager::AddObjectToGridLevels(struct FString* InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.AddObjectToGridLevels");

	UCreativeGridLevelsManager_AddObjectToGridLevels_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InstanceID != nullptr)
		*InstanceID = params.InstanceID;

	return params.ReturnValue;
}





void UCreativeGridLevelsManager::ActivateAllAlwaysLoadCellIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ActivateAllAlwaysLoadCellIndex");

	UCreativeGridLevelsManager_ActivateAllAlwaysLoadCellIndex_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class UCreativeGroupManager* UCreativeGroupManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGroupManager.Get");

	UCreativeGroupManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











bool UCreativeGuideComponent::SweepSingleByChannel(const struct FVector& Start, const struct FVector& End, TArray<class AActor*> IgnoreActors, struct FHitResult* OutHit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGuideComponent.SweepSingleByChannel");

	UCreativeGuideComponent_SweepSingleByChannel_Params params;
	params.Start = Start;
	params.End = End;
	params.IgnoreActors = IgnoreActors;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}







void UCreativeGuideComponent::GenereateSplineMeshes(TArray<struct FVector> Points)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGuideComponent.GenereateSplineMeshes");

	UCreativeGuideComponent_GenereateSplineMeshes_Params params;
	params.Points = Points;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UCreativeGuideMeshComponent::OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGuideMeshComponent.OnReturnToPool");

	UCreativeGuideMeshComponent_OnReturnToPool_Params params;
	params.NewOuter = NewOuter;
	params.RecycledSeq = RecycledSeq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UCreativeGuideMeshComponent::OnPickFromPool(class UObject* NewOuter, const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGuideMeshComponent.OnPickFromPool");

	UCreativeGuideMeshComponent_OnPickFromPool_Params params;
	params.NewOuter = NewOuter;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool ACreativeModeInGameManagerCenter::GetIsBeginPlayEnded()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeInGameManagerCenter.GetIsBeginPlayEnded");

	ACreativeModeInGameManagerCenter_GetIsBeginPlayEnded_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeInstanceManager::UpdateModBinInstanceCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.UpdateModBinInstanceCount");

	UCreativeInstanceManager_UpdateModBinInstanceCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeInstanceManager::SetModBinInstanceCount(int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.SetModBinInstanceCount");

	UCreativeInstanceManager_SetModBinInstanceCount_Params params;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










bool UCreativeInstanceManager::SetInstanceValue(const struct FString& InstanceID, const struct FString& Key, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.SetInstanceValue");

	UCreativeInstanceManager_SetInstanceValue_Params params;
	params.InstanceID = InstanceID;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UCreativeInstanceManager::SetInstanceDataContents(uint16_t Seq, TArray<struct FCreativeInstanceDataContent> InstanceDataContents)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.SetInstanceDataContents");

	UCreativeInstanceManager_SetInstanceDataContents_Params params;
	params.Seq = Seq;
	params.InstanceDataContents = InstanceDataContents;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeInstanceManager::SetInstanceContainerContent(TArray<unsigned char> ContainerContent, uint32_t NewSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.SetInstanceContainerContent");

	UCreativeInstanceManager_SetInstanceContainerContent_Params params;
	params.ContainerContent = ContainerContent;
	params.NewSeq = NewSeq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeInstanceManager::SendModBinaryDataToReplay(TArray<unsigned char>* InBinaryData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.SendModBinaryDataToReplay");

	UCreativeInstanceManager_SendModBinaryDataToReplay_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InBinaryData != nullptr)
		*InBinaryData = params.InBinaryData;
}





void UCreativeInstanceManager::ReqInstanceContainerContentTimeoutCheck()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.ReqInstanceContainerContentTimeoutCheck");

	UCreativeInstanceManager_ReqInstanceContainerContentTimeoutCheck_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeInstanceManager::ReqInstanceContainerContentEnd(bool IsTimeout)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.ReqInstanceContainerContentEnd");

	UCreativeInstanceManager_ReqInstanceContainerContentEnd_Params params;
	params.IsTimeout = IsTimeout;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeInstanceManager::RemoveInstance(const struct FString& ID, bool bSkipCheck)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.RemoveInstance");

	UCreativeInstanceManager_RemoveInstance_Params params;
	params.ID = ID;
	params.bSkipCheck = bSkipCheck;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UCreativeInstanceManager::RemoveCppInstanceNode(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.RemoveCppInstanceNode");

	UCreativeInstanceManager_RemoveCppInstanceNode_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeInstanceManager::RecordInstanceDataListToReplayRPC(TArray<struct FString> InstanceIDs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.RecordInstanceDataListToReplayRPC");

	UCreativeInstanceManager_RecordInstanceDataListToReplayRPC_Params params;
	params.InstanceIDs = InstanceIDs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeInstanceManager::RecordAllInstanceDataByRPC()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.RecordAllInstanceDataByRPC");

	UCreativeInstanceManager_RecordAllInstanceDataByRPC_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeInstanceManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.ReceiveOnGameStateBeginPlay");

	UCreativeInstanceManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeInstanceManager::OnRep_RPCReplicatedInstanceContainerSeq()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.OnRep_RPCReplicatedInstanceContainerSeq");

	UCreativeInstanceManager_OnRep_RPCReplicatedInstanceContainerSeq_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeInstanceManager::OnRep_ModBinInstanceCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.OnRep_ModBinInstanceCount");

	UCreativeInstanceManager_OnRep_ModBinInstanceCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeInstanceManager::OnReceivePreInstanceRemove(const struct FString& ID, bool IsRollback)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.OnReceivePreInstanceRemove");

	UCreativeInstanceManager_OnReceivePreInstanceRemove_Params params;
	params.ID = ID;
	params.IsRollback = IsRollback;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativeInstanceManager::OnReceivePostInstanceChange(const struct FString& ID, TArray<unsigned char> Content, bool IsRollback)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.OnReceivePostInstanceChange");

	UCreativeInstanceManager_OnReceivePostInstanceChange_Params params;
	params.ID = ID;
	params.Content = Content;
	params.IsRollback = IsRollback;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativeInstanceManager::OnReceivePostInstanceAdd(const struct FString& ID, TArray<unsigned char> Content, bool IsRollback)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.OnReceivePostInstanceAdd");

	UCreativeInstanceManager_OnReceivePostInstanceAdd_Params params;
	params.ID = ID;
	params.Content = Content;
	params.IsRollback = IsRollback;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeInstanceManager::OnReceiveClearNotReplicatedData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.OnReceiveClearNotReplicatedData");

	UCreativeInstanceManager_OnReceiveClearNotReplicatedData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeInstanceManager::OnReadyToAddInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.OnReadyToAddInstance");

	UCreativeInstanceManager_OnReadyToAddInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeInstanceManager::OnPlayerControllerBeginPlay(class APlayerController* PlayerController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.OnPlayerControllerBeginPlay");

	UCreativeInstanceManager_OnPlayerControllerBeginPlay_Params params;
	params.PlayerController = PlayerController;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeInstanceManager::OnGameTypeChanged(unsigned char LastGameType, unsigned char CurrentGameType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.OnGameTypeChanged");

	UCreativeInstanceManager_OnGameTypeChanged_Params params;
	params.LastGameType = LastGameType;
	params.CurrentGameType = CurrentGameType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeInstanceManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.OnGameStateBeginPlay");

	UCreativeInstanceManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UCreativeInstanceManager::IsInstanceReplicatTreeReplicateComplete()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.IsInstanceReplicatTreeReplicateComplete");

	UCreativeInstanceManager_IsInstanceReplicatTreeReplicateComplete_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UCreativeInstanceManager::IsInstanceDataTreeReplicateComplete()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.IsInstanceDataTreeReplicateComplete");

	UCreativeInstanceManager_IsInstanceDataTreeReplicateComplete_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeInstanceManager::IsAssetRuntimeObjectBox(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.IsAssetRuntimeObjectBox");

	UCreativeInstanceManager_IsAssetRuntimeObjectBox_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UCreativeInstanceManager::InitExpiredAndDebugAssetID(TArray<int>* ExpiredAssets, TArray<int>* DebugAssets)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.InitExpiredAndDebugAssetID");

	UCreativeInstanceManager_InitExpiredAndDebugAssetID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ExpiredAssets != nullptr)
		*ExpiredAssets = params.ExpiredAssets;
	if (DebugAssets != nullptr)
		*DebugAssets = params.DebugAssets;
}







bool UCreativeInstanceManager::HasReadyToAddInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.HasReadyToAddInstance");

	UCreativeInstanceManager_HasReadyToAddInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UCreativeInstanceManager::HasAuthorityOrReplay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.HasAuthorityOrReplay");

	UCreativeInstanceManager_HasAuthorityOrReplay_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCreativeInstanceManager::GetObjectAssetPath(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetObjectAssetPath");

	UCreativeInstanceManager_GetObjectAssetPath_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UCreativeInstanceManager::GetModBinInstanceCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetModBinInstanceCount");

	UCreativeInstanceManager_GetModBinInstanceCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeInstanceManager::GetModBinaryDataFromReplay(TArray<unsigned char> InBinaryData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetModBinaryDataFromReplay");

	UCreativeInstanceManager_GetModBinaryDataFromReplay_Params params;
	params.InBinaryData = InBinaryData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeInstanceManager::GetInstanceIsDestructible(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetInstanceIsDestructible");

	UCreativeInstanceManager_GetInstanceIsDestructible_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeInstanceManager::GetInstanceIsCustomUI(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetInstanceIsCustomUI");

	UCreativeInstanceManager_GetInstanceIsCustomUI_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UCreativeInstanceManager::GetInstanceDataTreeCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetInstanceDataTreeCount");

	UCreativeInstanceManager_GetInstanceDataTreeCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<struct FCreativeInstanceRespondPullDataSegment> UCreativeInstanceManager::GetInstanceDataContents(TArray<uint32_t> InstanceIDs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetInstanceDataContents");

	UCreativeInstanceManager_GetInstanceDataContents_Params params;
	params.InstanceIDs = InstanceIDs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<unsigned char> UCreativeInstanceManager::GetInstanceDataContent(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetInstanceDataContent");

	UCreativeInstanceManager_GetInstanceDataContent_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UCreativeInstanceManager::GetInstanceContainerCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetInstanceContainerCount");

	UCreativeInstanceManager_GetInstanceContainerCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









TArray<unsigned char> UCreativeInstanceManager::GetInstanceContainerContent(uint32_t BaseSeq, uint32_t* OutSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetInstanceContainerContent");

	UCreativeInstanceManager_GetInstanceContainerContent_Params params;
	params.BaseSeq = BaseSeq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutSeq != nullptr)
		*OutSeq = params.OutSeq;

	return params.ReturnValue;
}








TArray<struct FBoxSphereBounds> UCreativeInstanceManager::GetInstanceBoxSphereBoundsList(TArray<struct FString> InstanceIDs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetInstanceBoxSphereBoundsList");

	UCreativeInstanceManager_GetInstanceBoxSphereBoundsList_Params params;
	params.InstanceIDs = InstanceIDs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBox UCreativeInstanceManager::GetInstanceBox(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetInstanceBox");

	UCreativeInstanceManager_GetInstanceBox_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FCreativeInstanceNode UCreativeInstanceManager::GetCppInstanceNode(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetCppInstanceNode");

	UCreativeInstanceManager_GetCppInstanceNode_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBox UCreativeInstanceManager::GetAssetBox(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetAssetBox");

	UCreativeInstanceManager_GetAssetBox_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UCreativeInstanceManager* UCreativeInstanceManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.Get");

	UCreativeInstanceManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








uint32_t UCreativeInstanceManager::GenerateDestructionUniqueID(uint32_t ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GenerateDestructionUniqueID");

	UCreativeInstanceManager_GenerateDestructionUniqueID_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCreativeInstanceManager::DestroyInstance(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.DestroyInstance");

	UCreativeInstanceManager_DestroyInstance_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UCreativeInstanceManager::ClientPreAddInstance(const struct FString& ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.ClientPreAddInstance");

	UCreativeInstanceManager_ClientPreAddInstance_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeInstanceManager::ClearInstanceTree()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.ClearInstanceTree");

	UCreativeInstanceManager_ClearInstanceTree_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeInstanceManager::CheckAndReqRPCReplicatedInstanceContainerContent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.CheckAndReqRPCReplicatedInstanceContainerContent");

	UCreativeInstanceManager_CheckAndReqRPCReplicatedInstanceContainerContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativeInstanceManager::ChangeInstance(const struct FString& ID, TArray<unsigned char> Content, bool bCallReceiveChange)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.ChangeInstance");

	UCreativeInstanceManager_ChangeInstance_Params params;
	params.ID = ID;
	params.Content = Content;
	params.bCallReceiveChange = bCallReceiveChange;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativeInstanceManager::ChangeCppInstanceNode(const struct FString& ID, const struct FString& Key, struct FCreativeInstanceNode* Node)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.ChangeCppInstanceNode");

	UCreativeInstanceManager_ChangeCppInstanceNode_Params params;
	params.ID = ID;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Node != nullptr)
		*Node = params.Node;
}








void UCreativeInstanceManager::AddInstance(const struct FString& ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.AddInstance");

	UCreativeInstanceManager_AddInstance_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeInstanceManager::AddCppInstanceNode(const struct FString& ID, struct FCreativeInstanceNode* Node)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.AddCppInstanceNode");

	UCreativeInstanceManager_AddCppInstanceNode_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Node != nullptr)
		*Node = params.Node;
}







void UCreativeInstanceManager::AddBuildingFlag(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.AddBuildingFlag");

	UCreativeInstanceManager_AddBuildingFlag_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeInstanceStaticMeshComponent::UpdateAllInstanceByRelativeLocation(TArray<struct FVector> RelativeLocations, const struct FVector& Scale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceStaticMeshComponent.UpdateAllInstanceByRelativeLocation");

	UCreativeInstanceStaticMeshComponent_UpdateAllInstanceByRelativeLocation_Params params;
	params.RelativeLocations = RelativeLocations;
	params.Scale = Scale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeInstanceStaticMeshComponent::UnInitInstancedStaticMeshComponntByGroupBuild()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceStaticMeshComponent.UnInitInstancedStaticMeshComponntByGroupBuild");

	UCreativeInstanceStaticMeshComponent_UnInitInstancedStaticMeshComponntByGroupBuild_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeInstanceStaticMeshComponent::SetISMMaterial(class UMaterialInterface* NewMaterial)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceStaticMeshComponent.SetISMMaterial");

	UCreativeInstanceStaticMeshComponent_SetISMMaterial_Params params;
	params.NewMaterial = NewMaterial;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeInstanceStaticMeshComponent::OnStaticMeshAsyncLoaded(const struct FSoftObjectPath& SoftObjectPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceStaticMeshComponent.OnStaticMeshAsyncLoaded");

	UCreativeInstanceStaticMeshComponent_OnStaticMeshAsyncLoaded_Params params;
	params.SoftObjectPath = SoftObjectPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UCreativeInstanceStaticMeshComponent::OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceStaticMeshComponent.OnReturnToPool");

	UCreativeInstanceStaticMeshComponent_OnReturnToPool_Params params;
	params.NewOuter = NewOuter;
	params.RecycledSeq = RecycledSeq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UCreativeInstanceStaticMeshComponent::OnPickFromPool(class UObject* NewOuter, const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceStaticMeshComponent.OnPickFromPool");

	UCreativeInstanceStaticMeshComponent_OnPickFromPool_Params params;
	params.NewOuter = NewOuter;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UCreativeInstanceStaticMeshComponent::InitInstancedStaticMeshComponntByGroupBuildStaticMesh(class USceneComponent* Parent, TArray<struct FTransform> InstanceTransforms, class UObject* StaticMeshObj, class UMaterialInterface* Material)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceStaticMeshComponent.InitInstancedStaticMeshComponntByGroupBuildStaticMesh");

	UCreativeInstanceStaticMeshComponent_InitInstancedStaticMeshComponntByGroupBuildStaticMesh_Params params;
	params.Parent = Parent;
	params.InstanceTransforms = InstanceTransforms;
	params.StaticMeshObj = StaticMeshObj;
	params.Material = Material;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UCreativeInstanceStaticMeshComponent::InitInstancedStaticMeshComponntByGroupBuild(class USceneComponent* Parent, TArray<struct FTransform> InstanceTransforms, const struct FString& MeshPath, class UMaterialInterface* Material)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceStaticMeshComponent.InitInstancedStaticMeshComponntByGroupBuild");

	UCreativeInstanceStaticMeshComponent_InitInstancedStaticMeshComponntByGroupBuild_Params params;
	params.Parent = Parent;
	params.InstanceTransforms = InstanceTransforms;
	params.MeshPath = MeshPath;
	params.Material = Material;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}












bool UCreativeModeIntegralMechanismComponent::SetPlayerIntegral(const struct FString& UID, int TeamID, int curIntegral, int curStageIntegral, int integralAddSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismComponent.SetPlayerIntegral");

	UCreativeModeIntegralMechanismComponent_SetPlayerIntegral_Params params;
	params.UID = UID;
	params.TeamID = TeamID;
	params.curIntegral = curIntegral;
	params.curStageIntegral = curStageIntegral;
	params.integralAddSeq = integralAddSeq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeModeIntegralMechanismComponent::OnRepPlayerIntegralsOverride()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismComponent.OnRepPlayerIntegralsOverride");

	UCreativeModeIntegralMechanismComponent_OnRepPlayerIntegralsOverride_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeModeIntegralMechanismComponent::OnRep_PlayerIntegrals()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismComponent.OnRep_PlayerIntegrals");

	UCreativeModeIntegralMechanismComponent_OnRep_PlayerIntegrals_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeModeIntegralMechanismComponent::ClearPlayerIntegrals()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismComponent.ClearPlayerIntegrals");

	UCreativeModeIntegralMechanismComponent_ClearPlayerIntegrals_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}













bool UCreativeModeIntegralMechanismLiteComponent::SetPlayerIntegral(const struct FString& UID, int TeamID, int curIntegral, int curStageIntegral, int integralAddSeq, int curFunctionalIntegral)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismLiteComponent.SetPlayerIntegral");

	UCreativeModeIntegralMechanismLiteComponent_SetPlayerIntegral_Params params;
	params.UID = UID;
	params.TeamID = TeamID;
	params.curIntegral = curIntegral;
	params.curStageIntegral = curStageIntegral;
	params.integralAddSeq = integralAddSeq;
	params.curFunctionalIntegral = curFunctionalIntegral;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeModeIntegralMechanismLiteComponent::PlayerIntegralContains(const struct FString& UID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismLiteComponent.PlayerIntegralContains");

	UCreativeModeIntegralMechanismLiteComponent_PlayerIntegralContains_Params params;
	params.UID = UID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeModeIntegralMechanismLiteComponent::OnRepPlayerIntegralsOverride()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRepPlayerIntegralsOverride");

	UCreativeModeIntegralMechanismLiteComponent_OnRepPlayerIntegralsOverride_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeModeIntegralMechanismLiteComponent::OnRep_TestIndex(int LastIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRep_TestIndex");

	UCreativeModeIntegralMechanismLiteComponent_OnRep_TestIndex_Params params;
	params.LastIndex = LastIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeModeIntegralMechanismLiteComponent::OnRep_PlayerIntegrals()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRep_PlayerIntegrals");

	UCreativeModeIntegralMechanismLiteComponent_OnRep_PlayerIntegrals_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeModeIntegralMechanismLiteComponent::ClearPlayerIntegrals()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismLiteComponent.ClearPlayerIntegrals");

	UCreativeModeIntegralMechanismLiteComponent_ClearPlayerIntegrals_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeInterpCurveWidget::Undo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInterpCurveWidget.Undo");

	UCreativeInterpCurveWidget_Undo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UCreativeInterpCurveWidget::SetZoomLimits(float InMinViewRangeInput, float InMaxViewRangeInput, float InMinViewRangeOutput, float InMaxViewRangeOutput)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInterpCurveWidget.SetZoomLimits");

	UCreativeInterpCurveWidget_SetZoomLimits_Params params;
	params.InMinViewRangeInput = InMinViewRangeInput;
	params.InMaxViewRangeInput = InMaxViewRangeInput;
	params.InMinViewRangeOutput = InMinViewRangeOutput;
	params.InMaxViewRangeOutput = InMaxViewRangeOutput;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UCreativeInterpCurveWidget::SetViewRange(float MinInput, float MaxInput, float MinOutput, float MaxOutput)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInterpCurveWidget.SetViewRange");

	UCreativeInterpCurveWidget_SetViewRange_Params params;
	params.MinInput = MinInput;
	params.MaxInput = MaxInput;
	params.MinOutput = MinOutput;
	params.MaxOutput = MaxOutput;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeInterpCurveWidget::SetSampleStep(float InSampleStep)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInterpCurveWidget.SetSampleStep");

	UCreativeInterpCurveWidget_SetSampleStep_Params params;
	params.InSampleStep = InSampleStep;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}













void UCreativeInterpCurveWidget::SetKeyData(int CurveIndex, int KeyIndex, float InVal, float OutVal, float ArriveTangent, float LeaveTangent, unsigned char InterpMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInterpCurveWidget.SetKeyData");

	UCreativeInterpCurveWidget_SetKeyData_Params params;
	params.CurveIndex = CurveIndex;
	params.KeyIndex = KeyIndex;
	params.InVal = InVal;
	params.OutVal = OutVal;
	params.ArriveTangent = ArriveTangent;
	params.LeaveTangent = LeaveTangent;
	params.InterpMode = InterpMode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeInterpCurveWidget::SetDragThreshold(float InDragThreshold)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInterpCurveWidget.SetDragThreshold");

	UCreativeInterpCurveWidget_SetDragThreshold_Params params;
	params.InDragThreshold = InDragThreshold;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeInterpCurveWidget::SetCurves(TArray<struct FInterpCurveFloat> InCurves, TArray<struct FLinearColor> InColors)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInterpCurveWidget.SetCurves");

	UCreativeInterpCurveWidget_SetCurves_Params params;
	params.InCurves = InCurves;
	params.InColors = InColors;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeInterpCurveWidget::Redo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInterpCurveWidget.Redo");

	UCreativeInterpCurveWidget_Redo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeInterpCurveWidget::MarkDirty()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInterpCurveWidget.MarkDirty");

	UCreativeInterpCurveWidget_MarkDirty_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







TArray<struct FInterpCurveFloat> UCreativeInterpCurveWidget::GetCurves()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInterpCurveWidget.GetCurves");

	UCreativeInterpCurveWidget_GetCurves_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeInterpCurveWidget::FitVertical()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInterpCurveWidget.FitVertical");

	UCreativeInterpCurveWidget_FitVertical_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeInterpCurveWidget::FitToView()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInterpCurveWidget.FitToView");

	UCreativeInterpCurveWidget_FitToView_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeInterpCurveWidget::FitHorizontal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInterpCurveWidget.FitHorizontal");

	UCreativeInterpCurveWidget_FitHorizontal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeInterpCurveWidget::DeleteSelectedKey()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInterpCurveWidget.DeleteSelectedKey");

	UCreativeInterpCurveWidget_DeleteSelectedKey_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UCreativeInterpCurveWidget::CanUndo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInterpCurveWidget.CanUndo");

	UCreativeInterpCurveWidget_CanUndo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UCreativeInterpCurveWidget::CanRedo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInterpCurveWidget.CanRedo");

	UCreativeInterpCurveWidget_CanRedo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}












void UCreativeInterpCurveWidget::AddPoint(int CurveIndex, float InVal, float OutVal, float ArriveTangent, float LeaveTangent, unsigned char InterpMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInterpCurveWidget.AddPoint");

	UCreativeInterpCurveWidget_AddPoint_Params params;
	params.CurveIndex = CurveIndex;
	params.InVal = InVal;
	params.OutVal = OutVal;
	params.ArriveTangent = ArriveTangent;
	params.LeaveTangent = LeaveTangent;
	params.InterpMode = InterpMode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeItemGeneratorComponent::SetWeightMul(TMap<struct FString, int> Weight)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeItemGeneratorComponent.SetWeightMul");

	UCreativeItemGeneratorComponent_SetWeightMul_Params params;
	params.Weight = Weight;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeItemGeneratorComponent::SetAddSpotPercentMul(float percent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeItemGeneratorComponent.SetAddSpotPercentMul");

	UCreativeItemGeneratorComponent_SetAddSpotPercentMul_Params params;
	params.percent = percent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeItemGeneratorComponent::ClearWeightMul()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeItemGeneratorComponent.ClearWeightMul");

	UCreativeItemGeneratorComponent_ClearWeightMul_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeLoadManager::UnloadSomeObjects(TArray<struct FString> InstanceIDs, bool bRemovePhysicsObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLoadManager.UnloadSomeObjects");

	UCreativeLoadManager_UnloadSomeObjects_Params params;
	params.InstanceIDs = InstanceIDs;
	params.bRemovePhysicsObject = bRemovePhysicsObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeLoadManager::UnloadObject(const struct FString& InstanceID, bool bRemovePhysicsObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLoadManager.UnloadObject");

	UCreativeLoadManager_UnloadObject_Params params;
	params.InstanceID = InstanceID;
	params.bRemovePhysicsObject = bRemovePhysicsObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeLoadManager::LoadSomeObjects(TArray<struct FString> InstanceIDs, bool bLoadImmediately)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLoadManager.LoadSomeObjects");

	UCreativeLoadManager_LoadSomeObjects_Params params;
	params.InstanceIDs = InstanceIDs;
	params.bLoadImmediately = bLoadImmediately;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeLoadManager::LoadObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLoadManager.LoadObject");

	UCreativeLoadManager_LoadObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class UObject* UCreativeLoadManager::LoadCustomUIObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLoadManager.LoadCustomUIObject");

	UCreativeLoadManager_LoadCustomUIObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UCreativeLoadManager* UCreativeLoadManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLoadManager.Get");

	UCreativeLoadManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UCreativeLoadManager::AddObject(const struct FString& InstanceID, const struct FCreativeInstanceNode& InstanceNode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLoadManager.AddObject");

	UCreativeLoadManager_AddObject_Params params;
	params.InstanceID = InstanceID;
	params.InstanceNode = InstanceNode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeLuaAnimGraphInstance::SetRuntimeTime(int NodeId, float Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.SetRuntimeTime");

	UCreativeLuaAnimGraphInstance_SetRuntimeTime_Params params;
	params.NodeId = NodeId;
	params.Time = Time;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeLuaAnimGraphInstance::SetRuntimeSelection(int NodeId, const struct FString& Selection)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.SetRuntimeSelection");

	UCreativeLuaAnimGraphInstance_SetRuntimeSelection_Params params;
	params.NodeId = NodeId;
	params.Selection = Selection;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeLuaAnimGraphInstance::SetRuntimePlayRate(int NodeId, float Rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.SetRuntimePlayRate");

	UCreativeLuaAnimGraphInstance_SetRuntimePlayRate_Params params;
	params.NodeId = NodeId;
	params.Rate = Rate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeLuaAnimGraphInstance::SetRuntimeLoop(int NodeId, bool bLoop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.SetRuntimeLoop");

	UCreativeLuaAnimGraphInstance_SetRuntimeLoop_Params params;
	params.NodeId = NodeId;
	params.bLoop = bLoop;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeLuaAnimGraphInstance::SetRuntimeAssetPath(int NodeId, const struct FString& AssetPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.SetRuntimeAssetPath");

	UCreativeLuaAnimGraphInstance_SetRuntimeAssetPath_Params params;
	params.NodeId = NodeId;
	params.AssetPath = AssetPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeLuaAnimGraphInstance::SetRuntimeAlpha(int NodeId, float Alpha)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.SetRuntimeAlpha");

	UCreativeLuaAnimGraphInstance_SetRuntimeAlpha_Params params;
	params.NodeId = NodeId;
	params.Alpha = Alpha;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeLuaAnimGraphInstance::SetPropertyString(const struct FName& Name, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.SetPropertyString");

	UCreativeLuaAnimGraphInstance_SetPropertyString_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeLuaAnimGraphInstance::SetPropertyInt(const struct FName& Name, int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.SetPropertyInt");

	UCreativeLuaAnimGraphInstance_SetPropertyInt_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeLuaAnimGraphInstance::SetPropertyFloat(const struct FName& Name, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.SetPropertyFloat");

	UCreativeLuaAnimGraphInstance_SetPropertyFloat_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeLuaAnimGraphInstance::SetPropertyBool(const struct FName& Name, bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.SetPropertyBool");

	UCreativeLuaAnimGraphInstance_SetPropertyBool_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeLuaAnimGraphInstance::SetPostProcessUpperBoneFilter(const struct FName& BoneName, int BlendDepth)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.SetPostProcessUpperBoneFilter");

	UCreativeLuaAnimGraphInstance_SetPostProcessUpperBoneFilter_Params params;
	params.BoneName = BoneName;
	params.BlendDepth = BlendDepth;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeLuaAnimGraphInstance::SetOverrideOutputNodeId(int InOverrideOutputNodeId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.SetOverrideOutputNodeId");

	UCreativeLuaAnimGraphInstance_SetOverrideOutputNodeId_Params params;
	params.InOverrideOutputNodeId = InOverrideOutputNodeId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeLuaAnimGraphInstance::SetOverrideHookEnabled(ECreativeLuaAnimOverrideHook Hook, bool bEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.SetOverrideHookEnabled");

	UCreativeLuaAnimGraphInstance_SetOverrideHookEnabled_Params params;
	params.Hook = Hook;
	params.bEnabled = bEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeLuaAnimGraphInstance::SetNodeSelection(int NodeId, const struct FString& Selection)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.SetNodeSelection");

	UCreativeLuaAnimGraphInstance_SetNodeSelection_Params params;
	params.NodeId = NodeId;
	params.Selection = Selection;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeLuaAnimGraphInstance::SetNodePlayRate(int NodeId, float Rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.SetNodePlayRate");

	UCreativeLuaAnimGraphInstance_SetNodePlayRate_Params params;
	params.NodeId = NodeId;
	params.Rate = Rate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeLuaAnimGraphInstance::SetNodeOverrideMode(int NodeId, int Mode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.SetNodeOverrideMode");

	UCreativeLuaAnimGraphInstance_SetNodeOverrideMode_Params params;
	params.NodeId = NodeId;
	params.Mode = Mode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeLuaAnimGraphInstance::SetNodeLoop(int NodeId, bool bLoop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.SetNodeLoop");

	UCreativeLuaAnimGraphInstance_SetNodeLoop_Params params;
	params.NodeId = NodeId;
	params.bLoop = bLoop;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeLuaAnimGraphInstance::SetNodeExternalTime(int NodeId, float Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.SetNodeExternalTime");

	UCreativeLuaAnimGraphInstance_SetNodeExternalTime_Params params;
	params.NodeId = NodeId;
	params.Time = Time;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeLuaAnimGraphInstance::SetNodeBlendAlpha(int NodeId, float Alpha)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.SetNodeBlendAlpha");

	UCreativeLuaAnimGraphInstance_SetNodeBlendAlpha_Params params;
	params.NodeId = NodeId;
	params.Alpha = Alpha;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeLuaAnimGraphInstance::SetNodeAssetPath(int NodeId, const struct FString& AssetPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.SetNodeAssetPath");

	UCreativeLuaAnimGraphInstance_SetNodeAssetPath_Params params;
	params.NodeId = NodeId;
	params.AssetPath = AssetPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativeLuaAnimGraphInstance::SetNodeAsset(int NodeId, const struct FString& AssetPath, float BlendTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.SetNodeAsset");

	UCreativeLuaAnimGraphInstance_SetNodeAsset_Params params;
	params.NodeId = NodeId;
	params.AssetPath = AssetPath;
	params.BlendTime = BlendTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeLuaAnimGraphInstance::SetBypassEvaluate(bool bInBypassEvaluate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.SetBypassEvaluate");

	UCreativeLuaAnimGraphInstance_SetBypassEvaluate_Params params;
	params.bInBypassEvaluate = bInBypassEvaluate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeLuaAnimGraphInstance::SetActiveHookMask(int InMask)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.SetActiveHookMask");

	UCreativeLuaAnimGraphInstance_SetActiveHookMask_Params params;
	params.InMask = InMask;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeLuaAnimGraphInstance::RefreshActiveHookMask()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.RefreshActiveHookMask");

	UCreativeLuaAnimGraphInstance_RefreshActiveHookMask_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeLuaAnimGraphInstance::PrewarmGraphAnimAssets()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.PrewarmGraphAnimAssets");

	UCreativeLuaAnimGraphInstance_PrewarmGraphAnimAssets_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeLuaAnimGraphInstance::PreloadAnimAssetAsync(const struct FString& AssetPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.PreloadAnimAssetAsync");

	UCreativeLuaAnimGraphInstance_PreloadAnimAssetAsync_Params params;
	params.AssetPath = AssetPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeLuaAnimGraphInstance::PostUpdateAnimation(float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.PostUpdateAnimation");

	UCreativeLuaAnimGraphInstance_PostUpdateAnimation_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UCreativeLuaAnimGraphInstance::OnUpdateAnimation(float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.OnUpdateAnimation");

	UCreativeLuaAnimGraphInstance_OnUpdateAnimation_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UCreativeLuaAnimGraphInstance::OnPreEvaluateSelect(int NodeId, float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.OnPreEvaluateSelect");

	UCreativeLuaAnimGraphInstance_OnPreEvaluateSelect_Params params;
	params.NodeId = NodeId;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











bool UCreativeLuaAnimGraphInstance::OnPreEvaluateNode(int NodeId, ECreativeLuaAnimNodeType NodeType, const struct FString& NodeName, float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.OnPreEvaluateNode");

	UCreativeLuaAnimGraphInstance_OnPreEvaluateNode_Params params;
	params.NodeId = NodeId;
	params.NodeType = NodeType;
	params.NodeName = NodeName;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UCreativeLuaAnimGraphInstance::OnPreEvaluateMask(int NodeId, float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.OnPreEvaluateMask");

	UCreativeLuaAnimGraphInstance_OnPreEvaluateMask_Params params;
	params.NodeId = NodeId;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UCreativeLuaAnimGraphInstance::OnPreEvaluateLayeredBoneBlend(int NodeId, float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.OnPreEvaluateLayeredBoneBlend");

	UCreativeLuaAnimGraphInstance_OnPreEvaluateLayeredBoneBlend_Params params;
	params.NodeId = NodeId;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeLuaAnimGraphInstance::OnPreEvaluateGraph(float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.OnPreEvaluateGraph");

	UCreativeLuaAnimGraphInstance_OnPreEvaluateGraph_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UCreativeLuaAnimGraphInstance::OnPreEvaluateBoneRotate(int NodeId, float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.OnPreEvaluateBoneRotate");

	UCreativeLuaAnimGraphInstance_OnPreEvaluateBoneRotate_Params params;
	params.NodeId = NodeId;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UCreativeLuaAnimGraphInstance::OnPreEvaluateBlendSpace2D(int NodeId, float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.OnPreEvaluateBlendSpace2D");

	UCreativeLuaAnimGraphInstance_OnPreEvaluateBlendSpace2D_Params params;
	params.NodeId = NodeId;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UCreativeLuaAnimGraphInstance::OnPreEvaluateBlendSpace(int NodeId, float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.OnPreEvaluateBlendSpace");

	UCreativeLuaAnimGraphInstance_OnPreEvaluateBlendSpace_Params params;
	params.NodeId = NodeId;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UCreativeLuaAnimGraphInstance::OnPreEvaluateBlendAlpha(int NodeId, float* OutAlpha)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.OnPreEvaluateBlendAlpha");

	UCreativeLuaAnimGraphInstance_OnPreEvaluateBlendAlpha_Params params;
	params.NodeId = NodeId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutAlpha != nullptr)
		*OutAlpha = params.OutAlpha;

	return params.ReturnValue;
}









bool UCreativeLuaAnimGraphInstance::OnPreEvaluateAnimationPlayer(int NodeId, float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.OnPreEvaluateAnimationPlayer");

	UCreativeLuaAnimGraphInstance_OnPreEvaluateAnimationPlayer_Params params;
	params.NodeId = NodeId;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UCreativeLuaAnimGraphInstance::OnLuaAnimGraphPlayEvent__DelegateSignature(int NodeId, int EventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Creative.CreativeLuaAnimGraphInstance.OnLuaAnimGraphPlayEvent__DelegateSignature");

	UCreativeLuaAnimGraphInstance_OnLuaAnimGraphPlayEvent__DelegateSignature_Params params;
	params.NodeId = NodeId;
	params.EventType = EventType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeLuaAnimGraphInstance::OnLocomotionDrive__DelegateSignature(float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Creative.CreativeLuaAnimGraphInstance.OnLocomotionDrive__DelegateSignature");

	UCreativeLuaAnimGraphInstance_OnLocomotionDrive__DelegateSignature_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeLuaAnimGraphInstance::OnEvaluateFailed(int FailedNodeId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.OnEvaluateFailed");

	UCreativeLuaAnimGraphInstance_OnEvaluateFailed_Params params;
	params.FailedNodeId = FailedNodeId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UCreativeLuaAnimGraphInstance::IsOverrideHookEnabled(ECreativeLuaAnimOverrideHook Hook)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.IsOverrideHookEnabled");

	UCreativeLuaAnimGraphInstance_IsOverrideHookEnabled_Params params;
	params.Hook = Hook;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UCreativeLuaAnimGraphInstance::IsGraphValid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.IsGraphValid");

	UCreativeLuaAnimGraphInstance_IsGraphValid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








float UCreativeLuaAnimGraphInstance::GetRuntimeTime(int NodeId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.GetRuntimeTime");

	UCreativeLuaAnimGraphInstance_GetRuntimeTime_Params params;
	params.NodeId = NodeId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCreativeLuaAnimGraphInstance::GetRuntimeSelection(int NodeId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.GetRuntimeSelection");

	UCreativeLuaAnimGraphInstance_GetRuntimeSelection_Params params;
	params.NodeId = NodeId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








float UCreativeLuaAnimGraphInstance::GetRuntimePlayRate(int NodeId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.GetRuntimePlayRate");

	UCreativeLuaAnimGraphInstance_GetRuntimePlayRate_Params params;
	params.NodeId = NodeId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UCreativeLuaAnimGraphInstance::GetRuntimeNodeInfo(int NodeId, ECreativeLuaAnimNodeType* OutNodeType, struct FString* OutNodeName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.GetRuntimeNodeInfo");

	UCreativeLuaAnimGraphInstance_GetRuntimeNodeInfo_Params params;
	params.NodeId = NodeId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutNodeType != nullptr)
		*OutNodeType = params.OutNodeType;
	if (OutNodeName != nullptr)
		*OutNodeName = params.OutNodeName;

	return params.ReturnValue;
}








bool UCreativeLuaAnimGraphInstance::GetRuntimeLoop(int NodeId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.GetRuntimeLoop");

	UCreativeLuaAnimGraphInstance_GetRuntimeLoop_Params params;
	params.NodeId = NodeId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCreativeLuaAnimGraphInstance::GetRuntimeAssetPath(int NodeId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.GetRuntimeAssetPath");

	UCreativeLuaAnimGraphInstance_GetRuntimeAssetPath_Params params;
	params.NodeId = NodeId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








float UCreativeLuaAnimGraphInstance::GetRuntimeAlpha(int NodeId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.GetRuntimeAlpha");

	UCreativeLuaAnimGraphInstance_GetRuntimeAlpha_Params params;
	params.NodeId = NodeId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCreativeLuaAnimGraphInstance::GetPropertyString(const struct FName& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.GetPropertyString");

	UCreativeLuaAnimGraphInstance_GetPropertyString_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UCreativeLuaAnimGraphInstance::GetPropertyInt(const struct FName& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.GetPropertyInt");

	UCreativeLuaAnimGraphInstance_GetPropertyInt_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








float UCreativeLuaAnimGraphInstance::GetPropertyFloat(const struct FName& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.GetPropertyFloat");

	UCreativeLuaAnimGraphInstance_GetPropertyFloat_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeLuaAnimGraphInstance::GetPropertyBool(const struct FName& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.GetPropertyBool");

	UCreativeLuaAnimGraphInstance_GetPropertyBool_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FSluaBPVar UCreativeLuaAnimGraphInstance::GetPropertiesTable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.GetPropertiesTable");

	UCreativeLuaAnimGraphInstance_GetPropertiesTable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class AActor* UCreativeLuaAnimGraphInstance::GetOwnerActor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.GetOwnerActor");

	UCreativeLuaAnimGraphInstance_GetOwnerActor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








float UCreativeLuaAnimGraphInstance::GetAnimationPlayerTime(int NodeId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.GetAnimationPlayerTime");

	UCreativeLuaAnimGraphInstance_GetAnimationPlayerTime_Params params;
	params.NodeId = NodeId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








float UCreativeLuaAnimGraphInstance::GetAnimationPlayerDuration(int NodeId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.GetAnimationPlayerDuration");

	UCreativeLuaAnimGraphInstance_GetAnimationPlayerDuration_Params params;
	params.NodeId = NodeId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UCreativeLuaAnimGraphInstance::GetActiveHookMask()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.GetActiveHookMask");

	UCreativeLuaAnimGraphInstance_GetActiveHookMask_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeLuaAnimGraphInstance::ClearGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.ClearGraph");

	UCreativeLuaAnimGraphInstance_ClearGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeLuaAnimGraphInstance::ClearAllEvaluateOverrides()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.ClearAllEvaluateOverrides");

	UCreativeLuaAnimGraphInstance_ClearAllEvaluateOverrides_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeLuaAnimGraphInstance::ApplyEvaluateOverrides()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphInstance.ApplyEvaluateOverrides");

	UCreativeLuaAnimGraphInstance_ApplyEvaluateOverrides_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeLuaAnimGraphManager::SetRuntimeAnimData(const struct FString& Key, class UCreativeRuntimeAnimData* Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphManager.SetRuntimeAnimData");

	UCreativeLuaAnimGraphManager_SetRuntimeAnimData_Params params;
	params.Key = Key;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativeLuaAnimGraphManager::SetAnimPropertyString(class USkeletalMeshComponent* MeshComp, const struct FName& Name, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphManager.SetAnimPropertyString");

	UCreativeLuaAnimGraphManager_SetAnimPropertyString_Params params;
	params.MeshComp = MeshComp;
	params.Name = Name;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativeLuaAnimGraphManager::SetAnimPropertyInt(class USkeletalMeshComponent* MeshComp, const struct FName& Name, int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphManager.SetAnimPropertyInt");

	UCreativeLuaAnimGraphManager_SetAnimPropertyInt_Params params;
	params.MeshComp = MeshComp;
	params.Name = Name;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativeLuaAnimGraphManager::SetAnimPropertyFloat(class USkeletalMeshComponent* MeshComp, const struct FName& Name, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphManager.SetAnimPropertyFloat");

	UCreativeLuaAnimGraphManager_SetAnimPropertyFloat_Params params;
	params.MeshComp = MeshComp;
	params.Name = Name;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativeLuaAnimGraphManager::SetAnimPropertyBool(class USkeletalMeshComponent* MeshComp, const struct FName& Name, bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphManager.SetAnimPropertyBool");

	UCreativeLuaAnimGraphManager_SetAnimPropertyBool_Params params;
	params.MeshComp = MeshComp;
	params.Name = Name;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeLuaAnimGraphManager::RemoveGraphFromMesh(class USkeletalMeshComponent* MeshComp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphManager.RemoveGraphFromMesh");

	UCreativeLuaAnimGraphManager_RemoveGraphFromMesh_Params params;
	params.MeshComp = MeshComp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeLuaAnimGraphManager::RemoveGraphFromActor(class AActor* TargetActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphManager.RemoveGraphFromActor");

	UCreativeLuaAnimGraphManager_RemoveGraphFromActor_Params params;
	params.TargetActor = TargetActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









class UCreativeRuntimeAnimData* UCreativeLuaAnimGraphManager::RegisterAnimSequenceByKey(const struct FString& Key, const struct FString& AssetPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphManager.RegisterAnimSequenceByKey");

	UCreativeLuaAnimGraphManager_RegisterAnimSequenceByKey_Params params;
	params.Key = Key;
	params.AssetPath = AssetPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class UCreativeRuntimeAnimData* UCreativeLuaAnimGraphManager::RegisterAnimSequence(const struct FString& Key, class UAnimSequenceBase* Anim)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphManager.RegisterAnimSequence");

	UCreativeLuaAnimGraphManager_RegisterAnimSequence_Params params;
	params.Key = Key;
	params.Anim = Anim;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










class UCreativeRuntimeAnimData* UCreativeLuaAnimGraphManager::RegisterAIGCAnim(const struct FString& Key, class UAIGCAnimObject* AIGCData, int FrameRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphManager.RegisterAIGCAnim");

	UCreativeLuaAnimGraphManager_RegisterAIGCAnim_Params params;
	params.Key = Key;
	params.AIGCData = AIGCData;
	params.FrameRate = FrameRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UCreativeRuntimeAnimData* UCreativeLuaAnimGraphManager::GetRuntimeAnimData(const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphManager.GetRuntimeAnimData");

	UCreativeLuaAnimGraphManager_GetRuntimeAnimData_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class USkeletalMeshComponent* UCreativeLuaAnimGraphManager::GetPreviewMeshComponent(class AActor* TargetActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphManager.GetPreviewMeshComponent");

	UCreativeLuaAnimGraphManager_GetPreviewMeshComponent_Params params;
	params.TargetActor = TargetActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UCreativeLuaAnimGraphInstance* UCreativeLuaAnimGraphManager::GetAnimInstance(class AActor* TargetActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphManager.GetAnimInstance");

	UCreativeLuaAnimGraphManager_GetAnimInstance_Params params;
	params.TargetActor = TargetActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UCreativeLuaAnimGraphManager* UCreativeLuaAnimGraphManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphManager.Get");

	UCreativeLuaAnimGraphManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeLuaAnimGraphManager::DestroyPreviewMeshComponent(class AActor* TargetActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphManager.DestroyPreviewMeshComponent");

	UCreativeLuaAnimGraphManager_DestroyPreviewMeshComponent_Params params;
	params.TargetActor = TargetActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










class USkeletalMeshComponent* UCreativeLuaAnimGraphManager::CreatePreviewMeshComponent(class AActor* TargetActor, class USkeletalMesh* InSkeletalMesh, const struct FVector& RelativeOffset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphManager.CreatePreviewMeshComponent");

	UCreativeLuaAnimGraphManager_CreatePreviewMeshComponent_Params params;
	params.TargetActor = TargetActor;
	params.InSkeletalMesh = InSkeletalMesh;
	params.RelativeOffset = RelativeOffset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeLuaAnimGraphManager::ClearRuntimeAnimData(const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphManager.ClearRuntimeAnimData");

	UCreativeLuaAnimGraphManager_ClearRuntimeAnimData_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeLuaAnimGraphManager::ClearAllRuntimeAnimData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphManager.ClearAllRuntimeAnimData");

	UCreativeLuaAnimGraphManager_ClearAllRuntimeAnimData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










class UCreativeLuaAnimGraphInstance* UCreativeLuaAnimGraphManager::ApplyGraphToMesh(class USkeletalMeshComponent* MeshComp, const struct FSluaBPVar& GraphTable, bool bUseCustomAssetKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphManager.ApplyGraphToMesh");

	UCreativeLuaAnimGraphManager_ApplyGraphToMesh_Params params;
	params.MeshComp = MeshComp;
	params.GraphTable = GraphTable;
	params.bUseCustomAssetKey = bUseCustomAssetKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










class UCreativeLuaAnimGraphInstance* UCreativeLuaAnimGraphManager::ApplyGraphToActor(class AActor* TargetActor, const struct FSluaBPVar& GraphTable, bool bUseCustomAssetKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAnimGraphManager.ApplyGraphToActor");

	UCreativeLuaAnimGraphManager_ApplyGraphToActor_Params params;
	params.TargetActor = TargetActor;
	params.GraphTable = GraphTable;
	params.bUseCustomAssetKey = bUseCustomAssetKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UCreativeLuaAPIObjectManager* UCreativeLuaAPIObjectManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaAPIObjectManager.Get");

	UCreativeLuaAPIObjectManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UCreativeLuaBlueprintLibrary::CheckTriggerAreaOverlaps(TArray<class UCreativeTriggerCheckData*>* TriggerDataList, TArray<struct FCreativeTriggerActorType>* OutTriggerEnter, TArray<struct FCreativeTriggerActorType>* OutTriggerLeave)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaBlueprintLibrary.CheckTriggerAreaOverlaps");

	UCreativeLuaBlueprintLibrary_CheckTriggerAreaOverlaps_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TriggerDataList != nullptr)
		*TriggerDataList = params.TriggerDataList;
	if (OutTriggerEnter != nullptr)
		*OutTriggerEnter = params.OutTriggerEnter;
	if (OutTriggerLeave != nullptr)
		*OutTriggerLeave = params.OutTriggerLeave;
}







void UCreativeLuaCodeManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaCodeManager.ReceiveOnGameStateBeginPlay");

	UCreativeLuaCodeManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeLuaCodeManager::OnRep_ReplicatedLuaCodeInfoMapSeq()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaCodeManager.OnRep_ReplicatedLuaCodeInfoMapSeq");

	UCreativeLuaCodeManager_OnRep_ReplicatedLuaCodeInfoMapSeq_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeLuaCodeManager::OnPreCreativeLuaVMUnLoad()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaCodeManager.OnPreCreativeLuaVMUnLoad");

	UCreativeLuaCodeManager_OnPreCreativeLuaVMUnLoad_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeLuaCodeManager::OnPlayerControllerBeginPlay(class APlayerController* PlayerController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaCodeManager.OnPlayerControllerBeginPlay");

	UCreativeLuaCodeManager_OnPlayerControllerBeginPlay_Params params;
	params.PlayerController = PlayerController;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeLuaCodeManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaCodeManager.OnGameStateBeginPlay");

	UCreativeLuaCodeManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeLuaCodeManager::OnCreativeLuaInitialized()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaCodeManager.OnCreativeLuaInitialized");

	UCreativeLuaCodeManager_OnCreativeLuaInitialized_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeLuaCodeManager::MarkReplicatedLuaCodeInfoMapDirty()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaCodeManager.MarkReplicatedLuaCodeInfoMapDirty");

	UCreativeLuaCodeManager_MarkReplicatedLuaCodeInfoMapDirty_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class UCreativeLuaCodeManager* UCreativeLuaCodeManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaCodeManager.Get");

	UCreativeLuaCodeManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UObject* UCreativeLuaEntityManager::UUID2UObject(int64_t* UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.UUID2UObject");

	UCreativeLuaEntityManager_UUID2UObject_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;

	return params.ReturnValue;
}










bool UCreativeLuaEntityManager::UUID2Type(int64_t* UUID, EEntityType* Type, unsigned char* SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.UUID2Type");

	UCreativeLuaEntityManager_UUID2Type_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;
	if (Type != nullptr)
		*Type = params.Type;
	if (SubType != nullptr)
		*SubType = params.SubType;

	return params.ReturnValue;
}








uint32_t UCreativeLuaEntityManager::UUID2Key(int64_t* UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.UUID2Key");

	UCreativeLuaEntityManager_UUID2Key_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;

	return params.ReturnValue;
}








int64_t UCreativeLuaEntityManager::ResolveUObjectUUID(class UObject* Object)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.ResolveUObjectUUID");

	UCreativeLuaEntityManager_ResolveUObjectUUID_Params params;
	params.Object = Object;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeLuaEntityManager::ResetAll()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.ResetAll");

	UCreativeLuaEntityManager_ResetAll_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeLuaEntityManager::RemoveUUID(int64_t* UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.RemoveUUID");

	UCreativeLuaEntityManager_RemoveUUID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;
}








class UObject* UCreativeLuaEntityManager::LuaUUID2UObject(struct FString* UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.LuaUUID2UObject");

	UCreativeLuaEntityManager_LuaUUID2UObject_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;

	return params.ReturnValue;
}










bool UCreativeLuaEntityManager::LuaUUID2Type(struct FString* UUID, EEntityType* Type, unsigned char* SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.LuaUUID2Type");

	UCreativeLuaEntityManager_LuaUUID2Type_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;
	if (Type != nullptr)
		*Type = params.Type;
	if (SubType != nullptr)
		*SubType = params.SubType;

	return params.ReturnValue;
}










struct FString UCreativeLuaEntityManager::LuaUUID2Key(struct FString* UUID, EEntityType* Type, unsigned char* SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.LuaUUID2Key");

	UCreativeLuaEntityManager_LuaUUID2Key_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;
	if (Type != nullptr)
		*Type = params.Type;
	if (SubType != nullptr)
		*SubType = params.SubType;

	return params.ReturnValue;
}







void UCreativeLuaEntityManager::LuaRemoveUUID(struct FString* UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.LuaRemoveUUID");

	UCreativeLuaEntityManager_LuaRemoveUUID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;
}










struct FString UCreativeLuaEntityManager::LuaCreateEntityIfNotExistsFromUObject(class UObject* Object, EEntityType* Type, unsigned char* SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.LuaCreateEntityIfNotExistsFromUObject");

	UCreativeLuaEntityManager_LuaCreateEntityIfNotExistsFromUObject_Params params;
	params.Object = Object;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
	if (SubType != nullptr)
		*SubType = params.SubType;

	return params.ReturnValue;
}








int64_t UCreativeLuaEntityManager::GetInstanceObjectUUID(int64_t* UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.GetInstanceObjectUUID");

	UCreativeLuaEntityManager_GetInstanceObjectUUID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;

	return params.ReturnValue;
}








class UCreativeLuaEntityManager* UCreativeLuaEntityManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.Get");

	UCreativeLuaEntityManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










int64_t UCreativeLuaEntityManager::GenUUID(struct FString* Key, EEntityType* Type, unsigned char* SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.GenUUID");

	UCreativeLuaEntityManager_GenUUID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
	if (Type != nullptr)
		*Type = params.Type;
	if (SubType != nullptr)
		*SubType = params.SubType;

	return params.ReturnValue;
}










int64_t UCreativeLuaEntityManager::CreateEntityIfNotExistsFromUObject(class UObject* Object, EEntityType* Type, unsigned char* SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.CreateEntityIfNotExistsFromUObject");

	UCreativeLuaEntityManager_CreateEntityIfNotExistsFromUObject_Params params;
	params.Object = Object;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
	if (SubType != nullptr)
		*SubType = params.SubType;

	return params.ReturnValue;
}










int64_t UCreativeLuaEntityManager::CreateEntityIfNotExistsFromKey(uint32_t* Key, EEntityType* Type, unsigned char* SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.CreateEntityIfNotExistsFromKey");

	UCreativeLuaEntityManager_CreateEntityIfNotExistsFromKey_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
	if (Type != nullptr)
		*Type = params.Type;
	if (SubType != nullptr)
		*SubType = params.SubType;

	return params.ReturnValue;
}








bool UCreativeLuaEntityManager::ContainsUUID(int64_t UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.ContainsUUID");

	UCreativeLuaEntityManager_ContainsUUID_Params params;
	params.UUID = UUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeLuaSignalManager::SpawnApiObjectsByConfig()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalManager.SpawnApiObjectsByConfig");

	UCreativeLuaSignalManager_SpawnApiObjectsByConfig_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeLuaSignalManager::RegisterObject(class UCreativeApiObject* NewObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalManager.RegisterObject");

	UCreativeLuaSignalManager_RegisterObject_Params params;
	params.NewObject = NewObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeLuaSignalManager::OnPreCreativeLuaVMUnLoad()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalManager.OnPreCreativeLuaVMUnLoad");

	UCreativeLuaSignalManager_OnPreCreativeLuaVMUnLoad_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeLuaSignalManager::OnCreativeLuaVMLoaded()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalManager.OnCreativeLuaVMLoaded");

	UCreativeLuaSignalManager_OnCreativeLuaVMLoaded_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class UCreativeApiObject* UCreativeLuaSignalManager::GetObject(const struct FString& ModuleName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalManager.GetObject");

	UCreativeLuaSignalManager_GetObject_Params params;
	params.ModuleName = ModuleName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UCreativeBridgeLuaVM* UCreativeLuaSignalManager::GetCreativeLuaVM()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalManager.GetCreativeLuaVM");

	UCreativeLuaSignalManager_GetCreativeLuaVM_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UCreativeLuaSignalManager* UCreativeLuaSignalManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalManager.Get");

	UCreativeLuaSignalManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










int UCreativeLuaSignalManager::ExecuteAPI(class UCreativeBridgeLuaVM* VM, struct FString* ModuleName, struct FString* FuncName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalManager.ExecuteAPI");

	UCreativeLuaSignalManager_ExecuteAPI_Params params;
	params.VM = VM;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ModuleName != nullptr)
		*ModuleName = params.ModuleName;
	if (FuncName != nullptr)
		*FuncName = params.FuncName;

	return params.ReturnValue;
}








class UCreativeApiObject* UCreativeLuaSignalManager::CGetAPIObject(const struct FString& ModuleName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalManager.CGetAPIObject");

	UCreativeLuaSignalManager_CGetAPIObject_Params params;
	params.ModuleName = ModuleName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeLuaSignalManager::CClearAPIObject()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalManager.CClearAPIObject");

	UCreativeLuaSignalManager_CClearAPIObject_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeLuaSignalManager::CAddAPIObject(const struct FString& ModuleName, class UCreativeApiObject* Object)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalManager.CAddAPIObject");

	UCreativeLuaSignalManager_CAddAPIObject_Params params;
	params.ModuleName = ModuleName;
	params.Object = Object;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








TArray<struct FString> UCreativeLuaTraitManager::GetSupportEntitiesByTraits(TArray<struct FString> TraitNames)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaTraitManager.GetSupportEntitiesByTraits");

	UCreativeLuaTraitManager_GetSupportEntitiesByTraits_Params params;
	params.TraitNames = TraitNames;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<struct FString> UCreativeLuaTraitManager::GetSupportEntitiesByTrait(const struct FString& TraitName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaTraitManager.GetSupportEntitiesByTrait");

	UCreativeLuaTraitManager_GetSupportEntitiesByTrait_Params params;
	params.TraitName = TraitName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UCreativeLuaTraitManager* UCreativeLuaTraitManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaTraitManager.Get");

	UCreativeLuaTraitManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeLuaVMManager::UnRegisterGameTypePreChangedDelegate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaVMManager.UnRegisterGameTypePreChangedDelegate");

	UCreativeLuaVMManager_UnRegisterGameTypePreChangedDelegate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeLuaVMManager::RegisterGameTypePreChangedDelegate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaVMManager.RegisterGameTypePreChangedDelegate");

	UCreativeLuaVMManager_RegisterGameTypePreChangedDelegate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeLuaVMManager::ReceiveSluaCustomMemoryOutCallback()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaVMManager.ReceiveSluaCustomMemoryOutCallback");

	UCreativeLuaVMManager_ReceiveSluaCustomMemoryOutCallback_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeLuaVMManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaVMManager.ReceiveOnGameStateBeginPlay");

	UCreativeLuaVMManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeLuaVMManager::ReceiveCheckAndLoadLuaVM()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaVMManager.ReceiveCheckAndLoadLuaVM");

	UCreativeLuaVMManager_ReceiveCheckAndLoadLuaVM_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeLuaVMManager::OpenEnvLuaProfile()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaVMManager.OpenEnvLuaProfile");

	UCreativeLuaVMManager_OpenEnvLuaProfile_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeLuaVMManager::OpenCustomMemoryLimit(int64_t memoryLimit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaVMManager.OpenCustomMemoryLimit");

	UCreativeLuaVMManager_OpenCustomMemoryLimit_Params params;
	params.memoryLimit = memoryLimit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeLuaVMManager::OnLuaVMAtPanic(const struct FString& errMsg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaVMManager.OnLuaVMAtPanic");

	UCreativeLuaVMManager_OnLuaVMAtPanic_Params params;
	params.errMsg = errMsg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeLuaVMManager::OnGameTypePreChanged(unsigned char LastGameType, unsigned char CurrentGameType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaVMManager.OnGameTypePreChanged");

	UCreativeLuaVMManager_OnGameTypePreChanged_Params params;
	params.LastGameType = LastGameType;
	params.CurrentGameType = CurrentGameType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeLuaVMManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaVMManager.OnGameStateBeginPlay");

	UCreativeLuaVMManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeLuaVMManager::LoadLuaVM()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaVMManager.LoadLuaVM");

	UCreativeLuaVMManager_LoadLuaVM_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







class UCreativeBridgeLuaVM* UCreativeLuaVMManager::GetCreativeLuaVM()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaVMManager.GetCreativeLuaVM");

	UCreativeLuaVMManager_GetCreativeLuaVM_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UCreativeLuaVMManager* UCreativeLuaVMManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaVMManager.Get");

	UCreativeLuaVMManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UCreativeLuaVMManager::CreativeLuaVMLoaded()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaVMManager.CreativeLuaVMLoaded");

	UCreativeLuaVMManager_CreativeLuaVMLoaded_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UCreativeLuaVMManager::CreativeLuaInitialized()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaVMManager.CreativeLuaInitialized");

	UCreativeLuaVMManager_CreativeLuaInitialized_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeLuaVMManager::ClosenEnvLuaProfile()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaVMManager.ClosenEnvLuaProfile");

	UCreativeLuaVMManager_ClosenEnvLuaProfile_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeLuaVMManager::CloseCustomMemoryLimit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaVMManager.CloseCustomMemoryLimit");

	UCreativeLuaVMManager_CloseCustomMemoryLimit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeModeModDataCheckManager::ReceiveOnPreAddInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeModDataCheckManager.ReceiveOnPreAddInstance");

	UCreativeModeModDataCheckManager_ReceiveOnPreAddInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeModeModDataCheckManager::ReceiveOnPostAddInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeModDataCheckManager.ReceiveOnPostAddInstance");

	UCreativeModeModDataCheckManager_ReceiveOnPostAddInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeModeModDataCheckManager::OnPreAddInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeModDataCheckManager.OnPreAddInstance");

	UCreativeModeModDataCheckManager_OnPreAddInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeModeModDataCheckManager::OnPostAddInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeModDataCheckManager.OnPostAddInstance");

	UCreativeModeModDataCheckManager_OnPostAddInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class UCreativeModeModDataCheckManager* UCreativeModeModDataCheckManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeModDataCheckManager.Get");

	UCreativeModeModDataCheckManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeModeChatBubbleUI::TickLua()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeChatBubbleUI.TickLua");

	UCreativeModeChatBubbleUI_TickLua_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeModeChatBubbleUI::ForceUpdatePosition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeChatBubbleUI.ForceUpdatePosition");

	UCreativeModeChatBubbleUI_ForceUpdatePosition_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeModeGlobalManagerCenter::OnCreativeDelegateCreated()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGlobalManagerCenter.OnCreativeDelegateCreated");

	UCreativeModeGlobalManagerCenter_OnCreativeDelegateCreated_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











bool UCreativeModeNetBlueprintLibrary::NetSerializeObject(class UObject* Obj, uint32_t* OutNetGUID, struct FString* OutPath, bool* OutIsDynamic)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNetBlueprintLibrary.NetSerializeObject");

	UCreativeModeNetBlueprintLibrary_NetSerializeObject_Params params;
	params.Obj = Obj;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutNetGUID != nullptr)
		*OutNetGUID = params.OutNetGUID;
	if (OutPath != nullptr)
		*OutPath = params.OutPath;
	if (OutIsDynamic != nullptr)
		*OutIsDynamic = params.OutIsDynamic;

	return params.ReturnValue;
}








bool UCreativeModeNetBlueprintLibrary::IsObjectReplicatable(class UObject* Object)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNetBlueprintLibrary.IsObjectReplicatable");

	UCreativeModeNetBlueprintLibrary_IsObjectReplicatable_Params params;
	params.Object = Object;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UCreativeModeNetBlueprintLibrary::HasActorChannelForPC(class UObject* Object, class APlayerController* PC)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNetBlueprintLibrary.HasActorChannelForPC");

	UCreativeModeNetBlueprintLibrary_HasActorChannelForPC_Params params;
	params.Object = Object;
	params.PC = PC;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








uint32_t UCreativeModeNetBlueprintLibrary::GetOrAssignNetGUID(class UObject* Obj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNetBlueprintLibrary.GetOrAssignNetGUID");

	UCreativeModeNetBlueprintLibrary_GetOrAssignNetGUID_Params params;
	params.Obj = Obj;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class UObject* UCreativeModeNetBlueprintLibrary::GetObjectFromNetGUID(class UObject* WorldContextObject, uint32_t NetGUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNetBlueprintLibrary.GetObjectFromNetGUID");

	UCreativeModeNetBlueprintLibrary_GetObjectFromNetGUID_Params params;
	params.WorldContextObject = WorldContextObject;
	params.NetGUID = NetGUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








uint32_t UCreativeModeNetBlueprintLibrary::GetNetGUID(class UObject* Obj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNetBlueprintLibrary.GetNetGUID");

	UCreativeModeNetBlueprintLibrary_GetNetGUID_Params params;
	params.Obj = Obj;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










class UObject* UCreativeModeNetBlueprintLibrary::DeserializeObject(uint32_t NetGUID, const struct FString& Path, bool bIsDynamic)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNetBlueprintLibrary.DeserializeObject");

	UCreativeModeNetBlueprintLibrary_DeserializeObject_Params params;
	params.NetGUID = NetGUID;
	params.Path = Path;
	params.bIsDynamic = bIsDynamic;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










void ACreativeModeStaticMeshBatchActor::SetISMStaticMeshAndMaterials(class UInstancedStaticMeshComponent* InstancedStaticMeshComponent, int AssetId, int StaticMeshIndex, int MaterialID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeStaticMeshBatchActor.SetISMStaticMeshAndMaterials");

	ACreativeModeStaticMeshBatchActor_SetISMStaticMeshAndMaterials_Params params;
	params.InstancedStaticMeshComponent = InstancedStaticMeshComponent;
	params.AssetId = AssetId;
	params.StaticMeshIndex = StaticMeshIndex;
	params.MaterialID = MaterialID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









struct FEventReply UCreativeModeTouchWidget::OnHandleTouchStart(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeTouchWidget.OnHandleTouchStart");

	UCreativeModeTouchWidget_OnHandleTouchStart_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FEventReply UCreativeModeTouchWidget::OnHandleTouchMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeTouchWidget.OnHandleTouchMove");

	UCreativeModeTouchWidget_OnHandleTouchMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FEventReply UCreativeModeTouchWidget::OnHandleTouchEnd(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeTouchWidget.OnHandleTouchEnd");

	UCreativeModeTouchWidget_OnHandleTouchEnd_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UCreativeModeTouchWidget::OnHandleTouch(int Type, int FingerIndex, const struct FVector2D& pos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeTouchWidget.OnHandleTouch");

	UCreativeModeTouchWidget_OnHandleTouch_Params params;
	params.Type = Type;
	params.FingerIndex = FingerIndex;
	params.pos = pos;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UTaskProgressItem::Update(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.TaskProgressItem.Update");

	UTaskProgressItem_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UTaskProgressItem::SetCurrentProgress(int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.TaskProgressItem.SetCurrentProgress");

	UTaskProgressItem_SetCurrentProgress_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







class UTaskInstance* UTaskProgressItem::GetTaskInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.TaskProgressItem.GetTaskInstance");

	UTaskProgressItem_GetTaskInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UStageRuntimeState* UTaskProgressItem::GetStageRuntimeState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.TaskProgressItem.GetStageRuntimeState");

	UTaskProgressItem_GetStageRuntimeState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UTaskProgressItem::GetProgressType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.TaskProgressItem.GetProgressType");

	UTaskProgressItem_GetProgressType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UTaskProgressItem::GetMaxProgress()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.TaskProgressItem.GetMaxProgress");

	UTaskProgressItem_GetMaxProgress_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UTaskProgressItem::GetCurrentProgress()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.TaskProgressItem.GetCurrentProgress");

	UTaskProgressItem_GetCurrentProgress_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UTaskProgressItem::Deactivate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.TaskProgressItem.Deactivate");

	UTaskProgressItem_Deactivate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UTaskProgressItem::AddProgress(int Delta)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.TaskProgressItem.AddProgress");

	UTaskProgressItem_AddProgress_Params params;
	params.Delta = Delta;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UTaskProgressItem::Activate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.TaskProgressItem.Activate");

	UTaskProgressItem_Activate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UStageRuntimeState::Update(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.StageRuntimeState.Update");

	UStageRuntimeState_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UStageRuntimeState::GetStageIdx()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.StageRuntimeState.GetStageIdx");

	UStageRuntimeState_GetStageIdx_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<class UTaskProgressItem*> UStageRuntimeState::GetProgressItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.StageRuntimeState.GetProgressItems");

	UStageRuntimeState_GetProgressItems_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UTaskInstance* UStageRuntimeState::GetOwnTaskInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.StageRuntimeState.GetOwnTaskInstance");

	UStageRuntimeState_GetOwnTaskInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UTaskProgressItem* UStageRuntimeState::FindProgressItemByConfigIndex(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.StageRuntimeState.FindProgressItemByConfigIndex");

	UStageRuntimeState_FindProgressItemByConfigIndex_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UStageRuntimeState::Deactivate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.StageRuntimeState.Deactivate");

	UStageRuntimeState_Deactivate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class UTaskProgressItem* UStageRuntimeState::AddProgressItem(int ProgressType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.StageRuntimeState.AddProgressItem");

	UStageRuntimeState_AddProgressItem_Params params;
	params.ProgressType = ProgressType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UStageRuntimeState::Activate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.StageRuntimeState.Activate");

	UStageRuntimeState_Activate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UTaskInstance::Update(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.TaskInstance.Update");

	UTaskInstance_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UTaskInstance::SetTaskStatus(ETaskStatus StatusVal)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.TaskInstance.SetTaskStatus");

	UTaskInstance_SetTaskStatus_Params params;
	params.StatusVal = StatusVal;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UTaskInstance::SetShouldReplicated(bool Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.TaskInstance.SetShouldReplicated");

	UTaskInstance_SetShouldReplicated_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UTaskInstance::SetReservedString(const struct FString& Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.TaskInstance.SetReservedString");

	UTaskInstance_SetReservedString_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UTaskInstance::RemovePlayer(uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.TaskInstance.RemovePlayer");

	UTaskInstance_RemovePlayer_Params params;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UTaskInstance::ReceiveSetTaskStatus(ETaskStatus PreviousStatusVal, ETaskStatus NextStatusVal)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.TaskInstance.ReceiveSetTaskStatus");

	UTaskInstance_ReceiveSetTaskStatus_Params params;
	params.PreviousStatusVal = PreviousStatusVal;
	params.NextStatusVal = NextStatusVal;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UTaskInstance::ReceiveOnDeactivate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.TaskInstance.ReceiveOnDeactivate");

	UTaskInstance_ReceiveOnDeactivate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UTaskInstance::MarkTaskDirty()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.TaskInstance.MarkTaskDirty");

	UTaskInstance_MarkTaskDirty_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UTaskInstance::IsRefbyPlayer(uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.TaskInstance.IsRefbyPlayer");

	UTaskInstance_IsRefbyPlayer_Params params;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UTaskInstance::InitializeStageInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.TaskInstance.InitializeStageInfo");

	UTaskInstance_InitializeStageInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FString UTaskInstance::GetTaskTypeID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.TaskInstance.GetTaskTypeID");

	UTaskInstance_GetTaskTypeID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<uint32_t> UTaskInstance::GetPlayerKeys()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.TaskInstance.GetPlayerKeys");

	UTaskInstance_GetPlayerKeys_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UStageRuntimeState* UTaskInstance::GetCurrentStage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.TaskInstance.GetCurrentStage");

	UTaskInstance_GetCurrentStage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UTaskInstance::AdvanceToNextStage(class UStageRuntimeState* NewStageInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.TaskInstance.AdvanceToNextStage");

	UTaskInstance_AdvanceToNextStage_Params params;
	params.NewStageInfo = NewStageInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UTaskInstance::AddPlayer(uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.TaskInstance.AddPlayer");

	UTaskInstance_AddPlayer_Params params;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







class UStageRuntimeState* UTaskInstance::AddNewStage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.TaskInstance.AddNewStage");

	UTaskInstance_AddNewStage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeModeGameTaskManager::Reset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameTaskManager.Reset");

	UCreativeModeGameTaskManager_Reset_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeModeGameTaskManager::RemoveTaskInstance(class UTaskInstance* TaskInstance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameTaskManager.RemoveTaskInstance");

	UCreativeModeGameTaskManager_RemoveTaskInstance_Params params;
	params.TaskInstance = TaskInstance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FString UCreativeModeGameTaskManager::ReceiveGetProgressItemLuaPathByType(int ProgressType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameTaskManager.ReceiveGetProgressItemLuaPathByType");

	UCreativeModeGameTaskManager_ReceiveGetProgressItemLuaPathByType_Params params;
	params.ProgressType = ProgressType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UCreativeModeGameTaskManager::GetProgressItemLuaPathByType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameTaskManager.GetProgressItemLuaPathByType");

	UCreativeModeGameTaskManager_GetProgressItemLuaPathByType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<class UTaskInstance*> UCreativeModeGameTaskManager::GetAllTaskInstances()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameTaskManager.GetAllTaskInstances");

	UCreativeModeGameTaskManager_GetAllTaskInstances_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UCreativeModeGameTaskManager* UCreativeModeGameTaskManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameTaskManager.Get");

	UCreativeModeGameTaskManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UTaskInstance* UCreativeModeGameTaskManager::FindTaskInstanceByType(const struct FString& TaskTypeID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameTaskManager.FindTaskInstanceByType");

	UCreativeModeGameTaskManager_FindTaskInstanceByType_Params params;
	params.TaskTypeID = TaskTypeID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UTaskInstance* UCreativeModeGameTaskManager::CreateTaskInstance(const struct FString& TaskTypeID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameTaskManager.CreateTaskInstance");

	UCreativeModeGameTaskManager_CreateTaskInstance_Params params;
	params.TaskTypeID = TaskTypeID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}














void UCreativeMonsterAnimInstance::PlayCreativeDynamicMontage(class UAnimSequenceBase* Asset, float BlendInTime, float BlendOutTime, float InPlayRate, int LoopCount, bool bIsLoop, float InTimeToStartMontageAt, const struct FName& SlotNodeName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeMonsterAnimInstance.PlayCreativeDynamicMontage");

	UCreativeMonsterAnimInstance_PlayCreativeDynamicMontage_Params params;
	params.Asset = Asset;
	params.BlendInTime = BlendInTime;
	params.BlendOutTime = BlendOutTime;
	params.InPlayRate = InPlayRate;
	params.LoopCount = LoopCount;
	params.bIsLoop = bIsLoop;
	params.InTimeToStartMontageAt = InTimeToStartMontageAt;
	params.SlotNodeName = SlotNodeName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeMonsterAnimInstance::ClearAnimReferences()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeMonsterAnimInstance.ClearAnimReferences");

	UCreativeMonsterAnimInstance_ClearAnimReferences_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeMonsterAnimInstance::CacheAnimVarOverride()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeMonsterAnimInstance.CacheAnimVarOverride");

	UCreativeMonsterAnimInstance_CacheAnimVarOverride_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeMonsterAnimInstance::BP_CacheAnimVarOverride()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeMonsterAnimInstance.BP_CacheAnimVarOverride");

	UCreativeMonsterAnimInstance_BP_CacheAnimVarOverride_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeModeNavigationManager::SetTimeSliceConfig(int MaxTaskPerSlice, int SliceTimeLen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.SetTimeSliceConfig");

	UCreativeModeNavigationManager_SetTimeSliceConfig_Params params;
	params.MaxTaskPerSlice = MaxTaskPerSlice;
	params.SliceTimeLen = SliceTimeLen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeModeNavigationManager::SetNavmeshBuildPolicy(int PolicyVal)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.SetNavmeshBuildPolicy");

	UCreativeModeNavigationManager_SetNavmeshBuildPolicy_Params params;
	params.PolicyVal = PolicyVal;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeModeNavigationManager::SetDynamicModeEnable(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.SetDynamicModeEnable");

	UCreativeModeNavigationManager_SetDynamicModeEnable_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeModeNavigationManager::SetDebugOutputEnable(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.SetDebugOutputEnable");

	UCreativeModeNavigationManager_SetDebugOutputEnable_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeModeNavigationManager::SetConcurrentTaskNum(int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.SetConcurrentTaskNum");

	UCreativeModeNavigationManager_SetConcurrentTaskNum_Params params;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









TArray<unsigned char> UCreativeModeNavigationManager::SerializeDynamicTileToByteArr(int MaxFileSize, int MaxTileToAdd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.SerializeDynamicTileToByteArr");

	UCreativeModeNavigationManager_SerializeDynamicTileToByteArr_Params params;
	params.MaxFileSize = MaxFileSize;
	params.MaxTileToAdd = MaxTileToAdd;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeModeNavigationManager::RevokePendingBuildingTasks()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.RevokePendingBuildingTasks");

	UCreativeModeNavigationManager_RevokePendingBuildingTasks_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeModeNavigationManager::ReceiveOnUnInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ReceiveOnUnInit");

	UCreativeModeNavigationManager_ReceiveOnUnInit_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeModeNavigationManager::ReceiveOnInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ReceiveOnInit");

	UCreativeModeNavigationManager_ReceiveOnInit_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeModeNavigationManager::RebuildDynamicTilesByCoord(TArray<struct FIntPoint>* DynamicTiles)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.RebuildDynamicTilesByCoord");

	UCreativeModeNavigationManager_RebuildDynamicTilesByCoord_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DynamicTiles != nullptr)
		*DynamicTiles = params.DynamicTiles;
}







void UCreativeModeNavigationManager::RebuildDynamicTiles(TArray<class AActor*>* Actors)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.RebuildDynamicTiles");

	UCreativeModeNavigationManager_RebuildDynamicTiles_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Actors != nullptr)
		*Actors = params.Actors;
}







bool UCreativeModeNavigationManager::IsBuildingInProgress()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.IsBuildingInProgress");

	UCreativeModeNavigationManager_IsBuildingInProgress_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeModeNavigationManager::ImportDynamicTile(struct FString* Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ImportDynamicTile");

	UCreativeModeNavigationManager_ImportDynamicTile_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;
}









void UCreativeModeNavigationManager::GetWalkableTrianglesInBox(const struct FBox& bBox, TArray<struct FVector>* OutVertices, TArray<int>* OutIndices)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.GetWalkableTrianglesInBox");

	UCreativeModeNavigationManager_GetWalkableTrianglesInBox_Params params;
	params.bBox = bBox;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutVertices != nullptr)
		*OutVertices = params.OutVertices;
	if (OutIndices != nullptr)
		*OutIndices = params.OutIndices;
}







int UCreativeModeNavigationManager::GetDynamicTilesCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.GetDynamicTilesCount");

	UCreativeModeNavigationManager_GetDynamicTilesCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}












bool UCreativeModeNavigationManager::GetDynamicTileMemCost(int* Total, int* OctTree, int* TileCache, int* DynamicTile, int* DynamicTileCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.GetDynamicTileMemCost");

	UCreativeModeNavigationManager_GetDynamicTileMemCost_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Total != nullptr)
		*Total = params.Total;
	if (OctTree != nullptr)
		*OctTree = params.OctTree;
	if (TileCache != nullptr)
		*TileCache = params.TileCache;
	if (DynamicTile != nullptr)
		*DynamicTile = params.DynamicTile;
	if (DynamicTileCount != nullptr)
		*DynamicTileCount = params.DynamicTileCount;

	return params.ReturnValue;
}








struct FIntPoint UCreativeModeNavigationManager::GetDynamicTileCoordByPos(const struct FVector& pos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.GetDynamicTileCoordByPos");

	UCreativeModeNavigationManager_GetDynamicTileCoordByPos_Params params;
	params.pos = pos;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<class AActor*> UCreativeModeNavigationManager::GetAllAssociateActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.GetAllAssociateActors");

	UCreativeModeNavigationManager_GetAllAssociateActors_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UCreativeModeNavigationManager* UCreativeModeNavigationManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.Get");

	UCreativeModeNavigationManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeModeNavigationManager::ExportDynamicTileStandard(struct FString* Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ExportDynamicTileStandard");

	UCreativeModeNavigationManager_ExportDynamicTileStandard_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;
}







void UCreativeModeNavigationManager::ExportDynamicTile(struct FString* Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ExportDynamicTile");

	UCreativeModeNavigationManager_ExportDynamicTile_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;
}





void UCreativeModeNavigationManager::EnsureDynamicBuildCompletion()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.EnsureDynamicBuildCompletion");

	UCreativeModeNavigationManager_EnsureDynamicBuildCompletion_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeModeNavigationManager::DeserializeDynamicTileFromByteArr(TArray<unsigned char>* ByteArr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.DeserializeDynamicTileFromByteArr");

	UCreativeModeNavigationManager_DeserializeDynamicTileFromByteArr_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ByteArr != nullptr)
		*ByteArr = params.ByteArr;
}








float UCreativeModeNavigationManager::ComputeTotalWalkableSurfaceAreaInBox(const struct FBox& bBox)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ComputeTotalWalkableSurfaceAreaInBox");

	UCreativeModeNavigationManager_ComputeTotalWalkableSurfaceAreaInBox_Params params;
	params.bBox = bBox;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeModeNavigationManager::ClearNavCollision()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ClearNavCollision");

	UCreativeModeNavigationManager_ClearNavCollision_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeModeNavigationManager::ClearDynamicOctreeData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ClearDynamicOctreeData");

	UCreativeModeNavigationManager_ClearDynamicOctreeData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeModeNavigationManager::ClearDynamicNavMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ClearDynamicNavMesh");

	UCreativeModeNavigationManager_ClearDynamicNavMesh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeModeNavigationManager::ClearAssociateActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ClearAssociateActors");

	UCreativeModeNavigationManager_ClearAssociateActors_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











TArray<struct FVector> UCreativeModeNavigationManager::CalSamplePointsInBoxLegacy(const struct FVector& BoxMin, const struct FVector& BoxMax, float StepSize, int MaxPoints)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.CalSamplePointsInBoxLegacy");

	UCreativeModeNavigationManager_CalSamplePointsInBoxLegacy_Params params;
	params.BoxMin = BoxMin;
	params.BoxMax = BoxMax;
	params.StepSize = StepSize;
	params.MaxPoints = MaxPoints;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











TArray<struct FVector> UCreativeModeNavigationManager::CalSamplePointsInBox(const struct FVector& BoxMin, const struct FVector& BoxMax, float StepSize, int MaxPoints)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.CalSamplePointsInBox");

	UCreativeModeNavigationManager_CalSamplePointsInBox_Params params;
	params.BoxMin = BoxMin;
	params.BoxMax = BoxMax;
	params.StepSize = StepSize;
	params.MaxPoints = MaxPoints;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










TArray<struct FVector> UCreativeModeNavigationManager::CalSamplePoints(const struct FVector& StartPos, float StepSize, int MaxPoints)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.CalSamplePoints");

	UCreativeModeNavigationManager_CalSamplePoints_Params params;
	params.StartPos = StartPos;
	params.StepSize = StepSize;
	params.MaxPoints = MaxPoints;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeModeNavigationManager::AddNavAffectedObjects(TArray<class AActor*> Actors)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.AddNavAffectedObjects");

	UCreativeModeNavigationManager_AddNavAffectedObjects_Params params;
	params.Actors = Actors;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeModeNavigationManager::AddNavAffectedObject(class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.AddNavAffectedObject");

	UCreativeModeNavigationManager_AddNavAffectedObject_Params params;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeNetPacketInspectorBridge::ToggleCapture()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeNetPacketInspectorBridge.ToggleCapture");

	UCreativeNetPacketInspectorBridge_ToggleCapture_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeNetPacketInspectorBridge::SetFilter(const struct FString& filter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeNetPacketInspectorBridge.SetFilter");

	UCreativeNetPacketInspectorBridge_SetFilter_Params params;
	params.filter = filter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeNetPacketInspectorBridge::SelectRecord(int RecordIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeNetPacketInspectorBridge.SelectRecord");

	UCreativeNetPacketInspectorBridge_SelectRecord_Params params;
	params.RecordIndex = RecordIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeNetPacketInspectorBridge::CopyText(const struct FString& Text)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeNetPacketInspectorBridge.CopyText");

	UCreativeNetPacketInspectorBridge_CopyText_Params params;
	params.Text = Text;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeNetPacketInspectorBridge::Copy(const struct FString& CopyTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeNetPacketInspectorBridge.Copy");

	UCreativeNetPacketInspectorBridge_Copy_Params params;
	params.CopyTarget = CopyTarget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeNetPacketInspectorBridge::Clear()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeNetPacketInspectorBridge.Clear");

	UCreativeNetPacketInspectorBridge_Clear_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void ACreativeObjectEditAxisActor::StartEdit(int Axis, const struct FVector2D& pos, const struct FVector& HitPos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectEditAxisActor.StartEdit");

	ACreativeObjectEditAxisActor_StartEdit_Params params;
	params.Axis = Axis;
	params.pos = pos;
	params.HitPos = HitPos;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeObjectEditAxisActor::SetForceHideAxis(const struct FVector& State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectEditAxisActor.SetForceHideAxis");

	ACreativeObjectEditAxisActor_SetForceHideAxis_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeObjectEditAxisActor::SetFixedAxisSize(float FixedSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectEditAxisActor.SetFixedAxisSize");

	ACreativeObjectEditAxisActor_SetFixedAxisSize_Params params;
	params.FixedSize = FixedSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ACreativeObjectEditAxisActor::SetEditType(int InEditType, int InEditSubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectEditAxisActor.SetEditType");

	ACreativeObjectEditAxisActor_SetEditType_Params params;
	params.InEditType = InEditType;
	params.InEditSubType = InEditSubType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ACreativeObjectEditAxisActor::SetComponentVisible(class USceneComponent* Comp, bool bVisible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectEditAxisActor.SetComponentVisible");

	ACreativeObjectEditAxisActor_SetComponentVisible_Params params;
	params.Comp = Comp;
	params.bVisible = bVisible;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeObjectEditAxisActor::SetAxisState(const struct FVector& State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectEditAxisActor.SetAxisState");

	ACreativeObjectEditAxisActor_SetAxisState_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeObjectEditAxisActor::MarkEditing(bool bDoing)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectEditAxisActor.MarkEditing");

	ACreativeObjectEditAxisActor_MarkEditing_Params params;
	params.bDoing = bDoing;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool ACreativeObjectEditAxisActor::GetObjectScreenPos(struct FVector2D* OutPos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectEditAxisActor.GetObjectScreenPos");

	ACreativeObjectEditAxisActor_GetObjectScreenPos_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutPos != nullptr)
		*OutPos = params.OutPos;

	return params.ReturnValue;
}








bool ACreativeObjectEditAxisActor::GetEditAxisWorldDir(struct FVector* OutDir)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectEditAxisActor.GetEditAxisWorldDir");

	ACreativeObjectEditAxisActor_GetEditAxisWorldDir_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutDir != nullptr)
		*OutDir = params.OutDir;

	return params.ReturnValue;
}








void ACreativeObjectEditAxisActor::CalScale(const struct FVector2D& pos, struct FVector* OutScale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectEditAxisActor.CalScale");

	ACreativeObjectEditAxisActor_CalScale_Params params;
	params.pos = pos;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutScale != nullptr)
		*OutScale = params.OutScale;
}









float ACreativeObjectEditAxisActor::CalRotation(const struct FVector2D& pos, struct FRotator* OutRot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectEditAxisActor.CalRotation");

	ACreativeObjectEditAxisActor_CalRotation_Params params;
	params.pos = pos;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutRot != nullptr)
		*OutRot = params.OutRot;

	return params.ReturnValue;
}








void ACreativeObjectEditAxisActor::CalLocation(const struct FVector2D& pos, struct FVector* OutLoc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectEditAxisActor.CalLocation");

	ACreativeObjectEditAxisActor_CalLocation_Params params;
	params.pos = pos;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutLoc != nullptr)
		*OutLoc = params.OutLoc;
}







void UCreativeModeObjectInterface::ReceiveOnPostSetInstanceId(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeObjectInterface.ReceiveOnPostSetInstanceId");

	UCreativeModeObjectInterface_ReceiveOnPostSetInstanceId_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ACreativeObjectLocalAxisActor::SetAxisComponents(class USceneComponent* Axis, class USceneComponent* Grid)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectLocalAxisActor.SetAxisComponents");

	ACreativeObjectLocalAxisActor_SetAxisComponents_Params params;
	params.Axis = Axis;
	params.Grid = Grid;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ACreativeObjectLocalAxisActor::NeedUpdate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectLocalAxisActor.NeedUpdate");

	ACreativeObjectLocalAxisActor_NeedUpdate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeObjectManager::SpawnObjectForStreaming(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.SpawnObjectForStreaming");

	UCreativeObjectManager_SpawnObjectForStreaming_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










class UObject* UCreativeObjectManager::SpawnObject(const struct FString& InstanceID, const struct FString& Path, const struct FTransform& SpawnTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.SpawnObject");

	UCreativeObjectManager_SpawnObject_Params params;
	params.InstanceID = InstanceID;
	params.Path = Path;
	params.SpawnTransform = SpawnTransform;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UCreativeObjectManager::SetObjectTempStreamingType(const struct FString& InstanceID, ECreativeModeActorStreamingType TempStreamingType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.SetObjectTempStreamingType");

	UCreativeObjectManager_SetObjectTempStreamingType_Params params;
	params.InstanceID = InstanceID;
	params.TempStreamingType = TempStreamingType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeObjectManager::ResetObjectStreamingType(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.ResetObjectStreamingType");

	UCreativeObjectManager_ResetObjectStreamingType_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeObjectManager::RemoveSpawnObjectInfoFormQueue(struct FString* InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.RemoveSpawnObjectInfoFormQueue");

	UCreativeObjectManager_RemoveSpawnObjectInfoFormQueue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InstanceID != nullptr)
		*InstanceID = params.InstanceID;

	return params.ReturnValue;
}







void UCreativeObjectManager::RemovePhysicsObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.RemovePhysicsObject");

	UCreativeObjectManager_RemovePhysicsObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UCreativeObjectManager::RemoveObject(const struct FString& InstanceID, bool bRemovePhysicsObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.RemoveObject");

	UCreativeObjectManager_RemoveObject_Params params;
	params.InstanceID = InstanceID;
	params.bRemovePhysicsObject = bRemovePhysicsObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeObjectManager::RemoveDestroyObjectInfoFormQueue(struct FString* InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.RemoveDestroyObjectInfoFormQueue");

	UCreativeObjectManager_RemoveDestroyObjectInfoFormQueue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InstanceID != nullptr)
		*InstanceID = params.InstanceID;

	return params.ReturnValue;
}








void UCreativeObjectManager::ReceiveUnregisterObject(const struct FString& InstanceID, class UObject* NewObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.ReceiveUnregisterObject");

	UCreativeObjectManager_ReceiveUnregisterObject_Params params;
	params.InstanceID = InstanceID;
	params.NewObject = NewObject;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeObjectManager::ReceiveRegisterObject(const struct FString& InstanceID, class UObject* NewObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.ReceiveRegisterObject");

	UCreativeObjectManager_ReceiveRegisterObject_Params params;
	params.InstanceID = InstanceID;
	params.NewObject = NewObject;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeObjectManager::ReceiveOnPostLoadMapWithWorld(class UWorld* World)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.ReceiveOnPostLoadMapWithWorld");

	UCreativeObjectManager_ReceiveOnPostLoadMapWithWorld_Params params;
	params.World = World;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeObjectManager::ReceiveClearAllObjects()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.ReceiveClearAllObjects");

	UCreativeObjectManager_ReceiveClearAllObjects_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeObjectManager::OnPostLoadMapWithWorld(class UWorld* World)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.OnPostLoadMapWithWorld");

	UCreativeObjectManager_OnPostLoadMapWithWorld_Params params;
	params.World = World;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeObjectManager::OnObjectSpawnComplete(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.OnObjectSpawnComplete");

	UCreativeObjectManager_OnObjectSpawnComplete_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UCreativeObjectManager::IsLogicObject(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.IsLogicObject");

	UCreativeObjectManager_IsLogicObject_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeObjectManager::IsGroupObject(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.IsGroupObject");

	UCreativeObjectManager_IsGroupObject_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeObjectManager::IsCanBatchObject(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.IsCanBatchObject");

	UCreativeObjectManager_IsCanBatchObject_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FTransform UCreativeObjectManager::GetObjectTransform(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.GetObjectTransform");

	UCreativeObjectManager_GetObjectTransform_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







uint32_t UCreativeObjectManager::GetObjectNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.GetObjectNum");

	UCreativeObjectManager_GetObjectNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCreativeObjectManager::GetObjectAssetPath(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.GetObjectAssetPath");

	UCreativeObjectManager_GetObjectAssetPath_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UCreativeObjectManager::GetObjectAssetID(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.GetObjectAssetID");

	UCreativeObjectManager_GetObjectAssetID_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UObject* UCreativeObjectManager::GetObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.GetObject");

	UCreativeObjectManager_GetObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







uint32_t UCreativeObjectManager::GetActiveObjectNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.GetActiveObjectNum");

	UCreativeObjectManager_GetActiveObjectNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UCreativeObjectManager* UCreativeObjectManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.Get");

	UCreativeObjectManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeObjectManager::DestroyObjectForStreaming(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.DestroyObjectForStreaming");

	UCreativeObjectManager_DestroyObjectForStreaming_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UCreativeObjectManager::DestroyObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.DestroyObject");

	UCreativeObjectManager_DestroyObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeObjectManager::CheckObjectBeBatch(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.CheckObjectBeBatch");

	UCreativeObjectManager_CheckObjectBeBatch_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UCreativeObjectManager::ChangeObjectTransform(const struct FString& InstanceID, const struct FTransform& Transform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.ChangeObjectTransform");

	UCreativeObjectManager_ChangeObjectTransform_Params params;
	params.InstanceID = InstanceID;
	params.Transform = Transform;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UCreativeObjectManager::AddSpawnObjectToQueue(const struct FString& InstanceID, const struct FString& Path, const struct FTransform& SpawnTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.AddSpawnObjectToQueue");

	UCreativeObjectManager_AddSpawnObjectToQueue_Params params;
	params.InstanceID = InstanceID;
	params.Path = Path;
	params.SpawnTransform = SpawnTransform;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UCreativeObjectManager::AddObject(const struct FString& InstanceID, const struct FCreativeModeStreamingParameters& StreamingParameters)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.AddObject");

	UCreativeObjectManager_AddObject_Params params;
	params.InstanceID = InstanceID;
	params.StreamingParameters = StreamingParameters;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeObjectManager::AddDestroyObjectToQueue(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.AddDestroyObjectToQueue");

	UCreativeObjectManager_AddDestroyObjectToQueue_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeObjectStateManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectStateManager.ReceiveOnGameStateBeginPlay");

	UCreativeObjectStateManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeObjectStateManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectStateManager.OnGameStateBeginPlay");

	UCreativeObjectStateManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class UCreativeObjectStateManager* UCreativeObjectStateManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectStateManager.Get");

	UCreativeObjectStateManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UCreativeOctreeSyncManager::ShouldMergeData(const struct FOctreeData& ExistingData, const struct FOctreeData& NewData, float Distance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOctreeSyncManager.ShouldMergeData");

	UCreativeOctreeSyncManager_ShouldMergeData_Params params;
	params.ExistingData = ExistingData;
	params.NewData = NewData;
	params.Distance = Distance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeOctreeSyncManager::ResetTree()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOctreeSyncManager.ResetTree");

	UCreativeOctreeSyncManager_ResetTree_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










int UCreativeOctreeSyncManager::RemoveDataInBoundsByActorRecursive(const struct FBox& BoundingBox, class AActor* Actor, struct FOctreeNode* Node)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOctreeSyncManager.RemoveDataInBoundsByActorRecursive");

	UCreativeOctreeSyncManager_RemoveDataInBoundsByActorRecursive_Params params;
	params.BoundingBox = BoundingBox;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Node != nullptr)
		*Node = params.Node;

	return params.ReturnValue;
}








void UCreativeOctreeSyncManager::RemoveDataInBoundsByActor(class AActor* Actor, struct FBox* BoundingBox)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOctreeSyncManager.RemoveDataInBoundsByActor");

	UCreativeOctreeSyncManager_RemoveDataInBoundsByActor_Params params;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (BoundingBox != nullptr)
		*BoundingBox = params.BoundingBox;
}





void UCreativeOctreeSyncManager::RemoveDataByUIDs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOctreeSyncManager.RemoveDataByUIDs");

	UCreativeOctreeSyncManager_RemoveDataByUIDs_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeOctreeSyncManager::RemoveDataByUID(int UID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOctreeSyncManager.RemoveDataByUID");

	UCreativeOctreeSyncManager_RemoveDataByUID_Params params;
	params.UID = UID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeOctreeSyncManager::RemoveDataByPlayerKey(const struct FString& PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOctreeSyncManager.RemoveDataByPlayerKey");

	UCreativeOctreeSyncManager_RemoveDataByPlayerKey_Params params;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeOctreeSyncManager::InsertData(const struct FOctreeData& InData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOctreeSyncManager.InsertData");

	UCreativeOctreeSyncManager_InsertData_Params params;
	params.InData = InData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UCreativeOctreeSyncManager::Initialize(float InCellSize, float InMergeDistance, int InMaxDepth, float InMinCellSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOctreeSyncManager.Initialize");

	UCreativeOctreeSyncManager_Initialize_Params params;
	params.InCellSize = InCellSize;
	params.InMergeDistance = InMergeDistance;
	params.InMaxDepth = InMaxDepth;
	params.InMinCellSize = InMinCellSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeOctreeSyncManager::HookDecalManager(class ACreativeDecalManager* DecalManager, bool bRegister)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOctreeSyncManager.HookDecalManager");

	UCreativeOctreeSyncManager_HookDecalManager_Params params;
	params.DecalManager = DecalManager;
	params.bRegister = bRegister;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UCreativeOctreeSyncManager::HasObstacleBetween(const struct FVector& Start, const struct FVector& End)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOctreeSyncManager.HasObstacleBetween");

	UCreativeOctreeSyncManager_HasObstacleBetween_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FVector UCreativeOctreeSyncManager::GetOffsetLocationForObstacleCheck(const struct FVector& Location, const struct FVector& Forward)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOctreeSyncManager.GetOffsetLocationForObstacleCheck");

	UCreativeOctreeSyncManager_GetOffsetLocationForObstacleCheck_Params params;
	params.Location = Location;
	params.Forward = Forward;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<struct FOctreeData> UCreativeOctreeSyncManager::GetNodeData(const struct FOctreeNode& Node)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOctreeSyncManager.GetNodeData");

	UCreativeOctreeSyncManager_GetNodeData_Params params;
	params.Node = Node;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<struct FOctreeNode> UCreativeOctreeSyncManager::GetNodeChildren(const struct FOctreeNode& Node)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOctreeSyncManager.GetNodeChildren");

	UCreativeOctreeSyncManager_GetNodeChildren_Params params;
	params.Node = Node;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}












void UCreativeOctreeSyncManager::GetNearbyDataRecursive(const struct FOctreeNode& Node, const struct FVector& Location, float SearchRadius, int MaxCount, bool bExpandSearch, TArray<struct FOctreeData>* OutData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOctreeSyncManager.GetNearbyDataRecursive");

	UCreativeOctreeSyncManager_GetNearbyDataRecursive_Params params;
	params.Node = Node;
	params.Location = Location;
	params.SearchRadius = SearchRadius;
	params.MaxCount = MaxCount;
	params.bExpandSearch = bExpandSearch;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutData != nullptr)
		*OutData = params.OutData;
}











TArray<struct FOctreeData> UCreativeOctreeSyncManager::GetNearbyData(const struct FVector& Location, int MaxCount, bool bSortByDistance, bool bExpandSearch)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOctreeSyncManager.GetNearbyData");

	UCreativeOctreeSyncManager_GetNearbyData_Params params;
	params.Location = Location;
	params.MaxCount = MaxCount;
	params.bSortByDistance = bSortByDistance;
	params.bExpandSearch = bExpandSearch;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<struct FOctreeData> UCreativeOctreeSyncManager::GetAllData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOctreeSyncManager.GetAllData");

	UCreativeOctreeSyncManager_GetAllData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UCreativeOctreeSyncManager* UCreativeOctreeSyncManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOctreeSyncManager.Get");

	UCreativeOctreeSyncManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeOctreeSyncManager::ExpandRootNode(const struct FVector& Point)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOctreeSyncManager.ExpandRootNode");

	UCreativeOctreeSyncManager_ExpandRootNode_Params params;
	params.Point = Point;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeOctreeSyncManager::EnsureRootContainsPoint(const struct FVector& Point)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOctreeSyncManager.EnsureRootContainsPoint");

	UCreativeOctreeSyncManager_EnsureRootContainsPoint_Params params;
	params.Point = Point;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeOfflineBuildManager::ReceiveOnPostSetLuaEventBridgeInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOfflineBuildManager.ReceiveOnPostSetLuaEventBridgeInstance");

	UCreativeOfflineBuildManager_ReceiveOnPostSetLuaEventBridgeInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeOfflineBuildManager::OnPostSetLuaEventBridgeInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOfflineBuildManager.OnPostSetLuaEventBridgeInstance");

	UCreativeOfflineBuildManager_OnPostSetLuaEventBridgeInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class UCreativeOfflineBuildManager* UCreativeOfflineBuildManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOfflineBuildManager.Get");

	UCreativeOfflineBuildManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










void UCreativeOpenUIRoundTripToolBridge::RunTest(const struct FString& SCOPE, int Iterations, float Tolerance, const struct FString& ExportFlavor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOpenUIRoundTripToolBridge.RunTest");

	UCreativeOpenUIRoundTripToolBridge_RunTest_Params params;
	params.SCOPE = SCOPE;
	params.Iterations = Iterations;
	params.Tolerance = Tolerance;
	params.ExportFlavor = ExportFlavor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeOpenUIRoundTripToolBridge::OpenReportFolder()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOpenUIRoundTripToolBridge.OpenReportFolder");

	UCreativeOpenUIRoundTripToolBridge_OpenReportFolder_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeOpenUIRoundTripToolBridge::CopyOutput()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOpenUIRoundTripToolBridge.CopyOutput");

	UCreativeOpenUIRoundTripToolBridge_CopyOutput_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeOverlapCheckComponent::StartOverlapCheck()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOverlapCheckComponent.StartOverlapCheck");

	UCreativeOverlapCheckComponent_StartOverlapCheck_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UCreativeOverlapCheckComponent::IsOverlapClass(class AActor* OverlapActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOverlapCheckComponent.IsOverlapClass");

	UCreativeOverlapCheckComponent_IsOverlapClass_Params params;
	params.OverlapActor = OverlapActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeOverlapCheckComponent::InitOverlapComponent(class UPrimitiveComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOverlapCheckComponent.InitOverlapComponent");

	UCreativeOverlapCheckComponent_InitOverlapComponent_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeOverlapCheckComponent::EndOverlapCheck()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOverlapCheckComponent.EndOverlapCheck");

	UCreativeOverlapCheckComponent_EndOverlapCheck_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeOverlapCheckComponent::EnableFilterInVehicle(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOverlapCheckComponent.EnableFilterInVehicle");

	UCreativeOverlapCheckComponent_EnableFilterInVehicle_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeOverlapCheckComponent::CheckOverlapActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOverlapCheckComponent.CheckOverlapActors");

	UCreativeOverlapCheckComponent_CheckOverlapActors_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeOverlapCheckComponent::AddOverlapClass(class UClass* OverlapClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOverlapCheckComponent.AddOverlapClass");

	UCreativeOverlapCheckComponent_AddOverlapClass_Params params;
	params.OverlapClass = OverlapClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class UCreativeParentChildManager* UCreativeParentChildManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeParentChildManager.Get");

	UCreativeParentChildManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativePerfManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePerfManager.ReceiveOnGameStateBeginPlay");

	UCreativePerfManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativePerfManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePerfManager.OnGameStateBeginPlay");

	UCreativePerfManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







TMap<struct FName, float> UCreativePerfManager::GetUObjectMemoryUsage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePerfManager.GetUObjectMemoryUsage");

	UCreativePerfManager_GetUObjectMemoryUsage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<struct FCreaitvePerfDataMap> UCreativePerfManager::GetResult()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePerfManager.GetResult");

	UCreativePerfManager_GetResult_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FCreativeNetData UCreativePerfManager::GetNetData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePerfManager.GetNetData");

	UCreativePerfManager_GetNetData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FCreativeMemoryData UCreativePerfManager::GetMemoryData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePerfManager.GetMemoryData");

	UCreativePerfManager_GetMemoryData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UCreativePerfManager::GetCPUUsage(int Type, float* OutCPUTimePct, float* OutCPUTimePctRelative)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePerfManager.GetCPUUsage");

	UCreativePerfManager_GetCPUUsage_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutCPUTimePct != nullptr)
		*OutCPUTimePct = params.OutCPUTimePct;
	if (OutCPUTimePctRelative != nullptr)
		*OutCPUTimePctRelative = params.OutCPUTimePctRelative;
}








class UCreativePerfManager* UCreativePerfManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePerfManager.Get");

	UCreativePerfManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativePerfManager::EndSample()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePerfManager.EndSample");

	UCreativePerfManager_EndSample_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativePerfManager::BeginSample()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePerfManager.BeginSample");

	UCreativePerfManager_BeginSample_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativePerfManager::AddActorToRecord(class AActor* Actor, int AssetId, const struct FName& ScopeName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePerfManager.AddActorToRecord");

	UCreativePerfManager_AddActorToRecord_Params params;
	params.Actor = Actor;
	params.AssetId = AssetId;
	params.ScopeName = ScopeName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativePhotonDestructibleMeshComponent::SetInstanceActive(bool bActive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonDestructibleMeshComponent.SetInstanceActive");

	UCreativePhotonDestructibleMeshComponent_SetInstanceActive_Params params;
	params.bActive = bActive;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativePhotonDestructibleMeshComponent::SetDestructionParam(const struct FPhotonDestructionParam& Param)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonDestructibleMeshComponent.SetDestructionParam");

	UCreativePhotonDestructibleMeshComponent_SetDestructionParam_Params params;
	params.Param = Param;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativePhotonDestructibleMeshComponent::SetCreativeServerDamagedDelegate(const struct FScriptDelegate& del)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonDestructibleMeshComponent.SetCreativeServerDamagedDelegate");

	UCreativePhotonDestructibleMeshComponent_SetCreativeServerDamagedDelegate_Params params;
	params.del = del;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativePhotonDestructibleMeshComponent::SetCreativeClientFragmentStateChangedDelegate(const struct FScriptDelegate& del)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonDestructibleMeshComponent.SetCreativeClientFragmentStateChangedDelegate");

	UCreativePhotonDestructibleMeshComponent_SetCreativeClientFragmentStateChangedDelegate_Params params;
	params.del = del;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UCreativePhotonDestructibleMeshComponent::RebornOneFragment(int FragmentIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonDestructibleMeshComponent.RebornOneFragment");

	UCreativePhotonDestructibleMeshComponent_RebornOneFragment_Params params;
	params.FragmentIndex = FragmentIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UCreativePhotonDestructibleMeshComponent::RebornInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonDestructibleMeshComponent.RebornInstance");

	UCreativePhotonDestructibleMeshComponent_RebornInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UCreativePhotonDestructibleMeshComponent::RandomRecoverOneFragment()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonDestructibleMeshComponent.RandomRecoverOneFragment");

	UCreativePhotonDestructibleMeshComponent_RandomRecoverOneFragment_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativePhotonDestructibleMeshComponent::RandomDestroyOneFragment()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonDestructibleMeshComponent.RandomDestroyOneFragment");

	UCreativePhotonDestructibleMeshComponent_RandomDestroyOneFragment_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativePhotonDestructibleMeshComponent::DestroyInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonDestructibleMeshComponent.DestroyInstance");

	UCreativePhotonDestructibleMeshComponent_DestroyInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UCreativePhotonDestructibleMeshComponent::CheckFragmentOverlap(int FragmentIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonDestructibleMeshComponent.CheckFragmentOverlap");

	UCreativePhotonDestructibleMeshComponent_CheckFragmentOverlap_Params params;
	params.FragmentIndex = FragmentIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativePhotonHierarchicalInstancedDestructibleMeshComponent::SetServerDamagedInstancedDelegate(const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.SetServerDamagedInstancedDelegate");

	UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_SetServerDamagedInstancedDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativePhotonHierarchicalInstancedDestructibleMeshComponent::SetInstanceMaxHp(int InstanceIndex, float MaxHP)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.SetInstanceMaxHp");

	UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_SetInstanceMaxHp_Params params;
	params.InstanceIndex = InstanceIndex;
	params.MaxHP = MaxHP;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativePhotonHierarchicalInstancedDestructibleMeshComponent::SetInstanceActive(const struct FString& InstanceID, bool bActive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.SetInstanceActive");

	UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_SetInstanceActive_Params params;
	params.InstanceID = InstanceID;
	params.bActive = bActive;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativePhotonHierarchicalInstancedDestructibleMeshComponent::SetDestructionParam(TArray<int> InstanceIndex, TArray<struct FPhotonDestructionParam> DestructionParams)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.SetDestructionParam");

	UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_SetDestructionParam_Params params;
	params.InstanceIndex = InstanceIndex;
	params.DestructionParams = DestructionParams;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UCreativePhotonHierarchicalInstancedDestructibleMeshComponent::RebornOneFragment(const struct FString& InstanceID, int FragmentIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.RebornOneFragment");

	UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_RebornOneFragment_Params params;
	params.InstanceID = InstanceID;
	params.FragmentIndex = FragmentIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativePhotonHierarchicalInstancedDestructibleMeshComponent::RebornInstance(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.RebornInstance");

	UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_RebornInstance_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativePhotonHierarchicalInstancedDestructibleMeshComponent::RandomRecoverOneFragment(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.RandomRecoverOneFragment");

	UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_RandomRecoverOneFragment_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativePhotonHierarchicalInstancedDestructibleMeshComponent::RandomDestroyOneFragment(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.RandomDestroyOneFragment");

	UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_RandomDestroyOneFragment_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativePhotonHierarchicalInstancedDestructibleMeshComponent::OnClientInitial(int InstanceIndex, TArray<int> ImpactFragmentItemIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.OnClientInitial");

	UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_OnClientInitial_Params params;
	params.InstanceIndex = InstanceIndex;
	params.ImpactFragmentItemIndex = ImpactFragmentItemIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void UCreativePhotonHierarchicalInstancedDestructibleMeshComponent::OnClientDamaged(int InstanceIndex, TArray<int> ImpactFragmentItemIndex, const struct FVector& LocalImpactPoint, const struct FVector& LocalVelocity, int HitType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.OnClientDamaged");

	UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_OnClientDamaged_Params params;
	params.InstanceIndex = InstanceIndex;
	params.ImpactFragmentItemIndex = ImpactFragmentItemIndex;
	params.LocalImpactPoint = LocalImpactPoint;
	params.LocalVelocity = LocalVelocity;
	params.HitType = HitType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FString UCreativePhotonHierarchicalInstancedDestructibleMeshComponent::GetUGCInstanceID(int InstanceIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.GetUGCInstanceID");

	UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_GetUGCInstanceID_Params params;
	params.InstanceIndex = InstanceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativePhotonHierarchicalInstancedDestructibleMeshComponent::DestroyInstance(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.DestroyInstance");

	UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_DestroyInstance_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UCreativePhotonHierarchicalInstancedDestructibleMeshComponent::CheckFragmentOverlap(int InstanceIndex, int FragmentIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.CheckFragmentOverlap");

	UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_CheckFragmentOverlap_Params params;
	params.InstanceIndex = InstanceIndex;
	params.FragmentIndex = FragmentIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativePhotonInstancedDestructibleMeshComponent::SetServerDamagedInstancedDelegate(const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonInstancedDestructibleMeshComponent.SetServerDamagedInstancedDelegate");

	UCreativePhotonInstancedDestructibleMeshComponent_SetServerDamagedInstancedDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativePhotonInstancedDestructibleMeshComponent::SetInstanceMaxHp(int InstanceIndex, float MaxHP)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonInstancedDestructibleMeshComponent.SetInstanceMaxHp");

	UCreativePhotonInstancedDestructibleMeshComponent_SetInstanceMaxHp_Params params;
	params.InstanceIndex = InstanceIndex;
	params.MaxHP = MaxHP;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativePhotonInstancedDestructibleMeshComponent::SetInstanceActive(const struct FString& InstanceID, bool bActive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonInstancedDestructibleMeshComponent.SetInstanceActive");

	UCreativePhotonInstancedDestructibleMeshComponent_SetInstanceActive_Params params;
	params.InstanceID = InstanceID;
	params.bActive = bActive;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativePhotonInstancedDestructibleMeshComponent::SetDestructionParam(TArray<int> InstanceIndex, TArray<struct FPhotonDestructionParam> DestructionParams)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonInstancedDestructibleMeshComponent.SetDestructionParam");

	UCreativePhotonInstancedDestructibleMeshComponent_SetDestructionParam_Params params;
	params.InstanceIndex = InstanceIndex;
	params.DestructionParams = DestructionParams;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UCreativePhotonInstancedDestructibleMeshComponent::RebornOneFragment(const struct FString& InstanceID, int FragmentIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonInstancedDestructibleMeshComponent.RebornOneFragment");

	UCreativePhotonInstancedDestructibleMeshComponent_RebornOneFragment_Params params;
	params.InstanceID = InstanceID;
	params.FragmentIndex = FragmentIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativePhotonInstancedDestructibleMeshComponent::RebornInstance(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonInstancedDestructibleMeshComponent.RebornInstance");

	UCreativePhotonInstancedDestructibleMeshComponent_RebornInstance_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativePhotonInstancedDestructibleMeshComponent::RandomRecoverOneFragment(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonInstancedDestructibleMeshComponent.RandomRecoverOneFragment");

	UCreativePhotonInstancedDestructibleMeshComponent_RandomRecoverOneFragment_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativePhotonInstancedDestructibleMeshComponent::RandomDestroyOneFragment(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonInstancedDestructibleMeshComponent.RandomDestroyOneFragment");

	UCreativePhotonInstancedDestructibleMeshComponent_RandomDestroyOneFragment_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativePhotonInstancedDestructibleMeshComponent::OnClientInitial(int InstanceIndex, TArray<int> ImpactFragmentItemIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonInstancedDestructibleMeshComponent.OnClientInitial");

	UCreativePhotonInstancedDestructibleMeshComponent_OnClientInitial_Params params;
	params.InstanceIndex = InstanceIndex;
	params.ImpactFragmentItemIndex = ImpactFragmentItemIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void UCreativePhotonInstancedDestructibleMeshComponent::OnClientDamaged(int InstanceIndex, TArray<int> ImpactFragmentItemIndex, const struct FVector& LocalImpactPoint, const struct FVector& LocalVelocity, int HitType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonInstancedDestructibleMeshComponent.OnClientDamaged");

	UCreativePhotonInstancedDestructibleMeshComponent_OnClientDamaged_Params params;
	params.InstanceIndex = InstanceIndex;
	params.ImpactFragmentItemIndex = ImpactFragmentItemIndex;
	params.LocalImpactPoint = LocalImpactPoint;
	params.LocalVelocity = LocalVelocity;
	params.HitType = HitType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FString UCreativePhotonInstancedDestructibleMeshComponent::GetUGCInstanceID(int InstanceIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonInstancedDestructibleMeshComponent.GetUGCInstanceID");

	UCreativePhotonInstancedDestructibleMeshComponent_GetUGCInstanceID_Params params;
	params.InstanceIndex = InstanceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativePhotonInstancedDestructibleMeshComponent::DestroyInstance(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonInstancedDestructibleMeshComponent.DestroyInstance");

	UCreativePhotonInstancedDestructibleMeshComponent_DestroyInstance_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UCreativePhotonInstancedDestructibleMeshComponent::CheckFragmentOverlap(int InstanceIndex, int FragmentIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonInstancedDestructibleMeshComponent.CheckFragmentOverlap");

	UCreativePhotonInstancedDestructibleMeshComponent_CheckFragmentOverlap_Params params;
	params.InstanceIndex = InstanceIndex;
	params.FragmentIndex = FragmentIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void ACreativePhysicsBatchActor::UpdatePhysicsComponentMaterial(struct FString* ComponentID, struct FString* MaterialPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.UpdatePhysicsComponentMaterial");

	ACreativePhysicsBatchActor_UpdatePhysicsComponentMaterial_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ComponentID != nullptr)
		*ComponentID = params.ComponentID;
	if (MaterialPath != nullptr)
		*MaterialPath = params.MaterialPath;
}









void ACreativePhysicsBatchActor::UpdatePhysicsComponent(const struct FTransform& Transform, TEnumAsByte<ECollisionEnabled> CollisionEnabled, struct FString* ComponentID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.UpdatePhysicsComponent");

	ACreativePhysicsBatchActor_UpdatePhysicsComponent_Params params;
	params.Transform = Transform;
	params.CollisionEnabled = CollisionEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ComponentID != nullptr)
		*ComponentID = params.ComponentID;
}








bool ACreativePhysicsBatchActor::UnRegisterPhysicsComponent(struct FString* ComponentID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.UnRegisterPhysicsComponent");

	ACreativePhysicsBatchActor_UnRegisterPhysicsComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ComponentID != nullptr)
		*ComponentID = params.ComponentID;

	return params.ReturnValue;
}








void ACreativePhysicsBatchActor::SetPhysicsComponentEnabled(TEnumAsByte<ECollisionEnabled> CollisionEnabled, struct FString* ComponentID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.SetPhysicsComponentEnabled");

	ACreativePhysicsBatchActor_SetPhysicsComponentEnabled_Params params;
	params.CollisionEnabled = CollisionEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ComponentID != nullptr)
		*ComponentID = params.ComponentID;
}











void ACreativePhysicsBatchActor::RegisterPhysicsComponentByMesh(const struct FString& InstanceID, const struct FString& ComponentID, const struct FTransform& Transform, const struct FString& MeshPath, const struct FName& CollisionProfileName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.RegisterPhysicsComponentByMesh");

	ACreativePhysicsBatchActor_RegisterPhysicsComponentByMesh_Params params;
	params.InstanceID = InstanceID;
	params.ComponentID = ComponentID;
	params.Transform = Transform;
	params.MeshPath = MeshPath;
	params.CollisionProfileName = CollisionProfileName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ACreativePhysicsBatchActor::OnLoadMeshSuccessByPath(class UObject* Obj, const struct FString& ComponentID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.OnLoadMeshSuccessByPath");

	ACreativePhysicsBatchActor_OnLoadMeshSuccessByPath_Params params;
	params.Obj = Obj;
	params.ComponentID = ComponentID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ACreativePhysicsBatchActor::OnLoadMeshSuccess(class UObject* Obj, const struct FString& ComponentID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.OnLoadMeshSuccess");

	ACreativePhysicsBatchActor_OnLoadMeshSuccess_Params params;
	params.Obj = Obj;
	params.ComponentID = ComponentID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool ACreativePhysicsBatchActor::IsLoadFinish()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.IsLoadFinish");

	ACreativePhysicsBatchActor_IsLoadFinish_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int ACreativePhysicsBatchActor::GetRegisterNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.GetRegisterNum");

	ACreativePhysicsBatchActor_GetRegisterNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UCreativePhysicsComponent* ACreativePhysicsBatchActor::GetPhysicsComponent(struct FString* ComponentID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.GetPhysicsComponent");

	ACreativePhysicsBatchActor_GetPhysicsComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ComponentID != nullptr)
		*ComponentID = params.ComponentID;

	return params.ReturnValue;
}





void ACreativePhysicsBatchActor::ClearAllPhysicsComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.ClearAllPhysicsComponent");

	ACreativePhysicsBatchActor_ClearAllPhysicsComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativePhysicsComponent::SetIsReplicatedOnly(bool ShouldReplicate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsComponent.SetIsReplicatedOnly");

	UCreativePhysicsComponent_SetIsReplicatedOnly_Params params;
	params.ShouldReplicate = ShouldReplicate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativePhysicsComponent::OnLoadMaterialSuccess(class UObject* Obj, const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsComponent.OnLoadMaterialSuccess");

	UCreativePhysicsComponent_OnLoadMaterialSuccess_Params params;
	params.Obj = Obj;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativePhysicsManager::UpdatePhysicsObjectCellInfo(const struct FString& InstanceID, const struct FString& GridName, const struct FIntVector& CellIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.UpdatePhysicsObjectCellInfo");

	UCreativePhysicsManager_UpdatePhysicsObjectCellInfo_Params params;
	params.InstanceID = InstanceID;
	params.GridName = GridName;
	params.CellIndex = CellIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativePhysicsManager::SetStreamingEnable(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.SetStreamingEnable");

	UCreativePhysicsManager_SetStreamingEnable_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativePhysicsManager::SetPhysicsActorVisible(const struct FString& GridName, const struct FIntVector& CellIndex, bool Visible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.SetPhysicsActorVisible");

	UCreativePhysicsManager_SetPhysicsActorVisible_Params params;
	params.GridName = GridName;
	params.CellIndex = CellIndex;
	params.Visible = Visible;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativePhysicsManager::RemovePhysicsObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.RemovePhysicsObject");

	UCreativePhysicsManager_RemovePhysicsObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UCreativePhysicsManager::PreAddPhysicsObjectCheck(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.PreAddPhysicsObjectCheck");

	UCreativePhysicsManager_PreAddPhysicsObjectCheck_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativePhysicsManager::OnPhysicsBatchActorLoadFinish()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.OnPhysicsBatchActorLoadFinish");

	UCreativePhysicsManager_OnPhysicsBatchActorLoadFinish_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UCreativePhysicsManager::IsPhysicsActorVisible(const struct FString& GridName, const struct FIntVector& CellIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.IsPhysicsActorVisible");

	UCreativePhysicsManager_IsPhysicsActorVisible_Params params;
	params.GridName = GridName;
	params.CellIndex = CellIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class ACreativePhysicsBatchActor* UCreativePhysicsManager::GetPhysicsBatchActorByInstanceID(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.GetPhysicsBatchActorByInstanceID");

	UCreativePhysicsManager_GetPhysicsBatchActorByInstanceID_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class ACreativePhysicsBatchActor* UCreativePhysicsManager::GetPhysicsBatchActor(const struct FString& GridName, const struct FIntVector& Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.GetPhysicsBatchActor");

	UCreativePhysicsManager_GetPhysicsBatchActor_Params params;
	params.GridName = GridName;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class ACreativePhysicsBatchActor* UCreativePhysicsManager::GetGlobalPhysicsBatchActor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.GetGlobalPhysicsBatchActor");

	UCreativePhysicsManager_GetGlobalPhysicsBatchActor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<class ACreativePhysicsBatchActor*> UCreativePhysicsManager::GetAllPhysicsActor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.GetAllPhysicsActor");

	UCreativePhysicsManager_GetAllPhysicsActor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UCreativePhysicsManager* UCreativePhysicsManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.Get");

	UCreativePhysicsManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativePhysicsManager::ClearAllPhysicsBatchActor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.ClearAllPhysicsBatchActor");

	UCreativePhysicsManager_ClearAllPhysicsBatchActor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativePhysicsManager::ChangePhysicsObjectIsPrefab(const struct FString& InstanceID, bool bIsPrefab)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.ChangePhysicsObjectIsPrefab");

	UCreativePhysicsManager_ChangePhysicsObjectIsPrefab_Params params;
	params.InstanceID = InstanceID;
	params.bIsPrefab = bIsPrefab;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativePhysicsManager::AddPhysicsObject(const struct FString& InstanceID, const struct FString& GridName, const struct FIntVector& CellIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.AddPhysicsObject");

	UCreativePhysicsManager_AddPhysicsObject_Params params;
	params.InstanceID = InstanceID;
	params.GridName = GridName;
	params.CellIndex = CellIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UCreativePlayerAPIObject::SetPlayerDirection(int64_t PlayerUUID, const struct FVector& Direction)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePlayerAPIObject.SetPlayerDirection");

	UCreativePlayerAPIObject_SetPlayerDirection_Params params;
	params.PlayerUUID = PlayerUUID;
	params.Direction = Direction;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UCreativePlayerAPIObject::GetPlayerTeamIndex(int64_t PlayerUUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePlayerAPIObject.GetPlayerTeamIndex");

	UCreativePlayerAPIObject_GetPlayerTeamIndex_Params params;
	params.PlayerUUID = PlayerUUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UCreativePlayerAPIObject::GetPlayerTeamIDAndTeamIndexFromCPP(int64_t PlayerUUID, int* OutTeamID, int* OutTeamIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePlayerAPIObject.GetPlayerTeamIDAndTeamIndexFromCPP");

	UCreativePlayerAPIObject_GetPlayerTeamIDAndTeamIndexFromCPP_Params params;
	params.PlayerUUID = PlayerUUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutTeamID != nullptr)
		*OutTeamID = params.OutTeamID;
	if (OutTeamIndex != nullptr)
		*OutTeamIndex = params.OutTeamIndex;
}








int UCreativePlayerAPIObject::GetPlayerTeamID(int64_t PlayerUUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePlayerAPIObject.GetPlayerTeamID");

	UCreativePlayerAPIObject_GetPlayerTeamID_Params params;
	params.PlayerUUID = PlayerUUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








float UCreativePlayerAPIObject::GetPlayerMaxHealth(int64_t PlayerUUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePlayerAPIObject.GetPlayerMaxHealth");

	UCreativePlayerAPIObject_GetPlayerMaxHealth_Params params;
	params.PlayerUUID = PlayerUUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FVector UCreativePlayerAPIObject::GetPlayerLocation(int64_t PlayerUUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePlayerAPIObject.GetPlayerLocation");

	UCreativePlayerAPIObject_GetPlayerLocation_Params params;
	params.PlayerUUID = PlayerUUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








float UCreativePlayerAPIObject::GetPlayerHealth(int64_t PlayerUUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePlayerAPIObject.GetPlayerHealth");

	UCreativePlayerAPIObject_GetPlayerHealth_Params params;
	params.PlayerUUID = PlayerUUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FVector UCreativePlayerAPIObject::GetPlayerDirection(int64_t PlayerUUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePlayerAPIObject.GetPlayerDirection");

	UCreativePlayerAPIObject_GetPlayerDirection_Params params;
	params.PlayerUUID = PlayerUUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









float UCreativePlayerAPIObject::AddPlayerHealth(int64_t PlayerUUID, float AddHealth)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePlayerAPIObject.AddPlayerHealth");

	UCreativePlayerAPIObject_AddPlayerHealth_Params params;
	params.PlayerUUID = PlayerUUID;
	params.AddHealth = AddHealth;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void ACreativeModePlayerState::SetLargeDataContent(TArray<unsigned char> NewContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModePlayerState.SetLargeDataContent");

	ACreativeModePlayerState_SetLargeDataContent_Params params;
	params.NewContent = NewContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeModePlayerState::ServerRemoveInstance(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModePlayerState.ServerRemoveInstance");

	ACreativeModePlayerState_ServerRemoveInstance_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









TArray<unsigned char> ACreativeModePlayerState::ServerReceiveModifyContent(TArray<unsigned char> Content, int idx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModePlayerState.ServerReceiveModifyContent");

	ACreativeModePlayerState_ServerReceiveModifyContent_Params params;
	params.Content = Content;
	params.idx = idx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void ACreativeModePlayerState::ServerAddInstanceAdvance(const struct FString& InstanceID, TArray<unsigned char> Content, int idx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModePlayerState.ServerAddInstanceAdvance");

	ACreativeModePlayerState_ServerAddInstanceAdvance_Params params;
	params.InstanceID = InstanceID;
	params.Content = Content;
	params.idx = idx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ACreativeModePlayerState::ServerAddInstance(const struct FString& InstanceID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModePlayerState.ServerAddInstance");

	ACreativeModePlayerState_ServerAddInstance_Params params;
	params.InstanceID = InstanceID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ACreativeModePlayerState::OnRep_LargeDataContent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModePlayerState.OnRep_LargeDataContent");

	ACreativeModePlayerState_OnRep_LargeDataContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







TArray<unsigned char> ACreativeModePlayerState::GetLargeDataContent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModePlayerState.GetLargeDataContent");

	ACreativeModePlayerState_GetLargeDataContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativePoolInterface::SetRecycleTime(float RecycleTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolInterface.SetRecycleTime");

	UCreativePoolInterface_SetRecycleTime_Params params;
	params.RecycleTime = RecycleTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativePoolInterface::SetIsRecycled(bool IsRecycled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolInterface.SetIsRecycled");

	UCreativePoolInterface_SetIsRecycled_Params params;
	params.IsRecycled = IsRecycled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativePoolInterface::ReceiveOnReturnToPool(class UObject* NewOuter, int RecycledSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolInterface.ReceiveOnReturnToPool");

	UCreativePoolInterface_ReceiveOnReturnToPool_Params params;
	params.NewOuter = NewOuter;
	params.RecycledSeq = RecycledSeq;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativePoolInterface::ReceiveOnPickFromPool(class UObject* NewOuter, const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolInterface.ReceiveOnPickFromPool");

	UCreativePoolInterface_ReceiveOnPickFromPool_Params params;
	params.NewOuter = NewOuter;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UCreativePoolInterface::OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolInterface.OnReturnToPool");

	UCreativePoolInterface_OnReturnToPool_Params params;
	params.NewOuter = NewOuter;
	params.RecycledSeq = RecycledSeq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UCreativePoolInterface::OnPickFromPool(class UObject* NewOuter, const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolInterface.OnPickFromPool");

	UCreativePoolInterface_OnPickFromPool_Params params;
	params.NewOuter = NewOuter;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









struct FString UCreativePoolInterface::GetUnusedComponentName(class UObject* InOuter, struct FString* NamePrefix)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolInterface.GetUnusedComponentName");

	UCreativePoolInterface_GetUnusedComponentName_Params params;
	params.InOuter = InOuter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NamePrefix != nullptr)
		*NamePrefix = params.NamePrefix;

	return params.ReturnValue;
}







float UCreativePoolInterface::GetRecycleTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolInterface.GetRecycleTime");

	UCreativePoolInterface_GetRecycleTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UCreativePoolInterface::CheckIsRecycled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolInterface.CheckIsRecycled");

	UCreativePoolInterface_CheckIsRecycled_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativePoolManager::SetPoolManagerEnable(bool bPoolManagerEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolManager.SetPoolManagerEnable");

	UCreativePoolManager_SetPoolManagerEnable_Params params;
	params.bPoolManagerEnable = bPoolManagerEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativePoolManager::ReturnObject(int PoolId, class UObject* Obj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolManager.ReturnObject");

	UCreativePoolManager_ReturnObject_Params params;
	params.PoolId = PoolId;
	params.Obj = Obj;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativePoolManager::OnReceivePickObjectHandle(int ID, class UObject* InObj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolManager.OnReceivePickObjectHandle");

	UCreativePoolManager_OnReceivePickObjectHandle_Params params;
	params.ID = ID;
	params.InObj = InObj;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativePoolManager::OnReceiveObjectReturnHandle(int ID, class UObject* InObj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolManager.OnReceiveObjectReturnHandle");

	UCreativePoolManager_OnReceiveObjectReturnHandle_Params params;
	params.ID = ID;
	params.InObj = InObj;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UCreativePoolManager::OnReceiveDestroyHandle(int ID, class UObject* InObj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolManager.OnReceiveDestroyHandle");

	UCreativePoolManager_OnReceiveDestroyHandle_Params params;
	params.ID = ID;
	params.InObj = InObj;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UObject* UCreativePoolManager::OnReceiveCreateHandle(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolManager.OnReceiveCreateHandle");

	UCreativePoolManager_OnReceiveCreateHandle_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UCreativePoolManager::InitPool(int PoolId, bool bPoolEnable, struct FCreativeObjectPoolClassConfig* PoolConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolManager.InitPool");

	UCreativePoolManager_InitPool_Params params;
	params.PoolId = PoolId;
	params.bPoolEnable = bPoolEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (PoolConfig != nullptr)
		*PoolConfig = params.PoolConfig;

	return params.ReturnValue;
}









struct FString UCreativePoolManager::GetUnusedComponentName(class UObject* InOuter, struct FString* NamePrefix)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolManager.GetUnusedComponentName");

	UCreativePoolManager_GetUnusedComponentName_Params params;
	params.InOuter = InOuter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NamePrefix != nullptr)
		*NamePrefix = params.NamePrefix;

	return params.ReturnValue;
}










class UObject* UCreativePoolManager::GetObject(int PoolId, class UObject* NewOuter, const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolManager.GetObject");

	UCreativePoolManager_GetObject_Params params;
	params.PoolId = PoolId;
	params.NewOuter = NewOuter;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UCreativePoolManager* UCreativePoolManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolManager.Get");

	UCreativePoolManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativePoolManager::ClearPoolObject()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolManager.ClearPoolObject");

	UCreativePoolManager_ClearPoolObject_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










bool ACreativeRuntimePlayerBattleDataObject::SetTeamGameOutcomeCondition(int TeamID, bool bPropagateToChildren, struct FRuntimeTeamGameOutcomeConditionInfo* TeamGameOutcomeCondition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.SetTeamGameOutcomeCondition");

	ACreativeRuntimePlayerBattleDataObject_SetTeamGameOutcomeCondition_Params params;
	params.TeamID = TeamID;
	params.bPropagateToChildren = bPropagateToChildren;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TeamGameOutcomeCondition != nullptr)
		*TeamGameOutcomeCondition = params.TeamGameOutcomeCondition;

	return params.ReturnValue;
}











bool ACreativeRuntimePlayerBattleDataObject::SetPlayerBattleData(uint64_t UID, uint32_t PlayerKey, bool bPropagateToChildren, struct FRuntimePlayerBattleDataInfo* PlayerBattleData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.SetPlayerBattleData");

	ACreativeRuntimePlayerBattleDataObject_SetPlayerBattleData_Params params;
	params.UID = UID;
	params.PlayerKey = PlayerKey;
	params.bPropagateToChildren = bPropagateToChildren;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (PlayerBattleData != nullptr)
		*PlayerBattleData = params.PlayerBattleData;

	return params.ReturnValue;
}







bool ACreativeRuntimePlayerBattleDataObject::ResetCurRoundPlayerBattleDataList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.ResetCurRoundPlayerBattleDataList");

	ACreativeRuntimePlayerBattleDataObject_ResetCurRoundPlayerBattleDataList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void ACreativeRuntimePlayerBattleDataObject::OnRepTeamGameOutcomeConditionInfo(int TeamID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.OnRepTeamGameOutcomeConditionInfo");

	ACreativeRuntimePlayerBattleDataObject_OnRepTeamGameOutcomeConditionInfo_Params params;
	params.TeamID = TeamID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void ACreativeRuntimePlayerBattleDataObject::OnRepCurRoundPlayerBattleDataInfo(uint64_t PlayerUID, uint64_t PlayerKey, int ChangeTeamID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.OnRepCurRoundPlayerBattleDataInfo");

	ACreativeRuntimePlayerBattleDataObject_OnRepCurRoundPlayerBattleDataInfo_Params params;
	params.PlayerUID = PlayerUID;
	params.PlayerKey = PlayerKey;
	params.ChangeTeamID = ChangeTeamID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FRuntimeTeamGameOutcomeConditionInfo ACreativeRuntimePlayerBattleDataObject::GetTeamGameOutcomeCondition(int TeamID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.GetTeamGameOutcomeCondition");

	ACreativeRuntimePlayerBattleDataObject_GetTeamGameOutcomeCondition_Params params;
	params.TeamID = TeamID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FRuntimePlayerBattleDataInfo ACreativeRuntimePlayerBattleDataObject::GetCurRoundPlayerBattleData(uint64_t PlayerUID, uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.GetCurRoundPlayerBattleData");

	ACreativeRuntimePlayerBattleDataObject_GetCurRoundPlayerBattleData_Params params;
	params.PlayerUID = PlayerUID;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<struct FRuntimePlayerBattleDataInfo> ACreativeRuntimePlayerBattleDataObject::GetCurRoundAllPlayerBattleData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.GetCurRoundAllPlayerBattleData");

	ACreativeRuntimePlayerBattleDataObject_GetCurRoundAllPlayerBattleData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










struct FRuntimePlayerBattleDataInfo ACreativeRuntimePlayerBattleDataObject::GetCacheRoundPlayerBattleData(int RoundIndex, uint64_t PlayerUID, uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.GetCacheRoundPlayerBattleData");

	ACreativeRuntimePlayerBattleDataObject_GetCacheRoundPlayerBattleData_Params params;
	params.RoundIndex = RoundIndex;
	params.PlayerUID = PlayerUID;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FRuntimeCacheRoundBattleDataInfo ACreativeRuntimePlayerBattleDataObject::GetCacheRoundBattleData(int RoundIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.GetCacheRoundBattleData");

	ACreativeRuntimePlayerBattleDataObject_GetCacheRoundBattleData_Params params;
	params.RoundIndex = RoundIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FRuntimePlayerBattleDataInfo ACreativeRuntimePlayerBattleDataObject::GetAllRoundPlayerBattleData(uint64_t PlayerUID, uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.GetAllRoundPlayerBattleData");

	ACreativeRuntimePlayerBattleDataObject_GetAllRoundPlayerBattleData_Params params;
	params.PlayerUID = PlayerUID;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void ACreativeRuntimePlayerBattleDataObject::CacheCurRoundBattleData(int RoundIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.CacheCurRoundBattleData");

	ACreativeRuntimePlayerBattleDataObject_CacheCurRoundBattleData_Params params;
	params.RoundIndex = RoundIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









float UCreativeSceneDetectLib::CreativeGetStackDistanceFromMeshes(TArray<class UMeshComponent*> MeshComponents, const struct FVector& Direction)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneDetectLib.CreativeGetStackDistanceFromMeshes");

	UCreativeSceneDetectLib_CreativeGetStackDistanceFromMeshes_Params params;
	params.MeshComponents = MeshComponents;
	params.Direction = Direction;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










float UCreativeSceneDetectLib::CreativeGetStackDistance(class UStaticMesh* Mesh, const struct FVector& Direction, const struct FVector& Scale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneDetectLib.CreativeGetStackDistance");

	UCreativeSceneDetectLib_CreativeGetStackDistance_Params params;
	params.Mesh = Mesh;
	params.Direction = Direction;
	params.Scale = Scale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FVector UCreativeSceneDetectLib::CreativeGetFurthestPointFromMeshes(TArray<class UMeshComponent*> MeshComponents, const struct FVector& Direction)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneDetectLib.CreativeGetFurthestPointFromMeshes");

	UCreativeSceneDetectLib_CreativeGetFurthestPointFromMeshes_Params params;
	params.MeshComponents = MeshComponents;
	params.Direction = Direction;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










struct FVector UCreativeSceneDetectLib::CreativeGetFurthestPoint(class AActor* TargetActor, class USceneComponent* TargetComp, const struct FVector& Direction)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneDetectLib.CreativeGetFurthestPoint");

	UCreativeSceneDetectLib_CreativeGetFurthestPoint_Params params;
	params.TargetActor = TargetActor;
	params.TargetComp = TargetComp;
	params.Direction = Direction;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}













TArray<struct FVector> UCreativeSceneDetectLib::CreativeFindPlacementPoints(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& HalfExtent, const struct FVector& Direction, int Count, float MaxDistance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneDetectLib.CreativeFindPlacementPoints");

	UCreativeSceneDetectLib_CreativeFindPlacementPoints_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.HalfExtent = HalfExtent;
	params.Direction = Direction;
	params.Count = Count;
	params.MaxDistance = MaxDistance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}













struct FCreativeSpaceResult UCreativeSceneDetectLib::CreativeDetectSpaceAdvanced(class UObject* WorldContextObject, const struct FVector& Source, const struct FVector& Direction, float MaxDistance, float MaxBoxExtent, const struct FCreativeDetectSpaceOptions& Options)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneDetectLib.CreativeDetectSpaceAdvanced");

	UCreativeSceneDetectLib_CreativeDetectSpaceAdvanced_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Source = Source;
	params.Direction = Direction;
	params.MaxDistance = MaxDistance;
	params.MaxBoxExtent = MaxBoxExtent;
	params.Options = Options;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}












struct FCreativeSpaceResult UCreativeSceneDetectLib::CreativeDetectSpace(class UObject* WorldContextObject, const struct FVector& Source, const struct FVector& Direction, float MaxDistance, float MaxBoxExtent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneDetectLib.CreativeDetectSpace");

	UCreativeSceneDetectLib_CreativeDetectSpace_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Source = Source;
	params.Direction = Direction;
	params.MaxDistance = MaxDistance;
	params.MaxBoxExtent = MaxBoxExtent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











struct FVector UCreativeSceneDetectLib::CreativeCalculateSnapLocationFromMeshes(const struct FVector& Curr, TArray<class UMeshComponent*> MeshComponents, const struct FVector& Direction, const struct FVector& HookPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneDetectLib.CreativeCalculateSnapLocationFromMeshes");

	UCreativeSceneDetectLib_CreativeCalculateSnapLocationFromMeshes_Params params;
	params.Curr = Curr;
	params.MeshComponents = MeshComponents;
	params.Direction = Direction;
	params.HookPoint = HookPoint;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











struct FVector UCreativeSceneDetectLib::CreativeCalculateSnapLocation(class AActor* TargetActor, class USceneComponent* TargetComp, const struct FVector& Direction, const struct FVector& HookPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneDetectLib.CreativeCalculateSnapLocation");

	UCreativeSceneDetectLib_CreativeCalculateSnapLocation_Params params;
	params.TargetActor = TargetActor;
	params.TargetComp = TargetComp;
	params.Direction = Direction;
	params.HookPoint = HookPoint;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UCreativeSceneQueryManager::RemoveReplicateObject(const struct FString& InstanceID, class UObject* Object)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.RemoveReplicateObject");

	UCreativeSceneQueryManager_RemoveReplicateObject_Params params;
	params.InstanceID = InstanceID;
	params.Object = Object;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeSceneQueryManager::RemoveReplicateData(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.RemoveReplicateData");

	UCreativeSceneQueryManager_RemoveReplicateData_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeSceneQueryManager::OnReceivePreReplicateDataRemove(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.OnReceivePreReplicateDataRemove");

	UCreativeSceneQueryManager_OnReceivePreReplicateDataRemove_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeSceneQueryManager::OnReceivePostReplicateDataChange(const struct FString& ID, TArray<class UObject*> Objects)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.OnReceivePostReplicateDataChange");

	UCreativeSceneQueryManager_OnReceivePostReplicateDataChange_Params params;
	params.ID = ID;
	params.Objects = Objects;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeSceneQueryManager::OnReceivePostReplicateDataAdd(const struct FString& ID, TArray<class UObject*> Objects)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.OnReceivePostReplicateDataAdd");

	UCreativeSceneQueryManager_OnReceivePostReplicateDataAdd_Params params;
	params.ID = ID;
	params.Objects = Objects;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








TArray<class UObject*> UCreativeSceneQueryManager::GetReplicatedObjects(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.GetReplicatedObjects");

	UCreativeSceneQueryManager_GetReplicatedObjects_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UCreativeSceneQueryManager* UCreativeSceneQueryManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.Get");

	UCreativeSceneQueryManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UCreativeSceneQueryManager::AddReplicateObjectPostDeferred(const struct FString& InstanceID, const struct FTransform& SpawnTransform, class UObject* ReplicatedObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.AddReplicateObjectPostDeferred");

	UCreativeSceneQueryManager_AddReplicateObjectPostDeferred_Params params;
	params.InstanceID = InstanceID;
	params.SpawnTransform = SpawnTransform;
	params.ReplicatedObject = ReplicatedObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}












class UObject* UCreativeSceneQueryManager::AddReplicateObjectDeferred(const struct FString& InstanceID, class UClass* ObjectClass, const struct FString& Name, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.AddReplicateObjectDeferred");

	UCreativeSceneQueryManager_AddReplicateObjectDeferred_Params params;
	params.InstanceID = InstanceID;
	params.ObjectClass = ObjectClass;
	params.Name = Name;
	params.SpawnTransform = SpawnTransform;
	params.CollisionHandlingOverride = CollisionHandlingOverride;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}












class UObject* UCreativeSceneQueryManager::AddReplicateObject(const struct FString& InstanceID, class UClass* ObjectClass, const struct FString& Name, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.AddReplicateObject");

	UCreativeSceneQueryManager_AddReplicateObject_Params params;
	params.InstanceID = InstanceID;
	params.ObjectClass = ObjectClass;
	params.Name = Name;
	params.SpawnTransform = SpawnTransform;
	params.CollisionHandlingOverride = CollisionHandlingOverride;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeScreenCaptureWidget::OnPanelInitialized()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeScreenCaptureWidget.OnPanelInitialized");

	UCreativeScreenCaptureWidget_OnPanelInitialized_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class UCreativeModeSoftComponentManager* UCreativeModeSoftComponentManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeSoftComponentManager.Get");

	UCreativeModeSoftComponentManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeModeSoftComponentManager::ClearAllLoading()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeSoftComponentManager.ClearAllLoading");

	UCreativeModeSoftComponentManager_ClearAllLoading_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool USoftStaticMeshComponent::SetSoftStaticMeshAsync(struct FString* NewMeshPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.SoftStaticMeshComponent.SetSoftStaticMeshAsync");

	USoftStaticMeshComponent_SetSoftStaticMeshAsync_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewMeshPath != nullptr)
		*NewMeshPath = params.NewMeshPath;

	return params.ReturnValue;
}









bool USoftStaticMeshComponent::SetSoftStaticMesh(class UStaticMesh* NewMesh, bool bSetStaticMesh)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.SoftStaticMeshComponent.SetSoftStaticMesh");

	USoftStaticMeshComponent_SetSoftStaticMesh_Params params;
	params.NewMesh = NewMesh;
	params.bSetStaticMesh = bSetStaticMesh;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void USoftStaticMeshComponent::SetComponentOnlyRender(bool bOnlyRender)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.SoftStaticMeshComponent.SetComponentOnlyRender");

	USoftStaticMeshComponent_SetComponentOnlyRender_Params params;
	params.bOnlyRender = bOnlyRender;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void USoftStaticMeshComponent::OnClientAsyncLoaded(const struct FSoftObjectPath& SoftObjectPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.SoftStaticMeshComponent.OnClientAsyncLoaded");

	USoftStaticMeshComponent_OnClientAsyncLoaded_Params params;
	params.SoftObjectPath = SoftObjectPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void USoftStaticMeshComponent::LoadSoftStaticMeshImmediately()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.SoftStaticMeshComponent.LoadSoftStaticMeshImmediately");

	USoftStaticMeshComponent_LoadSoftStaticMeshImmediately_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void USoftStaticMeshComponent::ClearOverrideMaterials()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.SoftStaticMeshComponent.ClearOverrideMaterials");

	USoftStaticMeshComponent_ClearOverrideMaterials_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UCreativeSoftStaticMeshComponent::OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSoftStaticMeshComponent.OnReturnToPool");

	UCreativeSoftStaticMeshComponent_OnReturnToPool_Params params;
	params.NewOuter = NewOuter;
	params.RecycledSeq = RecycledSeq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UCreativeSoftStaticMeshComponent::OnPickFromPool(class UObject* NewOuter, const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSoftStaticMeshComponent.OnPickFromPool");

	UCreativeSoftStaticMeshComponent_OnPickFromPool_Params params;
	params.NewOuter = NewOuter;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}












class AActor* UCreativeSpawnManager::SpawnTower(int ConfigID, const struct FTransform& Transform, int TeamID, int Campid, int ParamsID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSpawnManager.SpawnTower");

	UCreativeSpawnManager_SpawnTower_Params params;
	params.ConfigID = ConfigID;
	params.Transform = Transform;
	params.TeamID = TeamID;
	params.Campid = Campid;
	params.ParamsID = ParamsID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}












class AActor* UCreativeSpawnManager::SpawnHumanBot(int ConfigID, const struct FTransform& Transform, int TeamID, int Campid, int ParamsID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSpawnManager.SpawnHumanBot");

	UCreativeSpawnManager_SpawnHumanBot_Params params;
	params.ConfigID = ConfigID;
	params.Transform = Transform;
	params.TeamID = TeamID;
	params.Campid = Campid;
	params.ParamsID = ParamsID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}












class AActor* UCreativeSpawnManager::SpawnAIPlayer(int ConfigID, const struct FTransform& Transform, int TeamID, int Campid, int ParamsID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSpawnManager.SpawnAIPlayer");

	UCreativeSpawnManager_SpawnAIPlayer_Params params;
	params.ConfigID = ConfigID;
	params.Transform = Transform;
	params.TeamID = TeamID;
	params.Campid = Campid;
	params.ParamsID = ParamsID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UCreativeSpawnManager::OnUnitSpawned(class AActor* NewUnit, ESpecType SpecType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSpawnManager.OnUnitSpawned");

	UCreativeSpawnManager_OnUnitSpawned_Params params;
	params.NewUnit = NewUnit;
	params.SpecType = SpecType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeSpawnManager::OnDeadWithCategory(ESpecType Category, class AActor* DeadCharacter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSpawnManager.OnDeadWithCategory");

	UCreativeSpawnManager_OnDeadWithCategory_Params params;
	params.Category = Category;
	params.DeadCharacter = DeadCharacter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeSpawnManager::HandleTowerDestroyed(class AActor* DestroyedCharacter, TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSpawnManager.HandleTowerDestroyed");

	UCreativeSpawnManager_HandleTowerDestroyed_Params params;
	params.DestroyedCharacter = DestroyedCharacter;
	params.EndPlayReason = EndPlayReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeSpawnManager::HandleMonsterDestroyed(class AActor* DestroyedCharacter, TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSpawnManager.HandleMonsterDestroyed");

	UCreativeSpawnManager_HandleMonsterDestroyed_Params params;
	params.DestroyedCharacter = DestroyedCharacter;
	params.EndPlayReason = EndPlayReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeSpawnManager::HandleHumanBotDestroyed(class AActor* DestroyedCharacter, TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSpawnManager.HandleHumanBotDestroyed");

	UCreativeSpawnManager_HandleHumanBotDestroyed_Params params;
	params.DestroyedCharacter = DestroyedCharacter;
	params.EndPlayReason = EndPlayReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeSpawnManager::HandleAIPlayerDestroyed(class AActor* DestroyedCharacter, TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSpawnManager.HandleAIPlayerDestroyed");

	UCreativeSpawnManager_HandleAIPlayerDestroyed_Params params;
	params.DestroyedCharacter = DestroyedCharacter;
	params.EndPlayReason = EndPlayReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class UCreativeSpawnManager* UCreativeSpawnManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSpawnManager.Get");

	UCreativeSpawnManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UCreativeStaticMeshComponent::OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStaticMeshComponent.OnReturnToPool");

	UCreativeStaticMeshComponent_OnReturnToPool_Params params;
	params.NewOuter = NewOuter;
	params.RecycledSeq = RecycledSeq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UCreativeStaticMeshComponent::OnPickFromPool(class UObject* NewOuter, const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStaticMeshComponent.OnPickFromPool");

	UCreativeStaticMeshComponent_OnPickFromPool_Params params;
	params.NewOuter = NewOuter;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeStreamingManager::UnregisterStreamingSource(class AActor* Source)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.UnregisterStreamingSource");

	UCreativeStreamingManager_UnregisterStreamingSource_Params params;
	params.Source = Source;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UCreativeStreamingManager::StreamingManagerEnable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.StreamingManagerEnable");

	UCreativeStreamingManager_StreamingManagerEnable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeStreamingManager::RemoveStreamingObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.RemoveStreamingObject");

	UCreativeStreamingManager_RemoveStreamingObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeStreamingManager::RegisterStreamingSource(class AActor* Source)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.RegisterStreamingSource");

	UCreativeStreamingManager_RegisterStreamingSource_Params params;
	params.Source = Source;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









struct FIntVector UCreativeStreamingManager::GetOnGridCellIndex(const struct FString& GridName, const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.GetOnGridCellIndex");

	UCreativeStreamingManager_GetOnGridCellIndex_Params params;
	params.GridName = GridName;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








float UCreativeStreamingManager::GetGridLoadingRange(const struct FString& GridName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.GetGridLoadingRange");

	UCreativeStreamingManager_GetGridLoadingRange_Params params;
	params.GridName = GridName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<struct FString> UCreativeStreamingManager::GetGridList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.GetGridList");

	UCreativeStreamingManager_GetGridList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FVector2D UCreativeStreamingManager::GetGridCellWidthHeight(const struct FString& GridName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.GetGridCellWidthHeight");

	UCreativeStreamingManager_GetGridCellWidthHeight_Params params;
	params.GridName = GridName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<struct FVector> UCreativeStreamingManager::GetCreativeModeStreamingSourceList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.GetCreativeModeStreamingSourceList");

	UCreativeStreamingManager_GetCreativeModeStreamingSourceList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UCreativeStreamingManager* UCreativeStreamingManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.Get");

	UCreativeStreamingManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









ECreativeModeActorStreamingType UCreativeStreamingManager::ChangeStreamingObjectStreamingType(const struct FString& InstanceID, ECreativeModeActorStreamingType NewStremaingType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.ChangeStreamingObjectStreamingType");

	UCreativeStreamingManager_ChangeStreamingObjectStreamingType_Params params;
	params.InstanceID = InstanceID;
	params.NewStremaingType = NewStremaingType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UCreativeStreamingManager::AddStreamingObject(const struct FString& InstanceID, const struct FCreativeModeStreamingParameters& StreamingParameters)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.AddStreamingObject");

	UCreativeStreamingManager_AddStreamingObject_Params params;
	params.InstanceID = InstanceID;
	params.StreamingParameters = StreamingParameters;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UCreativeTaskComponent::UpdateTaskProgress(const struct FString& TaskID, int NewProgress, int idx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeTaskComponent.UpdateTaskProgress");

	UCreativeTaskComponent_UpdateTaskProgress_Params params;
	params.TaskID = TaskID;
	params.NewProgress = NewProgress;
	params.idx = idx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UCreativeTaskComponent::SetTaskVal(const struct FString& TaskID, struct FCreativeTaskViewItem* SetItemValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeTaskComponent.SetTaskVal");

	UCreativeTaskComponent_SetTaskVal_Params params;
	params.TaskID = TaskID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SetItemValue != nullptr)
		*SetItemValue = params.SetItemValue;

	return params.ReturnValue;
}









bool UCreativeTaskComponent::SetTaskStatus(const struct FString& TaskID, ETaskStatus TaskStatusVal)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeTaskComponent.SetTaskStatus");

	UCreativeTaskComponent_SetTaskStatus_Params params;
	params.TaskID = TaskID;
	params.TaskStatusVal = TaskStatusVal;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UCreativeTaskComponent::SetTaskStageReservedField(const struct FString& TaskID, const struct FString& Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeTaskComponent.SetTaskStageReservedField");

	UCreativeTaskComponent_SetTaskStageReservedField_Params params;
	params.TaskID = TaskID;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UCreativeTaskComponent::SetTaskStageIdx(const struct FString& TaskID, int TaskStageIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeTaskComponent.SetTaskStageIdx");

	UCreativeTaskComponent_SetTaskStageIdx_Params params;
	params.TaskID = TaskID;
	params.TaskStageIdx = TaskStageIdx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UCreativeTaskComponent::SetTaskProgressStep(const struct FString& TaskID, const struct FCreativeTaskProgressItem& NewStep, int idx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeTaskComponent.SetTaskProgressStep");

	UCreativeTaskComponent_SetTaskProgressStep_Params params;
	params.TaskID = TaskID;
	params.NewStep = NewStep;
	params.idx = idx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UCreativeTaskComponent::SetTaskConditionMet(const struct FString& TaskID, bool bMet, int idx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeTaskComponent.SetTaskConditionMet");

	UCreativeTaskComponent_SetTaskConditionMet_Params params;
	params.TaskID = TaskID;
	params.bMet = bMet;
	params.idx = idx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UCreativeTaskComponent::SetMaxTaskProgressStep(const struct FString& TaskID, int MaxStep)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeTaskComponent.SetMaxTaskProgressStep");

	UCreativeTaskComponent_SetMaxTaskProgressStep_Params params;
	params.TaskID = TaskID;
	params.MaxStep = MaxStep;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeTaskComponent::RemoveTask(const struct FString& TaskID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeTaskComponent.RemoveTask");

	UCreativeTaskComponent_RemoveTask_Params params;
	params.TaskID = TaskID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeTaskComponent::RemoveAllTask()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeTaskComponent.RemoveAllTask");

	UCreativeTaskComponent_RemoveAllTask_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeTaskComponent::ReceiveOnTaskViewRemoved(const struct FCreativeTaskViewItem& TaskViewItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeTaskComponent.ReceiveOnTaskViewRemoved");

	UCreativeTaskComponent_ReceiveOnTaskViewRemoved_Params params;
	params.TaskViewItem = TaskViewItem;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeTaskComponent::ReceiveOnTaskViewChanged(const struct FCreativeTaskViewItem& TaskViewItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeTaskComponent.ReceiveOnTaskViewChanged");

	UCreativeTaskComponent_ReceiveOnTaskViewChanged_Params params;
	params.TaskViewItem = TaskViewItem;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeTaskComponent::ReceiveOnTaskViewAdded(const struct FCreativeTaskViewItem& TaskViewItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeTaskComponent.ReceiveOnTaskViewAdded");

	UCreativeTaskComponent_ReceiveOnTaskViewAdded_Params params;
	params.TaskViewItem = TaskViewItem;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeTaskComponent::ReceiveAddTask(struct FCreativeTaskViewItem* NewTask)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeTaskComponent.ReceiveAddTask");

	UCreativeTaskComponent_ReceiveAddTask_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewTask != nullptr)
		*NewTask = params.NewTask;
}








struct FCreativeTaskProgressItem UCreativeTaskComponent::MakeDummyProgressStep(const struct FCreativeTaskProgressParams& Params)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeTaskComponent.MakeDummyProgressStep");

	UCreativeTaskComponent_MakeDummyProgressStep_Params params;
	params.Params = Params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeTaskComponent::IsTaskExists(const struct FString& TaskID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeTaskComponent.IsTaskExists");

	UCreativeTaskComponent_IsTaskExists_Params params;
	params.TaskID = TaskID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UCreativeTaskComponent::IsProgressConditionMet(const struct FString& TaskID, int idx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeTaskComponent.IsProgressConditionMet");

	UCreativeTaskComponent_IsProgressConditionMet_Params params;
	params.TaskID = TaskID;
	params.idx = idx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











bool UCreativeTaskComponent::GetTaskProgress(const struct FString& TaskID, int idx, int* OutCurrent, int* OutMax)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeTaskComponent.GetTaskProgress");

	UCreativeTaskComponent_GetTaskProgress_Params params;
	params.TaskID = TaskID;
	params.idx = idx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutCurrent != nullptr)
		*OutCurrent = params.OutCurrent;
	if (OutMax != nullptr)
		*OutMax = params.OutMax;

	return params.ReturnValue;
}







TArray<struct FCreativeTaskViewItem> UCreativeTaskComponent::GetAllTasks()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeTaskComponent.GetAllTasks");

	UCreativeTaskComponent_GetAllTasks_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FCreativeTaskViewItem UCreativeTaskComponent::FindTaskByID(const struct FString& TaskID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeTaskComponent.FindTaskByID");

	UCreativeTaskComponent_FindTaskByID_Params params;
	params.TaskID = TaskID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeTaskComponent::AddTask(const struct FString& TaskID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeTaskComponent.AddTask");

	UCreativeTaskComponent_AddTask_Params params;
	params.TaskID = TaskID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeTimerApiObject::SetMaxQueue(int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeTimerApiObject.SetMaxQueue");

	UCreativeTimerApiObject_SetMaxQueue_Params params;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeTimerApiObject::NotifyTimerDropped(const struct FString& blockId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeTimerApiObject.NotifyTimerDropped");

	UCreativeTimerApiObject_NotifyTimerDropped_Params params;
	params.blockId = blockId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeTimerApiObject::Clear()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeTimerApiObject.Clear");

	UCreativeTimerApiObject_Clear_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ACreativeTriggerAreaActor::OnTakeDamage(class AActor* DamageCauser)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeTriggerAreaActor.OnTakeDamage");

	ACreativeTriggerAreaActor_OnTakeDamage_Params params;
	params.DamageCauser = DamageCauser;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UCreativeUMGCanvasPanel::SwapChildrenByInstanceID(const struct FString& InstanceIDA, const struct FString& InstanceIDB)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeUMGCanvasPanel.SwapChildrenByInstanceID");

	UCreativeUMGCanvasPanel_SwapChildrenByInstanceID_Params params;
	params.InstanceIDA = InstanceIDA;
	params.InstanceIDB = InstanceIDB;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeUMGCanvasPanel::RequestRecalcZOrder()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeUMGCanvasPanel.RequestRecalcZOrder");

	UCreativeUMGCanvasPanel_RequestRecalcZOrder_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeUMGCanvasPanel::OnNextFrameRecalcTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeUMGCanvasPanel.OnNextFrameRecalcTick");

	UCreativeUMGCanvasPanel_OnNextFrameRecalcTick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeUMGCanvasPanel::FlushRecalcZOrderNow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeUMGCanvasPanel.FlushRecalcZOrderNow");

	UCreativeUMGCanvasPanel_FlushRecalcZOrderNow_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UCreativeUMGCanvasWidget::SwapChildrenByInstanceID(const struct FString& InstanceIDA, const struct FString& InstanceIDB)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeUMGCanvasWidget.SwapChildrenByInstanceID");

	UCreativeUMGCanvasWidget_SwapChildrenByInstanceID_Params params;
	params.InstanceIDA = InstanceIDA;
	params.InstanceIDB = InstanceIDB;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeUMGCanvasWidget::RequestRecalcZOrder()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeUMGCanvasWidget.RequestRecalcZOrder");

	UCreativeUMGCanvasWidget_RequestRecalcZOrder_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeUMGCanvasWidget::FlushRecalcZOrderNow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeUMGCanvasWidget.FlushRecalcZOrderNow");

	UCreativeUMGCanvasWidget_FlushRecalcZOrderNow_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeUMGInfoManager::UpdateModBinUMGInfoCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeUMGInfoManager.UpdateModBinUMGInfoCount");

	UCreativeUMGInfoManager_UpdateModBinUMGInfoCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeUMGInfoManager::SetUMGInfoDataNodes(TArray<struct FCreativeUMGInfoDataNode> UMGInfoDataNodes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeUMGInfoManager.SetUMGInfoDataNodes");

	UCreativeUMGInfoManager_SetUMGInfoDataNodes_Params params;
	params.UMGInfoDataNodes = UMGInfoDataNodes;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeUMGInfoManager::RemoveUMGInfo(uint32_t ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeUMGInfoManager.RemoveUMGInfo");

	UCreativeUMGInfoManager_RemoveUMGInfo_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeUMGInfoManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeUMGInfoManager.ReceiveOnGameStateBeginPlay");

	UCreativeUMGInfoManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeUMGInfoManager::OnRep_ModBinUMGInfoCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeUMGInfoManager.OnRep_ModBinUMGInfoCount");

	UCreativeUMGInfoManager_OnRep_ModBinUMGInfoCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeUMGInfoManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeUMGInfoManager.OnGameStateBeginPlay");

	UCreativeUMGInfoManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UCreativeUMGInfoManager::IsUMGInfoSyncComplete()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeUMGInfoManager.IsUMGInfoSyncComplete");

	UCreativeUMGInfoManager_IsUMGInfoSyncComplete_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<struct FCreativeUMGInfoDataNode> UCreativeUMGInfoManager::GetUMGInfoDataNodes(TArray<uint32_t> DataHashKeys)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeUMGInfoManager.GetUMGInfoDataNodes");

	UCreativeUMGInfoManager_GetUMGInfoDataNodes_Params params;
	params.DataHashKeys = DataHashKeys;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UCreativeUMGInfoManager::GetUMGInfoContent(uint32_t ID, TArray<unsigned char>* OutContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeUMGInfoManager.GetUMGInfoContent");

	UCreativeUMGInfoManager_GetUMGInfoContent_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutContent != nullptr)
		*OutContent = params.OutContent;

	return params.ReturnValue;
}








class UCreativeUMGInfoManager* UCreativeUMGInfoManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeUMGInfoManager.Get");

	UCreativeUMGInfoManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UCreativeUMGInfoManager::ChangeUMGInfo(uint32_t ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeUMGInfoManager.ChangeUMGInfo");

	UCreativeUMGInfoManager_ChangeUMGInfo_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeUMGInfoManager::CallOnReceivePreUMGInfoRemove(uint32_t ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeUMGInfoManager.CallOnReceivePreUMGInfoRemove");

	UCreativeUMGInfoManager_CallOnReceivePreUMGInfoRemove_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeUMGInfoManager::CallOnReceivePostUMGInfoChange(uint32_t ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeUMGInfoManager.CallOnReceivePostUMGInfoChange");

	UCreativeUMGInfoManager_CallOnReceivePostUMGInfoChange_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeUMGInfoManager::CallOnReceivePostUMGInfoAdd(uint32_t ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeUMGInfoManager.CallOnReceivePostUMGInfoAdd");

	UCreativeUMGInfoManager_CallOnReceivePostUMGInfoAdd_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeUMGInfoManager::AddUMGInfo(uint32_t ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeUMGInfoManager.AddUMGInfo");

	UCreativeUMGInfoManager_AddUMGInfo_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeWebSocketManager::SendMessage(const struct FString& Message)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWebSocketManager.SendMessage");

	UCreativeWebSocketManager_SendMessage_Params params;
	params.Message = Message;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeWebSocketManager::ReceiveOnPostSetLuaEventBridgeInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWebSocketManager.ReceiveOnPostSetLuaEventBridgeInstance");

	UCreativeWebSocketManager_ReceiveOnPostSetLuaEventBridgeInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeWebSocketManager::OnTickTimer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWebSocketManager.OnTickTimer");

	UCreativeWebSocketManager_OnTickTimer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeWebSocketManager::OnReceiveConnected()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWebSocketManager.OnReceiveConnected");

	UCreativeWebSocketManager_OnReceiveConnected_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeWebSocketManager::OnPostSetLuaEventBridgeInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWebSocketManager.OnPostSetLuaEventBridgeInstance");

	UCreativeWebSocketManager_OnPostSetLuaEventBridgeInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UCreativeWebSocketManager::OnMessageSent(const struct FString& Message)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWebSocketManager.OnMessageSent");

	UCreativeWebSocketManager_OnMessageSent_Params params;
	params.Message = Message;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCreativeWebSocketManager::OnMessageReceived(const struct FString& Message)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWebSocketManager.OnMessageReceived");

	UCreativeWebSocketManager_OnMessageReceived_Params params;
	params.Message = Message;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UCreativeWebSocketManager::IsConnected()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWebSocketManager.IsConnected");

	UCreativeWebSocketManager_IsConnected_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UCreativeWebSocketManager* UCreativeWebSocketManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWebSocketManager.Get");

	UCreativeWebSocketManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UCreativeWebSocketManager::ConnectServer(const struct FString& ServerURL, const struct FString& ServerProtocol)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWebSocketManager.ConnectServer");

	UCreativeWebSocketManager_ConnectServer_Params params;
	params.ServerURL = ServerURL;
	params.ServerProtocol = ServerProtocol;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeWidgetObject::UnregisterLiteComponent(class ULiteComponent* Component, bool Destroy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWidgetObject.UnregisterLiteComponent");

	UCreativeWidgetObject_UnregisterLiteComponent_Params params;
	params.Component = Component;
	params.Destroy = Destroy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeWidgetObject::ReturnObjectToPool(class UObject* Obj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWidgetObject.ReturnObjectToPool");

	UCreativeWidgetObject_ReturnObjectToPool_Params params;
	params.Obj = Obj;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeWidgetObject::ReturnObjectsToPool(TArray<class UObject*> Objs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWidgetObject.ReturnObjectsToPool");

	UCreativeWidgetObject_ReturnObjectsToPool_Params params;
	params.Objs = Objs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeWidgetObject::RegisterLiteComponent(class ULiteComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWidgetObject.RegisterLiteComponent");

	UCreativeWidgetObject_RegisterLiteComponent_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeWidgetObject::ReceivePostBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWidgetObject.ReceivePostBeginPlay");

	UCreativeWidgetObject_ReceivePostBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UCreativeWidgetObject::ReceiveIsDedicatedServer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWidgetObject.ReceiveIsDedicatedServer");

	UCreativeWidgetObject_ReceiveIsDedicatedServer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UCreativeWidgetObject::ReceiveHasAuthority()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWidgetObject.ReceiveHasAuthority");

	UCreativeWidgetObject_ReceiveHasAuthority_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeWidgetObject::ReceiveEndPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWidgetObject.ReceiveEndPlay");

	UCreativeWidgetObject_ReceiveEndPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeWidgetObject::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWidgetObject.ReceiveBeginPlay");

	UCreativeWidgetObject_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








TArray<class UObject*> UCreativeWidgetObject::GetObjectsFromPool(TArray<struct FCreativePoolGetObjectParamInfo>* ObjectParams)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWidgetObject.GetObjectsFromPool");

	UCreativeWidgetObject_GetObjectsFromPool_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ObjectParams != nullptr)
		*ObjectParams = params.ObjectParams;

	return params.ReturnValue;
}










class UObject* UCreativeWidgetObject::GetObjectFromPool(int PoolId, class UObject* NewOuter, struct FString* InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWidgetObject.GetObjectFromPool");

	UCreativeWidgetObject_GetObjectFromPool_Params params;
	params.PoolId = PoolId;
	params.NewOuter = NewOuter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InName != nullptr)
		*InName = params.InName;

	return params.ReturnValue;
}







class AActor* UCreativeWorldSubSystem::GetManagerCenter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWorldSubSystem.GetManagerCenter");

	UCreativeWorldSubSystem_GetManagerCenter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeWoWInactiveCheckComponent::ServerMarkPlayerActive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWoWInactiveCheckComponent.ServerMarkPlayerActive");

	UCreativeWoWInactiveCheckComponent_ServerMarkPlayerActive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeWoWInactiveCheckComponent::MarkPlayerActive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWoWInactiveCheckComponent.MarkPlayerActive");

	UCreativeWoWInactiveCheckComponent_MarkPlayerActive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeWoWInactiveCheckComponent::KickOutPlayer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWoWInactiveCheckComponent.KickOutPlayer");

	UCreativeWoWInactiveCheckComponent_KickOutPlayer_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeWoWInactiveCheckComponent::ClientShowKickOutTip(float RemainTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWoWInactiveCheckComponent.ClientShowKickOutTip");

	UCreativeWoWInactiveCheckComponent_ClientShowKickOutTip_Params params;
	params.RemainTime = RemainTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeWoWInactiveCheckComponent::ClientCachedActiveState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWoWInactiveCheckComponent.ClientCachedActiveState");

	UCreativeWoWInactiveCheckComponent_ClientCachedActiveState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UCreativeWoWInactiveCheckComponent::CheckForMovement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWoWInactiveCheckComponent.CheckForMovement");

	UCreativeWoWInactiveCheckComponent_CheckForMovement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeWoWInactiveCheckComponent::CheckForInactive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWoWInactiveCheckComponent.CheckForInactive");

	UCreativeWoWInactiveCheckComponent_CheckForInactive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeWoWManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWoWManager.ReceiveOnGameStateBeginPlay");

	UCreativeWoWManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeWoWManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWoWManager.OnGameStateBeginPlay");

	UCreativeWoWManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class UCreativeWoWManager* UCreativeWoWManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWoWManager.Get");

	UCreativeWoWManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UCustomAssetUtilityObject::SaveArrayToFile(TArray<unsigned char> Content, const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetUtilityObject.SaveArrayToFile");

	UCustomAssetUtilityObject_SaveArrayToFile_Params params;
	params.Content = Content;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UCustomAssetUtilityObject::ReceiveIsDedicatedServer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetUtilityObject.ReceiveIsDedicatedServer");

	UCustomAssetUtilityObject_ReceiveIsDedicatedServer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UCustomAssetManager* UCustomAssetUtilityObject::ReceiveGetCustomAssetMgr()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetUtilityObject.ReceiveGetCustomAssetMgr");

	UCustomAssetUtilityObject_ReceiveGetCustomAssetMgr_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCustomAssetUtilityObject::LuaConditionalBeginDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetUtilityObject.LuaConditionalBeginDestroy");

	UCustomAssetUtilityObject_LuaConditionalBeginDestroy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








TArray<unsigned char> UCustomAssetUtilityObject::LoadFileToArray(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetUtilityObject.LoadFileToArray");

	UCustomAssetUtilityObject_LoadFileToArray_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCustomAssetUtilityObject::IsFileExistsInSaved(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetUtilityObject.IsFileExistsInSaved");

	UCustomAssetUtilityObject_IsFileExistsInSaved_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCustomAssetUtilityObject::InitUtilityObject(class UCustomAssetManager* CustomAssetManager)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetUtilityObject.InitUtilityObject");

	UCustomAssetUtilityObject_InitUtilityObject_Params params;
	params.CustomAssetManager = CustomAssetManager;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FString UCustomAssetUtilityObject::GetLastError()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetUtilityObject.GetLastError");

	UCustomAssetUtilityObject_GetLastError_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<struct FString> UCustomAssetUtilityObject::GetAllFilesInDirectoryRelative(const struct FString& TargetDirectory)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetUtilityObject.GetAllFilesInDirectoryRelative");

	UCustomAssetUtilityObject_GetAllFilesInDirectoryRelative_Params params;
	params.TargetDirectory = TargetDirectory;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCustomAssetUtilityObject::DeleteFileInSaved(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetUtilityObject.DeleteFileInSaved");

	UCustomAssetUtilityObject_DeleteFileInSaved_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<bool> UCustomAssetUtilityObject::AreFilesExistInSaved(TArray<struct FString> FileNameList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetUtilityObject.AreFilesExistInSaved");

	UCustomAssetUtilityObject_AreFilesExistInSaved_Params params;
	params.FileNameList = FileNameList;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UCustomAssetDeserializer::DeserializeCompletedDelegate__DelegateSignature(class UCustomAssetDeserializer* uDeserializer, class UObject* OutAssetBytes, uint64_t DeserializeSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Creative.CustomAssetDeserializer.DeserializeCompletedDelegate__DelegateSignature");

	UCustomAssetDeserializer_DeserializeCompletedDelegate__DelegateSignature_Params params;
	params.uDeserializer = uDeserializer;
	params.OutAssetBytes = OutAssetBytes;
	params.DeserializeSeq = DeserializeSeq;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCustomAssetDeserializer::DeserializeCompleted(uint64_t DeserializeSeq, class UObject* OutAsset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetDeserializer.DeserializeCompleted");

	UCustomAssetDeserializer_DeserializeCompleted_Params params;
	params.DeserializeSeq = DeserializeSeq;
	params.OutAsset = OutAsset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











bool UCustomAssetDeserializer::Deserialize(TArray<unsigned char> InBytes, const struct FString& SuffixType, uint64_t DeserializeSeq, class UObject* Outer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetDeserializer.Deserialize");

	UCustomAssetDeserializer_Deserialize_Params params;
	params.InBytes = InBytes;
	params.SuffixType = SuffixType;
	params.DeserializeSeq = DeserializeSeq;
	params.Outer = Outer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCustomAssetAnimDeserializer::IsValidData(TArray<unsigned char> InBytes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetAnimDeserializer.IsValidData");

	UCustomAssetAnimDeserializer_IsValidData_Params params;
	params.InBytes = InBytes;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










class UCustomAssetRuntimeBodyAnimData* UCustomAssetAnimManager::GetRuntimeBodyAnimData(class UAnimSequence* InAnim, class USkeleton* InSkeleton, class UObject* Outer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetAnimManager.GetRuntimeBodyAnimData");

	UCustomAssetAnimManager_GetRuntimeBodyAnimData_Params params;
	params.InAnim = InAnim;
	params.InSkeleton = InSkeleton;
	params.Outer = Outer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









TArray<struct FAIGCRuntimeBodyAnimFrameData> UCustomAssetAnimManager::ConvertAnimSequenceToBodyAnimData(class UAnimSequence* AnimSequence, int* OutFrameRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetAnimManager.ConvertAnimSequenceToBodyAnimData");

	UCustomAssetAnimManager_ConvertAnimSequenceToBodyAnimData_Params params;
	params.AnimSequence = AnimSequence;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutFrameRate != nullptr)
		*OutFrameRate = params.OutFrameRate;

	return params.ReturnValue;
}










uint64_t UCustomAssetAudioManager::WemCutByAssetKey(uint64_t AssetKey, int StartTime, int EndTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetAudioManager.WemCutByAssetKey");

	UCustomAssetAudioManager_WemCutByAssetKey_Params params;
	params.AssetKey = AssetKey;
	params.StartTime = StartTime;
	params.EndTime = EndTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}













uint32_t UCustomAssetAudioManager::SeekOnEvent(class UAkAudioEvent* Event, class AActor* Actor, int in_iPosition, bool bStopWhenOwnerDestroyed, uint64_t AssetKey, uint32_t* PlayingID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetAudioManager.SeekOnEvent");

	UCustomAssetAudioManager_SeekOnEvent_Params params;
	params.Event = Event;
	params.Actor = Actor;
	params.in_iPosition = in_iPosition;
	params.bStopWhenOwnerDestroyed = bStopWhenOwnerDestroyed;
	params.AssetKey = AssetKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (PlayingID != nullptr)
		*PlayingID = params.PlayingID;

	return params.ReturnValue;
}







int UCustomAssetAudioManager::AllocateTempAssetKey()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetAudioManager.AllocateTempAssetKey");

	UCustomAssetAudioManager_AllocateTempAssetKey_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCustomAssetImageDeserializer::IsValidData(TArray<unsigned char> InBytes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetImageDeserializer.IsValidData");

	UCustomAssetImageDeserializer_IsValidData_Params params;
	params.InBytes = InBytes;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCustomImageDataWrapper::MakeUniqueName(class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomImageDataWrapper.MakeUniqueName");

	UCustomImageDataWrapper_MakeUniqueName_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UObject* UCustomImageDataWrapper::GetImageWrapperOuter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomImageDataWrapper.GetImageWrapperOuter");

	UCustomImageDataWrapper_GetImageWrapperOuter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCustomAssetImageManager::RemoveTextureRef(uint64_t HashID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetImageManager.RemoveTextureRef");

	UCustomAssetImageManager_RemoveTextureRef_Params params;
	params.HashID = HashID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








TEnumAsByte<EPixelFormat> UCustomAssetImageManager::ReadPixelFormat(class UTexture2D* Target)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetImageManager.ReadPixelFormat");

	UCustomAssetImageManager_ReadPixelFormat_Params params;
	params.Target = Target;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FImageSummary UCustomAssetImageManager::ReadImageSummary(TArray<unsigned char> ImageData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetImageManager.ReadImageSummary");

	UCustomAssetImageManager_ReadImageSummary_Params params;
	params.ImageData = ImageData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<unsigned char> UCustomAssetImageManager::ReadImageRGBA(TArray<unsigned char> ImageData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetImageManager.ReadImageRGBA");

	UCustomAssetImageManager_ReadImageRGBA_Params params;
	params.ImageData = ImageData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}












void UCustomAssetImageManager::LuaUpdateTextureResource2Png(class UTexture2D* Target, int TexGroup, int Width, int Height, int MipIndex, TArray<unsigned char> TexData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetImageManager.LuaUpdateTextureResource2Png");

	UCustomAssetImageManager_LuaUpdateTextureResource2Png_Params params;
	params.Target = Target;
	params.TexGroup = TexGroup;
	params.Width = Width;
	params.Height = Height;
	params.MipIndex = MipIndex;
	params.TexData = TexData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}













void UCustomAssetImageManager::LuaUpdateTextureResource2(class UTexture2D* Target, int TexGroup, int Width, int Height, int MipIndex, int PixelFormat, TArray<unsigned char> TexData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetImageManager.LuaUpdateTextureResource2");

	UCustomAssetImageManager_LuaUpdateTextureResource2_Params params;
	params.Target = Target;
	params.TexGroup = TexGroup;
	params.Width = Width;
	params.Height = Height;
	params.MipIndex = MipIndex;
	params.PixelFormat = PixelFormat;
	params.TexData = TexData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










class UTexture2D* UCustomAssetImageManager::LuaReserveTexture2(int PixelFormat, int TexGroup, class UTexture2D* OtherTex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetImageManager.LuaReserveTexture2");

	UCustomAssetImageManager_LuaReserveTexture2_Params params;
	params.PixelFormat = PixelFormat;
	params.TexGroup = TexGroup;
	params.OtherTex = OtherTex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











class UTexture2D* UCustomAssetImageManager::LuaReserveTexture(int PixelFormat, int TexGroup, int Width, int Height)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetImageManager.LuaReserveTexture");

	UCustomAssetImageManager_LuaReserveTexture_Params params;
	params.PixelFormat = PixelFormat;
	params.TexGroup = TexGroup;
	params.Width = Width;
	params.Height = Height;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCustomAssetImageManager::IsValidImageSummary(const struct FImageSummary& Summary)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetImageManager.IsValidImageSummary");

	UCustomAssetImageManager_IsValidImageSummary_Params params;
	params.Summary = Summary;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCustomAssetImageManager::IsPngImageData(TArray<unsigned char> ImageData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetImageManager.IsPngImageData");

	UCustomAssetImageManager_IsPngImageData_Params params;
	params.ImageData = ImageData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TEnumAsByte<EPixelFormat> UCustomAssetImageManager::GetPixelFormat(int PixelFormat)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetImageManager.GetPixelFormat");

	UCustomAssetImageManager_GetPixelFormat_Params params;
	params.PixelFormat = PixelFormat;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UCustomAssetImageManager::GetPixelBlockSize(int PixelFormat, int* SizeX, int* SizeY)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetImageManager.GetPixelBlockSize");

	UCustomAssetImageManager_GetPixelBlockSize_Params params;
	params.PixelFormat = PixelFormat;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SizeX != nullptr)
		*SizeX = params.SizeX;
	if (SizeY != nullptr)
		*SizeY = params.SizeY;
}








struct FString UCustomAssetImageManager::GetObjectPath(class UObject* Object)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetImageManager.GetObjectPath");

	UCustomAssetImageManager_GetObjectPath_Params params;
	params.Object = Object;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UCustomAssetImageManager::GetHeaderSize(TEnumAsByte<EPixelFormat> Format)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetImageManager.GetHeaderSize");

	UCustomAssetImageManager_GetHeaderSize_Params params;
	params.Format = Format;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UCustomAssetImageManager::AddTextureRef(uint64_t HashID, class UTexture2D* Tex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetImageManager.AddTextureRef");

	UCustomAssetImageManager_AddTextureRef_Params params;
	params.HashID = HashID;
	params.Tex = Tex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCustomAssetManager::TryBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetManager.TryBeginPlay");

	UCustomAssetManager_TryBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UCustomAssetManager::ReceiveIsDedicatedServer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetManager.ReceiveIsDedicatedServer");

	UCustomAssetManager_ReceiveIsDedicatedServer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCustomAssetManager::PrintAliveCustomAssets()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetManager.PrintAliveCustomAssets");

	UCustomAssetManager_PrintAliveCustomAssets_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











bool UCustomAssetManager::ParseCustomAssetKeyHashID(uint64_t HashID, unsigned char ExpectedHashIDTag, unsigned char* OutCustomAssetType, uint32_t* OutUniqueId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetManager.ParseCustomAssetKeyHashID");

	UCustomAssetManager_ParseCustomAssetKeyHashID_Params params;
	params.HashID = HashID;
	params.ExpectedHashIDTag = ExpectedHashIDTag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutCustomAssetType != nullptr)
		*OutCustomAssetType = params.OutCustomAssetType;
	if (OutUniqueId != nullptr)
		*OutUniqueId = params.OutUniqueId;

	return params.ReturnValue;
}








uint32_t UCustomAssetManager::GetHashByString(const struct FString& CustomAssetKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetManager.GetHashByString");

	UCustomAssetManager_GetHashByString_Params params;
	params.CustomAssetKey = CustomAssetKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCustomAssetManager::GetCustomAssetPathName(class UObject* CustomAsset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetManager.GetCustomAssetPathName");

	UCustomAssetManager_GetCustomAssetPathName_Params params;
	params.CustomAsset = CustomAsset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UObject* UCustomAssetManager::GetCustomAssetOuter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetManager.GetCustomAssetOuter");

	UCustomAssetManager_GetCustomAssetOuter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UObject* UCustomAssetManager::GetCustomAssetObjectFromTrackedMap(const struct FString& BytesMD5)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetManager.GetCustomAssetObjectFromTrackedMap");

	UCustomAssetManager_GetCustomAssetObjectFromTrackedMap_Params params;
	params.BytesMD5 = BytesMD5;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UCustomAssetManager::GetCurPlatformSuffixType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetManager.GetCurPlatformSuffixType");

	UCustomAssetManager_GetCurPlatformSuffixType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










uint64_t UCustomAssetManager::GenerateHashIDByCustomAssetKey(const struct FString& CustomAssetKey, unsigned char CustomAssetType, unsigned char HashIDTag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetManager.GenerateHashIDByCustomAssetKey");

	UCustomAssetManager_GenerateHashIDByCustomAssetKey_Params params;
	params.CustomAssetKey = CustomAssetKey;
	params.CustomAssetType = CustomAssetType;
	params.HashIDTag = HashIDTag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCustomAssetManager::CustomAssetMgrConditionalBeginDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetManager.CustomAssetMgrConditionalBeginDestroy");

	UCustomAssetManager_CustomAssetMgrConditionalBeginDestroy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCustomAssetManager::CleanupStaleCustomAssets()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetManager.CleanupStaleCustomAssets");

	UCustomAssetManager_CleanupStaleCustomAssets_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCustomAssetManager::CleanupAliveCustomAssetObjects()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetManager.CleanupAliveCustomAssetObjects");

	UCustomAssetManager_CleanupAliveCustomAssetObjects_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCustomAssetManager::AddCustomAssetObjectToTrackedMap(const struct FString& BytesMD5, class UObject* AssetObject, const struct FString& LoadStack)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetManager.AddCustomAssetObjectToTrackedMap");

	UCustomAssetManager_AddCustomAssetObjectToTrackedMap_Params params;
	params.BytesMD5 = BytesMD5;
	params.AssetObject = AssetObject;
	params.LoadStack = LoadStack;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCustomAssetMountStateComponent::SetMountStatusInfos(TArray<struct FCustomAssetMountStatusInfo> Infos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetMountStateComponent.SetMountStatusInfos");

	UCustomAssetMountStateComponent_SetMountStatusInfos_Params params;
	params.Infos = Infos;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UCustomAssetMountStateComponent::RemoveMountStatusInfo(struct FString* AssetKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetMountStateComponent.RemoveMountStatusInfo");

	UCustomAssetMountStateComponent_RemoveMountStatusInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AssetKey != nullptr)
		*AssetKey = params.AssetKey;

	return params.ReturnValue;
}







bool UCustomAssetMountStateComponent::ReceiveIsDedicatedServer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetMountStateComponent.ReceiveIsDedicatedServer");

	UCustomAssetMountStateComponent_ReceiveIsDedicatedServer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UCustomAssetMountStateComponent::ReceiveHasAuthority()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetMountStateComponent.ReceiveHasAuthority");

	UCustomAssetMountStateComponent_ReceiveHasAuthority_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<struct FCustomAssetMountStatusInfo> UCustomAssetMountStateComponent::GetMountStatusInfos(TArray<uint32_t> Ids)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetMountStateComponent.GetMountStatusInfos");

	UCustomAssetMountStateComponent_GetMountStatusInfos_Params params;
	params.Ids = Ids;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UCustomAssetMountStateComponent::ChangeMountStatusInfo(EMountStatus MountStatus, TArray<uint32_t> MountingPlayerKeys, struct FString* AssetKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetMountStateComponent.ChangeMountStatusInfo");

	UCustomAssetMountStateComponent_ChangeMountStatusInfo_Params params;
	params.MountStatus = MountStatus;
	params.MountingPlayerKeys = MountingPlayerKeys;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AssetKey != nullptr)
		*AssetKey = params.AssetKey;

	return params.ReturnValue;
}












bool UCustomAssetMountStateComponent::AddMountStatusInfo(EMountStatus MountStatus, TArray<uint32_t> MountingPlayerKeys, uint32_t MountedByPlayerKey, TArray<unsigned char> MappingInfoContent, struct FString* AssetKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetMountStateComponent.AddMountStatusInfo");

	UCustomAssetMountStateComponent_AddMountStatusInfo_Params params;
	params.MountStatus = MountStatus;
	params.MountingPlayerKeys = MountingPlayerKeys;
	params.MountedByPlayerKey = MountedByPlayerKey;
	params.MappingInfoContent = MappingInfoContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AssetKey != nullptr)
		*AssetKey = params.AssetKey;

	return params.ReturnValue;
}










bool UCustomAssetPlatformBuilder::StartBuild(TArray<unsigned char> SourceBytes, uint64_t CurBuildSeq, class UObject* SourceObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetPlatformBuilder.StartBuild");

	UCustomAssetPlatformBuilder_StartBuild_Params params;
	params.SourceBytes = SourceBytes;
	params.CurBuildSeq = CurBuildSeq;
	params.SourceObject = SourceObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UCustomAssetPlatformBuilder::PlatformBuilderCompletedDelegate__DelegateSignature(class UCustomAssetPlatformBuilder* uPlatformBuilder, TArray<struct FPlatformCustomAssetInfo> PlatformCustomAssetInfoList, uint64_t BuilderSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Creative.CustomAssetPlatformBuilder.PlatformBuilderCompletedDelegate__DelegateSignature");

	UCustomAssetPlatformBuilder_PlatformBuilderCompletedDelegate__DelegateSignature_Params params;
	params.uPlatformBuilder = uPlatformBuilder;
	params.PlatformCustomAssetInfoList = PlatformCustomAssetInfoList;
	params.BuilderSeq = BuilderSeq;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UCustomAssetSkeletalAnimDeserializer::IsValidData(TArray<unsigned char> InBytes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetSkeletalAnimDeserializer.IsValidData");

	UCustomAssetSkeletalAnimDeserializer_IsValidData_Params params;
	params.InBytes = InBytes;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCustomAssetSkeletalMeshDeserializer::IsValidData(TArray<unsigned char> InBytes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetSkeletalMeshDeserializer.IsValidData");

	UCustomAssetSkeletalMeshDeserializer_IsValidData_Params params;
	params.InBytes = InBytes;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCustomAssetStaticMeshDeserializer::IsValidData(TArray<unsigned char> InBytes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CustomAssetStaticMeshDeserializer.IsValidData");

	UCustomAssetStaticMeshDeserializer_IsValidData_Params params;
	params.InBytes = InBytes;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void ADancerDeviceActor::OnRep_SyncPlayerCharacter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DancerDeviceActor.OnRep_SyncPlayerCharacter");

	ADancerDeviceActor_OnRep_SyncPlayerCharacter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UDataTransferComponent::StartTransfer(const struct FString& FilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DataTransferComponent.StartTransfer");

	UDataTransferComponent_StartTransfer_Params params;
	params.FilePath = FilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UDataTransferComponent::Server_RequestFile(const struct FString& FilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DataTransferComponent.Server_RequestFile");

	UDataTransferComponent_Server_RequestFile_Params params;
	params.FilePath = FilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UDataTransferComponent::Server_ReceivePacketAck(int16_t TaskID, int16_t Seq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DataTransferComponent.Server_ReceivePacketAck");

	UDataTransferComponent_Server_ReceivePacketAck_Params params;
	params.TaskID = TaskID;
	params.Seq = Seq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UDataTransferComponent::Server_ReceivePacket(const struct FDTPacket& Packet)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DataTransferComponent.Server_ReceivePacket");

	UDataTransferComponent_Server_ReceivePacket_Params params;
	params.Packet = Packet;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








int UDataTransferComponent::SendData(TArray<unsigned char> fileData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DataTransferComponent.SendData");

	UDataTransferComponent_SendData_Params params;
	params.fileData = fileData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UDataTransferComponent::ReceivePacketAck(int16_t TaskID, int16_t Seq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DataTransferComponent.ReceivePacketAck");

	UDataTransferComponent_ReceivePacketAck_Params params;
	params.TaskID = TaskID;
	params.Seq = Seq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UDataTransferComponent::ReceivePacket(const struct FDTPacket& Packet)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DataTransferComponent.ReceivePacket");

	UDataTransferComponent_ReceivePacket_Params params;
	params.Packet = Packet;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UDataTransferComponent::Init()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DataTransferComponent.Init");

	UDataTransferComponent_Init_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UDataTransferComponent::Client_RequestFile(const struct FString& FilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DataTransferComponent.Client_RequestFile");

	UDataTransferComponent_Client_RequestFile_Params params;
	params.FilePath = FilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UDataTransferComponent::Client_ReceivePacketAck(int16_t TaskID, int16_t Seq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DataTransferComponent.Client_ReceivePacketAck");

	UDataTransferComponent_Client_ReceivePacketAck_Params params;
	params.TaskID = TaskID;
	params.Seq = Seq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UDataTransferComponent::Client_ReceivePacket(const struct FDTPacket& Packet)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DataTransferComponent.Client_ReceivePacket");

	UDataTransferComponent_Client_ReceivePacket_Params params;
	params.Packet = Packet;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class UDSLParserASTTree* UDSLParser::ParseText(const struct FString& Source)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DSLParser.ParseText");

	UDSLParser_ParseText_Params params;
	params.Source = Source;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UDSLParserASTTree* UDSLParser::ParseFile(const struct FString& FilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DSLParser.ParseFile");

	UDSLParser_ParseFile_Params params;
	params.FilePath = FilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UDSLParser::LoadGrammarFromString(const struct FString& InGrammarText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DSLParser.LoadGrammarFromString");

	UDSLParser_LoadGrammarFromString_Params params;
	params.InGrammarText = InGrammarText;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UDSLParser::LoadGrammarFromFile(const struct FString& FilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DSLParser.LoadGrammarFromFile");

	UDSLParser_LoadGrammarFromFile_Params params;
	params.FilePath = FilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UDSLParser::GetLastError()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DSLParser.GetLastError");

	UDSLParser_GetLastError_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UDSLParser::GetGrammarText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DSLParser.GetGrammarText");

	UDSLParser_GetGrammarText_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<struct FString> UDSLParser::GetGrammarRuleNames()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DSLParser.GetGrammarRuleNames");

	UDSLParser_GetGrammarRuleNames_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UDSLParser::ClearGrammar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DSLParser.ClearGrammar");

	UDSLParser_ClearGrammar_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UDSLParser::AddGrammarRule(const struct FString& RuleName, const struct FString& RuleBody)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DSLParser.AddGrammarRule");

	UDSLParser_AddGrammarRule_Params params;
	params.RuleName = RuleName;
	params.RuleBody = RuleBody;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FString UDSLParserASTTree::ToJson()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DSLParserASTTree.ToJson");

	UDSLParserASTTree_ToJson_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UDSLParserASTTree::IsValid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DSLParserASTTree.IsValid");

	UDSLParserASTTree_IsValid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UDSLParserASTTree::GetRootNodeId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DSLParserASTTree.GetRootNodeId");

	UDSLParserASTTree_GetRootNodeId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









int UDSLParserASTTree::GetPropertyNodeId(int NodeId, const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DSLParserASTTree.GetPropertyNodeId");

	UDSLParserASTTree_GetPropertyNodeId_Params params;
	params.NodeId = NodeId;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<struct FString> UDSLParserASTTree::GetPropertyKeys(int NodeId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DSLParserASTTree.GetPropertyKeys");

	UDSLParserASTTree_GetPropertyKeys_Params params;
	params.NodeId = NodeId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UDSLParserASTTree::GetNodeValue(int NodeId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DSLParserASTTree.GetNodeValue");

	UDSLParserASTTree_GetNodeValue_Params params;
	params.NodeId = NodeId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UDSLParserASTTree::GetNodeName(int NodeId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DSLParserASTTree.GetNodeName");

	UDSLParserASTTree_GetNodeName_Params params;
	params.NodeId = NodeId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UDSLParserASTTree::GetNodeKind(int NodeId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DSLParserASTTree.GetNodeKind");

	UDSLParserASTTree_GetNodeKind_Params params;
	params.NodeId = NodeId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UDSLParserASTTree::GetNodeCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DSLParserASTTree.GetNodeCount");

	UDSLParserASTTree_GetNodeCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UDSLParserASTTree::GetError()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DSLParserASTTree.GetError");

	UDSLParserASTTree_GetError_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<int> UDSLParserASTTree::GetChildren(int NodeId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DSLParserASTTree.GetChildren");

	UDSLParserASTTree_GetChildren_Params params;
	params.NodeId = NodeId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UGameModeStateFighting_CreativeMode::SetToInfinityTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.GameModeStateFighting_CreativeMode.SetToInfinityTime");

	UGameModeStateFighting_CreativeMode_SetToInfinityTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGameModeStateFighting_CreativeMode::PlayersInfoRecord()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.GameModeStateFighting_CreativeMode.PlayersInfoRecord");

	UGameModeStateFighting_CreativeMode_PlayersInfoRecord_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGameProcessEventObject::ReceivePostEvent(int ProcessType, int Round)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.GameProcessEventObject.ReceivePostEvent");

	UGameProcessEventObject_ReceivePostEvent_Params params;
	params.ProcessType = ProcessType;
	params.Round = Round;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGameProcessEventObject::OnEnterPlayProcess()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.GameProcessEventObject.OnEnterPlayProcess");

	UGameProcessEventObject_OnEnterPlayProcess_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FPaintVoxelCoord APaintScoreManager::WorldToVoxelBP(const struct FVector& WorldPos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.WorldToVoxelBP");

	APaintScoreManager_WorldToVoxelBP_Params params;
	params.WorldPos = WorldPos;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FVector APaintScoreManager::VoxelToWorldBP(const struct FPaintVoxelCoord& VoxelCoord)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.VoxelToWorldBP");

	APaintScoreManager_VoxelToWorldBP_Params params;
	params.VoxelCoord = VoxelCoord;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void APaintScoreManager::UpdateUserAreaCache(int UserId, float AreaDelta)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.UpdateUserAreaCache");

	APaintScoreManager_UpdateUserAreaCache_Params params;
	params.UserId = UserId;
	params.AreaDelta = AreaDelta;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










bool APaintScoreManager::TriangleIntersectsSphere(int TriangleIndex, const struct FVector& SphereCenter, float SphereRadius)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.TriangleIntersectsSphere");

	APaintScoreManager_TriangleIntersectsSphere_Params params;
	params.TriangleIndex = TriangleIndex;
	params.SphereCenter = SphereCenter;
	params.SphereRadius = SphereRadius;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void APaintScoreManager::SubdivideOctreeNode(struct FPaintOctreeNode* Node)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.SubdivideOctreeNode");

	APaintScoreManager_SubdivideOctreeNode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Node != nullptr)
		*Node = params.Node;
}









bool APaintScoreManager::SetVoxelCellOwner(const struct FPaintVoxelCoord& VoxelCoord, int UserId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.SetVoxelCellOwner");

	APaintScoreManager_SetVoxelCellOwner_Params params;
	params.VoxelCoord = VoxelCoord;
	params.UserId = UserId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool APaintScoreManager::SetSmallTriangleOwner(int Index, int UserId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.SetSmallTriangleOwner");

	APaintScoreManager_SetSmallTriangleOwner_Params params;
	params.Index = Index;
	params.UserId = UserId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void APaintScoreManager::SetOctreeRoot(const struct FPaintOctreeNode& NewRoot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.SetOctreeRoot");

	APaintScoreManager_SetOctreeRoot_Params params;
	params.NewRoot = NewRoot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void APaintScoreManager::Reset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.Reset");

	APaintScoreManager_Reset_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void APaintScoreManager::RemoveUserPaint(const struct FString& UserName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.RemoveUserPaint");

	APaintScoreManager_RemoveUserPaint_Params params;
	params.UserName = UserName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void APaintScoreManager::QueryOctree(const struct FPaintOctreeNode& Node, const struct FVector& SphereCenter, float SphereRadius, TArray<int>* OutTriangleIndices)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.QueryOctree");

	APaintScoreManager_QueryOctree_Params params;
	params.Node = Node;
	params.SphereCenter = SphereCenter;
	params.SphereRadius = SphereRadius;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutTriangleIndices != nullptr)
		*OutTriangleIndices = params.OutTriangleIndices;
}




















bool APaintScoreManager::ProjectTriangleTo2D(const struct FVector& A, const struct FVector& B, const struct FVector& C, const struct FVector& SphereCenter, float SphereRadius, struct FVector2D* OutA2D, struct FVector2D* OutB2D, struct FVector2D* OutC2D, struct FVector2D* OutCenter2D, float* OutRadius2D, struct FVector* OutE1, struct FVector* OutE2, struct FVector* OutPlaneOrigin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.ProjectTriangleTo2D");

	APaintScoreManager_ProjectTriangleTo2D_Params params;
	params.A = A;
	params.B = B;
	params.C = C;
	params.SphereCenter = SphereCenter;
	params.SphereRadius = SphereRadius;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutA2D != nullptr)
		*OutA2D = params.OutA2D;
	if (OutB2D != nullptr)
		*OutB2D = params.OutB2D;
	if (OutC2D != nullptr)
		*OutC2D = params.OutC2D;
	if (OutCenter2D != nullptr)
		*OutCenter2D = params.OutCenter2D;
	if (OutRadius2D != nullptr)
		*OutRadius2D = params.OutRadius2D;
	if (OutE1 != nullptr)
		*OutE1 = params.OutE1;
	if (OutE2 != nullptr)
		*OutE2 = params.OutE2;
	if (OutPlaneOrigin != nullptr)
		*OutPlaneOrigin = params.OutPlaneOrigin;

	return params.ReturnValue;
}









float APaintScoreManager::ProcessVoxelOwnershipTransfer(const struct FPaintVoxelCoord& VoxelCoord, int UserId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.ProcessVoxelOwnershipTransfer");

	APaintScoreManager_ProcessVoxelOwnershipTransfer_Params params;
	params.VoxelCoord = VoxelCoord;
	params.UserId = UserId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









float APaintScoreManager::ProcessVoxelCellsForPaint(const struct FVector& Center, int UserId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.ProcessVoxelCellsForPaint");

	APaintScoreManager_ProcessVoxelCellsForPaint_Params params;
	params.Center = Center;
	params.UserId = UserId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










void APaintScoreManager::ProcessTriangleWithCoverageMethod(int TriangleIndex, const struct FVector& Center, unsigned char InternalUserID, class UWorld* DebugWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.ProcessTriangleWithCoverageMethod");

	APaintScoreManager_ProcessTriangleWithCoverageMethod_Params params;
	params.TriangleIndex = TriangleIndex;
	params.Center = Center;
	params.InternalUserID = InternalUserID;
	params.DebugWorld = DebugWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void APaintScoreManager::ProcessTrianglesWithLinearSearch(const struct FVector& Center, float Radius, unsigned char InternalUserID, class UWorld* DebugWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.ProcessTrianglesWithLinearSearch");

	APaintScoreManager_ProcessTrianglesWithLinearSearch_Params params;
	params.Center = Center;
	params.Radius = Radius;
	params.InternalUserID = InternalUserID;
	params.DebugWorld = DebugWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










float APaintScoreManager::ProcessTriangleOwnershipTransfer(int TriangleIndex, int UserId, float ClippedArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.ProcessTriangleOwnershipTransfer");

	APaintScoreManager_ProcessTriangleOwnershipTransfer_Params params;
	params.TriangleIndex = TriangleIndex;
	params.UserId = UserId;
	params.ClippedArea = ClippedArea;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










float APaintScoreManager::ProcessSmallTrianglesForPaint(const struct FVector& Center, float Radius, int UserId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.ProcessSmallTrianglesForPaint");

	APaintScoreManager_ProcessSmallTrianglesForPaint_Params params;
	params.Center = Center;
	params.Radius = Radius;
	params.UserId = UserId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











void APaintScoreManager::ProcessSingleTriangleForPaint(int TriangleIndex, const struct FVector& Center, float Radius, unsigned char InternalUserID, class UWorld* DebugWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.ProcessSingleTriangleForPaint");

	APaintScoreManager_ProcessSingleTriangleForPaint_Params params;
	params.TriangleIndex = TriangleIndex;
	params.Center = Center;
	params.Radius = Radius;
	params.InternalUserID = InternalUserID;
	params.DebugWorld = DebugWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}












bool APaintScoreManager::PerformTwoPointSplit(int TriangleIndex, const struct FVector& SphereCenter, float SphereRadius, unsigned char NewOwnerID, float* OutTransferredArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.PerformTwoPointSplit");

	APaintScoreManager_PerformTwoPointSplit_Params params;
	params.TriangleIndex = TriangleIndex;
	params.SphereCenter = SphereCenter;
	params.SphereRadius = SphereRadius;
	params.NewOwnerID = NewOwnerID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutTransferredArea != nullptr)
		*OutTransferredArea = params.OutTransferredArea;

	return params.ReturnValue;
}












bool APaintScoreManager::IntersectSegmentCircle2D(const struct FVector2D& P0, const struct FVector2D& P1, const struct FVector2D& CircleCenter, float Radius, TArray<float>* OutT)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.IntersectSegmentCircle2D");

	APaintScoreManager_IntersectSegmentCircle2D_Params params;
	params.P0 = P0;
	params.P1 = P1;
	params.CircleCenter = CircleCenter;
	params.Radius = Radius;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutT != nullptr)
		*OutT = params.OutT;

	return params.ReturnValue;
}








void APaintScoreManager::InsertTriangleIntoOctree(int TriangleIndex, struct FPaintOctreeNode* Node)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.InsertTriangleIntoOctree");

	APaintScoreManager_InsertTriangleIntoOctree_Params params;
	params.TriangleIndex = TriangleIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Node != nullptr)
		*Node = params.Node;
}








void APaintScoreManager::Initialize(TArray<struct FVector> Vertices, TArray<int> Indices)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.Initialize");

	APaintScoreManager_Initialize_Params params;
	params.Vertices = Vertices;
	params.Indices = Indices;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void APaintScoreManager::InitByNavManager(const struct FBox& Area)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.InitByNavManager");

	APaintScoreManager_InitByNavManager_Params params;
	params.Area = Area;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool APaintScoreManager::GetVoxelCellInfo(const struct FPaintVoxelCoord& VoxelCoord, struct FPaintVoxelCell* OutCell)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.GetVoxelCellInfo");

	APaintScoreManager_GetVoxelCellInfo_Params params;
	params.VoxelCoord = VoxelCoord;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutCell != nullptr)
		*OutCell = params.OutCell;

	return params.ReturnValue;
}








float APaintScoreManager::GetUserScore(const struct FString& UserName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.GetUserScore");

	APaintScoreManager_GetUserScore_Params params;
	params.UserName = UserName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FVector APaintScoreManager::GetTriangleCentroid(int TriangleIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.GetTriangleCentroid");

	APaintScoreManager_GetTriangleCentroid_Params params;
	params.TriangleIndex = TriangleIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int APaintScoreManager::GetSmallTrianglesCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.GetSmallTrianglesCount");

	APaintScoreManager_GetSmallTrianglesCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool APaintScoreManager::GetSmallTriangleInfo(int Index, struct FPaintTriangleInfo* OutTriangle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.GetSmallTriangleInfo");

	APaintScoreManager_GetSmallTriangleInfo_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutTriangle != nullptr)
		*OutTriangle = params.OutTriangle;

	return params.ReturnValue;
}







int APaintScoreManager::GetRegisteredUserCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.GetRegisteredUserCount");

	APaintScoreManager_GetRegisteredUserCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<struct FPaintVoxelCoord> APaintScoreManager::GetPrecomputedDiskOffsets()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.GetPrecomputedDiskOffsets");

	APaintScoreManager_GetPrecomputedDiskOffsets_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FPaintOctreeNode APaintScoreManager::GetOctreeRoot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.GetOctreeRoot");

	APaintScoreManager_GetOctreeRoot_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString APaintScoreManager::GetMemoryUsage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.GetMemoryUsage");

	APaintScoreManager_GetMemoryUsage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void APaintScoreManager::GetAllUserScores(TArray<struct FString>* OutUsers, TArray<float>* OutScores)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.GetAllUserScores");

	APaintScoreManager_GetAllUserScores_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutUsers != nullptr)
		*OutUsers = params.OutUsers;
	if (OutScores != nullptr)
		*OutScores = params.OutScores;
}







void APaintScoreManager::DrawVoxelCells(unsigned char TargetUserID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.DrawVoxelCells");

	APaintScoreManager_DrawVoxelCells_Params params;
	params.TargetUserID = TargetUserID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void APaintScoreManager::DrawSmallTriangles(unsigned char TargetUserID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.DrawSmallTriangles");

	APaintScoreManager_DrawSmallTriangles_Params params;
	params.TargetUserID = TargetUserID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void APaintScoreManager::DebugDrawOccupiedAreasForUserID(unsigned char TargetUserID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.DebugDrawOccupiedAreasForUserID");

	APaintScoreManager_DebugDrawOccupiedAreasForUserID_Params params;
	params.TargetUserID = TargetUserID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void APaintScoreManager::DebugDrawOccupiedAreas(const struct FString& UserName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.DebugDrawOccupiedAreas");

	APaintScoreManager_DebugDrawOccupiedAreas_Params params;
	params.UserName = UserName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









float APaintScoreManager::ClipTriangleWithSphere(int TriangleIndex, const struct FVector& SphereCenter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.ClipTriangleWithSphere");

	APaintScoreManager_ClipTriangleWithSphere_Params params;
	params.TriangleIndex = TriangleIndex;
	params.SphereCenter = SphereCenter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











float APaintScoreManager::CalculateTriangleVoxelIntersection(const struct FVector& V0, const struct FVector& v1, const struct FVector& v2, const struct FPaintVoxelCoord& VoxelCoord)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.CalculateTriangleVoxelIntersection");

	APaintScoreManager_CalculateTriangleVoxelIntersection_Params params;
	params.V0 = V0;
	params.v1 = v1;
	params.v2 = v2;
	params.VoxelCoord = VoxelCoord;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void APaintScoreManager::CalculateSmallTrianglesBounds(struct FVector* OutMin, struct FVector* OutMax)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.CalculateSmallTrianglesBounds");

	APaintScoreManager_CalculateSmallTrianglesBounds_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutMin != nullptr)
		*OutMin = params.OutMin;
	if (OutMax != nullptr)
		*OutMax = params.OutMax;
}





void APaintScoreManager::BuildOctree()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.BuildOctree");

	APaintScoreManager_BuildOctree_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void APaintScoreManager::AddTriangleToPipeline(const struct FVector& A, const struct FVector& B, const struct FVector& C)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.AddTriangleToPipeline");

	APaintScoreManager_AddTriangleToPipeline_Params params;
	params.A = A;
	params.B = B;
	params.C = C;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void APaintScoreManager::AddPaint(const struct FVector& Center, const struct FString& UserName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PaintScoreManager.AddPaint");

	APaintScoreManager_AddPaint_Params params;
	params.Center = Center;
	params.UserName = UserName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UPlayerListenerEventObject::OnCppRemovePlayerListener(class UObject* Content, uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PlayerListenerEventObject.OnCppRemovePlayerListener");

	UPlayerListenerEventObject_OnCppRemovePlayerListener_Params params;
	params.Content = Content;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UPlayerListenerEventObject::OnCppAddPlayerListener(class UObject* Content, uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PlayerListenerEventObject.OnCppAddPlayerListener");

	UPlayerListenerEventObject_OnCppAddPlayerListener_Params params;
	params.Content = Content;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UPlayerAttachedToVehicleEventObject::OnOwnerAttachedToVehicle(class ASTExtraVehicleBase* InVehicle, uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PlayerAttachedToVehicleEventObject.OnOwnerAttachedToVehicle");

	UPlayerAttachedToVehicleEventObject_OnOwnerAttachedToVehicle_Params params;
	params.InVehicle = InVehicle;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UPlayerAttachedToVehicleEventObject::OnCppRemovePlayerListener(class UObject* Content, uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PlayerAttachedToVehicleEventObject.OnCppRemovePlayerListener");

	UPlayerAttachedToVehicleEventObject_OnCppRemovePlayerListener_Params params;
	params.Content = Content;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UPlayerAttachedToVehicleEventObject::OnCppAddPlayerListener(class UObject* Content, uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PlayerAttachedToVehicleEventObject.OnCppAddPlayerListener");

	UPlayerAttachedToVehicleEventObject_OnCppAddPlayerListener_Params params;
	params.Content = Content;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPlayerAttachedProxy::OnProxyAttachedToVehicle(class ASTExtraVehicleBase* InVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PlayerAttachedProxy.OnProxyAttachedToVehicle");

	UPlayerAttachedProxy_OnProxyAttachedToVehicle_Params params;
	params.InVehicle = InVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AShowAllPlayerManagerActor::TriggerRefresh(class ASTExtraBaseCharacter* Character, bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.ShowAllPlayerManagerActor.TriggerRefresh");

	AShowAllPlayerManagerActor_TriggerRefresh_Params params;
	params.Character = Character;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AShowAllPlayerManagerActor::RefreshTeamPoseData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.ShowAllPlayerManagerActor.RefreshTeamPoseData");

	AShowAllPlayerManagerActor_RefreshTeamPoseData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AShowAllPlayerManagerActor::RefreshMapMarkData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.ShowAllPlayerManagerActor.RefreshMapMarkData");

	AShowAllPlayerManagerActor_RefreshMapMarkData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AShowAllPlayerManagerActor::OnTeamPosDataChange()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.ShowAllPlayerManagerActor.OnTeamPosDataChange");

	AShowAllPlayerManagerActor_OnTeamPosDataChange_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AShowAllPlayerManagerActor::OnRep_TeamPosData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.ShowAllPlayerManagerActor.OnRep_TeamPosData");

	AShowAllPlayerManagerActor_OnRep_TeamPosData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool AShowAllPlayerManagerActor::IsCharacterValidForShow(class ASTExtraBaseCharacter* Character)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.ShowAllPlayerManagerActor.IsCharacterValidForShow");

	AShowAllPlayerManagerActor_IsCharacterValidForShow_Params params;
	params.Character = Character;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void AShowAllPlayerManagerActor::FlushBatchData(int BatchSize, int CurExtraSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.ShowAllPlayerManagerActor.FlushBatchData");

	AShowAllPlayerManagerActor_FlushBatchData_Params params;
	params.BatchSize = BatchSize;
	params.CurExtraSize = CurExtraSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AShowAllPlayerManagerActor::EnableRefresh(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.ShowAllPlayerManagerActor.EnableRefresh");

	AShowAllPlayerManagerActor_EnableRefresh_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AShowAllPlayerManagerActor::ClearAllMark()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.ShowAllPlayerManagerActor.ClearAllMark");

	AShowAllPlayerManagerActor_ClearAllMark_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UUGCDynamicNetManager::UnregisterProperty(int InReplicationID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.UGCDynamicNetManager.UnregisterProperty");

	UUGCDynamicNetManager_UnregisterProperty_Params params;
	params.InReplicationID = InReplicationID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UUGCDynamicNetManager::UnregisterAllProperties(TArray<int> InRepIDs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.UGCDynamicNetManager.UnregisterAllProperties");

	UUGCDynamicNetManager_UnregisterAllProperties_Params params;
	params.InRepIDs = InRepIDs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UUGCDynamicNetManager::SetPropValue(int InReplicationID, TArray<unsigned char> InNewBytes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.UGCDynamicNetManager.SetPropValue");

	UUGCDynamicNetManager_SetPropValue_Params params;
	params.InReplicationID = InReplicationID;
	params.InNewBytes = InNewBytes;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UUGCDynamicNetManager::SetPropMeta(int InReplicationID, uint32_t InOwnerNetGUID, const struct FString& InPropName, unsigned char InPropType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.UGCDynamicNetManager.SetPropMeta");

	UUGCDynamicNetManager_SetPropMeta_Params params;
	params.InReplicationID = InReplicationID;
	params.InOwnerNetGUID = InOwnerNetGUID;
	params.InPropName = InPropName;
	params.InPropType = InPropType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











int UUGCDynamicNetManager::RegisterProperty(uint32_t OwnerNetGUID, unsigned char PropType, const struct FString& PropName, TArray<unsigned char> InitialValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.UGCDynamicNetManager.RegisterProperty");

	UUGCDynamicNetManager_RegisterProperty_Params params;
	params.OwnerNetGUID = OwnerNetGUID;
	params.PropType = PropType;
	params.PropName = PropName;
	params.InitialValue = InitialValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UUGCDynamicNetManager::ReceiveOnPostSetLuaEventBridgeInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.UGCDynamicNetManager.ReceiveOnPostSetLuaEventBridgeInstance");

	UUGCDynamicNetManager_ReceiveOnPostSetLuaEventBridgeInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UUGCDynamicNetManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.UGCDynamicNetManager.ReceiveOnGameStateBeginPlay");

	UUGCDynamicNetManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UUGCDynamicNetManager::PushPropertyValue(int InReplicationID, TArray<unsigned char> NewValue, bool bForcePush)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.UGCDynamicNetManager.PushPropertyValue");

	UUGCDynamicNetManager_PushPropertyValue_Params params;
	params.InReplicationID = InReplicationID;
	params.NewValue = NewValue;
	params.bForcePush = bForcePush;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UUGCDynamicNetManager::OnPostSetLuaEventBridgeInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.UGCDynamicNetManager.OnPostSetLuaEventBridgeInstance");

	UUGCDynamicNetManager_OnPostSetLuaEventBridgeInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UUGCDynamicNetManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.UGCDynamicNetManager.OnGameStateBeginPlay");

	UUGCDynamicNetManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UUGCDynamicNetManager::GetSimplePropInfo(int InReplicationID, struct FUGCLuaNetPropertyHead* OutPropertyInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.UGCDynamicNetManager.GetSimplePropInfo");

	UUGCDynamicNetManager_GetSimplePropInfo_Params params;
	params.InReplicationID = InReplicationID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutPropertyInfo != nullptr)
		*OutPropertyInfo = params.OutPropertyInfo;

	return params.ReturnValue;
}









int UUGCDynamicNetManager::GetReplicationID(uint32_t NetGUID, const struct FString& PropName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.UGCDynamicNetManager.GetReplicationID");

	UUGCDynamicNetManager_GetReplicationID_Params params;
	params.NetGUID = NetGUID;
	params.PropName = PropName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UUGCDynamicNetManager::GetPropValue(int InReplicationID, TArray<unsigned char>* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.UGCDynamicNetManager.GetPropValue");

	UUGCDynamicNetManager_GetPropValue_Params params;
	params.InReplicationID = InReplicationID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}








unsigned char UUGCDynamicNetManager::GetHeadSeq(int InReplicationID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.UGCDynamicNetManager.GetHeadSeq");

	UUGCDynamicNetManager_GetHeadSeq_Params params;
	params.InReplicationID = InReplicationID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UUGCDynamicNetManager::GetFullPropInfo(int InReplicationID, struct FUGCLuaNetPropertyHead* OutPropertyInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.UGCDynamicNetManager.GetFullPropInfo");

	UUGCDynamicNetManager_GetFullPropInfo_Params params;
	params.InReplicationID = InReplicationID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutPropertyInfo != nullptr)
		*OutPropertyInfo = params.OutPropertyInfo;

	return params.ReturnValue;
}








class UUGCDynamicNetManager* UUGCDynamicNetManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.UGCDynamicNetManager.Get");

	UUGCDynamicNetManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











void UUGCDynamicNetManager::EnqueuePendingUnmapped(uint32_t InOwnerNetGUID, int InReplicationID, unsigned char InSeq, TArray<unsigned char> InNewBytes, TArray<int> InPendingGUIDs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.UGCDynamicNetManager.EnqueuePendingUnmapped");

	UUGCDynamicNetManager_EnqueuePendingUnmapped_Params params;
	params.InOwnerNetGUID = InOwnerNetGUID;
	params.InReplicationID = InReplicationID;
	params.InSeq = InSeq;
	params.InNewBytes = InNewBytes;
	params.InPendingGUIDs = InPendingGUIDs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UUGCDynamicNetManager::EnableLuaTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.UGCDynamicNetManager.EnableLuaTick");

	UUGCDynamicNetManager_EnableLuaTick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UUGCDynamicNetManager::DisableLuaTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.UGCDynamicNetManager.DisableLuaTick");

	UUGCDynamicNetManager_DisableLuaTick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UUGCDynamicNetManager::ClearPullTracking(int InReplicationID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.UGCDynamicNetManager.ClearPullTracking");

	UUGCDynamicNetManager_ClearPullTracking_Params params;
	params.InReplicationID = InReplicationID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UUGCDynamicNetManager::ClearPullRequesting(int InReplicationID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.UGCDynamicNetManager.ClearPullRequesting");

	UUGCDynamicNetManager_ClearPullRequesting_Params params;
	params.InReplicationID = InReplicationID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UUGCDynamicNetManager::AddToPullQueue(int InReplicationID, bool bNeedMeta)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.UGCDynamicNetManager.AddToPullQueue");

	UUGCDynamicNetManager_AddToPullQueue_Params params;
	params.InReplicationID = InReplicationID;
	params.bNeedMeta = bNeedMeta;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

