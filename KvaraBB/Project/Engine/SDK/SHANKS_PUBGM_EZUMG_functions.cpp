
 
#include "../SDK.hpp"

namespace SDK
{









float UEnhancedButton::GetCurrentHeldDuration()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EnhancedButton.GetCurrentHeldDuration");

	UEnhancedButton_GetCurrentHeldDuration_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UEnhancedButton::ForceCancel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EnhancedButton.ForceCancel");

	UEnhancedButton_ForceCancel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UEnhancedButton::ApplyConfig()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EnhancedButton.ApplyConfig");

	UEnhancedButton_ApplyConfig_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UEnhancedSlider::SetUnfilledBarColor(const struct FLinearColor& InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EnhancedSlider.SetUnfilledBarColor");

	UEnhancedSlider_SetUnfilledBarColor_Params params;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UEnhancedSlider::SetOnlyRespondToThumb(bool InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EnhancedSlider.SetOnlyRespondToThumb");

	UEnhancedSlider_SetOnlyRespondToThumb_Params params;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UEnhancedSlider::SetFilledBarColor(const struct FLinearColor& InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EnhancedSlider.SetFilledBarColor");

	UEnhancedSlider_SetFilledBarColor_Params params;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UEnhancedSlider::SetEnableSteppedSliding(bool InValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EnhancedSlider.SetEnableSteppedSliding");

	UEnhancedSlider_SetEnableSteppedSliding_Params params;
	params.InValue = InValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FLinearColor UEnhancedSlider::GetUnfilledBarColor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EnhancedSlider.GetUnfilledBarColor");

	UEnhancedSlider_GetUnfilledBarColor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UEnhancedSlider::GetOnlyRespondToThumb()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EnhancedSlider.GetOnlyRespondToThumb");

	UEnhancedSlider_GetOnlyRespondToThumb_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FLinearColor UEnhancedSlider::GetFilledBarColor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EnhancedSlider.GetFilledBarColor");

	UEnhancedSlider_GetFilledBarColor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UEnhancedSlider::GetEnableSteppedSliding()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EnhancedSlider.GetEnableSteppedSliding");

	UEnhancedSlider_GetEnableSteppedSliding_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










class UWidgetAnimation* UEzAnimationLibrary::DuplicateAnimWithRemap(class UUserWidget* OwningWidget, class UWidgetAnimation* Template, TMap<class UWidget*, class UWidget*> RemapTable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzAnimationLibrary.DuplicateAnimWithRemap");

	UEzAnimationLibrary_DuplicateAnimWithRemap_Params params;
	params.OwningWidget = OwningWidget;
	params.Template = Template;
	params.RemapTable = RemapTable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











class UWidgetAnimation* UEzAnimationLibrary::DuplicateAnimRebindTrack(class UUserWidget* OwningWidget, class UWidgetAnimation* Template, class UWidget* SourceWidget, class UWidget* TargetWidget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzAnimationLibrary.DuplicateAnimRebindTrack");

	UEzAnimationLibrary_DuplicateAnimRebindTrack_Params params;
	params.OwningWidget = OwningWidget;
	params.Template = Template;
	params.SourceWidget = SourceWidget;
	params.TargetWidget = TargetWidget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










class UWidgetAnimation* UEzAnimationLibrary::DuplicateAnimForWidget(class UUserWidget* OwningWidget, class UWidgetAnimation* Template, class UWidget* TargetWidget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzAnimationLibrary.DuplicateAnimForWidget");

	UEzAnimationLibrary_DuplicateAnimForWidget_Params params;
	params.OwningWidget = OwningWidget;
	params.Template = Template;
	params.TargetWidget = TargetWidget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UEzFactory::SetNum(int NumItems)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzFactory.SetNum");

	UEzFactory_SetNum_Params params;
	params.NumItems = NumItems;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UEzFactory::RemoveLastItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzFactory.RemoveLastItem");

	UEzFactory_RemoveLastItem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UEzFactory::GetFactoryItemCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzFactory.GetFactoryItemCount");

	UEzFactory_GetFactoryItemCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UWidget* UEzFactory::AddItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzFactory.AddItem");

	UEzFactory_AddItem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UEzSelectable::OnStateRefresh(EEzItemState NewState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzSelectable.OnStateRefresh");

	UEzSelectable_OnStateRefresh_Params params;
	params.NewState = NewState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UEzSelector::SetSelection(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzSelector.SetSelection");

	UEzSelector_SetSelection_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UEzSelector::SetSelectedIndex(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzSelector.SetSelectedIndex");

	UEzSelector_SetSelectedIndex_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UEzSelector::SetItemEnabled(int ItemIndex, bool bEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzSelector.SetItemEnabled");

	UEzSelector_SetItemEnabled_Params params;
	params.ItemIndex = ItemIndex;
	params.bEnabled = bEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UEzSelector::IsItemSelected(int ItemIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzSelector.IsItemSelected");

	UEzSelector_IsItemSelected_Params params;
	params.ItemIndex = ItemIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UEzSelector::IsItemEnabled(int ItemIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzSelector.IsItemEnabled");

	UEzSelector_IsItemEnabled_Params params;
	params.ItemIndex = ItemIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UEzSelector::GetSelectedIndices(TArray<int>* OutIndices)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzSelector.GetSelectedIndices");

	UEzSelector_GetSelectedIndices_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutIndices != nullptr)
		*OutIndices = params.OutIndices;
}







int UEzSelector::GetSelectedIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzSelector.GetSelectedIndex");

	UEzSelector_GetSelectedIndex_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UEzSelector::GetNumSelectedItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzSelector.GetNumSelectedItems");

	UEzSelector_GetNumSelectedItems_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








EEzItemState UEzSelector::GetItemState(int ItemIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzSelector.GetItemState");

	UEzSelector_GetItemState_Params params;
	params.ItemIndex = ItemIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UEzSelector::GetHoveredIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzSelector.GetHoveredIndex");

	UEzSelector_GetHoveredIndex_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UEzSelector::GetFocusedIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzSelector.GetFocusedIndex");

	UEzSelector_GetFocusedIndex_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UEzSelector::ForceSelection(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzSelector.ForceSelection");

	UEzSelector_ForceSelection_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UEzSelector::ClearSelection()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.EzSelector.ClearSelection");

	UEzSelector_ClearSelection_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void URadialPanel::SetStartAngleOffset(float InStartAngleOffset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialPanel.SetStartAngleOffset");

	URadialPanel_SetStartAngleOffset_Params params;
	params.InStartAngleOffset = InStartAngleOffset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void URadialPanel::SetSectorPadding(float InSectorPadding)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialPanel.SetSectorPadding");

	URadialPanel_SetSectorPadding_Params params;
	params.InSectorPadding = InSectorPadding;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void URadialPanel::SetArrangement(ERadialArrangement InArrangement)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialPanel.SetArrangement");

	URadialPanel_SetArrangement_Params params;
	params.InArrangement = InArrangement;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








float URadialPanel::GetAngleAtPosition(const struct FVector2D& LocalPosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialPanel.GetAngleAtPosition");

	URadialPanel_GetAngleAtPosition_Params params;
	params.LocalPosition = LocalPosition;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class URadialSlot* URadialSlot::SlotAsRadialSlot(class UWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialSlot.SlotAsRadialSlot");

	URadialSlot_SlotAsRadialSlot_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void URadialSlot::SetSectorSizeValue(float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialSlot.SetSectorSizeValue");

	URadialSlot_SetSectorSizeValue_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void URadialSlot::SetSectorSizeRule(TEnumAsByte<ESectorSizeRule> InRule)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialSlot.SetSectorSizeRule");

	URadialSlot_SetSectorSizeRule_Params params;
	params.InRule = InRule;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void URadialSlot::SetSectorColorAndOpacity(const struct FLinearColor& InTint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialSlot.SetSectorColorAndOpacity");

	URadialSlot_SetSectorColorAndOpacity_Params params;
	params.InTint = InTint;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void URadialSlot::SetSectorBrush(const struct FSlateBrush& InBrush)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialSlot.SetSectorBrush");

	URadialSlot_SetSectorBrush_Params params;
	params.InBrush = InBrush;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void URadialSlot::SetOuterRadiusRatio(float InOuterRadiusRatio)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialSlot.SetOuterRadiusRatio");

	URadialSlot_SetOuterRadiusRatio_Params params;
	params.InOuterRadiusRatio = InOuterRadiusRatio;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void URadialSlot::SetInnerRadiusRatio(float InInnerRadiusRatio)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialSlot.SetInnerRadiusRatio");

	URadialSlot_SetInnerRadiusRatio_Params params;
	params.InInnerRadiusRatio = InInnerRadiusRatio;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void URadialSlot::SetAutoSize(bool bInAutoSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialSlot.SetAutoSize");

	URadialSlot_SetAutoSize_Params params;
	params.bInAutoSize = bInAutoSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







float URadialSlot::GetCenterRadiusRatio()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialSlot.GetCenterRadiusRatio");

	URadialSlot_GetCenterRadiusRatio_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float URadialSlot::GetCenterAngle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialSlot.GetCenterAngle");

	URadialSlot_GetCenterAngle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float URadialSlot::GetArcSize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialSlot.GetArcSize");

	URadialSlot_GetArcSize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









int URadialSelector::GetChildIndexByVector(const struct FVector2D& CenterOffset, float DeadzoneLength)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialSelector.GetChildIndexByVector");

	URadialSelector_GetChildIndexByVector_Params params;
	params.CenterOffset = CenterOffset;
	params.DeadzoneLength = DeadzoneLength;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int URadialSelector::GetChildIndexByAngle(float Angle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialSelector.GetChildIndexByAngle");

	URadialSelector_GetChildIndexByAngle_Params params;
	params.Angle = Angle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int URadialSelector::GetChildIndexAtPosition(const struct FVector2D& LocalPosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.RadialSelector.GetChildIndexAtPosition");

	URadialSelector_GetChildIndexAtPosition_Params params;
	params.LocalPosition = LocalPosition;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UVerticalSelector::GetChildIndexAtPosition(const struct FVector2D& LocalPosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function EZUMG.VerticalSelector.GetChildIndexAtPosition");

	UVerticalSelector_GetChildIndexAtPosition_Params params;
	params.LocalPosition = LocalPosition;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

