
 
#include "../SDK.hpp"

namespace SDK
{









void UActorClickPickerWidget::SetPickerEnabled(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ActorClickPickerWidget.SetPickerEnabled");

	UActorClickPickerWidget_SetPickerEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UActorClickPickerWidget::SetOwnerTab(class UActorInspectorTab* InOwnerTab)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ActorClickPickerWidget.SetOwnerTab");

	UActorClickPickerWidget_SetOwnerTab_Params params;
	params.InOwnerTab = InOwnerTab;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UActorClickPickerWidget::IsPickerEnabled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ActorClickPickerWidget.IsPickerEnabled");

	UActorClickPickerWidget_IsPickerEnabled_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UActorPropertyMonitorWidget::SetTargetObject(class UObject* InObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ActorPropertyMonitorWidget.SetTargetObject");

	UActorPropertyMonitorWidget_SetTargetObject_Params params;
	params.InObject = InObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UActorPropertyMonitorWidget::SetTargetActor(class AActor* InActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ActorPropertyMonitorWidget.SetTargetActor");

	UActorPropertyMonitorWidget_SetTargetActor_Params params;
	params.InActor = InActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UActorPropertyMonitorWidget::SetPropertyNames(TArray<struct FString> PropertyNames)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ActorPropertyMonitorWidget.SetPropertyNames");

	UActorPropertyMonitorWidget_SetPropertyNames_Params params;
	params.PropertyNames = PropertyNames;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UActorPropertyMonitorWidget::SearchProperties(const struct FString& SearchKeyword)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ActorPropertyMonitorWidget.SearchProperties");

	UActorPropertyMonitorWidget_SearchProperties_Params params;
	params.SearchKeyword = SearchKeyword;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UActorPropertyMonitorWidget::RefreshPropertyValues()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ActorPropertyMonitorWidget.RefreshPropertyValues");

	UActorPropertyMonitorWidget_RefreshPropertyValues_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UActorPropertyMonitorWidget::OnSearchTextChanged(const struct FText& Text)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ActorPropertyMonitorWidget.OnSearchTextChanged");

	UActorPropertyMonitorWidget_OnSearchTextChanged_Params params;
	params.Text = Text;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UActorPropertyMonitorWidget::OnScaleChanged(float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ActorPropertyMonitorWidget.OnScaleChanged");

	UActorPropertyMonitorWidget_OnScaleChanged_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UActorPropertyMonitorWidget::OnPropertyValueCommittedInternal(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ActorPropertyMonitorWidget.OnPropertyValueCommittedInternal");

	UActorPropertyMonitorWidget_OnPropertyValueCommittedInternal_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UActorPropertyMonitorWidget::OnPropertyValueCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod, const struct FString& PropertyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ActorPropertyMonitorWidget.OnPropertyValueCommitted");

	UActorPropertyMonitorWidget_OnPropertyValueCommitted_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;
	params.PropertyName = PropertyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UActorPropertyMonitorWidget::OnPropertyNameButtonClicked()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ActorPropertyMonitorWidget.OnPropertyNameButtonClicked");

	UActorPropertyMonitorWidget_OnPropertyNameButtonClicked_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UActorPropertyMonitorWidget::OnOpacityChanged(float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ActorPropertyMonitorWidget.OnOpacityChanged");

	UActorPropertyMonitorWidget_OnOpacityChanged_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UActorPropertyMonitorWidget::OnDragButtonReleased()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ActorPropertyMonitorWidget.OnDragButtonReleased");

	UActorPropertyMonitorWidget_OnDragButtonReleased_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UActorPropertyMonitorWidget::OnDragButtonPressed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ActorPropertyMonitorWidget.OnDragButtonPressed");

	UActorPropertyMonitorWidget_OnDragButtonPressed_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UActorPropertyMonitorWidget::OnComponentSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ActorPropertyMonitorWidget.OnComponentSelectionChanged");

	UActorPropertyMonitorWidget_OnComponentSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UActorPropertyMonitorWidget::OnClickListenerButtonClicked()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ActorPropertyMonitorWidget.OnClickListenerButtonClicked");

	UActorPropertyMonitorWidget_OnClickListenerButtonClicked_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UActorPropertyMonitorWidget::OnAttachedActorSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ActorPropertyMonitorWidget.OnAttachedActorSelectionChanged");

	UActorPropertyMonitorWidget_OnAttachedActorSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCloudGMHandle::InitCloudGM()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.CloudGMHandle.InitCloudGM");

	UCloudGMHandle_InitCloudGM_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCloudGMHandle::DestroyCloudGM()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.CloudGMHandle.DestroyCloudGM");

	UCloudGMHandle_DestroyCloudGM_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UImGuiFeatureWidget::SetFeatureVisible(bool bVisible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiFeatureWidget.SetFeatureVisible");

	UImGuiFeatureWidget_SetFeatureVisible_Params params;
	params.bVisible = bVisible;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UImGuiFeatureWidget::SetFeatureEnabled(bool bEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiFeatureWidget.SetFeatureEnabled");

	UImGuiFeatureWidget_SetFeatureEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UImGuiFeatureWidget::IsFeatureVisible()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiFeatureWidget.IsFeatureVisible");

	UImGuiFeatureWidget_IsFeatureVisible_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UImGuiFeatureWidget::IsFeatureEnabled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiFeatureWidget.IsFeatureEnabled");

	UImGuiFeatureWidget_IsFeatureEnabled_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class AImGuiWindowBase* UImGuiFeatureWidget::GetOwnerWindow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiFeatureWidget.GetOwnerWindow");

	UImGuiFeatureWidget_GetOwnerWindow_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UImGuiTabBase* UImGuiFeatureWidget::GetOwnerTab()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiFeatureWidget.GetOwnerTab");

	UImGuiFeatureWidget_GetOwnerTab_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UObject* UImGuiFeatureWidget::GetOwner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiFeatureWidget.GetOwner");

	UImGuiFeatureWidget_GetOwner_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UImGuiFeatureWidget::GetFeatureName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiFeatureWidget.GetFeatureName");

	UImGuiFeatureWidget_GetFeatureName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FName UImGuiFeatureWidget::GetFeatureID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiFeatureWidget.GetFeatureID");

	UImGuiFeatureWidget_GetFeatureID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UDebugNameDisplayFeature::AddExcludedActorClass(class UClass* ActorClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.DebugNameDisplayFeature.AddExcludedActorClass");

	UDebugNameDisplayFeature_AddExcludedActorClass_Params params;
	params.ActorClass = ActorClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatAI::TeleportAIToLoc(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAI.TeleportAIToLoc");

	UGMCheatAI_TeleportAIToLoc_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatAI::SpawnAITeam(int Num, int AITeamID, unsigned char Difficulty)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAI.SpawnAITeam");

	UGMCheatAI_SpawnAITeam_Params params;
	params.Num = Num;
	params.AITeamID = AITeamID;
	params.Difficulty = Difficulty;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void UGMCheatAI::SpawnAIPosi(int ID, int AITeamID, float PosiX, float PosiY, float PosiZ)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAI.SpawnAIPosi");

	UGMCheatAI_SpawnAIPosi_Params params;
	params.ID = ID;
	params.AITeamID = AITeamID;
	params.PosiX = PosiX;
	params.PosiY = PosiY;
	params.PosiZ = PosiZ;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatAI::SpawnAI(int Num, bool bSpawnAll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAI.SpawnAI");

	UGMCheatAI_SpawnAI_Params params;
	params.Num = Num;
	params.bSpawnAll = bSpawnAll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatAI::RecordReviveTowerInDSReplay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAI.RecordReviveTowerInDSReplay");

	UGMCheatAI_RecordReviveTowerInDSReplay_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatAI::OpenAIDebugInspector()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAI.OpenAIDebugInspector");

	UGMCheatAI_OpenAIDebugInspector_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UGMCheatAI::MoveToAIWithClassName(const struct FString& AIClassName, float XOffset, float YOffset, float ZOffset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAI.MoveToAIWithClassName");

	UGMCheatAI_MoveToAIWithClassName_Params params;
	params.AIClassName = AIClassName;
	params.XOffset = XOffset;
	params.YOffset = YOffset;
	params.ZOffset = ZOffset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatAI::MoveToAIByDropItem(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAI.MoveToAIByDropItem");

	UGMCheatAI_MoveToAIByDropItem_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatAI::MoveToAI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAI.MoveToAI");

	UGMCheatAI_MoveToAI_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatAI::MobAIIgnorePlayers()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAI.MobAIIgnorePlayers");

	UGMCheatAI_MobAIIgnorePlayers_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatAI::LogAIItemCount(int ItemId, float Distance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAI.LogAIItemCount");

	UGMCheatAI_LogAIItemCount_Params params;
	params.ItemId = ItemId;
	params.Distance = Distance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatAI::FindAIDropItem(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAI.FindAIDropItem");

	UGMCheatAI_FindAIDropItem_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatAI::ChangeAIBehaviorTree(int TreeIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAI.ChangeAIBehaviorTree");

	UGMCheatAI_ChangeAIBehaviorTree_Params params;
	params.TreeIndex = TreeIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatAI::AddAIItem(int ID, int Count, float Distance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAI.AddAIItem");

	UGMCheatAI_AddAIItem_Params params;
	params.ID = ID;
	params.Count = Count;
	params.Distance = Distance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatAnimation::TestAnimation(int Param1, bool Param2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAnimation.TestAnimation");

	UGMCheatAnimation_TestAnimation_Params params;
	params.Param1 = Param1;
	params.Param2 = Param2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatAnimation::DumpCharacterAnimBPVars()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAnimation.DumpCharacterAnimBPVars");

	UGMCheatAnimation_DumpCharacterAnimBPVars_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatAvatar::UseLocalWeaponDIYData(bool bFlag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.UseLocalWeaponDIYData");

	UGMCheatAvatar_UseLocalWeaponDIYData_Params params;
	params.bFlag = bFlag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatAvatar::UseLocalVehicleAvatar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.UseLocalVehicleAvatar");

	UGMCheatAvatar_UseLocalVehicleAvatar_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatAvatar::SetWeaponPendantShow(bool bShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.SetWeaponPendantShow");

	UGMCheatAvatar_SetWeaponPendantShow_Params params;
	params.bShow = bShow;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatAvatar::SetVehicleAvatar(int VehicleShapeType, int VehicleSkin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.SetVehicleAvatar");

	UGMCheatAvatar_SetVehicleAvatar_Params params;
	params.VehicleShapeType = VehicleShapeType;
	params.VehicleSkin = VehicleSkin;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatAvatar::SetPlayerTeamBodyInstMask(int Mask)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.SetPlayerTeamBodyInstMask");

	UGMCheatAvatar_SetPlayerTeamBodyInstMask_Params params;
	params.Mask = Mask;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatAvatar::SetPlayerBodyInstMask(int Mask)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.SetPlayerBodyInstMask");

	UGMCheatAvatar_SetPlayerBodyInstMask_Params params;
	params.Mask = Mask;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatAvatar::SetGrenadeAvatar(int SubType, int EquipmentSkin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.SetGrenadeAvatar");

	UGMCheatAvatar_SetGrenadeAvatar_Params params;
	params.SubType = SubType;
	params.EquipmentSkin = EquipmentSkin;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatAvatar::SetEquipmentAvatar(int EquipmentAvatarType, int EquipmentSkin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.SetEquipmentAvatar");

	UGMCheatAvatar_SetEquipmentAvatar_Params params;
	params.EquipmentAvatarType = EquipmentAvatarType;
	params.EquipmentSkin = EquipmentSkin;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatAvatar::SetEnableWingAvatar(bool Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.SetEnableWingAvatar");

	UGMCheatAvatar_SetEnableWingAvatar_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatAvatar::SetDownloadInBattle(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.SetDownloadInBattle");

	UGMCheatAvatar_SetDownloadInBattle_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatAvatar::SetAvatarDownloadInBattle(bool bEnableDownload)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.SetAvatarDownloadInBattle");

	UGMCheatAvatar_SetAvatarDownloadInBattle_Params params;
	params.bEnableDownload = bEnableDownload;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatAvatar::PrintMainCharAllAvatar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.PrintMainCharAllAvatar");

	UGMCheatAvatar_PrintMainCharAllAvatar_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatAvatar::PrintAllStaticBufferSize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.PrintAllStaticBufferSize");

	UGMCheatAvatar_PrintAllStaticBufferSize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatAvatar::DeleteVehicleAdvanceAvatar_Style(int VehicleSkin, int VehicleStyle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.DeleteVehicleAdvanceAvatar_Style");

	UGMCheatAvatar_DeleteVehicleAdvanceAvatar_Style_Params params;
	params.VehicleSkin = VehicleSkin;
	params.VehicleStyle = VehicleStyle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatAvatar::DeleteVehicleAdvanceAvatar(int VehicleSkin, int ModelID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.DeleteVehicleAdvanceAvatar");

	UGMCheatAvatar_DeleteVehicleAdvanceAvatar_Params params;
	params.VehicleSkin = VehicleSkin;
	params.ModelID = ModelID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatAvatar::DebugWorldPlayerAvatarInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.DebugWorldPlayerAvatarInfo");

	UGMCheatAvatar_DebugWorldPlayerAvatarInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatAvatar::DebugChangeWearIndex(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.DebugChangeWearIndex");

	UGMCheatAvatar_DebugChangeWearIndex_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatAvatar::ClearItemPathNotExistlist()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.ClearItemPathNotExistlist");

	UGMCheatAvatar_ClearItemPathNotExistlist_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatAvatar::ClearItemHandleNotExistlist()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.ClearItemHandleNotExistlist");

	UGMCheatAvatar_ClearItemHandleNotExistlist_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatAvatar::ClearCharacterAvatarHandlePool(bool bSelf)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.ClearCharacterAvatarHandlePool");

	UGMCheatAvatar_ClearCharacterAvatarHandlePool_Params params;
	params.bSelf = bSelf;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UGMCheatAvatar::ChangeBattleAvatar(int HeadAvatarID, int HairAvatarID, int InGender, int PutOffAvatar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.ChangeBattleAvatar");

	UGMCheatAvatar_ChangeBattleAvatar_Params params;
	params.HeadAvatarID = HeadAvatarID;
	params.HairAvatarID = HairAvatarID;
	params.InGender = InGender;
	params.PutOffAvatar = PutOffAvatar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatAvatar::AddWeaponPendantItem(int WeaponId, int pendantID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.AddWeaponPendantItem");

	UGMCheatAvatar_AddWeaponPendantItem_Params params;
	params.WeaponId = WeaponId;
	params.pendantID = pendantID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatAvatar::AddWeaponDIYPlan(int AvatarID, int DIYPlanID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.AddWeaponDIYPlan");

	UGMCheatAvatar_AddWeaponDIYPlan_Params params;
	params.AvatarID = AvatarID;
	params.DIYPlanID = DIYPlanID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatAvatar::AddWeaponAvatar(int WeaponSkin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.AddWeaponAvatar");

	UGMCheatAvatar_AddWeaponAvatar_Params params;
	params.WeaponSkin = WeaponSkin;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatAvatar::AddWeaponAttachmentAvatarSimple(int WeaponId, int WeaponAttachmentSkin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.AddWeaponAttachmentAvatarSimple");

	UGMCheatAvatar_AddWeaponAttachmentAvatarSimple_Params params;
	params.WeaponId = WeaponId;
	params.WeaponAttachmentSkin = WeaponAttachmentSkin;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatAvatar::AddWeaponAttachmentAvatar(int WeaponId, int WeaponAttachmentSkin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.AddWeaponAttachmentAvatar");

	UGMCheatAvatar_AddWeaponAttachmentAvatar_Params params;
	params.WeaponId = WeaponId;
	params.WeaponAttachmentSkin = WeaponAttachmentSkin;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatAvatar::AddVehicleAvatar(int VehicleSkin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.AddVehicleAvatar");

	UGMCheatAvatar_AddVehicleAvatar_Params params;
	params.VehicleSkin = VehicleSkin;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatAvatar::AddVehicleAdvanceAvatar_Style(int VehicleSkin, int VehicleStyle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.AddVehicleAdvanceAvatar_Style");

	UGMCheatAvatar_AddVehicleAdvanceAvatar_Style_Params params;
	params.VehicleSkin = VehicleSkin;
	params.VehicleStyle = VehicleStyle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void UGMCheatAvatar::AddVehicleAdvanceAvatar(int VehicleSkin, int ModelID, int ColorID, int PatternID, int ParticleID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.AddVehicleAdvanceAvatar");

	UGMCheatAvatar_AddVehicleAdvanceAvatar_Params params;
	params.VehicleSkin = VehicleSkin;
	params.ModelID = ModelID;
	params.ColorID = ColorID;
	params.PatternID = PatternID;
	params.ParticleID = ParticleID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatAvatar::AddItemPathNotExistlist(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.AddItemPathNotExistlist");

	UGMCheatAvatar_AddItemPathNotExistlist_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatAvatar::AddItemHandleNotExistlist(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatAvatar.AddItemHandleNotExistlist");

	UGMCheatAvatar_AddItemHandleNotExistlist_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatBackpack::UseItem(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatBackpack.UseItem");

	UGMCheatBackpack_UseItem_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatBackpack::FlushItem(int onlyStatic)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatBackpack.FlushItem");

	UGMCheatBackpack_FlushItem_Params params;
	params.onlyStatic = onlyStatic;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatBackpack::DropItemsWithType(int TypeItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatBackpack.DropItemsWithType");

	UGMCheatBackpack_DropItemsWithType_Params params;
	params.TypeItem = TypeItem;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatBackpack::DropItem(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatBackpack.DropItem");

	UGMCheatBackpack_DropItem_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatBackpack::DropAllItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatBackpack.DropAllItem");

	UGMCheatBackpack_DropAllItem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatBackpack::DestroyPickUpActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatBackpack.DestroyPickUpActors");

	UGMCheatBackpack_DestroyPickUpActors_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatBackpack::ClearBackpack()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatBackpack.ClearBackpack");

	UGMCheatBackpack_ClearBackpack_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatBackpack::BatchAddItemsString(TArray<struct FString> ItemDetailArray, bool bClearBackpack)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatBackpack.BatchAddItemsString");

	UGMCheatBackpack_BatchAddItemsString_Params params;
	params.ItemDetailArray = ItemDetailArray;
	params.bClearBackpack = bClearBackpack;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatBackpack::BatchAddItemsFromFile(const struct FString& Filename, bool bClearBackpack)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatBackpack.BatchAddItemsFromFile");

	UGMCheatBackpack_BatchAddItemsFromFile_Params params;
	params.Filename = Filename;
	params.bClearBackpack = bClearBackpack;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatBackpack::AddItemString(const struct FString& ItemDetail)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatBackpack.AddItemString");

	UGMCheatBackpack_AddItemString_Params params;
	params.ItemDetail = ItemDetail;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatBackpack::AddItemNew(const struct FString& ID, int Count, int PickupType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatBackpack.AddItemNew");

	UGMCheatBackpack_AddItemNew_Params params;
	params.ID = ID;
	params.Count = Count;
	params.PickupType = PickupType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatBackpack::AddItem(int ID, int Count, int PickupType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatBackpack.AddItem");

	UGMCheatBackpack_AddItem_Params params;
	params.ID = ID;
	params.Count = Count;
	params.PickupType = PickupType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UGMCheatBackpack::AddAvatarItem(int ID, int Color, int Pattern, int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatBackpack.AddAvatarItem");

	UGMCheatBackpack_AddAvatarItem_Params params;
	params.ID = ID;
	params.Color = Color;
	params.Pattern = Pattern;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatCharacter::ToggleUserCmdDeltaSendAck(bool Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.ToggleUserCmdDeltaSendAck");

	UGMCheatCharacter_ToggleUserCmdDeltaSendAck_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatCharacter::ToggleUserCmdDeltaFlag(bool Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.ToggleUserCmdDeltaFlag");

	UGMCheatCharacter_ToggleUserCmdDeltaFlag_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatCharacter::ToggleUserCmdDeltaCheckSum(bool Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.ToggleUserCmdDeltaCheckSum");

	UGMCheatCharacter_ToggleUserCmdDeltaCheckSum_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatCharacter::ToggleUserCmdDelta(bool Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.ToggleUserCmdDelta");

	UGMCheatCharacter_ToggleUserCmdDelta_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatCharacter::ToggleServerAcknowledgePossession(bool Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.ToggleServerAcknowledgePossession");

	UGMCheatCharacter_ToggleServerAcknowledgePossession_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatCharacter::ToggleCheatLocation(bool Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.ToggleCheatLocation");

	UGMCheatCharacter_ToggleCheatLocation_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatCharacter::TestLowProbCircle(bool UseLowProb, int LoopCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.TestLowProbCircle");

	UGMCheatCharacter_TestLowProbCircle_Params params;
	params.UseLowProb = UseLowProb;
	params.LoopCount = LoopCount;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatCharacter::TestLaunchFly(float Speed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.TestLaunchFly");

	UGMCheatCharacter_TestLaunchFly_Params params;
	params.Speed = Speed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatCharacter::TestAutoMoveToShootingMachine()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.TestAutoMoveToShootingMachine");

	UGMCheatCharacter_TestAutoMoveToShootingMachine_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatCharacter::TestAutoMoveToLocation(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.TestAutoMoveToLocation");

	UGMCheatCharacter_TestAutoMoveToLocation_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatCharacter::TestAutoMoveToCharacter(const struct FString& TargetPlayerUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.TestAutoMoveToCharacter");

	UGMCheatCharacter_TestAutoMoveToCharacter_Params params;
	params.TargetPlayerUID = TargetPlayerUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatCharacter::TeamNoAlwaysRelevant()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.TeamNoAlwaysRelevant");

	UGMCheatCharacter_TeamNoAlwaysRelevant_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatCharacter::SwitchViewTarget()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.SwitchViewTarget");

	UGMCheatCharacter_SwitchViewTarget_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatCharacter::StartAirDropSpecified(float X, float Y)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.StartAirDropSpecified");

	UGMCheatCharacter_StartAirDropSpecified_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatCharacter::StartAirDropBackupEnter(float X, float Y, int MaxPlaneNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.StartAirDropBackupEnter");

	UGMCheatCharacter_StartAirDropBackupEnter_Params params;
	params.X = X;
	params.Y = Y;
	params.MaxPlaneNum = MaxPlaneNum;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatCharacter::StartAirDrop(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.StartAirDrop");

	UGMCheatCharacter_StartAirDrop_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatCharacter::StartAirAttackSpecified(float X, float Y, float Radius)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.StartAirAttackSpecified");

	UGMCheatCharacter_StartAirAttackSpecified_Params params;
	params.X = X;
	params.Y = Y;
	params.Radius = Radius;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatCharacter::StartAirAttack(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.StartAirAttack");

	UGMCheatCharacter_StartAirAttack_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatCharacter::ShowWeaponRecordInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.ShowWeaponRecordInfo");

	UGMCheatCharacter_ShowWeaponRecordInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatCharacter::ShowVaultEnable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.ShowVaultEnable");

	UGMCheatCharacter_ShowVaultEnable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatCharacter::ShowResultWeaponRecordInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.ShowResultWeaponRecordInfo");

	UGMCheatCharacter_ShowResultWeaponRecordInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatCharacter::ShowAllRoles()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.ShowAllRoles");

	UGMCheatCharacter_ShowAllRoles_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatCharacter::SetTimeSpeedFactor(float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.SetTimeSpeedFactor");

	UGMCheatCharacter_SetTimeSpeedFactor_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatCharacter::SetTimeSpeedCheck(bool Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.SetTimeSpeedCheck");

	UGMCheatCharacter_SetTimeSpeedCheck_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatCharacter::SetSpeed(float Modifier)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.SetSpeed");

	UGMCheatCharacter_SetSpeed_Params params;
	params.Modifier = Modifier;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatCharacter::SetMaxHealth(float Hp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.SetMaxHealth");

	UGMCheatCharacter_SetMaxHealth_Params params;
	params.Hp = Hp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UGMCheatCharacter::SetLowProbCircle(float X, float Y, float R, float Prob)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.SetLowProbCircle");

	UGMCheatCharacter_SetLowProbCircle_Params params;
	params.X = X;
	params.Y = Y;
	params.R = R;
	params.Prob = Prob;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatCharacter::SetCustomJumpPoint(float JmpX, float JmpY, float JmpRadius)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.SetCustomJumpPoint");

	UGMCheatCharacter_SetCustomJumpPoint_Params params;
	params.JmpX = JmpX;
	params.JmpY = JmpY;
	params.JmpRadius = JmpRadius;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatCharacter::SetCircleCenter(const struct FString& PointString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.SetCircleCenter");

	UGMCheatCharacter_SetCircleCenter_Params params;
	params.PointString = PointString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatCharacter::SetCirCenterFixed(bool Enable, float X, float Y)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.SetCirCenterFixed");

	UGMCheatCharacter_SetCirCenterFixed_Params params;
	params.Enable = Enable;
	params.X = X;
	params.Y = Y;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatCharacter::SetAirDropEnable(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.SetAirDropEnable");

	UGMCheatCharacter_SetAirDropEnable_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatCharacter::SetAirAttackEnable(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.SetAirAttackEnable");

	UGMCheatCharacter_SetAirAttackEnable_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatCharacter::Set2x2ForceCircleLastR(float R)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.Set2x2ForceCircleLastR");

	UGMCheatCharacter_Set2x2ForceCircleLastR_Params params;
	params.R = R;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatCharacter::Set2x2ForceCircle(float X, float Y, float R)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.Set2x2ForceCircle");

	UGMCheatCharacter_Set2x2ForceCircle_Params params;
	params.X = X;
	params.Y = Y;
	params.R = R;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatCharacter::Set2x2CircleCenter(int Index, float X, float Y)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.Set2x2CircleCenter");

	UGMCheatCharacter_Set2x2CircleCenter_Params params;
	params.Index = Index;
	params.X = X;
	params.Y = Y;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}












void UGMCheatCharacter::Set2x2Circle3Center(float X1, float Y1, float X2, float Y2, float x3, float y3)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.Set2x2Circle3Center");

	UGMCheatCharacter_Set2x2Circle3Center_Params params;
	params.X1 = X1;
	params.Y1 = Y1;
	params.X2 = X2;
	params.Y2 = Y2;
	params.x3 = x3;
	params.y3 = y3;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatCharacter::PrintMovementLog(int PrintLog)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.PrintMovementLog");

	UGMCheatCharacter_PrintMovementLog_Params params;
	params.PrintLog = PrintLog;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatCharacter::PrintDownCollision()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.PrintDownCollision");

	UGMCheatCharacter_PrintDownCollision_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatCharacter::MoveToXY(float X, float Y)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.MoveToXY");

	UGMCheatCharacter_MoveToXY_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatCharacter::MoveToVehicle(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.MoveToVehicle");

	UGMCheatCharacter_MoveToVehicle_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatCharacter::MoveToS(const struct FString& VectorString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.MoveToS");

	UGMCheatCharacter_MoveToS_Params params;
	params.VectorString = VectorString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatCharacter::MoveToNearestVehicle(float IgnoreDistance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.MoveToNearestVehicle");

	UGMCheatCharacter_MoveToNearestVehicle_Params params;
	params.IgnoreDistance = IgnoreDistance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatCharacter::MoveToItem(int ItemId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.MoveToItem");

	UGMCheatCharacter_MoveToItem_Params params;
	params.ItemId = ItemId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatCharacter::MoveTo(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.MoveTo");

	UGMCheatCharacter_MoveTo_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatCharacter::ModifyStreamingDistance(int Distance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.ModifyStreamingDistance");

	UGMCheatCharacter_ModifyStreamingDistance_Params params;
	params.Distance = Distance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatCharacter::KillSomeOne(const struct FString& InPlayerName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.KillSomeOne");

	UGMCheatCharacter_KillSomeOne_Params params;
	params.InPlayerName = InPlayerName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatCharacter::KillAll()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.KillAll");

	UGMCheatCharacter_KillAll_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatCharacter::Kill(int GivenNumber)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.Kill");

	UGMCheatCharacter_Kill_Params params;
	params.GivenNumber = GivenNumber;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatCharacter::GMSetPlayerLocationInvalid(uint32_t InPlayerKey, int errorType, int Side)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.GMSetPlayerLocationInvalid");

	UGMCheatCharacter_GMSetPlayerLocationInvalid_Params params;
	params.InPlayerKey = InPlayerKey;
	params.errorType = errorType;
	params.Side = Side;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatCharacter::GMSetCampId(int CamID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.GMSetCampId");

	UGMCheatCharacter_GMSetCampId_Params params;
	params.CamID = CamID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatCharacter::GetGameScreenSize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.GetGameScreenSize");

	UGMCheatCharacter_GetGameScreenSize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatCharacter::ExecFollowTeammate(const struct FString& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.ExecFollowTeammate");

	UGMCheatCharacter_ExecFollowTeammate_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatCharacter::DumpCharacterMove(uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.DumpCharacterMove");

	UGMCheatCharacter_DumpCharacterMove_Params params;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatCharacter::DebugSprint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.DebugSprint");

	UGMCheatCharacter_DebugSprint_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatCharacter::DebugPhysicsAsset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatCharacter.DebugPhysicsAsset");

	UGMCheatCharacter_DebugPhysicsAsset_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatDump::DumpWeaponsToFile(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpWeaponsToFile");

	UGMCheatDump_DumpWeaponsToFile_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatDump::DumpVehicleToFile(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpVehicleToFile");

	UGMCheatDump_DumpVehicleToFile_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatDump::DumpVehicleAnimInstanceToFile(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpVehicleAnimInstanceToFile");

	UGMCheatDump_DumpVehicleAnimInstanceToFile_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatDump::DumpVehicleAnimInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpVehicleAnimInstance");

	UGMCheatDump_DumpVehicleAnimInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatDump::DumpVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpVehicle");

	UGMCheatDump_DumpVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatDump::DumpSimulatedCharacterAnimInstanceToFile(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpSimulatedCharacterAnimInstanceToFile");

	UGMCheatDump_DumpSimulatedCharacterAnimInstanceToFile_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatDump::DumpSimulatedCharacterAnimInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpSimulatedCharacterAnimInstance");

	UGMCheatDump_DumpSimulatedCharacterAnimInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatDump::DumpReticleTargetActorToFile(const struct FString& Filename, bool bPrintFunc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpReticleTargetActorToFile");

	UGMCheatDump_DumpReticleTargetActorToFile_Params params;
	params.Filename = Filename;
	params.bPrintFunc = bPrintFunc;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatDump::DumpReticleTargetActor(bool bPrintFunc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpReticleTargetActor");

	UGMCheatDump_DumpReticleTargetActor_Params params;
	params.bPrintFunc = bPrintFunc;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatDump::DumpPlayerSkillInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpPlayerSkillInfo");

	UGMCheatDump_DumpPlayerSkillInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatDump::DumpPlayerInfoToFile(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpPlayerInfoToFile");

	UGMCheatDump_DumpPlayerInfoToFile_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatDump::DumpPlayerControllerToFile(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpPlayerControllerToFile");

	UGMCheatDump_DumpPlayerControllerToFile_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatDump::DumpPlayerController()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpPlayerController");

	UGMCheatDump_DumpPlayerController_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatDump::DumpPlayerCameraManagerToFile(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpPlayerCameraManagerToFile");

	UGMCheatDump_DumpPlayerCameraManagerToFile_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatDump::DumpObservingCharacterToFile(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpObservingCharacterToFile");

	UGMCheatDump_DumpObservingCharacterToFile_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatDump::DumpObservingCharacter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpObservingCharacter");

	UGMCheatDump_DumpObservingCharacter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatDump::DumpObjectPropertiesRecursive(const struct FString& ObjectName, int Depth, bool bPrintFunc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpObjectPropertiesRecursive");

	UGMCheatDump_DumpObjectPropertiesRecursive_Params params;
	params.ObjectName = ObjectName;
	params.Depth = Depth;
	params.bPrintFunc = bPrintFunc;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatDump::DumpObjectProperties(const struct FString& ObjectName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpObjectProperties");

	UGMCheatDump_DumpObjectProperties_Params params;
	params.ObjectName = ObjectName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatDump::DumpCharacterToFile(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpCharacterToFile");

	UGMCheatDump_DumpCharacterToFile_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatDump::DumpCharacterAnimInstanceToFile(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpCharacterAnimInstanceToFile");

	UGMCheatDump_DumpCharacterAnimInstanceToFile_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatDump::DumpCharacterAnimInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpCharacterAnimInstance");

	UGMCheatDump_DumpCharacterAnimInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatDump::DumpCharacter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpCharacter");

	UGMCheatDump_DumpCharacter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatDump::DumpBatchManager()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpBatchManager");

	UGMCheatDump_DumpBatchManager_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatDump::DumpAllVehiclesToFile(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpAllVehiclesToFile");

	UGMCheatDump_DumpAllVehiclesToFile_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatDump::DumpAllVehicles()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpAllVehicles");

	UGMCheatDump_DumpAllVehicles_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatDump::DumpAllSkillActorsInfoToFile(const struct FString& Filename, int Depth)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpAllSkillActorsInfoToFile");

	UGMCheatDump_DumpAllSkillActorsInfoToFile_Params params;
	params.Filename = Filename;
	params.Depth = Depth;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatDump::DumpAllSkillActorsInfo(int Depth)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpAllSkillActorsInfo");

	UGMCheatDump_DumpAllSkillActorsInfo_Params params;
	params.Depth = Depth;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatDump::DumpAllPlayerControllerToFile(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpAllPlayerControllerToFile");

	UGMCheatDump_DumpAllPlayerControllerToFile_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatDump::DumpAllPlayerController()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpAllPlayerController");

	UGMCheatDump_DumpAllPlayerController_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatDump::DumpAllCustomActorsInfoToFile(class UClass* DesiredClass, const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpAllCustomActorsInfoToFile");

	UGMCheatDump_DumpAllCustomActorsInfoToFile_Params params;
	params.DesiredClass = DesiredClass;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatDump::DumpAllCustomActorsInfo(class UClass* DesiredClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpAllCustomActorsInfo");

	UGMCheatDump_DumpAllCustomActorsInfo_Params params;
	params.DesiredClass = DesiredClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatDump::DumpAllCharactersToFile(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpAllCharactersToFile");

	UGMCheatDump_DumpAllCharactersToFile_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatDump::DumpAllCharacters()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatDump.DumpAllCharacters");

	UGMCheatDump_DumpAllCharacters_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatGameFlow::StartReadyCountDown()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatGameFlow.StartReadyCountDown");

	UGMCheatGameFlow_StartReadyCountDown_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatGameFlow::SetStateLeftTime(int LeftTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatGameFlow.SetStateLeftTime");

	UGMCheatGameFlow_SetStateLeftTime_Params params;
	params.LeftTime = LeftTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatGameFlow::GotoFlying()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatGameFlow.GotoFlying");

	UGMCheatGameFlow_GotoFlying_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatGameFlow::GameModeGotoNextState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatGameFlow.GameModeGotoNextState");

	UGMCheatGameFlow_GameModeGotoNextState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatGameFlow::GameModeGotoFightingState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatGameFlow.GameModeGotoFightingState");

	UGMCheatGameFlow_GameModeGotoFightingState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatGameFlow::DsLuaGM(const struct FString& CmdString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatGameFlow.DsLuaGM");

	UGMCheatGameFlow_DsLuaGM_Params params;
	params.CmdString = CmdString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatGameFlow::DsLuaDoString(const struct FString& LuaString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatGameFlow.DsLuaDoString");

	UGMCheatGameFlow_DsLuaDoString_Params params;
	params.LuaString = LuaString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatHiggs::TriggerActorChannelErrorDelegate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatHiggs.TriggerActorChannelErrorDelegate");

	UGMCheatHiggs_TriggerActorChannelErrorDelegate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatHiggs::TestSpawnStaticmesh(int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatHiggs.TestSpawnStaticmesh");

	UGMCheatHiggs_TestSpawnStaticmesh_Params params;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatHiggs::TestGMCheatHiggs(int Param1, bool Param2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatHiggs.TestGMCheatHiggs");

	UGMCheatHiggs_TestGMCheatHiggs_Params params;
	params.Param1 = Param1;
	params.Param2 = Param2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatHiggs::TestGlueHia(int GlueType, int GlueValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatHiggs.TestGlueHia");

	UGMCheatHiggs_TestGlueHia_Params params;
	params.GlueType = GlueType;
	params.GlueValue = GlueValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatHiggs::StatCPU(int Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatHiggs.StatCPU");

	UGMCheatHiggs_StatCPU_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatHiggs::SetOpenSecurityAlert(bool bOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatHiggs.SetOpenSecurityAlert");

	UGMCheatHiggs_SetOpenSecurityAlert_Params params;
	params.bOpen = bOpen;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatHiggs::OnFinishAsyncLoadResource(const struct FSoftObjectPath& SoftObjectPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatHiggs.OnFinishAsyncLoadResource");

	UGMCheatHiggs_OnFinishAsyncLoadResource_Params params;
	params.SoftObjectPath = SoftObjectPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatHiggs::HiggsTestSyncLoad(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatHiggs.HiggsTestSyncLoad");

	UGMCheatHiggs_HiggsTestSyncLoad_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatHiggs::HiggsTestForbitMove()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatHiggs.HiggsTestForbitMove");

	UGMCheatHiggs_HiggsTestForbitMove_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatHiggs::HiggsTestAsyncLoad(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatHiggs.HiggsTestAsyncLoad");

	UGMCheatHiggs_HiggsTestAsyncLoad_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatHiggs::DebugReplaySampleLocAndRot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatHiggs.DebugReplaySampleLocAndRot");

	UGMCheatHiggs_DebugReplaySampleLocAndRot_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatHUD::ResetHUDDebugFunction()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatHUD.ResetHUDDebugFunction");

	UGMCheatHUD_ResetHUDDebugFunction_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatHUD::RemoveHUDDebugFunction(const struct FString& FuncName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatHUD.RemoveHUDDebugFunction");

	UGMCheatHUD_RemoveHUDDebugFunction_Params params;
	params.FuncName = FuncName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatHUD::EnableHUDDebug(bool bEnable, const struct FString& FuncName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatHUD.EnableHUDDebug");

	UGMCheatHUD_EnableHUDDebug_Params params;
	params.bEnable = bEnable;
	params.FuncName = FuncName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatHUD::AddHUDDebugFunction(const struct FString& FuncName, bool bReset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatHUD.AddHUDDebugFunction");

	UGMCheatHUD_AddHUDDebugFunction_Params params;
	params.FuncName = FuncName;
	params.bReset = bReset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UGMCheatLevel::SpawnActorWithPath(const struct FString& Path, float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.SpawnActorWithPath");

	UGMCheatLevel_SpawnActorWithPath_Params params;
	params.Path = Path;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatLevel::ShutDownVehicleGenerate(bool IsOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.ShutDownVehicleGenerate");

	UGMCheatLevel_ShutDownVehicleGenerate_Params params;
	params.IsOpen = IsOpen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatLevel::ShutDownPickUpGenerate(bool IsOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.ShutDownPickUpGenerate");

	UGMCheatLevel_ShutDownPickUpGenerate_Params params;
	params.IsOpen = IsOpen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatLevel::ShutDownItemGenerate(bool IsOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.ShutDownItemGenerate");

	UGMCheatLevel_ShutDownItemGenerate_Params params;
	params.IsOpen = IsOpen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatLevel::ShowNavOperator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.ShowNavOperator");

	UGMCheatLevel_ShowNavOperator_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatLevel::SetServerLevelLoadingMode(bool bNewLoadAll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.SetServerLevelLoadingMode");

	UGMCheatLevel_SetServerLevelLoadingMode_Params params;
	params.bNewLoadAll = bNewLoadAll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatLevel::SetPlaneEnabled(bool InEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.SetPlaneEnabled");

	UGMCheatLevel_SetPlaneEnabled_Params params;
	params.InEnable = InEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UGMCheatLevel::SetCustomFlightRoute(float StartX, float StartY, float EndX, float EndY)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.SetCustomFlightRoute");

	UGMCheatLevel_SetCustomFlightRoute_Params params;
	params.StartX = StartX;
	params.StartY = StartY;
	params.EndX = EndX;
	params.EndY = EndY;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatLevel::RemoveAllDoors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.RemoveAllDoors");

	UGMCheatLevel_RemoveAllDoors_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatLevel::PrintAllPickupWarpper()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.PrintAllPickupWarpper");

	UGMCheatLevel_PrintAllPickupWarpper_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatLevel::LocalProfileFootprint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.LocalProfileFootprint");

	UGMCheatLevel_LocalProfileFootprint_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatLevel::LoadAllLand(bool bLoadAll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.LoadAllLand");

	UGMCheatLevel_LoadAllLand_Params params;
	params.bLoadAll = bLoadAll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatLevel::GotoDoubleCircleEdge(float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.GotoDoubleCircleEdge");

	UGMCheatLevel_GotoDoubleCircleEdge_Params params;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatLevel::GMSetBoolPoisonCircle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.GMSetBoolPoisonCircle");

	UGMCheatLevel_GMSetBoolPoisonCircle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatLevel::GMSetBoolAirDrop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.GMSetBoolAirDrop");

	UGMCheatLevel_GMSetBoolAirDrop_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatLevel::GMSetBoolAirAttack()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.GMSetBoolAirAttack");

	UGMCheatLevel_GMSetBoolAirAttack_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatLevel::GMSetBoolAI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.GMSetBoolAI");

	UGMCheatLevel_GMSetBoolAI_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatLevel::GMEnableRandom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.GMEnableRandom");

	UGMCheatLevel_GMEnableRandom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatLevel::GMEnableAllComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.GMEnableAllComponent");

	UGMCheatLevel_GMEnableAllComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatLevel::GMDisableRandom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.GMDisableRandom");

	UGMCheatLevel_GMDisableRandom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatLevel::GMDisableAllComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.GMDisableAllComponent");

	UGMCheatLevel_GMDisableAllComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatLevel::GMBeginCircle(int CurIndex, float PosX, float PosY)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.GMBeginCircle");

	UGMCheatLevel_GMBeginCircle_Params params;
	params.CurIndex = CurIndex;
	params.PosX = PosX;
	params.PosY = PosY;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FVector UGMCheatLevel::GetCurrentLevelOffset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.GetCurrentLevelOffset");

	UGMCheatLevel_GetCurrentLevelOffset_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UGMCheatLevel::EnableMyLandscapeDraw()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.EnableMyLandscapeDraw");

	UGMCheatLevel_EnableMyLandscapeDraw_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatLevel::DisableMyLandscapeDraw()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.DisableMyLandscapeDraw");

	UGMCheatLevel_DisableMyLandscapeDraw_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void UGMCheatLevel::DebugAirDropPickInfo(float DrawTime, float BoxDrawSize, float BoxDrawLineLength, float ListWrapperDrawSize, float ListWrapperDrawLineLength)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatLevel.DebugAirDropPickInfo");

	UGMCheatLevel_DebugAirDropPickInfo_Params params;
	params.DrawTime = DrawTime;
	params.BoxDrawSize = BoxDrawSize;
	params.BoxDrawLineLength = BoxDrawLineLength;
	params.ListWrapperDrawSize = ListWrapperDrawSize;
	params.ListWrapperDrawLineLength = ListWrapperDrawLineLength;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::WatchReport()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.WatchReport");

	UGMCheatManager_WatchReport_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatManager::VehicleTowardTo(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.VehicleTowardTo");

	UGMCheatManager_VehicleTowardTo_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::VehicleSpotLog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.VehicleSpotLog");

	UGMCheatManager_VehicleSpotLog_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatManager::VehicleMoveTo(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.VehicleMoveTo");

	UGMCheatManager_VehicleMoveTo_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}












void UGMCheatManager::VehicleMoveAndTowardTo(float X, float Y, float Z, float X1, float Y1, float Z1)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.VehicleMoveAndTowardTo");

	UGMCheatManager_VehicleMoveAndTowardTo_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.X1 = X1;
	params.Y1 = Y1;
	params.Z1 = Z1;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UGMCheatManager::UpdateTrainingRank(int TrainingType, int Level, int Top1wScore, int Score)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.UpdateTrainingRank");

	UGMCheatManager_UpdateTrainingRank_Params params;
	params.TrainingType = TrainingType;
	params.Level = Level;
	params.Top1wScore = Top1wScore;
	params.Score = Score;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::ToggleSpringMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ToggleSpringMode");

	UGMCheatManager_ToggleSpringMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::ToggleSpringDebug()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ToggleSpringDebug");

	UGMCheatManager_ToggleSpringDebug_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::TogglePawnInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.TogglePawnInfo");

	UGMCheatManager_TogglePawnInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::TestStringSHA1(const struct FString& InStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.TestStringSHA1");

	UGMCheatManager_TestStringSHA1_Params params;
	params.InStr = InStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::TestReplayStreamerLastError()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.TestReplayStreamerLastError");

	UGMCheatManager_TestReplayStreamerLastError_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::TestPlayerLostEvent(int LostEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.TestPlayerLostEvent");

	UGMCheatManager_TestPlayerLostEvent_Params params;
	params.LostEvent = LostEvent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::TestPlayerBattleResult()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.TestPlayerBattleResult");

	UGMCheatManager_TestPlayerBattleResult_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::TestNetworkLost()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.TestNetworkLost");

	UGMCheatManager_TestNetworkLost_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatManager::TestLineTrace(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.TestLineTrace");

	UGMCheatManager_TestLineTrace_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UGMCheatManager::TestKillInfoPanel(int WeaponId, int Relationship, int WeaponAvatarID, int ClothID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.TestKillInfoPanel");

	UGMCheatManager_TestKillInfoPanel_Params params;
	params.WeaponId = WeaponId;
	params.Relationship = Relationship;
	params.WeaponAvatarID = WeaponAvatarID;
	params.ClothID = ClothID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::TestGameplayDataRecord(int UID, int RecordType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.TestGameplayDataRecord");

	UGMCheatManager_TestGameplayDataRecord_Params params;
	params.UID = UID;
	params.RecordType = RecordType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::TestEnableRegionsLongDistanceSleep(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.TestEnableRegionsLongDistanceSleep");

	UGMCheatManager_TestEnableRegionsLongDistanceSleep_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::TestDeactivate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.TestDeactivate");

	UGMCheatManager_TestDeactivate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::TestCrash()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.TestCrash");

	UGMCheatManager_TestCrash_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::TeleportToVehicleAI(int InIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.TeleportToVehicleAI");

	UGMCheatManager_TeleportToVehicleAI_Params params;
	params.InIndex = InIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatManager::TeleportToPVEMonster(int ChapterID, int LevelID, int WaveID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.TeleportToPVEMonster");

	UGMCheatManager_TeleportToPVEMonster_Params params;
	params.ChapterID = ChapterID;
	params.LevelID = LevelID;
	params.WaveID = WaveID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatManager::TeleportTo(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.TeleportTo");

	UGMCheatManager_TeleportTo_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::TeleportNearestVehicleAIToPercentOfPath(float InPercent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.TeleportNearestVehicleAIToPercentOfPath");

	UGMCheatManager_TeleportNearestVehicleAIToPercentOfPath_Params params;
	params.InPercent = InPercent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::SwitchSocialIsland(int LandId, float Delay)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SwitchSocialIsland");

	UGMCheatManager_SwitchSocialIsland_Params params;
	params.LandId = LandId;
	params.Delay = Delay;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::SwitchShowUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SwitchShowUI");

	UGMCheatManager_SwitchShowUI_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::SuperGMKillDS()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SuperGMKillDS");

	UGMCheatManager_SuperGMKillDS_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::StopAllMonsterDSAnim(bool bStop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.StopAllMonsterDSAnim");

	UGMCheatManager_StopAllMonsterDSAnim_Params params;
	params.bStop = bStop;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::StatVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.StatVehicle");

	UGMCheatManager_StatVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::StarTPerforPlatTag(const struct FString& TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.StarTPerforPlatTag");

	UGMCheatManager_StarTPerforPlatTag_Params params;
	params.TagName = TagName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}












void UGMCheatManager::SpawnVehicleWithPathAtPoint(const struct FString& Path, bool AroundMe, float X, float Y, float Z, int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SpawnVehicleWithPathAtPoint");

	UGMCheatManager_SpawnVehicleWithPathAtPoint_Params params;
	params.Path = Path;
	params.AroundMe = AroundMe;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::SpawnTrainingAIAroundMe(int Num, int Range)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SpawnTrainingAIAroundMe");

	UGMCheatManager_SpawnTrainingAIAroundMe_Params params;
	params.Num = Num;
	params.Range = Range;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UGMCheatManager::SpawnMonsterAround(int MonsterID, float Radius, int Num, bool bStopAI)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SpawnMonsterAround");

	UGMCheatManager_SpawnMonsterAround_Params params;
	params.MonsterID = MonsterID;
	params.Radius = Radius;
	params.Num = Num;
	params.bStopAI = bStopAI;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SpawnItemBySpotDefaultTag(const struct FString& DefaultTag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SpawnItemBySpotDefaultTag");

	UGMCheatManager_SpawnItemBySpotDefaultTag_Params params;
	params.DefaultTag = DefaultTag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SpawnGameFeatureActor(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SpawnGameFeatureActor");

	UGMCheatManager_SpawnGameFeatureActor_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatManager::SpawnFakePlayer(int Num, bool bWithPet, bool bStopAI)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SpawnFakePlayer");

	UGMCheatManager_SpawnFakePlayer_Params params;
	params.Num = Num;
	params.bWithPet = bWithPet;
	params.bStopAI = bStopAI;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::SpawnDecal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SpawnDecal");

	UGMCheatManager_SpawnDecal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SpawnBotForTest(int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SpawnBotForTest");

	UGMCheatManager_SpawnBotForTest_Params params;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void UGMCheatManager::SpawnAIAroundMe(int Num, float Range, bool HasWeapon, bool HasAvator, bool HasBackpack)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SpawnAIAroundMe");

	UGMCheatManager_SpawnAIAroundMe_Params params;
	params.Num = Num;
	params.Range = Range;
	params.HasWeapon = HasWeapon;
	params.HasAvator = HasAvator;
	params.HasBackpack = HasBackpack;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatManager::ShowScrollMsg(uint32_t MsgID, const struct FString& Param1, const struct FString& Param2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ShowScrollMsg");

	UGMCheatManager_ShowScrollMsg_Params params;
	params.MsgID = MsgID;
	params.Param1 = Param1;
	params.Param2 = Param2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::ShowPet(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ShowPet");

	UGMCheatManager_ShowPet_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UGMCheatManager::ShowOBMultiKillTips(const struct FString& PlayerName, int TeamID, int PlayerKillNum, int TeamKillNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ShowOBMultiKillTips");

	UGMCheatManager_ShowOBMultiKillTips_Params params;
	params.PlayerName = PlayerName;
	params.TeamID = TeamID;
	params.PlayerKillNum = PlayerKillNum;
	params.TeamKillNum = TeamKillNum;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::ShowHideGuide(int GuideID, bool bShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ShowHideGuide");

	UGMCheatManager_ShowHideGuide_Params params;
	params.GuideID = GuideID;
	params.bShow = bShow;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::ShowAllPlayersMarkIncludeAI(float VisDistance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ShowAllPlayersMarkIncludeAI");

	UGMCheatManager_ShowAllPlayersMarkIncludeAI_Params params;
	params.VisDistance = VisDistance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::ShowAKComponentPosition(bool _IsShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ShowAKComponentPosition");

	UGMCheatManager_ShowAKComponentPosition_Params params;
	params._IsShow = _IsShow;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SetWeatherPlaySpeed(float FSpeed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetWeatherPlaySpeed");

	UGMCheatManager_SetWeatherPlaySpeed_Params params;
	params.FSpeed = FSpeed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SetViewFPP(bool IsFPP)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetViewFPP");

	UGMCheatManager_SetViewFPP_Params params;
	params.IsFPP = IsFPP;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SetTouchMoveLog(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetTouchMoveLog");

	UGMCheatManager_SetTouchMoveLog_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SetTouchMoveDelay(int DelayFrame)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetTouchMoveDelay");

	UGMCheatManager_SetTouchMoveDelay_Params params;
	params.DelayFrame = DelayFrame;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SetSpringArm(unsigned char armFlag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetSpringArm");

	UGMCheatManager_SetSpringArm_Params params;
	params.armFlag = armFlag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SetSkillDup(int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetSkillDup");

	UGMCheatManager_SetSkillDup_Params params;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SetRateScore(float RankScore)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetRateScore");

	UGMCheatManager_SetRateScore_Params params;
	params.RankScore = RankScore;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SetNetSpeed(int NewSpeed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetNetSpeed");

	UGMCheatManager_SetNetSpeed_Params params;
	params.NewSpeed = NewSpeed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SetNeckUp(float UpAngle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetNeckUp");

	UGMCheatManager_SetNeckUp_Params params;
	params.UpAngle = UpAngle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SetNeckSpeed(float Speed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetNeckSpeed");

	UGMCheatManager_SetNeckSpeed_Params params;
	params.Speed = Speed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SetNeckRight(float RightAngle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetNeckRight");

	UGMCheatManager_SetNeckRight_Params params;
	params.RightAngle = RightAngle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SetNeckMax(float MaxAngle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetNeckMax");

	UGMCheatManager_SetNeckMax_Params params;
	params.MaxAngle = MaxAngle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SetNeckLeft(float LeftAngle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetNeckLeft");

	UGMCheatManager_SetNeckLeft_Params params;
	params.LeftAngle = LeftAngle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatManager::SetMonsterNumMultiple(int ChapterID, int LevelID, int DiffcultPerc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetMonsterNumMultiple");

	UGMCheatManager_SetMonsterNumMultiple_Params params;
	params.ChapterID = ChapterID;
	params.LevelID = LevelID;
	params.DiffcultPerc = DiffcultPerc;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SetMonsterNB(bool MonsterNB)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetMonsterNB");

	UGMCheatManager_SetMonsterNB_Params params;
	params.MonsterNB = MonsterNB;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SetMonsterHatred(float Hatred)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetMonsterHatred");

	UGMCheatManager_SetMonsterHatred_Params params;
	params.Hatred = Hatred;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::SetMaxFpsFromDevice()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetMaxFpsFromDevice");

	UGMCheatManager_SetMaxFpsFromDevice_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SetIsRender(bool IsRender)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetIsRender");

	UGMCheatManager_SetIsRender_Params params;
	params.IsRender = IsRender;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SetInactiveClearEnable(bool bNewActive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetInactiveClearEnable");

	UGMCheatManager_SetInactiveClearEnable_Params params;
	params.bNewActive = bNewActive;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SetHignPerformance(bool SetOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetHignPerformance");

	UGMCheatManager_SetHignPerformance_Params params;
	params.SetOpen = SetOpen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SetGVMemberID(int memberID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetGVMemberID");

	UGMCheatManager_SetGVMemberID_Params params;
	params.memberID = memberID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::SetFestivalAirDrop(bool bFestival, const struct FString& BoxMesh)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetFestivalAirDrop");

	UGMCheatManager_SetFestivalAirDrop_Params params;
	params.bFestival = bFestival;
	params.BoxMesh = BoxMesh;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SetFestivaGrenade(bool bFestival)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetFestivaGrenade");

	UGMCheatManager_SetFestivaGrenade_Params params;
	params.bFestival = bFestival;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::SetDynamicWeather(int WeatherType, int EventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetDynamicWeather");

	UGMCheatManager_SetDynamicWeather_Params params;
	params.WeatherType = WeatherType;
	params.EventType = EventType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::SetDsSwitch(int InKey, const struct FString& InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetDsSwitch");

	UGMCheatManager_SetDsSwitch_Params params;
	params.InKey = InKey;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::SetDeliver()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetDeliver");

	UGMCheatManager_SetDeliver_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::SetDearDeathReduce(int Index, float ReduceFactor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetDearDeathReduce");

	UGMCheatManager_SetDearDeathReduce_Params params;
	params.Index = Index;
	params.ReduceFactor = ReduceFactor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SetClearIslandEnable(bool bNewActive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetClearIslandEnable");

	UGMCheatManager_SetClearIslandEnable_Params params;
	params.bNewActive = bNewActive;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SetCameraLagEnable(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetCameraLagEnable");

	UGMCheatManager_SetCameraLagEnable_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SetCacheInputNum(int CacheNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetCacheInputNum");

	UGMCheatManager_SetCacheInputNum_Params params;
	params.CacheNum = CacheNum;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SetAnimEnable(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetAnimEnable");

	UGMCheatManager_SetAnimEnable_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SetAnimDebugInfo(bool debugAnimInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetAnimDebugInfo");

	UGMCheatManager_SetAnimDebugInfo_Params params;
	params.debugAnimInfo = debugAnimInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SetAnimDebugGroup(bool debugAnimGroup)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetAnimDebugGroup");

	UGMCheatManager_SetAnimDebugGroup_Params params;
	params.debugAnimGroup = debugAnimGroup;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::SetAllMonsterHp(int Hp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.SetAllMonsterHp");

	UGMCheatManager_SetAllMonsterHp_Params params;
	params.Hp = Hp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::ServerCMD(const struct FString& Cmd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ServerCMD");

	UGMCheatManager_ServerCMD_Params params;
	params.Cmd = Cmd;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::ResumeAllLevelSequenceActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ResumeAllLevelSequenceActors");

	UGMCheatManager_ResumeAllLevelSequenceActors_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::ReplayRecoverReconnect(const struct FString& IP, const struct FString& Port)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ReplayRecoverReconnect");

	UGMCheatManager_ReplayRecoverReconnect_Params params;
	params.IP = IP;
	params.Port = Port;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::ReplayRecoverGenerateDSCheckpoint(const struct FString& InReplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ReplayRecoverGenerateDSCheckpoint");

	UGMCheatManager_ReplayRecoverGenerateDSCheckpoint_Params params;
	params.InReplayName = InReplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::RenderTargetCompressTest(class UTexture* pTexture, const struct FVector& Posoffset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.RenderTargetCompressTest");

	UGMCheatManager_RenderTargetCompressTest_Params params;
	params.pTexture = pTexture;
	params.Posoffset = Posoffset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::RemoveTimeSwitch(int TimeID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.RemoveTimeSwitch");

	UGMCheatManager_RemoveTimeSwitch_Params params;
	params.TimeID = TimeID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::RefreshReconnectUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.RefreshReconnectUI");

	UGMCheatManager_RefreshReconnectUI_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}












void UGMCheatManager::PVESpawnMonsterByPos(int MonsterID, int Num, float Radius, float PosX, float PosY, float PosZ)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PVESpawnMonsterByPos");

	UGMCheatManager_PVESpawnMonsterByPos_Params params;
	params.MonsterID = MonsterID;
	params.Num = Num;
	params.Radius = Radius;
	params.PosX = PosX;
	params.PosY = PosY;
	params.PosZ = PosZ;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UGMCheatManager::PVESpawnMonsterByDistance(int MonsterID, int Num, float Radius, float FrontDist)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PVESpawnMonsterByDistance");

	UGMCheatManager_PVESpawnMonsterByDistance_Params params;
	params.MonsterID = MonsterID;
	params.Num = Num;
	params.Radius = Radius;
	params.FrontDist = FrontDist;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::PVESpawnMonster(int MonsterID, bool StopAI)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PVESpawnMonster");

	UGMCheatManager_PVESpawnMonster_Params params;
	params.MonsterID = MonsterID;
	params.StopAI = StopAI;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::PVESetTestMonster(class AActor* InMonster)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PVESetTestMonster");

	UGMCheatManager_PVESetTestMonster_Params params;
	params.InMonster = InMonster;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::PVEResetMonsterTable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PVEResetMonsterTable");

	UGMCheatManager_PVEResetMonsterTable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::PVEPrintMonsterCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PVEPrintMonsterCount");

	UGMCheatManager_PVEPrintMonsterCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::PVEPrintAllAnim(bool bPrintAll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PVEPrintAllAnim");

	UGMCheatManager_PVEPrintAllAnim_Params params;
	params.bPrintAll = bPrintAll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::PVEPlayerTriggerSkill(int SkillID, int EventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PVEPlayerTriggerSkill");

	UGMCheatManager_PVEPlayerTriggerSkill_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::PVEPlayerStopSkill(int SkillID, int StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PVEPlayerStopSkill");

	UGMCheatManager_PVEPlayerStopSkill_Params params;
	params.SkillID = SkillID;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::PVEMonsterTriggerSkill(int SkillID, int EventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PVEMonsterTriggerSkill");

	UGMCheatManager_PVEMonsterTriggerSkill_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::PVEMonsterStopSkill(int SkillID, int StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PVEMonsterStopSkill");

	UGMCheatManager_PVEMonsterStopSkill_Params params;
	params.SkillID = SkillID;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UGMCheatManager::PVEMonsterRemoveBuffByID(int BuffID, int LayerCount, int CauserSkillID, bool CauseByPlayer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PVEMonsterRemoveBuffByID");

	UGMCheatManager_PVEMonsterRemoveBuffByID_Params params;
	params.BuffID = BuffID;
	params.LayerCount = LayerCount;
	params.CauserSkillID = CauserSkillID;
	params.CauseByPlayer = CauseByPlayer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UGMCheatManager::PVEMonsterAddBuffByID(int BuffID, int LayerCount, int CauserSkillID, bool CauseByPlayer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PVEMonsterAddBuffByID");

	UGMCheatManager_PVEMonsterAddBuffByID_Params params;
	params.BuffID = BuffID;
	params.LayerCount = LayerCount;
	params.CauserSkillID = CauserSkillID;
	params.CauseByPlayer = CauseByPlayer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::PVECloseMonsterLimit(bool bCloseMonsterLimit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PVECloseMonsterLimit");

	UGMCheatManager_PVECloseMonsterLimit_Params params;
	params.bCloseMonsterLimit = bCloseMonsterLimit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::PVEClearTestMonster()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PVEClearTestMonster");

	UGMCheatManager_PVEClearTestMonster_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatManager::PrintScreenDebug(int Key, float TimeToDisplay, const struct FString& DebugMessage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PrintScreenDebug");

	UGMCheatManager_PrintScreenDebug_Params params;
	params.Key = Key;
	params.TimeToDisplay = TimeToDisplay;
	params.DebugMessage = DebugMessage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::PrintRegionObjectList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PrintRegionObjectList");

	UGMCheatManager_PrintRegionObjectList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::PrintPool()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PrintPool");

	UGMCheatManager_PrintPool_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::PrintHP()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PrintHP");

	UGMCheatManager_PrintHP_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::PrintAllAnim()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PrintAllAnim");

	UGMCheatManager_PrintAllAnim_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::PrintAllActorLocationByClassName(const struct FString& InClassName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PrintAllActorLocationByClassName");

	UGMCheatManager_PrintAllActorLocationByClassName_Params params;
	params.InClassName = InClassName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::PlayBornIslandSequence(bool bPlay)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PlayBornIslandSequence");

	UGMCheatManager_PlayBornIslandSequence_Params params;
	params.bPlay = bPlay;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::PauseAnim(bool bPause)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PauseAnim");

	UGMCheatManager_PauseAnim_Params params;
	params.bPause = bPause;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::PauseAllLevelSequenceActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PauseAllLevelSequenceActors");

	UGMCheatManager_PauseAllLevelSequenceActors_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::PacketSimulationLag(int InSimulationLag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.PacketSimulationLag");

	UGMCheatManager_PacketSimulationLag_Params params;
	params.InSimulationLag = InSimulationLag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::OpenHitTest()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.OpenHitTest");

	UGMCheatManager_OpenHitTest_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatManager::OpenFixationFreeFallVelocity(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.OpenFixationFreeFallVelocity");

	UGMCheatManager_OpenFixationFreeFallVelocity_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::OpenAllCharacterHitBodyCollison(float Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.OpenAllCharacterHitBodyCollison");

	UGMCheatManager_OpenAllCharacterHitBodyCollison_Params params;
	params.Time = Time;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::NotifyGameModeParamsChanged(int NewDuration)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.NotifyGameModeParamsChanged");

	UGMCheatManager_NotifyGameModeParamsChanged_Params params;
	params.NewDuration = NewDuration;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::NativeSimulateAction(int SimActionType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.NativeSimulateAction");

	UGMCheatManager_NativeSimulateAction_Params params;
	params.SimActionType = SimActionType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UGMCheatManager::MoveSnake(bool bEnable, float moveInternal, float ForwardRate, float RightRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.MoveSnake");

	UGMCheatManager_MoveSnake_Params params;
	params.bEnable = bEnable;
	params.moveInternal = moveInternal;
	params.ForwardRate = ForwardRate;
	params.RightRate = RightRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::ModifyVehicleSyncServerData(float MinCorrectionInterval, float AllowMaxDiatanceSqAtServer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ModifyVehicleSyncServerData");

	UGMCheatManager_ModifyVehicleSyncServerData_Params params;
	params.MinCorrectionInterval = MinCorrectionInterval;
	params.AllowMaxDiatanceSqAtServer = AllowMaxDiatanceSqAtServer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::ModifyVehicleSyncClientData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ModifyVehicleSyncClientData");

	UGMCheatManager_ModifyVehicleSyncClientData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::ModifyVehicleBuoyancy(float MeshDensity, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ModifyVehicleBuoyancy");

	UGMCheatManager_ModifyVehicleBuoyancy_Params params;
	params.MeshDensity = MeshDensity;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::MaxSimulationIterations(int V)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.MaxSimulationIterations");

	UGMCheatManager_MaxSimulationIterations_Params params;
	params.V = V;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::MarkAPMLevelFinish()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.MarkAPMLevelFinish");

	UGMCheatManager_MarkAPMLevelFinish_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::MainCityConnectToDS(const struct FString& IP, const struct FString& Port)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.MainCityConnectToDS");

	UGMCheatManager_MainCityConnectToDS_Params params;
	params.IP = IP;
	params.Port = Port;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::LogNetWorkParams()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.LogNetWorkParams");

	UGMCheatManager_LogNetWorkParams_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::LogicAreaTest(int AreaType, const struct FString& str)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.LogicAreaTest");

	UGMCheatManager_LogicAreaTest_Params params;
	params.AreaType = AreaType;
	params.str = str;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::LogAllBuffInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.LogAllBuffInfo");

	UGMCheatManager_LogAllBuffInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::LogAllActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.LogAllActors");

	UGMCheatManager_LogAllActors_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::LocalConnectToLobbySrv(const struct FString& URL)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.LocalConnectToLobbySrv");

	UGMCheatManager_LocalConnectToLobbySrv_Params params;
	params.URL = URL;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::KillAllPVEBot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.KillAllPVEBot");

	UGMCheatManager_KillAllPVEBot_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::KillAllPlayers()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.KillAllPlayers");

	UGMCheatManager_KillAllPlayers_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatManager::JankOpt_Spawn20AIBlockVolume(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.JankOpt_Spawn20AIBlockVolume");

	UGMCheatManager_JankOpt_Spawn20AIBlockVolume_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::ItemSpotLog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ItemSpotLog");

	UGMCheatManager_ItemSpotLog_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::InGameAndroidBack()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.InGameAndroidBack");

	UGMCheatManager_InGameAndroidBack_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::GotoSpectatingDirectly()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GotoSpectatingDirectly");

	UGMCheatManager_GotoSpectatingDirectly_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::GotoSpectating()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GotoSpectating");

	UGMCheatManager_GotoSpectating_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::GotoSpecificWeather(int WeatherIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GotoSpecificWeather");

	UGMCheatManager_GotoSpecificWeather_Params params;
	params.WeatherIdx = WeatherIdx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::GMWayPointEvent(int EventID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMWayPointEvent");

	UGMCheatManager_GMWayPointEvent_Params params;
	params.EventID = EventID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::GMUseGunCollision(bool bIsUse)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMUseGunCollision");

	UGMCheatManager_GMUseGunCollision_Params params;
	params.bIsUse = bIsUse;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::GMSuicideCurVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSuicideCurVehicle");

	UGMCheatManager_GMSuicideCurVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::GMSuicide()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSuicide");

	UGMCheatManager_GMSuicide_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::GMStopAI(bool bStop, uint32_t InPlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMStopAI");

	UGMCheatManager_GMStopAI_Params params;
	params.bStop = bStop;
	params.InPlayerKey = InPlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::GMSpawnSociallandSubVehicle01()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnSociallandSubVehicle01");

	UGMCheatManager_GMSpawnSociallandSubVehicle01_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


















void UGMCheatManager::GMSpawnSocialLandPlayerAIAroundPointWithAvatarList(uint32_t DataOffset, uint32_t AINum, float X, float Y, float Z, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet, bool bWithEqui, bool bWithWeapon, struct FString* AvatarList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnSocialLandPlayerAIAroundPointWithAvatarList");

	UGMCheatManager_GMSpawnSocialLandPlayerAIAroundPointWithAvatarList_Params params;
	params.DataOffset = DataOffset;
	params.AINum = AINum;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.fRadius = fRadius;
	params.bActiveAI = bActiveAI;
	params.IsAIInvincible = IsAIInvincible;
	params.bWithPet = bWithPet;
	params.bWithEqui = bWithEqui;
	params.bWithWeapon = bWithWeapon;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AvatarList != nullptr)
		*AvatarList = params.AvatarList;
}

















void UGMCheatManager::GMSpawnSocialLandPlayerAIAroundPoint(uint32_t DataOffset, uint32_t AINum, float X, float Y, float Z, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet, bool bWithEqui, bool bWithWeapon)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnSocialLandPlayerAIAroundPoint");

	UGMCheatManager_GMSpawnSocialLandPlayerAIAroundPoint_Params params;
	params.DataOffset = DataOffset;
	params.AINum = AINum;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.fRadius = fRadius;
	params.bActiveAI = bActiveAI;
	params.IsAIInvincible = IsAIInvincible;
	params.bWithPet = bWithPet;
	params.bWithEqui = bWithEqui;
	params.bWithWeapon = bWithWeapon;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}














void UGMCheatManager::GMSpawnSocialLandPlayerAIAroundMeWithAvatar(uint32_t AINum, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet, bool bWithEqui, bool bWithWeapon, struct FString* AvatarList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnSocialLandPlayerAIAroundMeWithAvatar");

	UGMCheatManager_GMSpawnSocialLandPlayerAIAroundMeWithAvatar_Params params;
	params.AINum = AINum;
	params.fRadius = fRadius;
	params.bActiveAI = bActiveAI;
	params.IsAIInvincible = IsAIInvincible;
	params.bWithPet = bWithPet;
	params.bWithEqui = bWithEqui;
	params.bWithWeapon = bWithWeapon;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AvatarList != nullptr)
		*AvatarList = params.AvatarList;
}













void UGMCheatManager::GMSpawnSocialLandPlayerAIAroundMe(uint32_t AINum, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet, bool bWithEqui, bool bWithWeapon)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnSocialLandPlayerAIAroundMe");

	UGMCheatManager_GMSpawnSocialLandPlayerAIAroundMe_Params params;
	params.AINum = AINum;
	params.fRadius = fRadius;
	params.bActiveAI = bActiveAI;
	params.IsAIInvincible = IsAIInvincible;
	params.bWithPet = bWithPet;
	params.bWithEqui = bWithEqui;
	params.bWithWeapon = bWithWeapon;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::GMSpawnSmartBearerTestPlane()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnSmartBearerTestPlane");

	UGMCheatManager_GMSpawnSmartBearerTestPlane_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}














void UGMCheatManager::GMSpawnSingleSocialLandPlayerAI(uint32_t DataOffset, float X, float Y, float Z, bool bActiveAI, bool IsAIInvincible, bool bWithPet, bool bWithEqui)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnSingleSocialLandPlayerAI");

	UGMCheatManager_GMSpawnSingleSocialLandPlayerAI_Params params;
	params.DataOffset = DataOffset;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.bActiveAI = bActiveAI;
	params.IsAIInvincible = IsAIInvincible;
	params.bWithPet = bWithPet;
	params.bWithEqui = bWithEqui;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}














void UGMCheatManager::GMSpawnPlayerAIAroundPointDownloadable(uint32_t iNum, float X, float Y, float Z, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnPlayerAIAroundPointDownloadable");

	UGMCheatManager_GMSpawnPlayerAIAroundPointDownloadable_Params params;
	params.iNum = iNum;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.fRadius = fRadius;
	params.bActiveAI = bActiveAI;
	params.IsAIInvincible = IsAIInvincible;
	params.bWithPet = bWithPet;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}














void UGMCheatManager::GMSpawnPlayerAIAroundPoint(uint32_t iNum, float X, float Y, float Z, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnPlayerAIAroundPoint");

	UGMCheatManager_GMSpawnPlayerAIAroundPoint_Params params;
	params.iNum = iNum;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.fRadius = fRadius;
	params.bActiveAI = bActiveAI;
	params.IsAIInvincible = IsAIInvincible;
	params.bWithPet = bWithPet;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void UGMCheatManager::GMSpawnPlayerAIAroundMeDownloadable(uint32_t iNum, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnPlayerAIAroundMeDownloadable");

	UGMCheatManager_GMSpawnPlayerAIAroundMeDownloadable_Params params;
	params.iNum = iNum;
	params.fRadius = fRadius;
	params.bActiveAI = bActiveAI;
	params.IsAIInvincible = IsAIInvincible;
	params.bWithPet = bWithPet;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void UGMCheatManager::GMSpawnPlayerAIAroundMe(uint32_t iNum, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnPlayerAIAroundMe");

	UGMCheatManager_GMSpawnPlayerAIAroundMe_Params params;
	params.iNum = iNum;
	params.fRadius = fRadius;
	params.bActiveAI = bActiveAI;
	params.IsAIInvincible = IsAIInvincible;
	params.bWithPet = bWithPet;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UGMCheatManager::GMSpawnPickup(int SpawnNum, int PickupTypes, int Direction, float SpawnDistance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnPickup");

	UGMCheatManager_GMSpawnPickup_Params params;
	params.SpawnNum = SpawnNum;
	params.PickupTypes = PickupTypes;
	params.Direction = Direction;
	params.SpawnDistance = SpawnDistance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void UGMCheatManager::GMSpawnParticle(const struct FString& AssetPath, float X, float Y, float Z, float Scale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnParticle");

	UGMCheatManager_GMSpawnParticle_Params params;
	params.AssetPath = AssetPath;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.Scale = Scale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::GMSpawnAutoTestAI(int NameExtraID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnAutoTestAI");

	UGMCheatManager_GMSpawnAutoTestAI_Params params;
	params.NameExtraID = NameExtraID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}



















class AActor* UGMCheatManager::GMSpawnAIWithIDAndLoc(int AIID, float SpawnLocX, float SpawnLocY, float SpawnLocZ, float Radius, int TeamID, int ItemID1, int ItemNum1, int ItemID2, int ItemNum2, int ItemID3, int ItemNum3)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnAIWithIDAndLoc");

	UGMCheatManager_GMSpawnAIWithIDAndLoc_Params params;
	params.AIID = AIID;
	params.SpawnLocX = SpawnLocX;
	params.SpawnLocY = SpawnLocY;
	params.SpawnLocZ = SpawnLocZ;
	params.Radius = Radius;
	params.TeamID = TeamID;
	params.ItemID1 = ItemID1;
	params.ItemNum1 = ItemNum1;
	params.ItemID2 = ItemID2;
	params.ItemNum2 = ItemNum2;
	params.ItemID3 = ItemID3;
	params.ItemNum3 = ItemNum3;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UGMCheatManager::GMSpawnAIOnAIPoint3()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnAIOnAIPoint3");

	UGMCheatManager_GMSpawnAIOnAIPoint3_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::GMSpawnAIOnAIPoint2()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnAIOnAIPoint2");

	UGMCheatManager_GMSpawnAIOnAIPoint2_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::GMSpawnAIOnAIPoint1()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSpawnAIOnAIPoint1");

	UGMCheatManager_GMSpawnAIOnAIPoint1_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatManager::GMSocialSetRotation(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSocialSetRotation");

	UGMCheatManager_GMSocialSetRotation_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::GMSociallandPlayerMoveToTestPoint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSociallandPlayerMoveToTestPoint");

	UGMCheatManager_GMSociallandPlayerMoveToTestPoint_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::GMSociallandPlayerMoveToAISpawnPoint1()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSociallandPlayerMoveToAISpawnPoint1");

	UGMCheatManager_GMSociallandPlayerMoveToAISpawnPoint1_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::GMSociallandChangeItemFromStr(const struct FString& ItemString, const struct FString& EquimentItemString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSociallandChangeItemFromStr");

	UGMCheatManager_GMSociallandChangeItemFromStr_Params params;
	params.ItemString = ItemString;
	params.EquimentItemString = EquimentItemString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::GMShowHitFeedback(bool bCombatHitFeedbackEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMShowHitFeedback");

	UGMCheatManager_GMShowHitFeedback_Params params;
	params.bCombatHitFeedbackEnable = bCombatHitFeedbackEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::GMSetSpeed(float WalkSpeed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSetSpeed");

	UGMCheatManager_GMSetSpeed_Params params;
	params.WalkSpeed = WalkSpeed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::GMSetServerLevelLoadingMode(bool bNewLoadAll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSetServerLevelLoadingMode");

	UGMCheatManager_GMSetServerLevelLoadingMode_Params params;
	params.bNewLoadAll = bNewLoadAll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::GMSetPawnNull(bool bIsNull)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSetPawnNull");

	UGMCheatManager_GMSetPawnNull_Params params;
	params.bIsNull = bIsNull;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::GMSetMLAIModifyDamage(int InIsModify)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSetMLAIModifyDamage");

	UGMCheatManager_GMSetMLAIModifyDamage_Params params;
	params.InIsModify = InIsModify;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::GMSetMaxAINum(int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSetMaxAINum");

	UGMCheatManager_GMSetMaxAINum_Params params;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::GMSetJoystickEightDirection(bool IsNeedEightDirection)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSetJoystickEightDirection");

	UGMCheatManager_GMSetJoystickEightDirection_Params params;
	params.IsNeedEightDirection = IsNeedEightDirection;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::GMSetJoystickActivatedRange(bool IsNeedActivatedRange, float ActivatedRange)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSetJoystickActivatedRange");

	UGMCheatManager_GMSetJoystickActivatedRange_Params params;
	params.IsNeedActivatedRange = IsNeedActivatedRange;
	params.ActivatedRange = ActivatedRange;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::GMSetHealth(float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSetHealth");

	UGMCheatManager_GMSetHealth_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::GMSetDeliveryToMLAI(int InIsDeliveryToMLAI)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSetDeliveryToMLAI");

	UGMCheatManager_GMSetDeliveryToMLAI_Params params;
	params.InIsDeliveryToMLAI = InIsDeliveryToMLAI;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::GMSetCullDistance(bool bCullDistance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSetCullDistance");

	UGMCheatManager_GMSetCullDistance_Params params;
	params.bCullDistance = bCullDistance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::GMSetCircleTime(float cdTime, float LastTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSetCircleTime");

	UGMCheatManager_GMSetCircleTime_Params params;
	params.cdTime = cdTime;
	params.LastTime = LastTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::GMSetCharacterNetCullDistance(float DistanceMeters, bool bApplyToExistingCharacters)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSetCharacterNetCullDistance");

	UGMCheatManager_GMSetCharacterNetCullDistance_Params params;
	params.DistanceMeters = DistanceMeters;
	params.bApplyToExistingCharacters = bApplyToExistingCharacters;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::GMSelectorWayPoint(const struct FName& NameOfAIWayPointSelector, int GMPathIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMSelectorWayPoint");

	UGMCheatManager_GMSelectorWayPoint_Params params;
	params.NameOfAIWayPointSelector = NameOfAIWayPointSelector;
	params.GMPathIndex = GMPathIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::GMRevivePlayer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMRevivePlayer");

	UGMCheatManager_GMRevivePlayer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::GMRainCount(float Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMRainCount");

	UGMCheatManager_GMRainCount_Params params;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::GMIOSFrameRateLock(int FrameRateLock)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMIOSFrameRateLock");

	UGMCheatManager_GMIOSFrameRateLock_Params params;
	params.FrameRateLock = FrameRateLock;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::GMInvincible(bool bInvincible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMInvincible");

	UGMCheatManager_GMInvincible_Params params;
	params.bInvincible = bInvincible;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::GMIncreaseHealth()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMIncreaseHealth");

	UGMCheatManager_GMIncreaseHealth_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UGMCheatManager::GMGatherAllPlayerAIAroundMe(float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMGatherAllPlayerAIAroundMe");

	UGMCheatManager_GMGatherAllPlayerAIAroundMe_Params params;
	params.fRadius = fRadius;
	params.bActiveAI = bActiveAI;
	params.IsAIInvincible = IsAIInvincible;
	params.bWithPet = bWithPet;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::GMForceSuicide()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMForceSuicide");

	UGMCheatManager_GMForceSuicide_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::GMForceNullNetwork(int bForce)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMForceNullNetwork");

	UGMCheatManager_GMForceNullNetwork_Params params;
	params.bForce = bForce;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}













void UGMCheatManager::GMDrawLine(float X1, float Y1, float Z1, float X2, float Y2, float Z2, float LifeTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMDrawLine");

	UGMCheatManager_GMDrawLine_Params params;
	params.X1 = X1;
	params.Y1 = Y1;
	params.Z1 = Z1;
	params.X2 = X2;
	params.Y2 = Y2;
	params.Z2 = Z2;
	params.LifeTime = LifeTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}














void UGMCheatManager::GMDrawDirLine(float StartX, float StartY, float StartZ, float DirX, float DirY, float DirZ, float Length, float LifeTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMDrawDirLine");

	UGMCheatManager_GMDrawDirLine_Params params;
	params.StartX = StartX;
	params.StartY = StartY;
	params.StartZ = StartZ;
	params.DirX = DirX;
	params.DirY = DirY;
	params.DirZ = DirZ;
	params.Length = Length;
	params.LifeTime = LifeTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}












void UGMCheatManager::GMDrawDebugSphere2(float X, float Y, float Z, float Radius, int Segments, float LifeTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMDrawDebugSphere2");

	UGMCheatManager_GMDrawDebugSphere2_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.Radius = Radius;
	params.Segments = Segments;
	params.LifeTime = LifeTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatManager::GMDrawDebugSphere(float Radius, int Segments, float LifeTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMDrawDebugSphere");

	UGMCheatManager_GMDrawDebugSphere_Params params;
	params.Radius = Radius;
	params.Segments = Segments;
	params.LifeTime = LifeTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatManager::GMDrawCone(float Degrees, float LifeTime, int LineNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMDrawCone");

	UGMCheatManager_GMDrawCone_Params params;
	params.Degrees = Degrees;
	params.LifeTime = LifeTime;
	params.LineNum = LineNum;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::GMDecreaseHealth()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMDecreaseHealth");

	UGMCheatManager_GMDecreaseHealth_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::GMChangeAIAype(int Type, uint32_t InPlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMChangeAIAype");

	UGMCheatManager_GMChangeAIAype_Params params;
	params.Type = Type;
	params.InPlayerKey = InPlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatManager::GMAutoTestChangeItem(uint32_t PlayerKey, const struct FString& ItemString, const struct FString& EquimentItemString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMAutoTestChangeItem");

	UGMCheatManager_GMAutoTestChangeItem_Params params;
	params.PlayerKey = PlayerKey;
	params.ItemString = ItemString;
	params.EquimentItemString = EquimentItemString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::GMAIFire()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMAIFire");

	UGMCheatManager_GMAIFire_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatManager::GMAddItemForAI(int ItemId, int Count, uint32_t InPlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMAddItemForAI");

	UGMCheatManager_GMAddItemForAI_Params params;
	params.ItemId = ItemId;
	params.Count = Count;
	params.InPlayerKey = InPlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::GMActiveRenderDynamicStyle(bool bSet, int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMActiveRenderDynamicStyle");

	UGMCheatManager_GMActiveRenderDynamicStyle_Params params;
	params.bSet = bSet;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::GMActiveAI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GMActiveAI");

	UGMCheatManager_GMActiveAI_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::GetObjectRef(uint64_t ObjectAddr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GetObjectRef");

	UGMCheatManager_GetObjectRef_Params params;
	params.ObjectAddr = ObjectAddr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::GetGVMemberID(int memberID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GetGVMemberID");

	UGMCheatManager_GetGVMemberID_Params params;
	params.memberID = memberID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::GetGold()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GetGold");

	UGMCheatManager_GetGold_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatManager::GenerateMonsterWave(int ChapterID, int LevelID, int WaveID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.GenerateMonsterWave");

	UGMCheatManager_GenerateMonsterWave_Params params;
	params.ChapterID = ChapterID;
	params.LevelID = LevelID;
	params.WaveID = WaveID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::ForceStopDynamicWeatherChange()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ForceStopDynamicWeatherChange");

	UGMCheatManager_ForceStopDynamicWeatherChange_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::ForceStartNextDynamicWeatherChange()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ForceStartNextDynamicWeatherChange");

	UGMCheatManager_ForceStartNextDynamicWeatherChange_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::ForceKickoutAllPlayers(int LandId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ForceKickoutAllPlayers");

	UGMCheatManager_ForceKickoutAllPlayers_Params params;
	params.LandId = LandId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::ForceGC()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ForceGC");

	UGMCheatManager_ForceGC_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::ForceEndInputForAppWillDeactivate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ForceEndInputForAppWillDeactivate");

	UGMCheatManager_ForceEndInputForAppWillDeactivate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::FireSpawnAirplane()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.FireSpawnAirplane");

	UGMCheatManager_FireSpawnAirplane_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::FireReviveTeammate(int RespawnStartID, bool bJump)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.FireReviveTeammate");

	UGMCheatManager_FireReviveTeammate_Params params;
	params.RespawnStartID = RespawnStartID;
	params.bJump = bJump;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::FallKill(int FallType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.FallKill");

	UGMCheatManager_FallKill_Params params;
	params.FallType = FallType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::EquipHelmetAndBodyArmor(int Lev)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.EquipHelmetAndBodyArmor");

	UGMCheatManager_EquipHelmetAndBodyArmor_Params params;
	params.Lev = Lev;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::EnterPVELevel(int ChapterID, int LevelID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.EnterPVELevel");

	UGMCheatManager_EnterPVELevel_Params params;
	params.ChapterID = ChapterID;
	params.LevelID = LevelID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::EnterPawnState(EPawnState InState, bool IsEnter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.EnterPawnState");

	UGMCheatManager_EnterPawnState_Params params;
	params.InState = InState;
	params.IsEnter = IsEnter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::EndAPMTag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.EndAPMTag");

	UGMCheatManager_EndAPMTag_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::EnablePool(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.EnablePool");

	UGMCheatManager_EnablePool_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::EnableHitBox(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.EnableHitBox");

	UGMCheatManager_EnableHitBox_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::EnableFuzzyInformation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.EnableFuzzyInformation");

	UGMCheatManager_EnableFuzzyInformation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::EnableDSAnim(const struct FString& MonsterName, bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.EnableDSAnim");

	UGMCheatManager_EnableDSAnim_Params params;
	params.MonsterName = MonsterName;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::DumpSmartBearerManager()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DumpSmartBearerManager");

	UGMCheatManager_DumpSmartBearerManager_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::DumpPlayerStart()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DumpPlayerStart");

	UGMCheatManager_DumpPlayerStart_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::DumpObjectNetProperties(class UObject* InObj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DumpObjectNetProperties");

	UGMCheatManager_DumpObjectNetProperties_Params params;
	params.InObj = InObj;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::DumpMoveLog(bool bDump)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DumpMoveLog");

	UGMCheatManager_DumpMoveLog_Params params;
	params.bDump = bDump;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::DumpLevels()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DumpLevels");

	UGMCheatManager_DumpLevels_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::DumpLegacyObjectPoolInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DumpLegacyObjectPoolInfo");

	UGMCheatManager_DumpLegacyObjectPoolInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::DumpDSNetConsiderList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DumpDSNetConsiderList");

	UGMCheatManager_DumpDSNetConsiderList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::DumpCharacterRelevant()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DumpCharacterRelevant");

	UGMCheatManager_DumpCharacterRelevant_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::DumpAnimLayer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DumpAnimLayer");

	UGMCheatManager_DumpAnimLayer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::DumpAIOcclusion()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DumpAIOcclusion");

	UGMCheatManager_DumpAIOcclusion_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::DSReconnectEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DSReconnectEvent");

	UGMCheatManager_DSReconnectEvent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::DSConnectLostEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DSConnectLostEvent");

	UGMCheatManager_DSConnectLostEvent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::DismissIsland()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DismissIsland");

	UGMCheatManager_DismissIsland_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}












void UGMCheatManager::DetectUnderGround(float X1, float Y1, float Z1, float X2, float Y2, float Z2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DetectUnderGround");

	UGMCheatManager_DetectUnderGround_Params params;
	params.X1 = X1;
	params.Y1 = Y1;
	params.Z1 = Z1;
	params.X2 = X2;
	params.Y2 = Y2;
	params.Z2 = Z2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::DestroyVehicleWithPath(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DestroyVehicleWithPath");

	UGMCheatManager_DestroyVehicleWithPath_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::DebugUnderWaterEffect()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugUnderWaterEffect");

	UGMCheatManager_DebugUnderWaterEffect_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::DebugStopEMote(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugStopEMote");

	UGMCheatManager_DebugStopEMote_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::DebugStopCapture()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugStopCapture");

	UGMCheatManager_DebugStopCapture_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::DebugStartEMote(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugStartEMote");

	UGMCheatManager_DebugStartEMote_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::DebugSpringArm(bool bDebug)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugSpringArm");

	UGMCheatManager_DebugSpringArm_Params params;
	params.bDebug = bDebug;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::DebugSpeed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugSpeed");

	UGMCheatManager_DebugSpeed_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::DebugSetChangeWearCoolDownTime(float Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugSetChangeWearCoolDownTime");

	UGMCheatManager_DebugSetChangeWearCoolDownTime_Params params;
	params.Time = Time;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UGMCheatManager::DebugRoomCustomParams(int FirstCircleDelayTime, int FirstCircleAppearTime, int FirstWhiteCircleRadiusMultiplicator, int BlueCircleDamageMultiplicator)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugRoomCustomParams");

	UGMCheatManager_DebugRoomCustomParams_Params params;
	params.FirstCircleDelayTime = FirstCircleDelayTime;
	params.FirstCircleAppearTime = FirstCircleAppearTime;
	params.FirstWhiteCircleRadiusMultiplicator = FirstWhiteCircleRadiusMultiplicator;
	params.BlueCircleDamageMultiplicator = BlueCircleDamageMultiplicator;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::DebugPoseState(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugPoseState");

	UGMCheatManager_DebugPoseState_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::DebugMove()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugMove");

	UGMCheatManager_DebugMove_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::DebugLocation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugLocation");

	UGMCheatManager_DebugLocation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::DebugLevelsInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugLevelsInfo");

	UGMCheatManager_DebugLevelsInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::DebugFixedParams()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugFixedParams");

	UGMCheatManager_DebugFixedParams_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::DebugFindFloorResult()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugFindFloorResult");

	UGMCheatManager_DebugFindFloorResult_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::DebugCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugCamera");

	UGMCheatManager_DebugCamera_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::DebugAttach()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugAttach");

	UGMCheatManager_DebugAttach_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::DebugAnimList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.DebugAnimList");

	UGMCheatManager_DebugAnimList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::ClientSetSpeed(float Times, bool bGMSetSpeed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ClientSetSpeed");

	UGMCheatManager_ClientSetSpeed_Params params;
	params.Times = Times;
	params.bGMSetSpeed = bGMSetSpeed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::ClearTestMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ClearTestMesh");

	UGMCheatManager_ClearTestMesh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::ClearScreenDebug()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ClearScreenDebug");

	UGMCheatManager_ClearScreenDebug_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::ClearNoDriverVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ClearNoDriverVehicle");

	UGMCheatManager_ClearNoDriverVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::ClearAnimLayer(int AnimLayer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ClearAnimLayer");

	UGMCheatManager_ClearAnimLayer_Params params;
	params.AnimLayer = AnimLayer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::ClearAllTlog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ClearAllTlog");

	UGMCheatManager_ClearAllTlog_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::CheatBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.CheatBeginPlay");

	UGMCheatManager_CheatBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::ChatTest(struct FString* Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ChatTest");

	UGMCheatManager_ChatTest_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;
}





void UGMCheatManager::ChangeViewTarget()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ChangeViewTarget");

	UGMCheatManager_ChangeViewTarget_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::ChangeMonsterWalkMode(int Mode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ChangeMonsterWalkMode");

	UGMCheatManager_ChangeMonsterWalkMode_Params params;
	params.Mode = Mode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void UGMCheatManager::ChangeAllTimeDuration(int NewEndStateTime, int NewStartShowLifeTime, int NewMinimumAliveTime, int NewMinimumPlayerNum, int NewSpecialLifeTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ChangeAllTimeDuration");

	UGMCheatManager_ChangeAllTimeDuration_Params params;
	params.NewEndStateTime = NewEndStateTime;
	params.NewStartShowLifeTime = NewStartShowLifeTime;
	params.NewMinimumAliveTime = NewMinimumAliveTime;
	params.NewMinimumPlayerNum = NewMinimumPlayerNum;
	params.NewSpecialLifeTime = NewSpecialLifeTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::ChangeAIDamageRate(float InRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ChangeAIDamageRate");

	UGMCheatManager_ChangeAIDamageRate_Params params;
	params.InRate = InRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::ChangeAIAttackPlayerDamageRate(float InRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ChangeAIAttackPlayerDamageRate");

	UGMCheatManager_ChangeAIAttackPlayerDamageRate_Params params;
	params.InRate = InRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::CastUIMsg(const struct FString& Msg, const struct FString& module)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.CastUIMsg");

	UGMCheatManager_CastUIMsg_Params params;
	params.Msg = Msg;
	params.module = module;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::CallOnReconnect()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.CallOnReconnect");

	UGMCheatManager_CallOnReconnect_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::CallLuaTableFunction(const struct FString& tableName, const struct FString& FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.CallLuaTableFunction");

	UGMCheatManager_CallLuaTableFunction_Params params;
	params.tableName = tableName;
	params.FunctionName = FunctionName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::CallGMLua(const struct FString& FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.CallGMLua");

	UGMCheatManager_CallGMLua_Params params;
	params.FunctionName = FunctionName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::CallGameModeLuaOverrideFunction(struct FString* FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.CallGameModeLuaOverrideFunction");

	UGMCheatManager_CallGameModeLuaOverrideFunction_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FunctionName != nullptr)
		*FunctionName = params.FunctionName;
}







void UGMCheatManager::CallGameModeLuaFunction(struct FString* FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.CallGameModeLuaFunction");

	UGMCheatManager_CallGameModeLuaFunction_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FunctionName != nullptr)
		*FunctionName = params.FunctionName;
}







void UGMCheatManager::BuildingCollide(bool InCollide)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.BuildingCollide");

	UGMCheatManager_BuildingCollide_Params params;
	params.InCollide = InCollide;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatManager::AutoShoveling(bool bEnable, float AutoShvelingSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AutoShoveling");

	UGMCheatManager_AutoShoveling_Params params;
	params.bEnable = bEnable;
	params.AutoShvelingSeconds = AutoShvelingSeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::AutoSetPlayerLocation(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AutoSetPlayerLocation");

	UGMCheatManager_AutoSetPlayerLocation_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::AnimDebugUseSkipMapForDistanceFactor(bool bFlag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AnimDebugUseSkipMapForDistanceFactor");

	UGMCheatManager_AnimDebugUseSkipMapForDistanceFactor_Params params;
	params.bFlag = bFlag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::AnimDebugUseLodMap(bool bUseLodMap)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AnimDebugUseLodMap");

	UGMCheatManager_AnimDebugUseLodMap_Params params;
	params.bUseLodMap = bUseLodMap;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::AnimDebugUpdateFlag(int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AnimDebugUpdateFlag");

	UGMCheatManager_AnimDebugUpdateFlag_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::AnimDebugNonRenderedRate(int UpdateRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AnimDebugNonRenderedRate");

	UGMCheatManager_AnimDebugNonRenderedRate_Params params;
	params.UpdateRate = UpdateRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::AnimDebugNonRenderedMinDist(float minDist)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AnimDebugNonRenderedMinDist");

	UGMCheatManager_AnimDebugNonRenderedMinDist_Params params;
	params.minDist = minDist;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::AnimDebugNonRenderedMaxDist(float MaxDist)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AnimDebugNonRenderedMaxDist");

	UGMCheatManager_AnimDebugNonRenderedMaxDist_Params params;
	params.MaxDist = MaxDist;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::AnimDebugLodSkipMap(TMap<int, int> SkipMap)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AnimDebugLodSkipMap");

	UGMCheatManager_AnimDebugLodSkipMap_Params params;
	params.SkipMap = SkipMap;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::AnimDebugEnable(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AnimDebugEnable");

	UGMCheatManager_AnimDebugEnable_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::AnimDebugBaseDistFactor(TArray<float> BaseDistFactor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AnimDebugBaseDistFactor");

	UGMCheatManager_AnimDebugBaseDistFactor_Params params;
	params.BaseDistFactor = BaseDistFactor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UGMCheatManager::AirDropByClassPath(float X, float Y, float Z, const struct FString& ClassPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AirDropByClassPath");

	UGMCheatManager_AirDropByClassPath_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.ClassPath = ClassPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::AILog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AILog");

	UGMCheatManager_AILog_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void UGMCheatManager::AddWonderfulPeriod(int Type, float StartTime, float EndTime, int AdditionalData, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AddWonderfulPeriod");

	UGMCheatManager_AddWonderfulPeriod_Params params;
	params.Type = Type;
	params.StartTime = StartTime;
	params.EndTime = EndTime;
	params.AdditionalData = AdditionalData;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::AddTimeSwitch(int TimeID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AddTimeSwitch");

	UGMCheatManager_AddTimeSwitch_Params params;
	params.TimeID = TimeID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void UGMCheatManager::AddTestTouchInput(int FingerIndex, float X, float Y, float Force, bool bIsStart)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AddTestTouchInput");

	UGMCheatManager_AddTestTouchInput_Params params;
	params.FingerIndex = FingerIndex;
	params.X = X;
	params.Y = Y;
	params.Force = Force;
	params.bIsStart = bIsStart;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::AddScore(int Score)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AddScore");

	UGMCheatManager_AddScore_Params params;
	params.Score = Score;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatManager::AddAllTestRes()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.AddAllTestRes");

	UGMCheatManager_AddAllTestRes_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatManager::ActiveCurCamera(bool bActive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatManager.ActiveCurCamera");

	UGMCheatManager_ActiveCurCamera_Params params;
	params.bActive = bActive;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatMod::TriggerHunterRevival()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatMod.TriggerHunterRevival");

	UGMCheatMod_TriggerHunterRevival_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatMod::SetUAETriggerEnable(bool IsEnbale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatMod.SetUAETriggerEnable");

	UGMCheatMod_SetUAETriggerEnable_Params params;
	params.IsEnbale = IsEnbale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatMod::SetInfectResetPlayerInterTime(float InterTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatMod.SetInfectResetPlayerInterTime");

	UGMCheatMod_SetInfectResetPlayerInterTime_Params params;
	params.InterTime = InterTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatMod::OnBuyRevivalTeammate(int TeammateIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatMod.OnBuyRevivalTeammate");

	UGMCheatMod_OnBuyRevivalTeammate_Params params;
	params.TeammateIndex = TeammateIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatMod::OnBuyRevivalSign()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatMod.OnBuyRevivalSign");

	UGMCheatMod_OnBuyRevivalSign_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatMod::InfectionEndRound()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatMod.InfectionEndRound");

	UGMCheatMod_InfectionEndRound_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatMod::GetGameResult()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatMod.GetGameResult");

	UGMCheatMod_GetGameResult_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatMod::DebugEnableFerrisWheelTick(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatMod.DebugEnableFerrisWheelTick");

	UGMCheatMod_DebugEnableFerrisWheelTick_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatMod::ClearBossBornPoint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatMod.ClearBossBornPoint");

	UGMCheatMod_ClearBossBornPoint_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatMod::ChangePVELevel(int Lv)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatMod.ChangePVELevel");

	UGMCheatMod_ChangePVELevel_Params params;
	params.Lv = Lv;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatMod::CallZombieFlowAirDrop(int ZombieID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatMod.CallZombieFlowAirDrop");

	UGMCheatMod_CallZombieFlowAirDrop_Params params;
	params.ZombieID = ZombieID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatMod::CallZombieAirDrop(int ZombieID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatMod.CallZombieAirDrop");

	UGMCheatMod_CallZombieAirDrop_Params params;
	params.ZombieID = ZombieID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatMod::AddBossBornPoint(float BornX, float BornY)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatMod.AddBossBornPoint");

	UGMCheatMod_AddBossBornPoint_Params params;
	params.BornX = BornX;
	params.BornY = BornY;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatOther::UnLoadAllCollision(bool Unload)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.UnLoadAllCollision");

	UGMCheatOther_UnLoadAllCollision_Params params;
	params.Unload = Unload;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatOther::ShutDownBroadcastFatalDamage(bool IsOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.ShutDownBroadcastFatalDamage");

	UGMCheatOther_ShutDownBroadcastFatalDamage_Params params;
	params.IsOpen = IsOpen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatOther::ShowHideLandscapeComponent(bool bShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.ShowHideLandscapeComponent");

	UGMCheatOther_ShowHideLandscapeComponent_Params params;
	params.bShow = bShow;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatOther::SetSingleThreadUpdateAnim(bool InIsSingleThread)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.SetSingleThreadUpdateAnim");

	UGMCheatOther_SetSingleThreadUpdateAnim_Params params;
	params.InIsSingleThread = InIsSingleThread;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatOther::SetIsShowBlood(bool InIsShowBlood)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.SetIsShowBlood");

	UGMCheatOther_SetIsShowBlood_Params params;
	params.InIsShowBlood = InIsShowBlood;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatOther::RetrievePlayerBattleResultData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.RetrievePlayerBattleResultData");

	UGMCheatOther_RetrievePlayerBattleResultData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatOther::RemoveDSOptimGrayPublishFlags(int InFlagIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.RemoveDSOptimGrayPublishFlags");

	UGMCheatOther_RemoveDSOptimGrayPublishFlags_Params params;
	params.InFlagIndex = InFlagIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatOther::RecoverStatusAfterReconnecting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.RecoverStatusAfterReconnecting");

	UGMCheatOther_RecoverStatusAfterReconnecting_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatOther::ObserveWhoKilledMe()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.ObserveWhoKilledMe");

	UGMCheatOther_ObserveWhoKilledMe_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatOther::GMTestSpectateRPC()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.GMTestSpectateRPC");

	UGMCheatOther_GMTestSpectateRPC_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatOther::GMTestSpectateException(int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.GMTestSpectateException");

	UGMCheatOther_GMTestSpectateException_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatOther::GMTestExternalData(TArray<unsigned char> InData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.GMTestExternalData");

	UGMCheatOther_GMTestExternalData_Params params;
	params.InData = InData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatOther::GMTeleport(const struct FName& Teleporter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.GMTeleport");

	UGMCheatOther_GMTeleport_Params params;
	params.Teleporter = Teleporter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatOther::GMSetScalarParam(const struct FString& Name, const struct FString& ShaderName, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.GMSetScalarParam");

	UGMCheatOther_GMSetScalarParam_Params params;
	params.Name = Name;
	params.ShaderName = ShaderName;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatOther::GMSendDailyTaskReport()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.GMSendDailyTaskReport");

	UGMCheatOther_GMSendDailyTaskReport_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatOther::GMBroastSyncTaskInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.GMBroastSyncTaskInfo");

	UGMCheatOther_GMBroastSyncTaskInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatOther::EmptyLandscapeActor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.EmptyLandscapeActor");

	UGMCheatOther_EmptyLandscapeActor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatOther::DumpGUIDCache(int DriverIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.DumpGUIDCache");

	UGMCheatOther_DumpGUIDCache_Params params;
	params.DriverIndex = DriverIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatOther::DumpActiveObject()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.DumpActiveObject");

	UGMCheatOther_DumpActiveObject_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatOther::DebugEnableDrawSearchLine(int bEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.DebugEnableDrawSearchLine");

	UGMCheatOther_DebugEnableDrawSearchLine_Params params;
	params.bEnabled = bEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatOther::CanSeeAllUI(bool bUIVisibility)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.CanSeeAllUI");

	UGMCheatOther_CanSeeAllUI_Params params;
	params.bUIVisibility = bUIVisibility;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatOther::AutoSelectTeammateToView()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.AutoSelectTeammateToView");

	UGMCheatOther_AutoSelectTeammateToView_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatOther::AddDSOptimGrayPublishFlags(int InFlagIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatOther.AddDSOptimGrayPublishFlags");

	UGMCheatOther_AddDSOptimGrayPublishFlags_Params params;
	params.InFlagIndex = InFlagIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatSkill::TryDeleteOneSkill(int SkillID, bool bImmediately)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.TryDeleteOneSkill");

	UGMCheatSkill_TryDeleteOneSkill_Params params;
	params.SkillID = SkillID;
	params.bImmediately = bImmediately;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatSkill::TryAddOneSkill(int SkillID, bool bActive, int ButtonSlot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.TryAddOneSkill");

	UGMCheatSkill_TryAddOneSkill_Params params;
	params.SkillID = SkillID;
	params.bActive = bActive;
	params.ButtonSlot = ButtonSlot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatSkill::TriggerSkillWithID(int SkillID, bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.TriggerSkillWithID");

	UGMCheatSkill_TriggerSkillWithID_Params params;
	params.SkillID = SkillID;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatSkill::StartSkill(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.StartSkill");

	UGMCheatSkill_StartSkill_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatSkill::StartMainSkill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.StartMainSkill");

	UGMCheatSkill_StartMainSkill_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatSkill::SetSkillSkinID(int SkillID, int SkillSkinID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.SetSkillSkinID");

	UGMCheatSkill_SetSkillSkinID_Params params;
	params.SkillID = SkillID;
	params.SkillSkinID = SkillSkinID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatSkill::SetSkillLevel(int SkillID, int SkillLevel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.SetSkillLevel");

	UGMCheatSkill_SetSkillLevel_Params params;
	params.SkillID = SkillID;
	params.SkillLevel = SkillLevel;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatSkill::SetSkillCDTimeScale(int SkillID, float Scale, int ScaleType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.SetSkillCDTimeScale");

	UGMCheatSkill_SetSkillCDTimeScale_Params params;
	params.SkillID = SkillID;
	params.Scale = Scale;
	params.ScaleType = ScaleType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UGMCheatSkill::SetSkillCDIndexTimeScale(int SkillID, int SkillCDIndex, float Scale, int ScaleType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.SetSkillCDIndexTimeScale");

	UGMCheatSkill_SetSkillCDIndexTimeScale_Params params;
	params.SkillID = SkillID;
	params.SkillCDIndex = SkillCDIndex;
	params.Scale = Scale;
	params.ScaleType = ScaleType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatSkill::SetAllSkillCDTimeScale(float Scale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.SetAllSkillCDTimeScale");

	UGMCheatSkill_SetAllSkillCDTimeScale_Params params;
	params.Scale = Scale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatSkill::RemoveVehicleBuffBySkill(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.RemoveVehicleBuffBySkill");

	UGMCheatSkill_RemoveVehicleBuffBySkill_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatSkill::RemoveVehicleBuff(int BuffID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.RemoveVehicleBuff");

	UGMCheatSkill_RemoveVehicleBuff_Params params;
	params.BuffID = BuffID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatSkill::RemoveBuffBySkill(int SkillID, int IsPlayer, int LayerCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.RemoveBuffBySkill");

	UGMCheatSkill_RemoveBuffBySkill_Params params;
	params.SkillID = SkillID;
	params.IsPlayer = IsPlayer;
	params.LayerCount = LayerCount;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatSkill::RemoveBuff(int BuffID, int IsPlayer, int BuffLayer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.RemoveBuff");

	UGMCheatSkill_RemoveBuff_Params params;
	params.BuffID = BuffID;
	params.IsPlayer = IsPlayer;
	params.BuffLayer = BuffLayer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatSkill::ReloadPVETable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.ReloadPVETable");

	UGMCheatSkill_ReloadPVETable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatSkill::EnableSkillCD(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.EnableSkillCD");

	UGMCheatSkill_EnableSkillCD_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatSkill::DynamicRemoveSkill(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.DynamicRemoveSkill");

	UGMCheatSkill_DynamicRemoveSkill_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatSkill::DynamicAddSkill(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.DynamicAddSkill");

	UGMCheatSkill_DynamicAddSkill_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatSkill::DumpSkills()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.DumpSkills");

	UGMCheatSkill_DumpSkills_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatSkill::AddVehicleBuffBySkill(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.AddVehicleBuffBySkill");

	UGMCheatSkill_AddVehicleBuffBySkill_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatSkill::AddVehicleBuff(int BuffID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.AddVehicleBuff");

	UGMCheatSkill_AddVehicleBuff_Params params;
	params.BuffID = BuffID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatSkill::AddSkillToken(int SkillID, bool bAdd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.AddSkillToken");

	UGMCheatSkill_AddSkillToken_Params params;
	params.SkillID = SkillID;
	params.bAdd = bAdd;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatSkill::AddBuffBySkill(int SkillID, int IsPlayer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.AddBuffBySkill");

	UGMCheatSkill_AddBuffBySkill_Params params;
	params.SkillID = SkillID;
	params.IsPlayer = IsPlayer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatSkill::AddBuff(int BuffID, int IsPlayer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatSkill.AddBuff");

	UGMCheatSkill_AddBuff_Params params;
	params.BuffID = BuffID;
	params.IsPlayer = IsPlayer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatVehicle::VW_Seat(int change)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.VW_Seat");

	UGMCheatVehicle_VW_Seat_Params params;
	params.change = change;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatVehicle::VehicleResetTo(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.VehicleResetTo");

	UGMCheatVehicle_VehicleResetTo_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatVehicle::VehicleMoveTo(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.VehicleMoveTo");

	UGMCheatVehicle_VehicleMoveTo_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatVehicle::ToggleVehicleSync(bool Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.ToggleVehicleSync");

	UGMCheatVehicle_ToggleVehicleSync_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatVehicle::TeleportAndEnterVehicleWithPath(const struct FString& Path, int SeatID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.TeleportAndEnterVehicleWithPath");

	UGMCheatVehicle_TeleportAndEnterVehicleWithPath_Params params;
	params.Path = Path;
	params.SeatID = SeatID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void UGMCheatVehicle::SpawnVehicleWithPathAndLoc(const struct FString& Path, float X, float Y, float Z, int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.SpawnVehicleWithPathAndLoc");

	UGMCheatVehicle_SpawnVehicleWithPathAndLoc_Params params;
	params.Path = Path;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatVehicle::SpawnVehicleWithPath(const struct FString& Path, int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.SpawnVehicleWithPath");

	UGMCheatVehicle_SpawnVehicleWithPath_Params params;
	params.Path = Path;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatVehicle::SpawnVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.SpawnVehicle");

	UGMCheatVehicle_SpawnVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatVehicle::SpawnAllVehicle(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.SpawnAllVehicle");

	UGMCheatVehicle_SpawnAllVehicle_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatVehicle::SetSnowBoradRotationInAir(float Pitch, float Yaw, float Roll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.SetSnowBoradRotationInAir");

	UGMCheatVehicle_SetSnowBoradRotationInAir_Params params;
	params.Pitch = Pitch;
	params.Yaw = Yaw;
	params.Roll = Roll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatVehicle::SetFuelByPercent(float percent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.SetFuelByPercent");

	UGMCheatVehicle_SetFuelByPercent_Params params;
	params.percent = percent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatVehicle::ResetVehicleEngine()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.ResetVehicleEngine");

	UGMCheatVehicle_ResetVehicleEngine_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatVehicle::ReqLeaveVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.ReqLeaveVehicle");

	UGMCheatVehicle_ReqLeaveVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatVehicle::ReqExchangeVehicleCharacter(int Param)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.ReqExchangeVehicleCharacter");

	UGMCheatVehicle_ReqExchangeVehicleCharacter_Params params;
	params.Param = Param;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatVehicle::ReqEnterVehicle(float dis)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.ReqEnterVehicle");

	UGMCheatVehicle_ReqEnterVehicle_Params params;
	params.dis = dis;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatVehicle::ReqEnterSnowBoard()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.ReqEnterSnowBoard");

	UGMCheatVehicle_ReqEnterSnowBoard_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatVehicle::ReplaceVehicleWithPath(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.ReplaceVehicleWithPath");

	UGMCheatVehicle_ReplaceVehicleWithPath_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatVehicle::ReplaceVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.ReplaceVehicle");

	UGMCheatVehicle_ReplaceVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatVehicle::MakeVehicleFly(int IsFly, bool bIsUp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.MakeVehicleFly");

	UGMCheatVehicle_MakeVehicleFly_Params params;
	params.IsFly = IsFly;
	params.bIsUp = bIsUp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatVehicle::KillAllEnermyVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatVehicle.KillAllEnermyVehicle");

	UGMCheatVehicle_KillAllEnermyVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatWeapon::ToggleShootVertify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.ToggleShootVertify");

	UGMCheatWeapon_ToggleShootVertify_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatWeapon::ShowWeaponDirection(int Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.ShowWeaponDirection");

	UGMCheatWeapon_ShowWeaponDirection_Params params;
	params.Time = Time;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatWeapon::ShowBulletInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.ShowBulletInfo");

	UGMCheatWeapon_ShowBulletInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatWeapon::SetWeaponAttrValue(const struct FString& AttrName, float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.SetWeaponAttrValue");

	UGMCheatWeapon_SetWeaponAttrValue_Params params;
	params.AttrName = AttrName;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatWeapon::SetWeaponAttrReloadTable(const struct FString& tableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.SetWeaponAttrReloadTable");

	UGMCheatWeapon_SetWeaponAttrReloadTable_Params params;
	params.tableName = tableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatWeapon::SetShootPveVertify(bool IsVertify)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.SetShootPveVertify");

	UGMCheatWeapon_SetShootPveVertify_Params params;
	params.IsVertify = IsVertify;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatWeapon::SetShootPveDebug(bool DebugShootPve)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.SetShootPveDebug");

	UGMCheatWeapon_SetShootPveDebug_Params params;
	params.DebugShootPve = DebugShootPve;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatWeapon::SetBaseImpactDamageEntity(float Damage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.SetBaseImpactDamageEntity");

	UGMCheatWeapon_SetBaseImpactDamageEntity_Params params;
	params.Damage = Damage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatWeapon::ScopeOut()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.ScopeOut");

	UGMCheatWeapon_ScopeOut_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatWeapon::ScopeIn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.ScopeIn");

	UGMCheatWeapon_ScopeIn_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatWeapon::PrintWeaponAllState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.PrintWeaponAllState");

	UGMCheatWeapon_PrintWeaponAllState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatWeapon::GMSwitchWeaponSpeedScale(float SwitchScale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.GMSwitchWeaponSpeedScale");

	UGMCheatWeapon_GMSwitchWeaponSpeedScale_Params params;
	params.SwitchScale = SwitchScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatWeapon::GMSetReportWeaponNum(int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.GMSetReportWeaponNum");

	UGMCheatWeapon_GMSetReportWeaponNum_Params params;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatWeapon::EnableCurrentWeaponInfiniteBullets(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.EnableCurrentWeaponInfiniteBullets");

	UGMCheatWeapon_EnableCurrentWeaponInfiniteBullets_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatWeapon::DrawDebugWeaponCrossHair()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.DrawDebugWeaponCrossHair");

	UGMCheatWeapon_DrawDebugWeaponCrossHair_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatWeapon::DestroyMyWeapons()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.DestroyMyWeapons");

	UGMCheatWeapon_DestroyMyWeapons_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatWeapon::DebugEnableBulletImpact(int bEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.DebugEnableBulletImpact");

	UGMCheatWeapon_DebugEnableBulletImpact_Params params;
	params.bEnabled = bEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatWeapon::CreateAutoShootTimer(float Interval)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.CreateAutoShootTimer");

	UGMCheatWeapon_CreateAutoShootTimer_Params params;
	params.Interval = Interval;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatWeapon::CollectAllPlayerWeaponPosInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.CollectAllPlayerWeaponPosInfo");

	UGMCheatWeapon_CollectAllPlayerWeaponPosInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatWeapon::ChangeWeaponFunction(int NewWeaponFunction)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.ChangeWeaponFunction");

	UGMCheatWeapon_ChangeWeaponFunction_Params params;
	params.NewWeaponFunction = NewWeaponFunction;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UGMCheatWeapon::ChangeShootWeaponStrValue(const struct FString& StrName, const struct FString& KeyName, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.ChangeShootWeaponStrValue");

	UGMCheatWeapon_ChangeShootWeaponStrValue_Params params;
	params.StrName = StrName;
	params.KeyName = KeyName;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGMCheatWeapon::AutoShootNearestEnemy(float Interval, float Duration)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.AutoShootNearestEnemy");

	UGMCheatWeapon_AutoShootNearestEnemy_Params params;
	params.Interval = Interval;
	params.Duration = Duration;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGMCheatWeapon::AutoShoot(float Interval)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.AutoShoot");

	UGMCheatWeapon_AutoShoot_Params params;
	params.Interval = Interval;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGMCheatWeapon::AimForAutoShoot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.GMCheatWeapon.AimForAutoShoot");

	UGMCheatWeapon_AimForAutoShoot_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AImGuiWindowBase::ToggleWindow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowBase.ToggleWindow");

	AImGuiWindowBase_ToggleWindow_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AImGuiWindowBase::ToggleDisplayMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowBase.ToggleDisplayMode");

	AImGuiWindowBase_ToggleDisplayMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AImGuiWindowBase::ShowWindowWithTabs(TArray<class UClass*> TabClasses)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowBase.ShowWindowWithTabs");

	AImGuiWindowBase_ShowWindowWithTabs_Params params;
	params.TabClasses = TabClasses;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AImGuiWindowBase::ShowWindow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowBase.ShowWindow");

	AImGuiWindowBase_ShowWindow_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AImGuiWindowBase::SetWindowAlpha(float Alpha)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowBase.SetWindowAlpha");

	AImGuiWindowBase_SetWindowAlpha_Params params;
	params.Alpha = Alpha;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AImGuiWindowBase::SetDisplayMode(EImGuiWindowDisplayMode NewMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowBase.SetDisplayMode");

	AImGuiWindowBase_SetDisplayMode_Params params;
	params.NewMode = NewMode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AImGuiWindowBase::RemoveTab(const struct FName& TabID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowBase.RemoveTab");

	AImGuiWindowBase_RemoveTab_Params params;
	params.TabID = TabID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AImGuiWindowBase::RemoveFeature(const struct FName& FeatureID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowBase.RemoveFeature");

	AImGuiWindowBase_RemoveFeature_Params params;
	params.FeatureID = FeatureID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool AImGuiWindowBase::IsWindowVisible()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowBase.IsWindowVisible");

	AImGuiWindowBase_IsWindowVisible_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void AImGuiWindowBase::HideWindow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowBase.HideWindow");

	AImGuiWindowBase_HideWindow_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







float AImGuiWindowBase::GetWindowAlpha()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowBase.GetWindowAlpha");

	AImGuiWindowBase_GetWindowAlpha_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UImGuiTabBase* AImGuiWindowBase::GetTabByID(const struct FName& TabID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowBase.GetTabByID");

	AImGuiWindowBase_GetTabByID_Params params;
	params.TabID = TabID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UImGuiFeatureWidget* AImGuiWindowBase::GetFeatureByID(const struct FName& FeatureID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowBase.GetFeatureByID");

	AImGuiWindowBase_GetFeatureByID_Params params;
	params.FeatureID = FeatureID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







EImGuiWindowDisplayMode AImGuiWindowBase::GetDisplayMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowBase.GetDisplayMode");

	AImGuiWindowBase_GetDisplayMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<class UImGuiTabBase*> AImGuiWindowBase::GetAllTabs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowBase.GetAllTabs");

	AImGuiWindowBase_GetAllTabs_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<class UImGuiFeatureWidget*> AImGuiWindowBase::GetAllFeatures()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowBase.GetAllFeatures");

	AImGuiWindowBase_GetAllFeatures_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UImGuiTabBase* AImGuiWindowBase::GetActiveTab()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowBase.GetActiveTab");

	AImGuiWindowBase_GetActiveTab_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class UImGuiTabBase* AImGuiWindowBase::AddTabWithLuaPath(class UClass* TabClass, const struct FString& InLuaFilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowBase.AddTabWithLuaPath");

	AImGuiWindowBase_AddTabWithLuaPath_Params params;
	params.TabClass = TabClass;
	params.InLuaFilePath = InLuaFilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void AImGuiWindowBase::AddTabInstance(class UImGuiTabBase* Tab, const struct FString& InLuaFilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowBase.AddTabInstance");

	AImGuiWindowBase_AddTabInstance_Params params;
	params.Tab = Tab;
	params.InLuaFilePath = InLuaFilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class UImGuiTabBase* AImGuiWindowBase::AddTab(class UClass* TabClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowBase.AddTab");

	AImGuiWindowBase_AddTab_Params params;
	params.TabClass = TabClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UImGuiTabBase* AImGuiWindowBase::AddLuaTab(const struct FString& InLuaFilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowBase.AddLuaTab");

	AImGuiWindowBase_AddLuaTab_Params params;
	params.InLuaFilePath = InLuaFilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UImGuiFeatureWidget* AImGuiWindowBase::AddLuaFeature(const struct FString& InLuaFilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowBase.AddLuaFeature");

	AImGuiWindowBase_AddLuaFeature_Params params;
	params.InLuaFilePath = InLuaFilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class UImGuiFeatureWidget* AImGuiWindowBase::AddFeatureWithLuaPath(class UClass* FeatureClass, const struct FString& InLuaFilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowBase.AddFeatureWithLuaPath");

	AImGuiWindowBase_AddFeatureWithLuaPath_Params params;
	params.FeatureClass = FeatureClass;
	params.InLuaFilePath = InLuaFilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void AImGuiWindowBase::AddFeatureInstance(class UImGuiFeatureWidget* Feature, const struct FString& InLuaFilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowBase.AddFeatureInstance");

	AImGuiWindowBase_AddFeatureInstance_Params params;
	params.Feature = Feature;
	params.InLuaFilePath = InLuaFilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class UImGuiFeatureWidget* AImGuiWindowBase::AddFeature(class UClass* FeatureClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowBase.AddFeature");

	AImGuiWindowBase_AddFeature_Params params;
	params.FeatureClass = FeatureClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void AImGuiWindowBase::ActivateTab(const struct FName& TabID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowBase.ActivateTab");

	AImGuiWindowBase_ActivateTab_Params params;
	params.TabID = TabID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UImGuiWindowManager::ToggleWindow(class UClass* WindowClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowManager.ToggleWindow");

	UImGuiWindowManager_ToggleWindow_Params params;
	params.WindowClass = WindowClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UImGuiWindowManager::ShowWindowWithTabs(class UClass* WindowClass, TArray<class UClass*> TabClasses)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowManager.ShowWindowWithTabs");

	UImGuiWindowManager_ShowWindowWithTabs_Params params;
	params.WindowClass = WindowClass;
	params.TabClasses = TabClasses;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UImGuiWindowManager::ShowWindow(class UClass* WindowClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowManager.ShowWindow");

	UImGuiWindowManager_ShowWindow_Params params;
	params.WindowClass = WindowClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UImGuiWindowManager::HideWindow(class UClass* WindowClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowManager.HideWindow");

	UImGuiWindowManager_HideWindow_Params params;
	params.WindowClass = WindowClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UImGuiWindowManager::HideAllWindows()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowManager.HideAllWindows");

	UImGuiWindowManager_HideAllWindows_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UImGuiWindowManager::HasWindow(class UClass* WindowClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowManager.HasWindow");

	UImGuiWindowManager_HasWindow_Params params;
	params.WindowClass = WindowClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class AImGuiWindowBase* UImGuiWindowManager::GetWindow(class UClass* WindowClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowManager.GetWindow");

	UImGuiWindowManager_GetWindow_Params params;
	params.WindowClass = WindowClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class AImGuiWindowBase* UImGuiWindowManager::GetOrCreateWindow(class UClass* WindowClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowManager.GetOrCreateWindow");

	UImGuiWindowManager_GetOrCreateWindow_Params params;
	params.WindowClass = WindowClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<class AImGuiWindowBase*> UImGuiWindowManager::GetAllWindows()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowManager.GetAllWindows");

	UImGuiWindowManager_GetAllWindows_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UImGuiWindowManager* UImGuiWindowManager::Get(class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowManager.Get");

	UImGuiWindowManager_Get_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UImGuiWindowManager::DestroyAllWindows()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.ImGuiWindowManager.DestroyAllWindows");

	UImGuiWindowManager_DestroyAllWindows_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AMemLeakTestGameMode::ForceGC()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.MemLeakTestGameMode.ForceGC");

	AMemLeakTestGameMode_ForceGC_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UQPSBPLibrary::SwitchUIWidgetShowFromUserWidget(const struct FName& ContainName, const struct FString& UserWidgetName, const struct FString& WidgetName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.QPSBPLibrary.SwitchUIWidgetShowFromUserWidget");

	UQPSBPLibrary_SwitchUIWidgetShowFromUserWidget_Params params;
	params.ContainName = ContainName;
	params.UserWidgetName = UserWidgetName;
	params.WidgetName = WidgetName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UQPSBPLibrary::SwitchUIWidgetShow(const struct FName& ContainName, const struct FString& WidgetName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.QPSBPLibrary.SwitchUIWidgetShow");

	UQPSBPLibrary_SwitchUIWidgetShow_Params params;
	params.ContainName = ContainName;
	params.WidgetName = WidgetName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UQPSBPLibrary::SwitchUIContainsShow(const struct FName& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.QPSBPLibrary.SwitchUIContainsShow");

	UQPSBPLibrary_SwitchUIContainsShow_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UQPSBPLibrary::IsPublishVersion()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.QPSBPLibrary.IsPublishVersion");

	UQPSBPLibrary_IsPublishVersion_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UQPSBPLibrary::GetHZBValue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.QPSBPLibrary.GetHZBValue");

	UQPSBPLibrary_GetHZBValue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UQPSBPLibrary::GetDistanceCullingFactor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Development.QPSBPLibrary.GetDistanceCullingFactor");

	UQPSBPLibrary_GetDistanceCullingFactor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

