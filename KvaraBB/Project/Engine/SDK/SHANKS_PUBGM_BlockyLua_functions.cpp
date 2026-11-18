
 
#include "../SDK.hpp"

namespace SDK
{







void UBlocky3DVarWidget::SetResult()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.Blocky3DVarWidget.SetResult");

	UBlocky3DVarWidget_SetResult_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UBlocky3DVarWidget::InitText(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.Blocky3DVarWidget.InitText");

	UBlocky3DVarWidget_InitText_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FString UBlocky3DVarWidget::CleanNumber(const struct FString& Input)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.Blocky3DVarWidget.CleanNumber");

	UBlocky3DVarWidget_CleanNumber_Params params;
	params.Input = Input;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyBlockDisplayWidget_Custom::UpdateName(const struct FString& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyBlockDisplayWidget_Custom.UpdateName");

	UBlockyBlockDisplayWidget_Custom_UpdateName_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyBlockDisplayWidget_Custom::Init(TEnumAsByte<ECustomBlockType> Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyBlockDisplayWidget_Custom.Init");

	UBlockyBlockDisplayWidget_Custom_Init_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyBlockDisplayWidget_Preset::InitPreset(class UBlockyGraphWidget* HostGraphWidget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyBlockDisplayWidget_Preset.InitPreset");

	UBlockyBlockDisplayWidget_Preset_InitPreset_Params params;
	params.HostGraphWidget = HostGraphWidget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyBlockDisplayWidget_Variable::Init()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyBlockDisplayWidget_Variable.Init");

	UBlockyBlockDisplayWidget_Variable_Init_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FVector2D UBlockyBlockDisplayWidget_Variable::CalculateDrawSize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyBlockDisplayWidget_Variable.CalculateDrawSize");

	UBlockyBlockDisplayWidget_Variable_CalculateDrawSize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyBlockWindowWidget::SetWidgetVariableToShow(class UBlockyMenuItemObject_Variable* item_Variable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyBlockWindowWidget.SetWidgetVariableToShow");

	UBlockyBlockWindowWidget_SetWidgetVariableToShow_Params params;
	params.item_Variable = item_Variable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyBlockWindowWidget::SetWidgetCustomToShow(class UBlockyMenuItemObject_Custom* item_Custom)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyBlockWindowWidget.SetWidgetCustomToShow");

	UBlockyBlockWindowWidget_SetWidgetCustomToShow_Params params;
	params.item_Custom = item_Custom;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyBlockWindowWidget::SetWidgetCommonToShow(class UBlockyMenuItemObject* MenuItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyBlockWindowWidget.SetWidgetCommonToShow");

	UBlockyBlockWindowWidget_SetWidgetCommonToShow_Params params;
	params.MenuItem = MenuItem;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyBlockWindowWidget::SetWidgetBPToShow(class UUserWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyBlockWindowWidget.SetWidgetBPToShow");

	UBlockyBlockWindowWidget_SetWidgetBPToShow_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyBooleanWidget::SetText(const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyBooleanWidget.SetText");

	UBlockyBooleanWidget_SetText_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyBooleanWidget::SetResult(const struct FString& displayValue, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyBooleanWidget.SetResult");

	UBlockyBooleanWidget_SetResult_Params params;
	params.displayValue = displayValue;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyCategoryItemWidget::SetSelected(bool IsSelected)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyCategoryItemWidget.SetSelected");

	UBlockyCategoryItemWidget_SetSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyCategoryItemWidget::OnScroll()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyCategoryItemWidget.OnScroll");

	UBlockyCategoryItemWidget_OnScroll_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyCategoryItemWidget::OnClick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyCategoryItemWidget.OnClick");

	UBlockyCategoryItemWidget_OnClick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyCategoryItemWidget::InitWithItemObject(class UBlockyCategoryItemObject* Item)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyCategoryItemWidget.InitWithItemObject");

	UBlockyCategoryItemWidget_InitWithItemObject_Params params;
	params.Item = Item;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyCategoryItemWidget::InitTextToShow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyCategoryItemWidget.InitTextToShow");

	UBlockyCategoryItemWidget_InitTextToShow_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FText UBlockyCategoryWidget::GetCurrentCategoryNameWithVariable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyCategoryWidget.GetCurrentCategoryNameWithVariable");

	UBlockyCategoryWidget_GetCurrentCategoryNameWithVariable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UPanelWidget* UBlockyCategoryWidget::GetCategoryContainer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyCategoryWidget.GetCategoryContainer");

	UBlockyCategoryWidget_GetCategoryContainer_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyColorPickerWidget::SetResult(const struct FLinearColor& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyColorPickerWidget.SetResult");

	UBlockyColorPickerWidget_SetResult_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyColorPickerWidget::SetColor(const struct FLinearColor& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyColorPickerWidget.SetColor");

	UBlockyColorPickerWidget_SetColor_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyColorPickerWidget::LoadColors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyColorPickerWidget.LoadColors");

	UBlockyColorPickerWidget_LoadColors_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyEditor::UpdateTriggerGroups()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.UpdateTriggerGroups");

	UBlockyEditor_UpdateTriggerGroups_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyEditor::UpdateSearchPanel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.UpdateSearchPanel");

	UBlockyEditor_UpdateSearchPanel_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyEditor::UpdateSearchButtonVisible(bool IsShowSearchButton)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.UpdateSearchButtonVisible");

	UBlockyEditor_UpdateSearchButtonVisible_Params params;
	params.IsShowSearchButton = IsShowSearchButton;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UBlockyEditor::TryBackToVariableOrCustomPanel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.TryBackToVariableOrCustomPanel");

	UBlockyEditor_TryBackToVariableOrCustomPanel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyEditor::ShowPresetAnimation(class UPresetDesc* PresetDesc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.ShowPresetAnimation");

	UBlockyEditor_ShowPresetAnimation_Params params;
	params.PresetDesc = PresetDesc;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyEditor::SetWidgetBPToShow(class UUserWidget* Widget, bool HideCategory)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.SetWidgetBPToShow");

	UBlockyEditor_SetWidgetBPToShow_Params params;
	params.Widget = Widget;
	params.HideCategory = HideCategory;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyEditor::SetMenuWidget(class UBlockyMenuWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.SetMenuWidget");

	UBlockyEditor_SetMenuWidget_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyEditor::SetCategoryWidget(class UBlockyCategoryWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.SetCategoryWidget");

	UBlockyEditor_SetCategoryWidget_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyEditor::SetBlockLogWidget(class UBlockyLogWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.SetBlockLogWidget");

	UBlockyEditor_SetBlockLogWidget_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyEditor::SetBlockListWidget(class UBlockyBlockWindowWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.SetBlockListWidget");

	UBlockyEditor_SetBlockListWidget_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyEditor::ResetAsyncWidgetHandleMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.ResetAsyncWidgetHandleMap");

	UBlockyEditor_ResetAsyncWidgetHandleMap_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyEditor::OnUpdateUndoRedoState(bool HasUndoCommands, bool HasRedoCommands)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.OnUpdateUndoRedoState");

	UBlockyEditor_OnUpdateUndoRedoState_Params params;
	params.HasUndoCommands = HasUndoCommands;
	params.HasRedoCommands = HasRedoCommands;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyEditor::OnShowTips(const struct FText& Tips)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.OnShowTips");

	UBlockyEditor_OnShowTips_Params params;
	params.Tips = Tips;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyEditor::OnShowPresetPanelHandler(bool IsShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.OnShowPresetPanelHandler");

	UBlockyEditor_OnShowPresetPanelHandler_Params params;
	params.IsShow = IsShow;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UBlockyEditor::LoadWidgetAsync(const struct FString& WidgetName, const struct FString& WidgetPath, const struct FScriptDelegate& Delegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.LoadWidgetAsync");

	UBlockyEditor_LoadWidgetAsync_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Delegate = Delegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class UMaterialInterface* UBlockyEditor::LoadMaterialInterface(const struct FString& AnimationPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.LoadMaterialInterface");

	UBlockyEditor_LoadMaterialInterface_Params params;
	params.AnimationPath = AnimationPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyEditor::IsShowExplain(bool bFlag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.IsShowExplain");

	UBlockyEditor_IsShowExplain_Params params;
	params.bFlag = bFlag;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyEditor::IsCloseComment(bool bFlag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.IsCloseComment");

	UBlockyEditor_IsCloseComment_Params params;
	params.bFlag = bFlag;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







float UBlockyEditor::GetSaveCooldownDuration()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.GetSaveCooldownDuration");

	UBlockyEditor_GetSaveCooldownDuration_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UBlockyEditor::GetLocaleString(const struct FString& KeyString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.GetLocaleString");

	UBlockyEditor_GetLocaleString_Params params;
	params.KeyString = KeyString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UBlockyMenuItemObject* UBlockyEditor::GetCurrentMenuItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.GetCurrentMenuItem");

	UBlockyEditor_GetCurrentMenuItem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyEditor::CollectListItem(bool bCollect)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.CollectListItem");

	UBlockyEditor_CollectListItem_Params params;
	params.bCollect = bCollect;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyEditor::BP_OnShowTools(TArray<EBlockyBPToolButtonType> ButtonTypes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.BP_OnShowTools");

	UBlockyEditor_BP_OnShowTools_Params params;
	params.ButtonTypes = ButtonTypes;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyEditor::BP_OnBlockyEditorShortcut(EBlockyEditorShortcutKey ShortCutKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.BP_OnBlockyEditorShortcut");

	UBlockyEditor_BP_OnBlockyEditorShortcut_Params params;
	params.ShortCutKey = ShortCutKey;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyEditor::AddChildBluckyWidget(class UUserWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEditor.AddChildBluckyWidget");

	UBlockyEditor_AddChildBluckyWidget_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyEnumWidget::SetShowDisplayItems(TMap<struct FName, struct FText> Names)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEnumWidget.SetShowDisplayItems");

	UBlockyEnumWidget_SetShowDisplayItems_Params params;
	params.Names = Names;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyEnumWidget::SetResultWithName(const struct FName& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyEnumWidget.SetResultWithName");

	UBlockyEnumWidget_SetResultWithName_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyFloatWidget::SetText(const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyFloatWidget.SetText");

	UBlockyFloatWidget_SetText_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyFloatWidget::SetResult(const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyFloatWidget.SetResult");

	UBlockyFloatWidget_SetResult_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FString UBlockyFloatWidget::CleanNumber(const struct FString& Input)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyFloatWidget.CleanNumber");

	UBlockyFloatWidget_CleanNumber_Params params;
	params.Input = Input;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FVector2D UBlockyGraphWidget::ViewPosToCanvasPos(const struct FVector2D& Postion)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.ViewPosToCanvasPos");

	UBlockyGraphWidget_ViewPosToCanvasPos_Params params;
	params.Postion = Postion;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<struct FText> UBlockyGraphWidget::UpdateVariableItemNames()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.UpdateVariableItemNames");

	UBlockyGraphWidget_UpdateVariableItemNames_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBlockyGraphWidget::UpdateTriggerGroups()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.UpdateTriggerGroups");

	UBlockyGraphWidget_UpdateTriggerGroups_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







TArray<struct FText> UBlockyGraphWidget::UpdateCustomItemNames()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.UpdateCustomItemNames");

	UBlockyGraphWidget_UpdateCustomItemNames_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBlockyGraphWidget::UpdateBlockByTag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.UpdateBlockByTag");

	UBlockyGraphWidget_UpdateBlockByTag_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphWidget::Undo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.Undo");

	UBlockyGraphWidget_Undo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UBlockyGraphWidget::TryBackToVariableOrCustomPanel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.TryBackToVariableOrCustomPanel");

	UBlockyGraphWidget_TryBackToVariableOrCustomPanel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyGraphWidget::ShowTips(const struct FText& Tips)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.ShowTips");

	UBlockyGraphWidget_ShowTips_Params params;
	params.Tips = Tips;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphWidget::ShowPresetParamPop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.ShowPresetParamPop");

	UBlockyGraphWidget_ShowPresetParamPop_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphWidget::SetViewScale(float InScale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SetViewScale");

	UBlockyGraphWidget_SetViewScale_Params params;
	params.InScale = InScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphWidget::SetViewPosition(const struct FVector2D& ViewPosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SetViewPosition");

	UBlockyGraphWidget_SetViewPosition_Params params;
	params.ViewPosition = ViewPosition;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyGraphWidget::SetTagsSetting(TArray<int>* newDefaultTags, struct FGraphSettingMap* newGraphSettingsMap)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SetTagsSetting");

	UBlockyGraphWidget_SetTagsSetting_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (newDefaultTags != nullptr)
		*newDefaultTags = params.newDefaultTags;
	if (newGraphSettingsMap != nullptr)
		*newGraphSettingsMap = params.newGraphSettingsMap;
}







void UBlockyGraphWidget::SetShowSaveTemplateVar(bool IsShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SetShowSaveTemplateVar");

	UBlockyGraphWidget_SetShowSaveTemplateVar_Params params;
	params.IsShow = IsShow;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphWidget::SetMenuWidget(class UBlockyMenuWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SetMenuWidget");

	UBlockyGraphWidget_SetMenuWidget_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphWidget::SetGraphCanMove(bool isCanMove)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SetGraphCanMove");

	UBlockyGraphWidget_SetGraphCanMove_Params params;
	params.isCanMove = isCanMove;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphWidget::SetCurrentSubGraph(const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SetCurrentSubGraph");

	UBlockyGraphWidget_SetCurrentSubGraph_Params params;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphWidget::SetCategoryWidget(class UBlockyCategoryWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SetCategoryWidget");

	UBlockyGraphWidget_SetCategoryWidget_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class UTexture2D* UBlockyGraphWidget::SetCaptureScreenShot(const struct FVector2D& screenRect)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SetCaptureScreenShot");

	UBlockyGraphWidget_SetCaptureScreenShot_Params params;
	params.screenRect = screenRect;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyGraphWidget::SetBlockLogWidget(class UBlockyLogWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SetBlockLogWidget");

	UBlockyGraphWidget_SetBlockLogWidget_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphWidget::SetBlockListWidget(class UBlockyBlockWindowWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SetBlockListWidget");

	UBlockyGraphWidget_SetBlockListWidget_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FString UBlockyGraphWidget::SaveGraphToJsonText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SaveGraphToJsonText");

	UBlockyGraphWidget_SaveGraphToJsonText_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<unsigned char> UBlockyGraphWidget::SaveGraphToBin()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SaveGraphToBin");

	UBlockyGraphWidget_SaveGraphToBin_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UBlockyGraphWidget::SaveGlobalVarToJsonText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SaveGlobalVarToJsonText");

	UBlockyGraphWidget_SaveGlobalVarToJsonText_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<unsigned char> UBlockyGraphWidget::SaveGlobalVarToBin()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SaveGlobalVarToBin");

	UBlockyGraphWidget_SaveGlobalVarToBin_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBlockyGraphWidget::SaveCustom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SaveCustom");

	UBlockyGraphWidget_SaveCustom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








TArray<unsigned char> UBlockyGraphWidget::SaveBlockyGraphToTemplate(class UBlockyGraph* BlockyGraph)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.SaveBlockyGraphToTemplate");

	UBlockyGraphWidget_SaveBlockyGraphToTemplate_Params params;
	params.BlockyGraph = BlockyGraph;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBlockyGraphWidget::Save()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.Save");

	UBlockyGraphWidget_Save_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphWidget::ReturnToPreviewGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.ReturnToPreviewGraph");

	UBlockyGraphWidget_ReturnToPreviewGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphWidget::ReturnToMainGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.ReturnToMainGraph");

	UBlockyGraphWidget_ReturnToMainGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphWidget::ResetMenuItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.ResetMenuItems");

	UBlockyGraphWidget_ResetMenuItems_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphWidget::ResetJsonChangedFlag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.ResetJsonChangedFlag");

	UBlockyGraphWidget_ResetJsonChangedFlag_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphWidget::ResetGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.ResetGraph");

	UBlockyGraphWidget_ResetGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphWidget::RemoveSubGraph(const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.RemoveSubGraph");

	UBlockyGraphWidget_RemoveSubGraph_Params params;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphWidget::RefreshFont()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.RefreshFont");

	UBlockyGraphWidget_RefreshFont_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphWidget::ReEditVariable(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.ReEditVariable");

	UBlockyGraphWidget_ReEditVariable_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphWidget::Redo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.Redo");

	UBlockyGraphWidget_Redo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphWidget::QuoteCustom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.QuoteCustom");

	UBlockyGraphWidget_QuoteCustom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphWidget::Quote()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.Quote");

	UBlockyGraphWidget_Quote_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphWidget::Paste()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.Paste");

	UBlockyGraphWidget_Paste_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphWidget::OnCloseItemList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.OnCloseItemList");

	UBlockyGraphWidget_OnCloseItemList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphWidget::OnAsyncLoadGraphBinCompleted()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.OnAsyncLoadGraphBinCompleted");

	UBlockyGraphWidget_OnAsyncLoadGraphBinCompleted_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UBlockyGraphWidget::LoadTemplateToBlockyGraph_Test(TArray<unsigned char> TemplateAst, bool IsCreateNewGraph, bool IsLoadPresetsInGraph)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.LoadTemplateToBlockyGraph_Test");

	UBlockyGraphWidget_LoadTemplateToBlockyGraph_Test_Params params;
	params.TemplateAst = TemplateAst;
	params.IsCreateNewGraph = IsCreateNewGraph;
	params.IsLoadPresetsInGraph = IsLoadPresetsInGraph;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UBlockyGraphWidget::LoadTemplateToBlockyGraph(bool IsCreateNewGraph, bool IsLoadPresetsInGraph, TArray<unsigned char>* TemplateAst)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.LoadTemplateToBlockyGraph");

	UBlockyGraphWidget_LoadTemplateToBlockyGraph_Params params;
	params.IsCreateNewGraph = IsCreateNewGraph;
	params.IsLoadPresetsInGraph = IsLoadPresetsInGraph;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TemplateAst != nullptr)
		*TemplateAst = params.TemplateAst;
}







void UBlockyGraphWidget::LoadGraphFromJsonText(const struct FString& JsonStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.LoadGraphFromJsonText");

	UBlockyGraphWidget_LoadGraphFromJsonText_Params params;
	params.JsonStr = JsonStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphWidget::LoadGraphFromBin(TArray<unsigned char> JsonStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.LoadGraphFromBin");

	UBlockyGraphWidget_LoadGraphFromBin_Params params;
	params.JsonStr = JsonStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphWidget::LoadGlobalVarFromJsonText(const struct FString& JsonStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.LoadGlobalVarFromJsonText");

	UBlockyGraphWidget_LoadGlobalVarFromJsonText_Params params;
	params.JsonStr = JsonStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphWidget::LoadGlobalVarFromBin(TArray<unsigned char> JsonStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.LoadGlobalVarFromBin");

	UBlockyGraphWidget_LoadGlobalVarFromBin_Params params;
	params.JsonStr = JsonStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphWidget::Load()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.Load");

	UBlockyGraphWidget_Load_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UBlockyGraphWidget::IsViewOverlap(const struct FVector2D& Position, const struct FVector2D& Size)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.IsViewOverlap");

	UBlockyGraphWidget_IsViewOverlap_Params params;
	params.Position = Position;
	params.Size = Size;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBlockyGraphWidget::IsFirstGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.IsFirstGraph");

	UBlockyGraphWidget_IsFirstGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UBlockyGraphWidget::GM_GenerateAllBlocks(int CombinedBlocksNum, int GraphBlocksNum, bool bNeedResetGraph)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.GM_GenerateAllBlocks");

	UBlockyGraphWidget_GM_GenerateAllBlocks_Params params;
	params.CombinedBlocksNum = CombinedBlocksNum;
	params.GraphBlocksNum = GraphBlocksNum;
	params.bNeedResetGraph = bNeedResetGraph;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UBlockyGraphWidget::GM_AddBlocks(TArray<struct FString> typeNames, int X, int Y)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.GM_AddBlocks");

	UBlockyGraphWidget_GM_AddBlocks_Params params;
	params.typeNames = typeNames;
	params.X = X;
	params.Y = Y;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FVector2D UBlockyGraphWidget::GetViewSize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.GetViewSize");

	UBlockyGraphWidget_GetViewSize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UBlockyGraphWidget::GetViewScale()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.GetViewScale");

	UBlockyGraphWidget_GetViewScale_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FVector2D UBlockyGraphWidget::GetViewPosition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.GetViewPosition");

	UBlockyGraphWidget_GetViewPosition_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBlockyGraphWidget::GetJsonChangedFlag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.GetJsonChangedFlag");

	UBlockyGraphWidget_GetJsonChangedFlag_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}












void UBlockyGraphWidget::GetGraphSettingByName(const struct FString& GraphName, bool* CanCopy, bool* CanReName, bool* CanDel, bool* CanSave, TArray<int>* Tags)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.GetGraphSettingByName");

	UBlockyGraphWidget_GetGraphSettingByName_Params params;
	params.GraphName = GraphName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (CanCopy != nullptr)
		*CanCopy = params.CanCopy;
	if (CanReName != nullptr)
		*CanReName = params.CanReName;
	if (CanDel != nullptr)
		*CanDel = params.CanDel;
	if (CanSave != nullptr)
		*CanSave = params.CanSave;
	if (Tags != nullptr)
		*Tags = params.Tags;
}







void UBlockyGraphWidget::GetDeleteBlockUIRect(float InRectWidth)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.GetDeleteBlockUIRect");

	UBlockyGraphWidget_GetDeleteBlockUIRect_Params params;
	params.InRectWidth = InRectWidth;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







class UBlockyGraph* UBlockyGraphWidget::GetCurrentGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.GetCurrentGraph");

	UBlockyGraphWidget_GetCurrentGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyGraphWidget::FocusTo(class UBlockBase* TargetBlock)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.FocusTo");

	UBlockyGraphWidget_FocusTo_Params params;
	params.TargetBlock = TargetBlock;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyGraphWidget::FinishVariableEdit(bool bSaveVar, bool bReEdit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.FinishVariableEdit");

	UBlockyGraphWidget_FinishVariableEdit_Params params;
	params.bSaveVar = bSaveVar;
	params.bReEdit = bReEdit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphWidget::FinishCustomEdit(bool bSave)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.FinishCustomEdit");

	UBlockyGraphWidget_FinishCustomEdit_Params params;
	params.bSave = bSave;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphWidget::FinishBlockSetting(bool bSave)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.FinishBlockSetting");

	UBlockyGraphWidget_FinishBlockSetting_Params params;
	params.bSave = bSave;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphWidget::Eject()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.Eject");

	UBlockyGraphWidget_Eject_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphWidget::EditCustumBlockGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.EditCustumBlockGraph");

	UBlockyGraphWidget_EditCustumBlockGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphWidget::EditCustom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.EditCustom");

	UBlockyGraphWidget_EditCustom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphWidget::Disable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.Disable");

	UBlockyGraphWidget_Disable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphWidget::DeleteVariableListItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.DeleteVariableListItem");

	UBlockyGraphWidget_DeleteVariableListItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphWidget::DeleteSelected()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.DeleteSelected");

	UBlockyGraphWidget_DeleteSelected_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphWidget::DeleteCustom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.DeleteCustom");

	UBlockyGraphWidget_DeleteCustom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphWidget::DefineCustom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.DefineCustom");

	UBlockyGraphWidget_DefineCustom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphWidget::Define()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.Define");

	UBlockyGraphWidget_Define_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphWidget::Copy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.Copy");

	UBlockyGraphWidget_Copy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphWidget::Comment()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.Comment");

	UBlockyGraphWidget_Comment_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphWidget::CollectListItem(bool bCollect)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.CollectListItem");

	UBlockyGraphWidget_CollectListItem_Params params;
	params.bCollect = bCollect;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphWidget::Clone()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.Clone");

	UBlockyGraphWidget_Clone_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphWidget::ClearUndoRedoDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.ClearUndoRedoDatas");

	UBlockyGraphWidget_ClearUndoRedoDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphWidget::ClearTextSizeCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.ClearTextSizeCache");

	UBlockyGraphWidget_ClearTextSizeCache_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphWidget::ClearLog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.ClearLog");

	UBlockyGraphWidget_ClearLog_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FVector2D UBlockyGraphWidget::CanvasPosToViewPos(const struct FVector2D& Postion)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.CanvasPosToViewPos");

	UBlockyGraphWidget_CanvasPosToViewPos_Params params;
	params.Postion = Postion;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










void UBlockyGraphWidget::BlockyLog_Show(EBlockyLogMsgMode Mode, class UBlockBase* BlockSource, const struct FString& SlotID, const struct FString& Info)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.BlockyLog_Show");

	UBlockyGraphWidget_BlockyLog_Show_Params params;
	params.Mode = Mode;
	params.BlockSource = BlockSource;
	params.SlotID = SlotID;
	params.Info = Info;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyGraphWidget::AsyncLoadGraphFromBin(TArray<unsigned char> GraphBinContent, TArray<unsigned char> GlobalVarBinContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.AsyncLoadGraphFromBin");

	UBlockyGraphWidget_AsyncLoadGraphFromBin_Params params;
	params.GraphBinContent = GraphBinContent;
	params.GlobalVarBinContent = GlobalVarBinContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyGraphWidget::AddSubGraph(const struct FString& InName, const struct FString& InType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.AddSubGraph");

	UBlockyGraphWidget_AddSubGraph_Params params;
	params.InName = InName;
	params.InType = InType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









class UBlockyGraph* UBlockyGraphWidget::AddGraph(const struct FString& InName, const struct FString& InType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.AddGraph");

	UBlockyGraphWidget_AddGraph_Params params;
	params.InName = InName;
	params.InType = InType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBlockyGraphWidget::AddGlobalComment()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGraphWidget.AddGlobalComment");

	UBlockyGraphWidget_AddGlobalComment_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







class UPanelWidget* UBlockyGroupWidget::GetGroupContainer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGroupWidget.GetGroupContainer");

	UBlockyGroupWidget_GetGroupContainer_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBlockyGroupWidget::AddGroupItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyGroupWidget.AddGroupItem");

	UBlockyGroupWidget_AddGroupItem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyIntegerWidget::SetText(const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyIntegerWidget.SetText");

	UBlockyIntegerWidget_SetText_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyIntegerWidget::SetResult(const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyIntegerWidget.SetResult");

	UBlockyIntegerWidget_SetResult_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyIntegerWidget::SetNegativeEnable(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyIntegerWidget.SetNegativeEnable");

	UBlockyIntegerWidget_SetNegativeEnable_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyLogItemWidget::SetShowWarn(const struct FString& Warn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogItemWidget.SetShowWarn");

	UBlockyLogItemWidget_SetShowWarn_Params params;
	params.Warn = Warn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyLogItemWidget::SetShowInfo(const struct FString& Info)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogItemWidget.SetShowInfo");

	UBlockyLogItemWidget_SetShowInfo_Params params;
	params.Info = Info;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyLogItemWidget::SetShowError(const struct FString& Error)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogItemWidget.SetShowError");

	UBlockyLogItemWidget_SetShowError_Params params;
	params.Error = Error;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyLogItemWidget::SetActiveWidgetIndex(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogItemWidget.SetActiveWidgetIndex");

	UBlockyLogItemWidget_SetActiveWidgetIndex_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyLogItemWidget::OnClickBtnToBlock()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogItemWidget.OnClickBtnToBlock");

	UBlockyLogItemWidget_OnClickBtnToBlock_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







class UTextBlock* UBlockyLogItemWidget::GetTextBlockWarn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogItemWidget.GetTextBlockWarn");

	UBlockyLogItemWidget_GetTextBlockWarn_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UTextBlock* UBlockyLogItemWidget::GetTextBlockInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogItemWidget.GetTextBlockInfo");

	UBlockyLogItemWidget_GetTextBlockInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UTextBlock* UBlockyLogItemWidget::GetTextBlockError()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogItemWidget.GetTextBlockError");

	UBlockyLogItemWidget_GetTextBlockError_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UBlockyLogItemWidget::GetActiveWidgetIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogItemWidget.GetActiveWidgetIndex");

	UBlockyLogItemWidget_GetActiveWidgetIndex_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBlockyLogWidget::ShowLog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogWidget.ShowLog");

	UBlockyLogWidget_ShowLog_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyLogWidget::SetBtnWarnText(const struct FString& Warn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogWidget.SetBtnWarnText");

	UBlockyLogWidget_SetBtnWarnText_Params params;
	params.Warn = Warn;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyLogWidget::SetBtnInfoText(const struct FString& Info)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogWidget.SetBtnInfoText");

	UBlockyLogWidget_SetBtnInfoText_Params params;
	params.Info = Info;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyLogWidget::SetBtnErrorText(const struct FString& Error)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogWidget.SetBtnErrorText");

	UBlockyLogWidget_SetBtnErrorText_Params params;
	params.Error = Error;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyLogWidget::OnClickWarnShow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogWidget.OnClickWarnShow");

	UBlockyLogWidget_OnClickWarnShow_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyLogWidget::OnClickInfoShow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogWidget.OnClickInfoShow");

	UBlockyLogWidget_OnClickInfoShow_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyLogWidget::OnClickErrorShow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogWidget.OnClickErrorShow");

	UBlockyLogWidget_OnClickErrorShow_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyLogWidget::OnClickAllShow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogWidget.OnClickAllShow");

	UBlockyLogWidget_OnClickAllShow_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







class UPanelWidget* UBlockyLogWidget::GetLogContainer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogWidget.GetLogContainer");

	UBlockyLogWidget_GetLogContainer_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UBlockyLogWidget::GetItemTextWidth()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogWidget.GetItemTextWidth");

	UBlockyLogWidget_GetItemTextWidth_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UBlockyLogWidget::GetBtnWarnText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogWidget.GetBtnWarnText");

	UBlockyLogWidget_GetBtnWarnText_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UBlockyLogWidget::GetBtnInfoText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogWidget.GetBtnInfoText");

	UBlockyLogWidget_GetBtnInfoText_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UBlockyLogWidget::GetBtnErrorText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLogWidget.GetBtnErrorText");

	UBlockyLogWidget_GetBtnErrorText_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyLuaLoopScrollBase::UserScrolled(float Offset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.UserScrolled");

	UBlockyLuaLoopScrollBase_UserScrolled_Params params;
	params.Offset = Offset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyLuaLoopScrollBase::SetItemType(class UClass* _ItemType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.SetItemType");

	UBlockyLuaLoopScrollBase_SetItemType_Params params;
	params._ItemType = _ItemType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UBlockyLuaLoopScrollBase::SetItemCount(int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.SetItemCount");

	UBlockyLuaLoopScrollBase_SetItemCount_Params params;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyLuaLoopScrollBase::RemoveItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.RemoveItem");

	UBlockyLuaLoopScrollBase_RemoveItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UBlockyLuaLoopScrollBase::RefreshItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.RefreshItem");

	UBlockyLuaLoopScrollBase_RefreshItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBlockyLuaLoopScrollBase::RefreshAllItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.RefreshAllItems");

	UBlockyLuaLoopScrollBase_RefreshAllItems_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyLuaLoopScrollBase::Push()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.Push");

	UBlockyLuaLoopScrollBase_Push_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyLuaLoopScrollBase::Pop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.Pop");

	UBlockyLuaLoopScrollBase_Pop_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyLuaLoopScrollBase::OnRefreshItem__DelegateSignature(class UWidget* Item, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction BlockyLua.BlockyLuaLoopScrollBase.OnRefreshItem__DelegateSignature");

	UBlockyLuaLoopScrollBase_OnRefreshItem__DelegateSignature_Params params;
	params.Item = Item;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyLuaLoopScrollBase::OnItemCreated__DelegateSignature(class UWidget* Item, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction BlockyLua.BlockyLuaLoopScrollBase.OnItemCreated__DelegateSignature");

	UBlockyLuaLoopScrollBase_OnItemCreated__DelegateSignature_Params params;
	params.Item = Item;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UBlockyLuaLoopScrollBase::OnChangeData__DelegateSignature(class UWidget* Item, int Index, const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction BlockyLua.BlockyLuaLoopScrollBase.OnChangeData__DelegateSignature");

	UBlockyLuaLoopScrollBase_OnChangeData__DelegateSignature_Params params;
	params.Item = Item;
	params.Index = Index;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyLuaLoopScrollBase::InsertItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.InsertItem");

	UBlockyLuaLoopScrollBase_InsertItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








int UBlockyLuaLoopScrollBase::GetWidgetIndex(class UWidget* Item)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.GetWidgetIndex");

	UBlockyLuaLoopScrollBase_GetWidgetIndex_Params params;
	params.Item = Item;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UBlockyLuaLoopScrollBase::GetItemCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.GetItemCount");

	UBlockyLuaLoopScrollBase_GetItemCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UWidget* UBlockyLuaLoopScrollBase::GetIndexOfWidget(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.GetIndexOfWidget");

	UBlockyLuaLoopScrollBase_GetIndexOfWidget_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UBlockyLuaLoopScrollBase::ChangeData(int Index, const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.ChangeData");

	UBlockyLuaLoopScrollBase_ChangeData_Params params;
	params.Index = Index;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyLuaLoopScrollBase::CallTick(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.CallTick");

	UBlockyLuaLoopScrollBase_CallTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyLuaLoopScrollBase::AutoSize(bool bAutoSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase.AutoSize");

	UBlockyLuaLoopScrollBase_AutoSize_Params params;
	params.bAutoSize = bAutoSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyLuaLoopScrollBase_MultiItem::UserScrolled(float Offset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.UserScrolled");

	UBlockyLuaLoopScrollBase_MultiItem_UserScrolled_Params params;
	params.Offset = Offset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyLuaLoopScrollBase_MultiItem::SetItemType(TArray<class UClass*> TypeArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.SetItemType");

	UBlockyLuaLoopScrollBase_MultiItem_SetItemType_Params params;
	params.TypeArray = TypeArray;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UBlockyLuaLoopScrollBase_MultiItem::SetItemCount(int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.SetItemCount");

	UBlockyLuaLoopScrollBase_MultiItem_SetItemCount_Params params;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyLuaLoopScrollBase_MultiItem::RemoveItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.RemoveItem");

	UBlockyLuaLoopScrollBase_MultiItem_RemoveItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UBlockyLuaLoopScrollBase_MultiItem::RefreshItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.RefreshItem");

	UBlockyLuaLoopScrollBase_MultiItem_RefreshItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBlockyLuaLoopScrollBase_MultiItem::RefreshAllItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.RefreshAllItems");

	UBlockyLuaLoopScrollBase_MultiItem_RefreshAllItems_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyLuaLoopScrollBase_MultiItem::Push(class UClass* Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.Push");

	UBlockyLuaLoopScrollBase_MultiItem_Push_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyLuaLoopScrollBase_MultiItem::Pop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.Pop");

	UBlockyLuaLoopScrollBase_MultiItem_Pop_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyLuaLoopScrollBase_MultiItem::OnRefreshItem__DelegateSignature(class UWidget* Item, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction BlockyLua.BlockyLuaLoopScrollBase_MultiItem.OnRefreshItem__DelegateSignature");

	UBlockyLuaLoopScrollBase_MultiItem_OnRefreshItem__DelegateSignature_Params params;
	params.Item = Item;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyLuaLoopScrollBase_MultiItem::OnItemCreated__DelegateSignature(class UWidget* Item, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction BlockyLua.BlockyLuaLoopScrollBase_MultiItem.OnItemCreated__DelegateSignature");

	UBlockyLuaLoopScrollBase_MultiItem_OnItemCreated__DelegateSignature_Params params;
	params.Item = Item;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UBlockyLuaLoopScrollBase_MultiItem::OnChangeData__DelegateSignature(class UWidget* Item, int Index, const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction BlockyLua.BlockyLuaLoopScrollBase_MultiItem.OnChangeData__DelegateSignature");

	UBlockyLuaLoopScrollBase_MultiItem_OnChangeData__DelegateSignature_Params params;
	params.Item = Item;
	params.Index = Index;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyLuaLoopScrollBase_MultiItem::InsertItem(int Index, class UClass* Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.InsertItem");

	UBlockyLuaLoopScrollBase_MultiItem_InsertItem_Params params;
	params.Index = Index;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








int UBlockyLuaLoopScrollBase_MultiItem::GetWidgetIndex(class UWidget* Item)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.GetWidgetIndex");

	UBlockyLuaLoopScrollBase_MultiItem_GetWidgetIndex_Params params;
	params.Item = Item;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UBlockyLuaLoopScrollBase_MultiItem::GetItemCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.GetItemCount");

	UBlockyLuaLoopScrollBase_MultiItem_GetItemCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UWidget* UBlockyLuaLoopScrollBase_MultiItem::GetIndexOfWidget(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.GetIndexOfWidget");

	UBlockyLuaLoopScrollBase_MultiItem_GetIndexOfWidget_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBlockyLuaLoopScrollBase_MultiItem::ClearItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.ClearItems");

	UBlockyLuaLoopScrollBase_MultiItem_ClearItems_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UBlockyLuaLoopScrollBase_MultiItem::ChangeData(int Index, const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.ChangeData");

	UBlockyLuaLoopScrollBase_MultiItem_ChangeData_Params params;
	params.Index = Index;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyLuaLoopScrollBase_MultiItem::CallTick(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.CallTick");

	UBlockyLuaLoopScrollBase_MultiItem_CallTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyLuaLoopScrollBase_MultiItem::AutoSize(bool bAutoSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBase_MultiItem.AutoSize");

	UBlockyLuaLoopScrollBase_MultiItem_AutoSize_Params params;
	params.bAutoSize = bAutoSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyLuaLoopScrollBox::ScrollToItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBox.ScrollToItem");

	UBlockyLuaLoopScrollBox_ScrollToItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyLuaLoopScrollBox_MultiItem::ScrollToItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBox_MultiItem.ScrollToItem");

	UBlockyLuaLoopScrollBox_MultiItem_ScrollToItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyLuaLoopScrollBox_MultiItem::BP_UserScrolled(float Offset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBox_MultiItem.BP_UserScrolled");

	UBlockyLuaLoopScrollBox_MultiItem_BP_UserScrolled_Params params;
	params.Offset = Offset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UBlockyLuaLoopScrollBox_MultiItem::BP_PreventScrollOutOfSize(bool bScroll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBox_MultiItem.BP_PreventScrollOutOfSize");

	UBlockyLuaLoopScrollBox_MultiItem_BP_PreventScrollOutOfSize_Params params;
	params.bScroll = bScroll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UBlockyLuaLoopScrollBox_MultiItem::BP_GetContentSize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollBox_MultiItem.BP_GetContentSize");

	UBlockyLuaLoopScrollBox_MultiItem_BP_GetContentSize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyLuaLoopScrollGrid::ScrollToItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLuaLoopScrollGrid.ScrollToItem");

	UBlockyLuaLoopScrollGrid_ScrollToItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyMenuItemWidget::SetSelected(bool IsSelected)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyMenuItemWidget.SetSelected");

	UBlockyMenuItemWidget_SetSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyMenuItemWidget::OnClick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyMenuItemWidget.OnClick");

	UBlockyMenuItemWidget_OnClick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyMenuItemWidget::InitWithItemObject(class UBlockyMenuItemObject* Item)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyMenuItemWidget.InitWithItemObject");

	UBlockyMenuItemWidget_InitWithItemObject_Params params;
	params.Item = Item;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyMenuItemWidget::InitTextToShow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyMenuItemWidget.InitTextToShow");

	UBlockyMenuItemWidget_InitTextToShow_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UBlockyMenuWidget::SelectMenu(class UBlockyMenuItemWidget* MenuItemWidget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyMenuWidget.SelectMenu");

	UBlockyMenuWidget_SelectMenu_Params params;
	params.MenuItemWidget = MenuItemWidget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyMenuWidget::OnAddMenuItemWidget(class UBlockyMenuItemWidget* MenuItemWidget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyMenuWidget.OnAddMenuItemWidget");

	UBlockyMenuWidget_OnAddMenuItemWidget_Params params;
	params.MenuItemWidget = MenuItemWidget;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







class UPanelWidget* UBlockyMenuWidget::GetMenuContainer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyMenuWidget.GetMenuContainer");

	UBlockyMenuWidget_GetMenuContainer_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyPresetItemWidget::SetPresetDesc_BP(class UPresetDesc* PresetDesc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyPresetItemWidget.SetPresetDesc_BP");

	UBlockyPresetItemWidget_SetPresetDesc_BP_Params params;
	params.PresetDesc = PresetDesc;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyPresetItemWidget::SetImageShowIcon(class UImage* Image)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyPresetItemWidget.SetImageShowIcon");

	UBlockyPresetItemWidget_SetImageShowIcon_Params params;
	params.Image = Image;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FString UBlockyPresetItemWidget::GetPresetDescCode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyPresetItemWidget.GetPresetDescCode");

	UBlockyPresetItemWidget_GetPresetDescCode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyPresetWidget::SetResult(class UPresetDesc* Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyPresetWidget.SetResult");

	UBlockyPresetWidget_SetResult_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyPresetWidget::SetPresets(TArray<class UPresetDesc*> Presets)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyPresetWidget.SetPresets");

	UBlockyPresetWidget_SetPresets_Params params;
	params.Presets = Presets;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyPresetWidget::ResetMenuItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyPresetWidget.ResetMenuItem");

	UBlockyPresetWidget_ResetMenuItem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FString UBlockyPresetWidget::OnFilterBtnClick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyPresetWidget.OnFilterBtnClick");

	UBlockyPresetWidget_OnFilterBtnClick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyPresetWidget::LoopScrollBoxFilterStr(const struct FString& filter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyPresetWidget.LoopScrollBoxFilterStr");

	UBlockyPresetWidget_LoopScrollBoxFilterStr_Params params;
	params.filter = filter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyPresetWidget::LoopScrollBoxFilterByTag(TMap<int, struct FIntArrayWrapper> Tags, TArray<struct FString> curTagsStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyPresetWidget.LoopScrollBoxFilterByTag");

	UBlockyPresetWidget_LoopScrollBoxFilterByTag_Params params;
	params.Tags = Tags;
	params.curTagsStr = curTagsStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyPresetWidget::InitPresets()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyPresetWidget.InitPresets");

	UBlockyPresetWidget_InitPresets_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







class UPresetDesc* UBlockyPresetWidget::GetPresetDesc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyPresetWidget.GetPresetDesc");

	UBlockyPresetWidget_GetPresetDesc_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UScrollBox* UBlockyPresetWidget::GetLoopScrollBox()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyPresetWidget.GetLoopScrollBox");

	UBlockyPresetWidget_GetLoopScrollBox_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBlockyPresetWidget::GetIsIconWidget()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyPresetWidget.GetIsIconWidget");

	UBlockyPresetWidget_GetIsIconWidget_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBlockyPresetWidget::ClearSearchText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyPresetWidget.ClearSearchText");

	UBlockyPresetWidget_ClearSearchText_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyRichTextBlock::SetText(const struct FText& InText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyRichTextBlock.SetText");

	UBlockyRichTextBlock_SetText_Params params;
	params.InText = InText;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FText UBlockyRichTextBlock::GetText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyRichTextBlock.GetText");

	UBlockyRichTextBlock_GetText_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBlockySearchResultPanel::UpdateGraphContentSize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResultPanel.UpdateGraphContentSize");

	UBlockySearchResultPanel_UpdateGraphContentSize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockySearchResultPanel::ToggleGraphResults(class UBlockyGraph* InGraph)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResultPanel.ToggleGraphResults");

	UBlockySearchResultPanel_ToggleGraphResults_Params params;
	params.InGraph = InGraph;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockySearchResultPanel::ScrollToCategory(int CategoryIndex, bool GraphCategory)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResultPanel.ScrollToCategory");

	UBlockySearchResultPanel_ScrollToCategory_Params params;
	params.CategoryIndex = CategoryIndex;
	params.GraphCategory = GraphCategory;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockySearchResultPanel::RefreshGraphBlocksWidgets()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResultPanel.RefreshGraphBlocksWidgets");

	UBlockySearchResultPanel_RefreshGraphBlocksWidgets_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockySearchResultPanel::OnGraphBlocksCreated(class UWidget* Widget, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResultPanel.OnGraphBlocksCreated");

	UBlockySearchResultPanel_OnGraphBlocksCreated_Params params;
	params.Widget = Widget;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockySearchResultPanel::FocusToBlock(class UBlockyGraph* InGraph, class UBlockBase* InBlock)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResultPanel.FocusToBlock");

	UBlockySearchResultPanel_FocusToBlock_Params params;
	params.InGraph = InGraph;
	params.InBlock = InBlock;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockySearchResultPanel::FilterOutSearchResultToShow(ESearchResultVisibleType VisibleType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResultPanel.FilterOutSearchResultToShow");

	UBlockySearchResultPanel_FilterOutSearchResultToShow_Params params;
	params.VisibleType = VisibleType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UBlockySearchResultPanel::BP_ScrollYOffset(int DeltaY)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResultPanel.BP_ScrollYOffset");

	UBlockySearchResultPanel_BP_ScrollYOffset_Params params;
	params.DeltaY = DeltaY;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBlockySearchResults_GraphItemWidget::OnClickedBlock()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResults_GraphItemWidget.OnClickedBlock");

	UBlockySearchResults_GraphItemWidget_OnClickedBlock_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockySearchResults_GraphItemWidget::OnBlockWidgetSelected(bool bSelected)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResults_GraphItemWidget.OnBlockWidgetSelected");

	UBlockySearchResults_GraphItemWidget_OnBlockWidgetSelected_Params params;
	params.bSelected = bSelected;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










struct FString UBlockySearchResults_GraphItemWidget::MarkSearchingStringWithColor(const struct FString& InputString, const struct FString& Target, const struct FString& ColorString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResults_GraphItemWidget.MarkSearchingStringWithColor");

	UBlockySearchResults_GraphItemWidget_MarkSearchingStringWithColor_Params params;
	params.InputString = InputString;
	params.Target = Target;
	params.ColorString = ColorString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBlockySearchResults_GraphItemWidget::IsSearchUseCase()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResults_GraphItemWidget.IsSearchUseCase");

	UBlockySearchResults_GraphItemWidget_IsSearchUseCase_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UBlockySearchResults_GraphItemWidget::GetKeyWordColor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResults_GraphItemWidget.GetKeyWordColor");

	UBlockySearchResults_GraphItemWidget_GetKeyWordColor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBlockySearchResults_GraphWidget::ToggleGraphResultsCollapse()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResults_GraphWidget.ToggleGraphResultsCollapse");

	UBlockySearchResults_GraphWidget_ToggleGraphResultsCollapse_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockySearchResults_GraphWidget::OnSetGraphResultsCollapse(bool InCollapse)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResults_GraphWidget.OnSetGraphResultsCollapse");

	UBlockySearchResults_GraphWidget_OnSetGraphResultsCollapse_Params params;
	params.InCollapse = InCollapse;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockySearchResults_GraphWidget::OnRefreshDisplayNameView(const struct FString& InGraphDisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResults_GraphWidget.OnRefreshDisplayNameView");

	UBlockySearchResults_GraphWidget_OnRefreshDisplayNameView_Params params;
	params.InGraphDisplayName = InGraphDisplayName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockySearchResultsTab::OnSetSelected(bool bSelected)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchResultsTab.OnSetSelected");

	UBlockySearchResultsTab_OnSetSelected_Params params;
	params.bSelected = bSelected;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockySearchWidget::StoreLastSelectedMenuItems(bool OverrideLastData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.StoreLastSelectedMenuItems");

	UBlockySearchWidget_StoreLastSelectedMenuItems_Params params;
	params.OverrideLastData = OverrideLastData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UBlockySearchWidget::ShouldCommitString(const struct FText& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.ShouldCommitString");

	UBlockySearchWidget_ShouldCommitString_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockySearchWidget::SetSearchHistories(TArray<struct FString> searchArr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.SetSearchHistories");

	UBlockySearchWidget_SetSearchHistories_Params params;
	params.searchArr = searchArr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockySearchWidget::SetResult(class UPresetDesc* Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.SetResult");

	UBlockySearchWidget_SetResult_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockySearchWidget::SetGraphWidget(class UBlockyGraphWidget* InGraphWidget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.SetGraphWidget");

	UBlockySearchWidget_SetGraphWidget_Params params;
	params.InGraphWidget = InGraphWidget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UBlockySearchWidget::SearchMatchingResults(const struct FString& SearchStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.SearchMatchingResults");

	UBlockySearchWidget_SearchMatchingResults_Params params;
	params.SearchStr = SearchStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockySearchWidget::ScrollToTabContent(class UBlockySearchResultsTab* NewSelectedTab)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.ScrollToTabContent");

	UBlockySearchWidget_ScrollToTabContent_Params params;
	params.NewSelectedTab = NewSelectedTab;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockySearchWidget::SaveSearchHistories()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.SaveSearchHistories");

	UBlockySearchWidget_SaveSearchHistories_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockySearchWidget::RevertLastSelectedMenuItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.RevertLastSelectedMenuItem");

	UBlockySearchWidget_RevertLastSelectedMenuItem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockySearchWidget::RefreshTabContainerView()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.RefreshTabContainerView");

	UBlockySearchWidget_RefreshTabContainerView_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockySearchWidget::RefreshSearchResultsView()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.RefreshSearchResultsView");

	UBlockySearchWidget_RefreshSearchResultsView_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockySearchWidget::LoadSearchHistories()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.LoadSearchHistories");

	UBlockySearchWidget_LoadSearchHistories_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UBlockySearchWidget::IsSearchUseCase()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.IsSearchUseCase");

	UBlockySearchWidget_IsSearchUseCase_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UBlockySearchWidget::InitLoopScroll(class UBlockyLoopScrollBox* ScrollBox, TArray<class UPresetDesc*> arrayPresets)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.InitLoopScroll");

	UBlockySearchWidget_InitLoopScroll_Params params;
	params.ScrollBox = ScrollBox;
	params.arrayPresets = arrayPresets;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UBlockySearchWidget::HasMenuSelected()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.HasMenuSelected");

	UBlockySearchWidget_HasMenuSelected_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBlockySearchWidget::HasAnySearchResults()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.HasAnySearchResults");

	UBlockySearchWidget_HasAnySearchResults_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBlockySearchWidget::HasAnyHistory()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.HasAnyHistory");

	UBlockySearchWidget_HasAnyHistory_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UBlockySearchWidget::GetTotalSearchedNums()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.GetTotalSearchedNums");

	UBlockySearchWidget_GetTotalSearchedNums_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<struct FString> UBlockySearchWidget::GetSearchHistories()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.GetSearchHistories");

	UBlockySearchWidget_GetSearchHistories_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UBlockySearchWidget::GetPresetsSearchedNums()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.GetPresetsSearchedNums");

	UBlockySearchWidget_GetPresetsSearchedNums_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UPresetDesc* UBlockySearchWidget::GetPresetDesc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.GetPresetDesc");

	UBlockySearchWidget_GetPresetDesc_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UBlockySearchWidget::GetHistoryStoreNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.GetHistoryStoreNum");

	UBlockySearchWidget_GetHistoryStoreNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UBlockySearchWidget::GetHistoryNums()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.GetHistoryNums");

	UBlockySearchWidget_GetHistoryNums_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UBlockySearchWidget::GetGraphSearchedNums()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.GetGraphSearchedNums");

	UBlockySearchWidget_GetGraphSearchedNums_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UBlockySearchWidget::GetBlockSearchedNums()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.GetBlockSearchedNums");

	UBlockySearchWidget_GetBlockSearchedNums_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockySearchWidget::FilterSearchResultVisible(ESearchResultVisibleType InSearchResultVisibleType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.FilterSearchResultVisible");

	UBlockySearchWidget_FilterSearchResultVisible_Params params;
	params.InSearchResultVisibleType = InSearchResultVisibleType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockySearchWidget::EmptyListItemSeleceted()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.EmptyListItemSeleceted");

	UBlockySearchWidget_EmptyListItemSeleceted_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockySearchWidget::DoSearching(const struct FString& SearchStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.DoSearching");

	UBlockySearchWidget_DoSearching_Params params;
	params.SearchStr = SearchStr;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockySearchWidget::ClearTabSelected()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.ClearTabSelected");

	UBlockySearchWidget_ClearTabSelected_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockySearchWidget::ClearSearchHistories()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.ClearSearchHistories");

	UBlockySearchWidget_ClearSearchHistories_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockySearchWidget::ClearMenuSelectionStore()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.ClearMenuSelectionStore");

	UBlockySearchWidget_ClearMenuSelectionStore_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockySearchWidget::AddSearchHistory(const struct FString& NewHistory)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySearchWidget.AddSearchHistory");

	UBlockySearchWidget_AddSearchHistory_Params params;
	params.NewHistory = NewHistory;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockySelectFromSceneWidget::SetPreset(class UPresetDesc* Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySelectFromSceneWidget.SetPreset");

	UBlockySelectFromSceneWidget_SetPreset_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockySelectFromSceneWidget::SetObjectDesc(class UObjectDesc* Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySelectFromSceneWidget.SetObjectDesc");

	UBlockySelectFromSceneWidget_SetObjectDesc_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UBlockySelectFromSceneWidget::SetImageShowIcon(class UImage* Image)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySelectFromSceneWidget.SetImageShowIcon");

	UBlockySelectFromSceneWidget_SetImageShowIcon_Params params;
	params.Image = Image;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockySelectFromSceneWidget::OnReceiveCustomSelectionResult(class UObjectDesc* Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySelectFromSceneWidget.OnReceiveCustomSelectionResult");

	UBlockySelectFromSceneWidget_OnReceiveCustomSelectionResult_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockySelectFromSceneWidget::CallSelectScenePreset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockySelectFromSceneWidget.CallSelectScenePreset");

	UBlockySelectFromSceneWidget_CallSelectScenePreset_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FText UBlockyStringWidget::StrDelEnt(const struct FText& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyStringWidget.StrDelEnt");

	UBlockyStringWidget_StrDelEnt_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyStringWidget::StoreSlotDataWithSerialId(int SerialId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyStringWidget.StoreSlotDataWithSerialId");

	UBlockyStringWidget_StoreSlotDataWithSerialId_Params params;
	params.SerialId = SerialId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyStringWidget::SetText(const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyStringWidget.SetText");

	UBlockyStringWidget_SetText_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyStringWidget::SetResult(const struct FString& Value, int SerialId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyStringWidget.SetResult");

	UBlockyStringWidget_SetResult_Params params;
	params.Value = Value;
	params.SerialId = SerialId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCustomizeEditableText::SetNewText(const struct FText& InText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.CustomizeEditableText.SetNewText");

	UCustomizeEditableText_SetNewText_Params params;
	params.InText = InText;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCustomizeEditableText::ReceiveCheckStringResultProcess(bool Result, const struct FString& ValidString, const struct FCheckStringHandleData& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.CustomizeEditableText.ReceiveCheckStringResultProcess");

	UCustomizeEditableText_ReceiveCheckStringResultProcess_Params params;
	params.Result = Result;
	params.ValidString = ValidString;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCustomizeEditableText::OpenKeyBoard()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.CustomizeEditableText.OpenKeyBoard");

	UCustomizeEditableText_OpenKeyBoard_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCustomizeEditableText::OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature(const struct FText& CommittedText, TEnumAsByte<ETextCommit> CommitMethod, int SerialId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction BlockyLua.CustomizeEditableText.OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature");

	UCustomizeEditableText_OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature_Params params;
	params.CommittedText = CommittedText;
	params.CommitMethod = CommitMethod;
	params.SerialId = SerialId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FText UCustomizeEditableText::GetValidText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.CustomizeEditableText.GetValidText");

	UCustomizeEditableText_GetValidText_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCustomizeEditableTextBox::SetNewText(const struct FText& InText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.CustomizeEditableTextBox.SetNewText");

	UCustomizeEditableTextBox_SetNewText_Params params;
	params.InText = InText;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCustomizeEditableTextBox::ReceiveCheckStringResultProcess(bool Result, const struct FString& ValidString, const struct FCheckStringHandleData& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.CustomizeEditableTextBox.ReceiveCheckStringResultProcess");

	UCustomizeEditableTextBox_ReceiveCheckStringResultProcess_Params params;
	params.Result = Result;
	params.ValidString = ValidString;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCustomizeEditableTextBox::OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature(const struct FText& CommittedText, TEnumAsByte<ETextCommit> CommitMethod, int SerialId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction BlockyLua.CustomizeEditableTextBox.OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature");

	UCustomizeEditableTextBox_OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature_Params params;
	params.CommittedText = CommittedText;
	params.CommitMethod = CommitMethod;
	params.SerialId = SerialId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FText UCustomizeEditableTextBox::GetValidText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.CustomizeEditableTextBox.GetValidText");

	UCustomizeEditableTextBox_GetValidText_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCustomizeMultiLineEditableTextBox::SetNewText(const struct FText& InText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.CustomizeMultiLineEditableTextBox.SetNewText");

	UCustomizeMultiLineEditableTextBox_SetNewText_Params params;
	params.InText = InText;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCustomizeMultiLineEditableTextBox::ReceiveCheckStringResultProcess(bool Result, const struct FString& ValidString, const struct FCheckStringHandleData& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.CustomizeMultiLineEditableTextBox.ReceiveCheckStringResultProcess");

	UCustomizeMultiLineEditableTextBox_ReceiveCheckStringResultProcess_Params params;
	params.Result = Result;
	params.ValidString = ValidString;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCustomizeMultiLineEditableTextBox::OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature(const struct FText& CommittedText, TEnumAsByte<ETextCommit> CommitMethod, int SerialId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction BlockyLua.CustomizeMultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature");

	UCustomizeMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature_Params params;
	params.CommittedText = CommittedText;
	params.CommitMethod = CommitMethod;
	params.SerialId = SerialId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FText UCustomizeMultiLineEditableTextBox::GetValidText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.CustomizeMultiLineEditableTextBox.GetValidText");

	UCustomizeMultiLineEditableTextBox_GetValidText_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UCustomizeMultiLineEditableTextBox::CheckStringValidProcess(const struct FText& InText, TEnumAsByte<ETextCommit> CommitMethod)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.CustomizeMultiLineEditableTextBox.CheckStringValidProcess");

	UCustomizeMultiLineEditableTextBox_CheckStringValidProcess_Params params;
	params.InText = InText;
	params.CommitMethod = CommitMethod;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyAutoScrollBox::Tick(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyAutoScrollBox.Tick");

	UBlockyAutoScrollBox_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UBlockyAutoScrollBox::SetTextPadding(class UTextBlock* Text, class UScrollBoxSlot* boxSlot, float totalLength)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyAutoScrollBox.SetTextPadding");

	UBlockyAutoScrollBox_SetTextPadding_Params params;
	params.Text = Text;
	params.boxSlot = boxSlot;
	params.totalLength = totalLength;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyLoopScrollBase::UserScrolled(float Offset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.UserScrolled");

	UBlockyLoopScrollBase_UserScrolled_Params params;
	params.Offset = Offset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyLoopScrollBase::Tick(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.Tick");

	UBlockyLoopScrollBase_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyLoopScrollBase::SetItemType(class UClass* _ItemType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.SetItemType");

	UBlockyLoopScrollBase_SetItemType_Params params;
	params._ItemType = _ItemType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UBlockyLoopScrollBase::SetItemCount(int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.SetItemCount");

	UBlockyLoopScrollBase_SetItemCount_Params params;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyLoopScrollBase::RemoveItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.RemoveItem");

	UBlockyLoopScrollBase_RemoveItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UBlockyLoopScrollBase::RefreshItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.RefreshItem");

	UBlockyLoopScrollBase_RefreshItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBlockyLoopScrollBase::RefreshAllItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.RefreshAllItems");

	UBlockyLoopScrollBase_RefreshAllItems_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyLoopScrollBase::OnRefreshItem__DelegateSignature(class UWidget* Item, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction BlockyLua.BlockyLoopScrollBase.OnRefreshItem__DelegateSignature");

	UBlockyLoopScrollBase_OnRefreshItem__DelegateSignature_Params params;
	params.Item = Item;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyLoopScrollBase::OnItemCreated__DelegateSignature(class UWidget* Item, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction BlockyLua.BlockyLoopScrollBase.OnItemCreated__DelegateSignature");

	UBlockyLoopScrollBase_OnItemCreated__DelegateSignature_Params params;
	params.Item = Item;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UBlockyLoopScrollBase::OnChangeData__DelegateSignature(class UWidget* Item, int Index, const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction BlockyLua.BlockyLoopScrollBase.OnChangeData__DelegateSignature");

	UBlockyLoopScrollBase_OnChangeData__DelegateSignature_Params params;
	params.Item = Item;
	params.Index = Index;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyLoopScrollBase::LoopScrollBoxFilterStr(const struct FString& filter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.LoopScrollBoxFilterStr");

	UBlockyLoopScrollBase_LoopScrollBoxFilterStr_Params params;
	params.filter = filter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyLoopScrollBase::LoopScrollBoxFilterByTag(TMap<int, struct FIntArrayWrapper> Tags)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.LoopScrollBoxFilterByTag");

	UBlockyLoopScrollBase_LoopScrollBoxFilterByTag_Params params;
	params.Tags = Tags;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyLoopScrollBase::InsertItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.InsertItem");

	UBlockyLoopScrollBase_InsertItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








int UBlockyLoopScrollBase::GetWidgetIndex(class UWidget* Item)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.GetWidgetIndex");

	UBlockyLoopScrollBase_GetWidgetIndex_Params params;
	params.Item = Item;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<class UWidget*> UBlockyLoopScrollBase::GetItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.GetItems");

	UBlockyLoopScrollBase_GetItems_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UBlockyLoopScrollBase::GetItemCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.GetItemCount");

	UBlockyLoopScrollBase_GetItemCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UWidget* UBlockyLoopScrollBase::GetIndexOfWidget(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.GetIndexOfWidget");

	UBlockyLoopScrollBase_GetIndexOfWidget_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UBlockyLoopScrollBase::ChangeData(int Index, const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.ChangeData");

	UBlockyLoopScrollBase_ChangeData_Params params;
	params.Index = Index;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyLoopScrollBase::AutoSize(bool bAutoSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBase.AutoSize");

	UBlockyLoopScrollBase_AutoSize_Params params;
	params.bAutoSize = bAutoSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyLoopScrollBox::Tick(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBox.Tick");

	UBlockyLoopScrollBox_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyLoopScrollBox::ScrollToItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollBox.ScrollToItem");

	UBlockyLoopScrollBox_ScrollToItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyLoopScrollGrid::ScrollToItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLua.BlockyLoopScrollGrid.ScrollToItem");

	UBlockyLoopScrollGrid_ScrollToItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

