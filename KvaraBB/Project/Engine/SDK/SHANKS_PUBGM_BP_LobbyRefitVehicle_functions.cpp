
 
#include "../SDK.hpp"

namespace SDK
{











void ABP_LobbyRefitVehicle_C::SetPostProcessSettingsWrap(float Length, bool bIsReverse, bool bIsClosing)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.SetPostProcessSettingsWrap");

	ABP_LobbyRefitVehicle_C_SetPostProcessSettingsWrap_Params params;
	params.Length = Length;
	params.bIsReverse = bIsReverse;
	params.bIsClosing = bIsClosing;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ABP_LobbyRefitVehicle_C::HideAllRefitTipsByTipState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.HideAllRefitTipsByTipState");

	ABP_LobbyRefitVehicle_C_HideAllRefitTipsByTipState_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ABP_LobbyRefitVehicle_C::HideAllRefitTips()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.HideAllRefitTips");

	ABP_LobbyRefitVehicle_C_HideAllRefitTips_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ABP_LobbyRefitVehicle_C::CanAutoPlayLua(bool* Param)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.CanAutoPlayLua");

	ABP_LobbyRefitVehicle_C_CanAutoPlayLua_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Param != nullptr)
		*Param = params.Param;
}








void ABP_LobbyRefitVehicle_C::CheckRefitTipsFadeLua(float Yaw, bool showAllTips)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.CheckRefitTipsFadeLua");

	ABP_LobbyRefitVehicle_C_CheckRefitTipsFadeLua_Params params;
	params.Yaw = Yaw;
	params.showAllTips = showAllTips;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ABP_LobbyRefitVehicle_C::ShowLoading(bool Show)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ShowLoading");

	ABP_LobbyRefitVehicle_C_ShowLoading_Params params;
	params.Show = Show;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ABP_LobbyRefitVehicle_C::ResetCameraRotation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ResetCameraRotation");

	ABP_LobbyRefitVehicle_C_ResetCameraRotation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ABP_LobbyRefitVehicle_C::CreateDefaultRefitVehicleMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.CreateDefaultRefitVehicleMesh");

	ABP_LobbyRefitVehicle_C_CreateDefaultRefitVehicleMesh_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ABP_LobbyRefitVehicle_C::HasRefitVehicleDownloaded(bool* HasDownloaded)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.HasRefitVehicleDownloaded");

	ABP_LobbyRefitVehicle_C_HasRefitVehicleDownloaded_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (HasDownloaded != nullptr)
		*HasDownloaded = params.HasDownloaded;
}







void ABP_LobbyRefitVehicle_C::GetRefitVehicleHandle(int VehicleID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.GetRefitVehicleHandle");

	ABP_LobbyRefitVehicle_C_GetRefitVehicleHandle_Params params;
	params.VehicleID = VehicleID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ABP_LobbyRefitVehicle_C::InitSlotSocket(TMap<int, struct FString> slotSocket)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.InitSlotSocket");

	ABP_LobbyRefitVehicle_C_InitSlotSocket_Params params;
	params.slotSocket = slotSocket;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ABP_LobbyRefitVehicle_C::TryResetCloseUp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TryResetCloseUp");

	ABP_LobbyRefitVehicle_C_TryResetCloseUp_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ABP_LobbyRefitVehicle_C::SetCastShadow(bool CastShadow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.SetCastShadow");

	ABP_LobbyRefitVehicle_C_SetCastShadow_Params params;
	params.CastShadow = CastShadow;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ABP_LobbyRefitVehicle_C::EnableCameraRotationLag(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.EnableCameraRotationLag");

	ABP_LobbyRefitVehicle_C_EnableCameraRotationLag_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ABP_LobbyRefitVehicle_C::UpdateLastAutoPlayTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.UpdateLastAutoPlayTime");

	ABP_LobbyRefitVehicle_C_UpdateLastAutoPlayTime_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ABP_LobbyRefitVehicle_C::CheckAutoPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.CheckAutoPlay");

	ABP_LobbyRefitVehicle_C_CheckAutoPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ABP_LobbyRefitVehicle_C::TryRotateSceneByTouch(bool* rotated)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TryRotateSceneByTouch");

	ABP_LobbyRefitVehicle_C_TryRotateSceneByTouch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (rotated != nullptr)
		*rotated = params.rotated;
}





void ABP_LobbyRefitVehicle_C::TryStopAutoPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TryStopAutoPlay");

	ABP_LobbyRefitVehicle_C_TryStopAutoPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FTransform ABP_LobbyRefitVehicle_C::GetSlotSocketTransform(int inInt)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.GetSlotSocketTransform");

	ABP_LobbyRefitVehicle_C_GetSlotSocketTransform_Params params;
	params.inInt = inInt;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void ABP_LobbyRefitVehicle_C::GetVectorAngle(float* Degree)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.GetVectorAngle");

	ABP_LobbyRefitVehicle_C_GetVectorAngle_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Degree != nullptr)
		*Degree = params.Degree;
}





void ABP_LobbyRefitVehicle_C::DestroyFreeCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.DestroyFreeCamera");

	ABP_LobbyRefitVehicle_C_DestroyFreeCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








float ABP_LobbyRefitVehicle_C::GetYawToMesh(const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.GetYawToMesh");

	ABP_LobbyRefitVehicle_C_GetYawToMesh_Params params;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void ABP_LobbyRefitVehicle_C::CheckRefitTipsFade(bool forceShowAll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.CheckRefitTipsFade");

	ABP_LobbyRefitVehicle_C_CheckRefitTipsFade_Params params;
	params.forceShowAll = forceShowAll;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void ABP_LobbyRefitVehicle_C::InterpVelocity(float New, float Old, float* Velocity)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.InterpVelocity");

	ABP_LobbyRefitVehicle_C_InterpVelocity_Params params;
	params.New = New;
	params.Old = Old;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;
}





void ABP_LobbyRefitVehicle_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.UserConstructionScript");

	ABP_LobbyRefitVehicle_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ABP_LobbyRefitVehicle_C::TimeLine_LerpRotator__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TimeLine_LerpRotator__FinishedFunc");

	ABP_LobbyRefitVehicle_C_TimeLine_LerpRotator__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ABP_LobbyRefitVehicle_C::TimeLine_LerpRotator__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TimeLine_LerpRotator__UpdateFunc");

	ABP_LobbyRefitVehicle_C_TimeLine_LerpRotator__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ABP_LobbyRefitVehicle_C::TimeLine_LerpPosition__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TimeLine_LerpPosition__FinishedFunc");

	ABP_LobbyRefitVehicle_C_TimeLine_LerpPosition__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ABP_LobbyRefitVehicle_C::TimeLine_LerpPosition__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TimeLine_LerpPosition__UpdateFunc");

	ABP_LobbyRefitVehicle_C_TimeLine_LerpPosition__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ABP_LobbyRefitVehicle_C::Timeline_AutoPlay__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.Timeline_AutoPlay__FinishedFunc");

	ABP_LobbyRefitVehicle_C_Timeline_AutoPlay__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ABP_LobbyRefitVehicle_C::Timeline_AutoPlay__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.Timeline_AutoPlay__UpdateFunc");

	ABP_LobbyRefitVehicle_C_Timeline_AutoPlay__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ABP_LobbyRefitVehicle_C::TimeLine_BlendCamera__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TimeLine_BlendCamera__FinishedFunc");

	ABP_LobbyRefitVehicle_C_TimeLine_BlendCamera__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ABP_LobbyRefitVehicle_C::TimeLine_BlendCamera__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TimeLine_BlendCamera__UpdateFunc");

	ABP_LobbyRefitVehicle_C_TimeLine_BlendCamera__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ABP_LobbyRefitVehicle_C::Timeline_Vehicle_Update_Zoom_out__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.Timeline_Vehicle_Update_Zoom_out__FinishedFunc");

	ABP_LobbyRefitVehicle_C_Timeline_Vehicle_Update_Zoom_out__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ABP_LobbyRefitVehicle_C::Timeline_Vehicle_Update_Zoom_out__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.Timeline_Vehicle_Update_Zoom_out__UpdateFunc");

	ABP_LobbyRefitVehicle_C_Timeline_Vehicle_Update_Zoom_out__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ABP_LobbyRefitVehicle_C::Timeline_Vehicle_Update_Zoom_in__FinishedFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.Timeline_Vehicle_Update_Zoom_in__FinishedFunc");

	ABP_LobbyRefitVehicle_C_Timeline_Vehicle_Update_Zoom_in__FinishedFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ABP_LobbyRefitVehicle_C::Timeline_Vehicle_Update_Zoom_in__UpdateFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.Timeline_Vehicle_Update_Zoom_in__UpdateFunc");

	ABP_LobbyRefitVehicle_C_Timeline_Vehicle_Update_Zoom_in__UpdateFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ABP_LobbyRefitVehicle_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ReceiveTick");

	ABP_LobbyRefitVehicle_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ABP_LobbyRefitVehicle_C::ReceivePossessed(class AController** NewController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ReceivePossessed");

	ABP_LobbyRefitVehicle_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ABP_LobbyRefitVehicle_C::SwitchCloseupCameraEllipse(int SlotID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.SwitchCloseupCameraEllipse");

	ABP_LobbyRefitVehicle_C_SwitchCloseupCameraEllipse_Params params;
	params.SlotID = SlotID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ABP_LobbyRefitVehicle_C::AutoPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.AutoPlay");

	ABP_LobbyRefitVehicle_C_AutoPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ABP_LobbyRefitVehicle_C::BlendCameraActor(class USceneComponent* CameraActor, const struct FTransform& toTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.BlendCameraActor");

	ABP_LobbyRefitVehicle_C_BlendCameraActor_Params params;
	params.CameraActor = CameraActor;
	params.toTransform = toTransform;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ABP_LobbyRefitVehicle_C::SwitchCloseUpCameraLinear(int SlotID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.SwitchCloseUpCameraLinear");

	ABP_LobbyRefitVehicle_C_SwitchCloseUpCameraLinear_Params params;
	params.SlotID = SlotID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ABP_LobbyRefitVehicle_C::OnVehicleUpgradeSuccess()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.OnVehicleUpgradeSuccess");

	ABP_LobbyRefitVehicle_C_OnVehicleUpgradeSuccess_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ABP_LobbyRefitVehicle_C::ResetCloseUpCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ResetCloseUpCamera");

	ABP_LobbyRefitVehicle_C_ResetCloseUpCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ABP_LobbyRefitVehicle_C::EventOnAllMeshLoad()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.EventOnAllMeshLoad");

	ABP_LobbyRefitVehicle_C_EventOnAllMeshLoad_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ABP_LobbyRefitVehicle_C::ShowLoadingForTime(float Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ShowLoadingForTime");

	ABP_LobbyRefitVehicle_C_ShowLoadingForTime_Params params;
	params.Time = Time;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void ABP_LobbyRefitVehicle_C::SetHighLight(float* invincible, float* FreExp, float* Speed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.SetHighLight");

	ABP_LobbyRefitVehicle_C_SetHighLight_Params params;
	params.invincible = invincible;
	params.FreExp = FreExp;
	params.Speed = Speed;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void ABP_LobbyRefitVehicle_C::TrySetHilight(float invincible, float Freq, float Speed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.TrySetHilight");

	ABP_LobbyRefitVehicle_C_TrySetHilight_Params params;
	params.invincible = invincible;
	params.Freq = Freq;
	params.Speed = Speed;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ABP_LobbyRefitVehicle_C::LuaBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.LuaBeginPlay");

	ABP_LobbyRefitVehicle_C_LuaBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ABP_LobbyRefitVehicle_C::ExecuteUbergraph_BP_LobbyRefitVehicle(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C.ExecuteUbergraph_BP_LobbyRefitVehicle");

	ABP_LobbyRefitVehicle_C_ExecuteUbergraph_BP_LobbyRefitVehicle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

