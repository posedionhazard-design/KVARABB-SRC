
 
#include "../SDK.hpp"

namespace SDK
{











void ULobbyCameraFunctionLibrary_C::OnViewportSizeChanged(const struct FVector2D& OldViewport, const struct FVector2D& NewViewport, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C.OnViewportSizeChanged");

	ULobbyCameraFunctionLibrary_C_OnViewportSizeChanged_Params params;
	params.OldViewport = OldViewport;
	params.NewViewport = NewViewport;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ULobbyCameraFunctionLibrary_C::LevelSequence_ExecuteStartCallback(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C.LevelSequence_ExecuteStartCallback");

	ULobbyCameraFunctionLibrary_C_LevelSequence_ExecuteStartCallback_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ULobbyCameraFunctionLibrary_C::GetCurrentCameraActor(class UObject* __WorldContext, class ACameraActor** CameraActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C.GetCurrentCameraActor");

	ULobbyCameraFunctionLibrary_C_GetCurrentCameraActor_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (CameraActor != nullptr)
		*CameraActor = params.CameraActor;
}







void ULobbyCameraFunctionLibrary_C::LevelSequence_ExecuteEndCallback(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C.LevelSequence_ExecuteEndCallback");

	ULobbyCameraFunctionLibrary_C_LevelSequence_ExecuteEndCallback_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void ULobbyCameraFunctionLibrary_C::SwitchCamera_Only(int CameraID, float BlendTime, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C.SwitchCamera_Only");

	ULobbyCameraFunctionLibrary_C_SwitchCamera_Only_Params params;
	params.CameraID = CameraID;
	params.BlendTime = BlendTime;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










class ULevelSequencePlayer* ULobbyCameraFunctionLibrary_C::CreateLevelSequencePlayerAndActor(class ULevelSequence* level_sequence, class UObject* __WorldContext, class ALevelSequenceActor** OutActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C.CreateLevelSequencePlayerAndActor");

	ULobbyCameraFunctionLibrary_C_CreateLevelSequencePlayerAndActor_Params params;
	params.level_sequence = level_sequence;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutActor != nullptr)
		*OutActor = params.OutActor;

	return params.ReturnValue;
}










void ULobbyCameraFunctionLibrary_C::SwitchCamera(int NewCameraID, float BlendTime, bool IgnoreLight, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C.SwitchCamera");

	ULobbyCameraFunctionLibrary_C_SwitchCamera_Params params;
	params.NewCameraID = NewCameraID;
	params.BlendTime = BlendTime;
	params.IgnoreLight = IgnoreLight;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

