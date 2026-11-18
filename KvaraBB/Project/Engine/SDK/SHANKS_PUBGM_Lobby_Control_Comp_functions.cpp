
 
#include "../SDK.hpp"

namespace SDK
{







void ULobby_Control_Comp_C::AniCameraEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Control_Comp.Lobby_Control_Comp_C.AniCameraEnd");

	ULobby_Control_Comp_C_AniCameraEnd_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ULobby_Control_Comp_C::CancelScroll()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Control_Comp.Lobby_Control_Comp_C.CancelScroll");

	ULobby_Control_Comp_C_CancelScroll_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ULobby_Control_Comp_C::CheckSide12(float pos, bool* inside)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Control_Comp.Lobby_Control_Comp_C.CheckSide12");

	ULobby_Control_Comp_C_CheckSide12_Params params;
	params.pos = pos;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (inside != nullptr)
		*inside = params.inside;
}









struct FEventReply ULobby_Control_Comp_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Control_Comp.Lobby_Control_Comp_C.OnMouseButtonUp");

	ULobby_Control_Comp_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}









struct FEventReply ULobby_Control_Comp_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Control_Comp.Lobby_Control_Comp_C.OnMouseButtonDown");

	ULobby_Control_Comp_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}









void ULobby_Control_Comp_C::SetCameraPos(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Control_Comp.Lobby_Control_Comp_C.SetCameraPos");

	ULobby_Control_Comp_C_SetCameraPos_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void ULobby_Control_Comp_C::MoveCamera(const struct FVector& Speed, float Time, int sideIndex, bool* bStop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Control_Comp.Lobby_Control_Comp_C.MoveCamera");

	ULobby_Control_Comp_C_MoveCamera_Params params;
	params.Speed = Speed;
	params.Time = Time;
	params.sideIndex = sideIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bStop != nullptr)
		*bStop = params.bStop;
}









struct FEventReply ULobby_Control_Comp_C::OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Control_Comp.Lobby_Control_Comp_C.OnTouchEnded");

	ULobby_Control_Comp_C_OnTouchEnded_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}









struct FEventReply ULobby_Control_Comp_C::OnTouchMoved(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Control_Comp.Lobby_Control_Comp_C.OnTouchMoved");

	ULobby_Control_Comp_C_OnTouchMoved_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}









struct FEventReply ULobby_Control_Comp_C::OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Control_Comp.Lobby_Control_Comp_C.OnTouchStarted");

	ULobby_Control_Comp_C_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InTouchEvent != nullptr)
		*InTouchEvent = params.InTouchEvent;

	return params.ReturnValue;
}









void ULobby_Control_Comp_C::AniCamera(int From, int To, bool bShoudDouble)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Control_Comp.Lobby_Control_Comp_C.AniCamera");

	ULobby_Control_Comp_C_AniCamera_Params params;
	params.From = From;
	params.To = To;
	params.bShoudDouble = bShoudDouble;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ULobby_Control_Comp_C::GetCamera(class ACameraActor** Camera)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Control_Comp.Lobby_Control_Comp_C.GetCamera");

	ULobby_Control_Comp_C_GetCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Camera != nullptr)
		*Camera = params.Camera;
}








void ULobby_Control_Comp_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Control_Comp.Lobby_Control_Comp_C.Tick");

	ULobby_Control_Comp_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ULobby_Control_Comp_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Control_Comp.Lobby_Control_Comp_C.Construct");

	ULobby_Control_Comp_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ULobby_Control_Comp_C::ExecuteUbergraph_Lobby_Control_Comp(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Control_Comp.Lobby_Control_Comp_C.ExecuteUbergraph_Lobby_Control_Comp");

	ULobby_Control_Comp_C_ExecuteUbergraph_Lobby_Control_Comp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ULobby_Control_Comp_C::OnLobbyEndedDispatcher__DelegateSignature(float X, float Y)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Control_Comp.Lobby_Control_Comp_C.OnLobbyEndedDispatcher__DelegateSignature");

	ULobby_Control_Comp_C_OnLobbyEndedDispatcher__DelegateSignature_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ULobby_Control_Comp_C::OnTouchStartedDispatcher__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Control_Comp.Lobby_Control_Comp_C.OnTouchStartedDispatcher__DelegateSignature");

	ULobby_Control_Comp_C_OnTouchStartedDispatcher__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void ULobby_Control_Comp_C::OnTouchEndedDispatcher__DelegateSignature(float OffSetX, float OffSetY, const struct FGeometry& Geometry, const struct FVector2D& touchStartPos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Control_Comp.Lobby_Control_Comp_C.OnTouchEndedDispatcher__DelegateSignature");

	ULobby_Control_Comp_C_OnTouchEndedDispatcher__DelegateSignature_Params params;
	params.OffSetX = OffSetX;
	params.OffSetY = OffSetY;
	params.Geometry = Geometry;
	params.touchStartPos = touchStartPos;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

