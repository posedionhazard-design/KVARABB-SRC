
 
#include "../SDK.hpp"

namespace SDK
{









void ULobby_Mid_Bnner_More250_UIBP_C::GetCurScroll(class ULoopScrollBox** Scroll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Mid_Bnner_More250_UIBP.Lobby_Mid_Bnner_More250_UIBP_C.GetCurScroll");

	ULobby_Mid_Bnner_More250_UIBP_C_GetCurScroll_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Scroll != nullptr)
		*Scroll = params.Scroll;
}







void ULobby_Mid_Bnner_More250_UIBP_C::GetOffset(float* Offset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Mid_Bnner_More250_UIBP.Lobby_Mid_Bnner_More250_UIBP_C.GetOffset");

	ULobby_Mid_Bnner_More250_UIBP_C_GetOffset_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Offset != nullptr)
		*Offset = params.Offset;
}







void ULobby_Mid_Bnner_More250_UIBP_C::GetCurrentIndex(int* Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Mid_Bnner_More250_UIBP.Lobby_Mid_Bnner_More250_UIBP_C.GetCurrentIndex");

	ULobby_Mid_Bnner_More250_UIBP_C_GetCurrentIndex_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}







void ULobby_Mid_Bnner_More250_UIBP_C::OnClickActivityItem(class ULobby_Activity_BtnItem_C* Item)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Mid_Bnner_More250_UIBP.Lobby_Mid_Bnner_More250_UIBP_C.OnClickActivityItem");

	ULobby_Mid_Bnner_More250_UIBP_C_OnClickActivityItem_Params params;
	params.Item = Item;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ULobby_Mid_Bnner_More250_UIBP_C::UpdateCurrentPage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Mid_Bnner_More250_UIBP.Lobby_Mid_Bnner_More250_UIBP_C.UpdateCurrentPage");

	ULobby_Mid_Bnner_More250_UIBP_C_UpdateCurrentPage_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ULobby_Mid_Bnner_More250_UIBP_C::SetActivityListPageCount(int pageCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Mid_Bnner_More250_UIBP.Lobby_Mid_Bnner_More250_UIBP_C.SetActivityListPageCount");

	ULobby_Mid_Bnner_More250_UIBP_C_SetActivityListPageCount_Params params;
	params.pageCount = pageCount;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ULobby_Mid_Bnner_More250_UIBP_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Mid_Bnner_More250_UIBP.Lobby_Mid_Bnner_More250_UIBP_C.Tick");

	ULobby_Mid_Bnner_More250_UIBP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ULobby_Mid_Bnner_More250_UIBP_C::ExecuteUbergraph_Lobby_Mid_Bnner_More250_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Mid_Bnner_More250_UIBP.Lobby_Mid_Bnner_More250_UIBP_C.ExecuteUbergraph_Lobby_Mid_Bnner_More250_UIBP");

	ULobby_Mid_Bnner_More250_UIBP_C_ExecuteUbergraph_Lobby_Mid_Bnner_More250_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ULobby_Mid_Bnner_More250_UIBP_C::EventDispatcherClickItem__DelegateSignature(int ID, const struct FString& JumpUrl)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Mid_Bnner_More250_UIBP.Lobby_Mid_Bnner_More250_UIBP_C.EventDispatcherClickItem__DelegateSignature");

	ULobby_Mid_Bnner_More250_UIBP_C_EventDispatcherClickItem__DelegateSignature_Params params;
	params.ID = ID;
	params.JumpUrl = JumpUrl;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

