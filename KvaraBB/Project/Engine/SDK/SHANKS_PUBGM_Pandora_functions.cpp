
 
#include "../SDK.hpp"

namespace SDK
{







void UBulletScreen::Stop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.BulletScreen.Stop");

	UBulletScreen_Stop_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBulletScreen::Start()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.BulletScreen.Start");

	UBulletScreen_Start_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBulletScreen::Resume()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.BulletScreen.Resume");

	UBulletScreen_Resume_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBulletScreen::Pause()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.BulletScreen.Pause");

	UBulletScreen_Pause_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBulletScreen::AddBullets(TArray<struct FString> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.BulletScreen.AddBullets");

	UBulletScreen_AddBullets_Params params;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBulletScreen::AddBullet(const struct FString& Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.BulletScreen.AddBullet");

	UBulletScreen_AddBullet_Params params;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGameletSDKDelegateHandler::ExecOnViewCreated(class UUserWidget* Widget, const struct FString& WinInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.GameletSDKDelegateHandler.ExecOnViewCreated");

	UGameletSDKDelegateHandler_ExecOnViewCreated_Params params;
	params.Widget = Widget;
	params.WinInfo = WinInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGameletSDKDelegateHandler::ExecOnViewAboutToDestroy(class UUserWidget* Widget, const struct FString& WinInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.GameletSDKDelegateHandler.ExecOnViewAboutToDestroy");

	UGameletSDKDelegateHandler_ExecOnViewAboutToDestroy_Params params;
	params.Widget = Widget;
	params.WinInfo = WinInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








int UGameletSDKDelegateHandler::ExecOnSDKMessage(const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.GameletSDKDelegateHandler.ExecOnSDKMessage");

	UGameletSDKDelegateHandler_ExecOnSDKMessage_Params params;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UGameletSDKDelegateHandler::ExecOnRefreshUserdata()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.GameletSDKDelegateHandler.ExecOnRefreshUserdata");

	UGameletSDKDelegateHandler_ExecOnRefreshUserdata_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UPLatentDelegate::OnLatentCallback(int threadRef)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLatentDelegate.OnLatentCallback");

	UPLatentDelegate_OnLatentCallback_Params params;
	params.threadRef = threadRef;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









struct FPLuaBPVar APLuaActor::CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaActor.CallLuaMember");

	APLuaActor_CallLuaMember_Params params;
	params.FunctionName = FunctionName;
	params.Args = Args;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FPLuaBPVar APLuaPawn::CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaPawn.CallLuaMember");

	APLuaPawn_CallLuaMember_Params params;
	params.FunctionName = FunctionName;
	params.Args = Args;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FPLuaBPVar APLuaCharacter::CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaCharacter.CallLuaMember");

	APLuaCharacter_CallLuaMember_Params params;
	params.FunctionName = FunctionName;
	params.Args = Args;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FPLuaBPVar APLuaController::CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaController.CallLuaMember");

	APLuaController_CallLuaMember_Params params;
	params.FunctionName = FunctionName;
	params.Args = Args;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FPLuaBPVar APLuaPlayerController::CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaPlayerController.CallLuaMember");

	APLuaPlayerController_CallLuaMember_Params params;
	params.FunctionName = FunctionName;
	params.Args = Args;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FPLuaBPVar UPLuaActorComponent::CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaActorComponent.CallLuaMember");

	UPLuaActorComponent_CallLuaMember_Params params;
	params.FunctionName = FunctionName;
	params.Args = Args;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FPLuaBPVar APLuaGameModeBase::CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaGameModeBase.CallLuaMember");

	APLuaGameModeBase_CallLuaMember_Params params;
	params.FunctionName = FunctionName;
	params.Args = Args;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FPLuaBPVar APLuaHUD::CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaHUD.CallLuaMember");

	APLuaHUD_CallLuaMember_Params params;
	params.FunctionName = FunctionName;
	params.Args = Args;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UPLuaBlueprintLibrary::GetStringFromVar(const struct FPLuaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaBlueprintLibrary.GetStringFromVar");

	UPLuaBlueprintLibrary_GetStringFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class UObject* UPLuaBlueprintLibrary::GetObjectFromVar(const struct FPLuaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaBlueprintLibrary.GetObjectFromVar");

	UPLuaBlueprintLibrary_GetObjectFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









float UPLuaBlueprintLibrary::GetNumberFromVar(const struct FPLuaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaBlueprintLibrary.GetNumberFromVar");

	UPLuaBlueprintLibrary_GetNumberFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









int UPLuaBlueprintLibrary::GetIntFromVar(const struct FPLuaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaBlueprintLibrary.GetIntFromVar");

	UPLuaBlueprintLibrary_GetIntFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UPLuaBlueprintLibrary::GetBoolFromVar(const struct FPLuaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaBlueprintLibrary.GetBoolFromVar");

	UPLuaBlueprintLibrary_GetBoolFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FPLuaBPVar UPLuaBlueprintLibrary::CreateVarFromString(const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaBlueprintLibrary.CreateVarFromString");

	UPLuaBlueprintLibrary_CreateVarFromString_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FPLuaBPVar UPLuaBlueprintLibrary::CreateVarFromObject(class UObject* WorldContextObject, class UObject* Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaBlueprintLibrary.CreateVarFromObject");

	UPLuaBlueprintLibrary_CreateVarFromObject_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FPLuaBPVar UPLuaBlueprintLibrary::CreateVarFromNumber(float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaBlueprintLibrary.CreateVarFromNumber");

	UPLuaBlueprintLibrary_CreateVarFromNumber_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FPLuaBPVar UPLuaBlueprintLibrary::CreateVarFromInt(int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaBlueprintLibrary.CreateVarFromInt");

	UPLuaBlueprintLibrary_CreateVarFromInt_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FPLuaBPVar UPLuaBlueprintLibrary::CreateVarFromBool(bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaBlueprintLibrary.CreateVarFromBool");

	UPLuaBlueprintLibrary_CreateVarFromBool_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











struct FPLuaBPVar UPLuaBlueprintLibrary::CallToLuaWithArgs(class UObject* WorldContextObject, const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args, const struct FString& StateName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaBlueprintLibrary.CallToLuaWithArgs");

	UPLuaBlueprintLibrary_CallToLuaWithArgs_Params params;
	params.WorldContextObject = WorldContextObject;
	params.FunctionName = FunctionName;
	params.Args = Args;
	params.StateName = StateName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










struct FPLuaBPVar UPLuaBlueprintLibrary::CallToLua(class UObject* WorldContextObject, const struct FString& FunctionName, const struct FString& StateName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaBlueprintLibrary.CallToLua");

	UPLuaBlueprintLibrary_CallToLua_Params params;
	params.WorldContextObject = WorldContextObject;
	params.FunctionName = FunctionName;
	params.StateName = StateName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UPLuaDelegate::EventTrigger()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaDelegate.EventTrigger");

	UPLuaDelegate_EventTrigger_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









struct FPLuaBPVar UPLuaUserWidget::CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PLuaUserWidget.CallLuaMember");

	UPLuaUserWidget_CallLuaMember_Params params;
	params.FunctionName = FunctionName;
	params.Args = Args;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UPPixUILogAdapter::OnPixUILog(int InLogType, int InLogLevel, const struct FString& InLogContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PPixUILogAdapter.OnPixUILog");

	UPPixUILogAdapter_OnPixUILog_Params params;
	params.InLogType = InLogType;
	params.InLogLevel = InLogLevel;
	params.InLogContent = InLogContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPRichText::SetText(const struct FText& InText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PRichText.SetText");

	UPRichText_SetText_Params params;
	params.InText = InText;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FText UPRichText::GetText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.PRichText.GetText");

	UPRichText_GetText_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UWaterfallScrollView::ScrollToStart()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.WaterfallScrollView.ScrollToStart");

	UWaterfallScrollView_ScrollToStart_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UWaterfallScrollView::RefreshLayout(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.WaterfallScrollView.RefreshLayout");

	UWaterfallScrollView_RefreshLayout_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UWaterfallScrollView::Fill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.WaterfallScrollView.Fill");

	UWaterfallScrollView_Fill_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UWaterfallScrollView::Clear()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Pandora.WaterfallScrollView.Clear");

	UWaterfallScrollView_Clear_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

