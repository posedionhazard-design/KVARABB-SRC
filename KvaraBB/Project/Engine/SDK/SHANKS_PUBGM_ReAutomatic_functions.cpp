
 
#include "../SDK.hpp"

namespace SDK
{











bool UAutomaticCommonHelper::IsClassOf(class UObject* Object, class UClass* Class)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ReAutomatic.AutomaticCommonHelper.IsClassOf");

	UAutomaticCommonHelper_IsClassOf_Params params;
	params.Object = Object;
	params.Class = Class;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UAutomaticPlatformHelper::GetDeviceName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ReAutomatic.AutomaticPlatformHelper.GetDeviceName");

	UAutomaticPlatformHelper_GetDeviceName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UAutomaticUIHelper::IsWidgetVisibleWithUICondition(const struct FFindUICondition& Condition, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ReAutomatic.AutomaticUIHelper.IsWidgetVisibleWithUICondition");

	UAutomaticUIHelper_IsWidgetVisibleWithUICondition_Params params;
	params.Condition = Condition;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UAutomaticUIHelper::IsWidgetVisible(class UWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ReAutomatic.AutomaticUIHelper.IsWidgetVisible");

	UAutomaticUIHelper_IsWidgetVisible_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UAutomaticUIHelper::IsWidgetTextMatchRegex(class UWidget* Widget, const struct FString& Text)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ReAutomatic.AutomaticUIHelper.IsWidgetTextMatchRegex");

	UAutomaticUIHelper_IsWidgetTextMatchRegex_Params params;
	params.Widget = Widget;
	params.Text = Text;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UAutomaticUIHelper::IsWidgetMatchType(class UWidget* Widget, EUIType Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ReAutomatic.AutomaticUIHelper.IsWidgetMatchType");

	UAutomaticUIHelper_IsWidgetMatchType_Params params;
	params.Widget = Widget;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class UWidget* UAutomaticUIHelper::FindWidgetObjectWithUICondition(const struct FFindUICondition& Condition, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ReAutomatic.AutomaticUIHelper.FindWidgetObjectWithUICondition");

	UAutomaticUIHelper_FindWidgetObjectWithUICondition_Params params;
	params.Condition = Condition;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class UWidget* UAutomaticUIHelper::FindUWidgetObject(const struct FString& Name, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ReAutomatic.AutomaticUIHelper.FindUWidgetObject");

	UAutomaticUIHelper_FindUWidgetObject_Params params;
	params.Name = Name;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

