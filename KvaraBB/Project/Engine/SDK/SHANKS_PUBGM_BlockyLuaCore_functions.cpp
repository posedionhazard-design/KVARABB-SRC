
 
#include "../SDK.hpp"

namespace SDK
{









void UBlockBase::SetIsDisable(bool Disable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockBase.SetIsDisable");

	UBlockBase_SetIsDisable_Params params;
	params.Disable = Disable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









struct FString UBlockBase::MakeSequentialDisplayName(class UBlockyGraphData* GraphData, const struct FString& BaseName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockBase.MakeSequentialDisplayName");

	UBlockBase_MakeSequentialDisplayName_Params params;
	params.GraphData = GraphData;
	params.BaseName = BaseName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBlockBase::IsEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockBase.IsEvent");

	UBlockBase_IsEvent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FVector2D UBlockBase::GetCenterPos()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockBase.GetCenterPos");

	UBlockBase_GetCenterPos_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UBlockBase::AssignSequentialDisplayName(class UBlockyGraphData* GraphData, const struct FString& BaseName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockBase.AssignSequentialDisplayName");

	UBlockBase_AssignSequentialDisplayName_Params params;
	params.GraphData = GraphData;
	params.BaseName = BaseName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UExecuteable::SupportFuncVar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.Executeable.SupportFuncVar");

	UExecuteable_SupportFuncVar_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UExecuteable::ReEditFuncVar(class UNamedVar* var)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.Executeable.ReEditFuncVar");

	UExecuteable_ReEditFuncVar_Params params;
	params.var = var;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UExecuteable::DeleteFuncVar(class UNamedVar* var)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.Executeable.DeleteFuncVar");

	UExecuteable_DeleteFuncVar_Params params;
	params.var = var;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UExecuteable::CreateFuncVar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.Executeable.CreateFuncVar");

	UExecuteable_CreateFuncVar_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UExpressionBase::ReleaseExpression(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ExpressionBase.ReleaseExpression");

	UExpressionBase_ReleaseExpression_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FBlockyLuaHandle UExpressionBase::CreateExpressionBase()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ExpressionBase.CreateExpressionBase");

	UExpressionBase_CreateExpressionBase_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UArrayLengthExpression::SetTarget(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Target)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ArrayLengthExpression.SetTarget");

	UArrayLengthExpression_SetTarget_Params params;
	params.ptr = ptr;
	params.Target = Target;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FBlockyLuaHandle UArrayLengthExpression::GetTarget(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ArrayLengthExpression.GetTarget");

	UArrayLengthExpression_GetTarget_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FBlockyLuaHandle UArrayLengthExpression::CreateArrayLengthExpression()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ArrayLengthExpression.CreateArrayLengthExpression");

	UArrayLengthExpression_CreateArrayLengthExpression_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UNamedVar::UpdateColor(const struct FLinearColor& Color)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.UpdateColor");

	UNamedVar_UpdateColor_Params params;
	params.Color = Color;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UNamedVar::SetNameVarColor(const struct FLinearColor& Color)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.SetNameVarColor");

	UNamedVar_SetNameVarColor_Params params;
	params.Color = Color;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UNamedVar::SetIsArray(bool IsArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.SetIsArray");

	UNamedVar_SetIsArray_Params params;
	params.IsArray = IsArray;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UNamedVar::SetInitValueString(const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.SetInitValueString");

	UNamedVar_SetInitValueString_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UNamedVar::SetDefiner(class UVarDefiner* Definer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.SetDefiner");

	UNamedVar_SetDefiner_Params params;
	params.Definer = Definer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UNamedVar::SetAccessType(TEnumAsByte<EBlockyAccessType> Access)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.SetAccessType");

	UNamedVar_SetAccessType_Params params;
	params.Access = Access;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UNamedVar::IsGlobalVar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.IsGlobalVar");

	UNamedVar_IsGlobalVar_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UNamedVar::IsCustomColor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.IsCustomColor");

	UNamedVar_IsCustomColor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UNamedVar::IsArray()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.IsArray");

	UNamedVar_IsArray_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UNamedVar::InitColorDesc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.InitColorDesc");

	UNamedVar_InitColorDesc_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









class UColorDesc* UNamedVar::GetNameVarColorDesc(int idx, bool IsArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.GetNameVarColorDesc");

	UNamedVar_GetNameVarColorDesc_Params params;
	params.idx = idx;
	params.IsArray = IsArray;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FLinearColor UNamedVar::GetNameVarColor(int idx, bool IsArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.GetNameVarColor");

	UNamedVar_GetNameVarColor_Params params;
	params.idx = idx;
	params.IsArray = IsArray;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UNamedVar::GetInitValueString()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.GetInitValueString");

	UNamedVar_GetInitValueString_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UVarDefiner* UNamedVar::GetDefiner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.GetDefiner");

	UNamedVar_GetDefiner_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UNamedVar::GetColorStr(int idx, bool IsArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.GetColorStr");

	UNamedVar_GetColorStr_Params params;
	params.idx = idx;
	params.IsArray = IsArray;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TEnumAsByte<EBlockyAccessType> UNamedVar::GetAccessType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.GetAccessType");

	UNamedVar_GetAccessType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UNamedVar::CallCustomSelectObject(int idx, bool IsArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.CallCustomSelectObject");

	UNamedVar_CallCustomSelectObject_Params params;
	params.idx = idx;
	params.IsArray = IsArray;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UNamedVar::AddColorToArray()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NamedVar.AddColorToArray");

	UNamedVar_AddColorToArray_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBinaryOperatorExpression::SetWithParentheses(const struct FBlockyLuaHandle& ptr, bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BinaryOperatorExpression.SetWithParentheses");

	UBinaryOperatorExpression_SetWithParentheses_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBinaryOperatorExpression::SetRight(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BinaryOperatorExpression.SetRight");

	UBinaryOperatorExpression_SetRight_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBinaryOperatorExpression::SetOperation(const struct FBlockyLuaHandle& ptr, TEnumAsByte<EBlockyBinaryOperation> BlockyOp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BinaryOperatorExpression.SetOperation");

	UBinaryOperatorExpression_SetOperation_Params params;
	params.ptr = ptr;
	params.BlockyOp = BlockyOp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBinaryOperatorExpression::SetLeft(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BinaryOperatorExpression.SetLeft");

	UBinaryOperatorExpression_SetLeft_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UBinaryOperatorExpression::GetWithParentheses(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BinaryOperatorExpression.GetWithParentheses");

	UBinaryOperatorExpression_GetWithParentheses_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UBinaryOperatorExpression::GetRight(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BinaryOperatorExpression.GetRight");

	UBinaryOperatorExpression_GetRight_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TEnumAsByte<EBlockyBinaryOperation> UBinaryOperatorExpression::GetOperation(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BinaryOperatorExpression.GetOperation");

	UBinaryOperatorExpression_GetOperation_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UBinaryOperatorExpression::GetLeft(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BinaryOperatorExpression.GetLeft");

	UBinaryOperatorExpression_GetLeft_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FBlockyLuaHandle UBinaryOperatorExpression::CreateBinaryOperatorExpression()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BinaryOperatorExpression.CreateBinaryOperatorExpression");

	UBinaryOperatorExpression_CreateBinaryOperatorExpression_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UCategoryDefiner::GetCurrentLocateShowName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CategoryDefiner.GetCurrentLocateShowName");

	UCategoryDefiner_GetCurrentLocateShowName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyCategoryItemObject::SetShowRedDotVar(bool var)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyCategoryItemObject.SetShowRedDotVar");

	UBlockyCategoryItemObject_SetShowRedDotVar_Params params;
	params.var = var;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyCategoryItemObject::InitShowRedDotVar(const struct FString& BlockName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyCategoryItemObject.InitShowRedDotVar");

	UBlockyCategoryItemObject_InitShowRedDotVar_Params params;
	params.BlockName = BlockName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FSlateBrush UBlockyCategoryItemObject::GetSelectedIconBrush()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyCategoryItemObject.GetSelectedIconBrush");

	UBlockyCategoryItemObject_GetSelectedIconBrush_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UBlockyCategoryItemObject::GetNewBlockNums()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyCategoryItemObject.GetNewBlockNums");

	UBlockyCategoryItemObject_GetNewBlockNums_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FSlateBrush UBlockyCategoryItemObject::GetIconBrush()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyCategoryItemObject.GetIconBrush");

	UBlockyCategoryItemObject_GetIconBrush_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBlockyGraph::UpdateCustomBlockName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.UpdateCustomBlockName");

	UBlockyGraph_UpdateCustomBlockName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraph::TryAdjustingBlockIntoView(class UBlockyGraphData* GraphData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.TryAdjustingBlockIntoView");

	UBlockyGraph_TryAdjustingBlockIntoView_Params params;
	params.GraphData = GraphData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraph::SetIsDisable(bool Disable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.SetIsDisable");

	UBlockyGraph_SetIsDisable_Params params;
	params.Disable = Disable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyGraph::SaveGraphToFile(const struct FString& Filename, bool IsNewFile)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.SaveGraphToFile");

	UBlockyGraph_SaveGraphToFile_Params params;
	params.Filename = Filename;
	params.IsNewFile = IsNewFile;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UBlockyGraph::SaveGraphAsTemplate(class UCustomConfig* CustomConfig, TArray<unsigned char>* OutData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.SaveGraphAsTemplate");

	UBlockyGraph_SaveGraphAsTemplate_Params params;
	params.CustomConfig = CustomConfig;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutData != nullptr)
		*OutData = params.OutData;

	return params.ReturnValue;
}








bool UBlockyGraph::SaveCsutomGraphAsTemplate(TArray<unsigned char>* OutData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.SaveCsutomGraphAsTemplate");

	UBlockyGraph_SaveCsutomGraphAsTemplate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutData != nullptr)
		*OutData = params.OutData;

	return params.ReturnValue;
}








void UBlockyGraph::LoadGraphFromTemplate(TArray<unsigned char> Data, bool IsLoadPresetsInGraph)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.LoadGraphFromTemplate");

	UBlockyGraph_LoadGraphFromTemplate_Params params;
	params.Data = Data;
	params.IsLoadPresetsInGraph = IsLoadPresetsInGraph;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UBlockyGraph::IsCustomTemplateGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.IsCustomTemplateGraph");

	UBlockyGraph_IsCustomTemplateGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBlockyGraph::IsCustomGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.IsCustomGraph");

	UBlockyGraph_IsCustomGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBlockyGraph::IsBasicTemplateGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.IsBasicTemplateGraph");

	UBlockyGraph_IsBasicTemplateGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<class UBlockBase*> UBlockyGraph::GetTriggerItemsByRootBlocks()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.GetTriggerItemsByRootBlocks");

	UBlockyGraph_GetTriggerItemsByRootBlocks_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UBlockyGraph::GetTotalBlockNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.GetTotalBlockNum");

	UBlockyGraph_GetTotalBlockNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class UTexture2D* UBlockyGraph::CaptureScreenWithShot(class UUserWidget* Widget, const struct FVector2D& rect)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.CaptureScreenWithShot");

	UBlockyGraph_CaptureScreenWithShot_Params params;
	params.Widget = Widget;
	params.rect = rect;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyGraph::CaptureScreenShot(class UUserWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.CaptureScreenShot");

	UBlockyGraph_CaptureScreenShot_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UBlockyGraph::CanSaveAsTemplate(struct FString* OutFailedReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.CanSaveAsTemplate");

	UBlockyGraph_CanSaveAsTemplate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutFailedReason != nullptr)
		*OutFailedReason = params.OutFailedReason;

	return params.ReturnValue;
}








bool UBlockyGraph::CanBeRemove(class UBlockyGraphData* GraphData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.CanBeRemove");

	UBlockyGraph_CanBeRemove_Params params;
	params.GraphData = GraphData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBlockyGraph::CanBeDuplicated()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.CanBeDuplicated");

	UBlockyGraph_CanBeDuplicated_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UBlockyGraph::AssignSequentialDisplayName(class UBlockyGraphData* GraphData, const struct FString& BaseName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraph.AssignSequentialDisplayName");

	UBlockyGraph_AssignSequentialDisplayName_Params params;
	params.GraphData = GraphData;
	params.BaseName = BaseName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphData::UseTemplate(class UBlockyGraph* templateGraph)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.UseTemplate");

	UBlockyGraphData_UseTemplate_Params params;
	params.templateGraph = templateGraph;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::UpdateVariableMenu()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.UpdateVariableMenu");

	UBlockyGraphData_UpdateVariableMenu_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







TArray<struct FText> UBlockyGraphData::UpdateVariableItemNames()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.UpdateVariableItemNames");

	UBlockyGraphData_UpdateVariableItemNames_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBlockyGraphData::UpdateCustomMenu()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.UpdateCustomMenu");

	UBlockyGraphData_UpdateCustomMenu_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







TArray<struct FText> UBlockyGraphData::UpdateCustomItemNames()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.UpdateCustomItemNames");

	UBlockyGraphData_UpdateCustomItemNames_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBlockyGraphData::UpdateAllPresetInGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.UpdateAllPresetInGraph");

	UBlockyGraphData_UpdateAllPresetInGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::UpdateAfterLoadBin()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.UpdateAfterLoadBin");

	UBlockyGraphData_UpdateAfterLoadBin_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::Undo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.Undo");

	UBlockyGraphData_Undo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::TryCloseItemList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.TryCloseItemList");

	UBlockyGraphData_TryCloseItemList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphData::ShowTips(const struct FText& Tips)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.ShowTips");

	UBlockyGraphData_ShowTips_Params params;
	params.Tips = Tips;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::ShowBlockSettingPop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.ShowBlockSettingPop");

	UBlockyGraphData_ShowBlockSettingPop_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphData::SetSlotString(const struct FBlockySlotString& slotStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.SetSlotString");

	UBlockyGraphData_SetSlotString_Params params;
	params.slotStr = slotStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphData::SetGraphStrings(const struct FGraphString& graphStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.SetGraphStrings");

	UBlockyGraphData_SetGraphStrings_Params params;
	params.graphStr = graphStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphData::SetCustomVariableString(const struct FCustomVariableString& variableStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.SetCustomVariableString");

	UBlockyGraphData_SetCustomVariableString_Params params;
	params.variableStr = variableStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphData::SetCustomConfigString(const struct FCustomConfigString& configStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.SetCustomConfigString");

	UBlockyGraphData_SetCustomConfigString_Params params;
	params.configStr = configStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphData::SetCurrentSubGraph(const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.SetCurrentSubGraph");

	UBlockyGraphData_SetCurrentSubGraph_Params params;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphData::SetCacheData(TMap<struct FString, struct FString> Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.SetCacheData");

	UBlockyGraphData_SetCacheData_Params params;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UBlockyGraphData::SetBlockLogText(EBlockyLogMsgMode Mode, class UBlockBase* BlockSource, const struct FString& SlotID, const struct FString& Info)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.SetBlockLogText");

	UBlockyGraphData_SetBlockLogText_Params params;
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








void UBlockyGraphData::SetBlockLogTabNum(int Mode, int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.SetBlockLogTabNum");

	UBlockyGraphData_SetBlockLogTabNum_Params params;
	params.Mode = Mode;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyGraphData::SetBlockLogNum(int Mode, int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.SetBlockLogNum");

	UBlockyGraphData_SetBlockLogNum_Params params;
	params.Mode = Mode;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FString UBlockyGraphData::SaveGraphToJsonText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.SaveGraphToJsonText");

	UBlockyGraphData_SaveGraphToJsonText_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyGraphData::SaveGraphToBinFile(const struct FString& FilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.SaveGraphToBinFile");

	UBlockyGraphData_SaveGraphToBinFile_Params params;
	params.FilePath = FilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







TArray<unsigned char> UBlockyGraphData::SaveGraphToBin()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.SaveGraphToBin");

	UBlockyGraphData_SaveGraphToBin_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UBlockyGraphData::SaveGlobalVarToJsonText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.SaveGlobalVarToJsonText");

	UBlockyGraphData_SaveGlobalVarToJsonText_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<unsigned char> UBlockyGraphData::SaveGlobalVarToBin()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.SaveGlobalVarToBin");

	UBlockyGraphData_SaveGlobalVarToBin_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBlockyGraphData::SaveCustom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.SaveCustom");

	UBlockyGraphData_SaveCustom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::Save()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.Save");

	UBlockyGraphData_Save_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::ReturnToPreviewGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.ReturnToPreviewGraph");

	UBlockyGraphData_ReturnToPreviewGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::ReturnToMainGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.ReturnToMainGraph");

	UBlockyGraphData_ReturnToMainGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::ResetGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.ResetGraph");

	UBlockyGraphData_ResetGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphData::RemoveSubGraph(const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.RemoveSubGraph");

	UBlockyGraphData_RemoveSubGraph_Params params;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::RefreshFont()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.RefreshFont");

	UBlockyGraphData_RefreshFont_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphData::ReEditVariable(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.ReEditVariable");

	UBlockyGraphData_ReEditVariable_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::Redo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.Redo");

	UBlockyGraphData_Redo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphData::QuoteVariable(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.QuoteVariable");

	UBlockyGraphData_QuoteVariable_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::QuoteCustom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.QuoteCustom");

	UBlockyGraphData_QuoteCustom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::Quote()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.Quote");

	UBlockyGraphData_Quote_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::Paste()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.Paste");

	UBlockyGraphData_Paste_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::OpenGuideWebUrl()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.OpenGuideWebUrl");

	UBlockyGraphData_OpenGuideWebUrl_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::OnLoadFinished()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.OnLoadFinished");

	UBlockyGraphData_OnLoadFinished_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::MarkGraphDirty()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.MarkGraphDirty");

	UBlockyGraphData_MarkGraphDirty_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FString UBlockyGraphData::MakeSequentialDisplayName(const struct FString& BaseName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.MakeSequentialDisplayName");

	UBlockyGraphData_MakeSequentialDisplayName_Params params;
	params.BaseName = BaseName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyGraphData::LoadGraphFromJsonText(const struct FString& JsonStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.LoadGraphFromJsonText");

	UBlockyGraphData_LoadGraphFromJsonText_Params params;
	params.JsonStr = JsonStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphData::LoadGraphFromBinFile(const struct FString& FilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.LoadGraphFromBinFile");

	UBlockyGraphData_LoadGraphFromBinFile_Params params;
	params.FilePath = FilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphData::LoadGlobalVarFromJsonText(const struct FString& JsonStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.LoadGlobalVarFromJsonText");

	UBlockyGraphData_LoadGlobalVarFromJsonText_Params params;
	params.JsonStr = JsonStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::LoadByTicker()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.LoadByTicker");

	UBlockyGraphData_LoadByTicker_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::Load()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.Load");

	UBlockyGraphData_Load_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









class UBlockBase* UBlockyGraphData::JumpToFocusSlotByIdStrAndIdx(const struct FString& blockId, unsigned char idx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.JumpToFocusSlotByIdStrAndIdx");

	UBlockyGraphData_JumpToFocusSlotByIdStrAndIdx_Params params;
	params.blockId = blockId;
	params.idx = idx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class UBlockBase* UBlockyGraphData::JumpToFocusSlotByIdStr(const struct FString& blockId, const struct FString& TargetSlotIdStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.JumpToFocusSlotByIdStr");

	UBlockyGraphData_JumpToFocusSlotByIdStr_Params params;
	params.blockId = blockId;
	params.TargetSlotIdStr = TargetSlotIdStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UBlockBase* UBlockyGraphData::JumpToFocusBlockByIdStr(const struct FString& blockId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.JumpToFocusBlockByIdStr");

	UBlockyGraphData_JumpToFocusBlockByIdStr_Params params;
	params.blockId = blockId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBlockyGraphData::ItemHasOpend(const struct FString& ItemStringName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.ItemHasOpend");

	UBlockyGraphData_ItemHasOpend_Params params;
	params.ItemStringName = ItemStringName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBlockyGraphData::IsStagedCanvasLoadInProgress()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.IsStagedCanvasLoadInProgress");

	UBlockyGraphData_IsStagedCanvasLoadInProgress_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBlockyGraphData::IsGraphChanged()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.IsGraphChanged");

	UBlockyGraphData_IsGraphChanged_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBlockyGraphData::IsFirstGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.IsFirstGraph");

	UBlockyGraphData_IsFirstGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBlockyGraphData::IsBlockGuideButton()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.IsBlockGuideButton");

	UBlockyGraphData_IsBlockGuideButton_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBlockyGraphData::HasExecutableCode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.HasExecutableCode");

	UBlockyGraphData_HasExecutableCode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UBlockyGraphData::GM_LoadGraph_DS_FromFiles(const struct FString& GraphFilePath, const struct FString& GlobalVarsFilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GM_LoadGraph_DS_FromFiles");

	UBlockyGraphData_GM_LoadGraph_DS_FromFiles_Params params;
	params.GraphFilePath = GraphFilePath;
	params.GlobalVarsFilePath = GlobalVarsFilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBlockyGraphData::GM_LoadGraph_DS()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GM_LoadGraph_DS");

	UBlockyGraphData_GM_LoadGraph_DS_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyGraphData::GM_GenerateAllBlocks(int CombinedBlocksNum, int GraphBlocksNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GM_GenerateAllBlocks");

	UBlockyGraphData_GM_GenerateAllBlocks_Params params;
	params.CombinedBlocksNum = CombinedBlocksNum;
	params.GraphBlocksNum = GraphBlocksNum;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







TArray<struct FString> UBlockyGraphData::GetTriggerList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetTriggerList");

	UBlockyGraphData_GetTriggerList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<struct FString> UBlockyGraphData::GetTLogType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetTLogType");

	UBlockyGraphData_GetTLogType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TMap<struct FString, struct FString> UBlockyGraphData::GetTLog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetTLog");

	UBlockyGraphData_GetTLog_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UBlockyGraphData::GetSelectedBlockId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetSelectedBlockId");

	UBlockyGraphData_GetSelectedBlockId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<class UBlockBase*> UBlockyGraphData::GetQuoteVariableItem(class UBlockyGraph* Graph)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetQuoteVariableItem");

	UBlockyGraphData_GetQuoteVariableItem_Params params;
	params.Graph = Graph;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<class UBlockyGraph*> UBlockyGraphData::GetQuoteVariableGraph(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetQuoteVariableGraph");

	UBlockyGraphData_GetQuoteVariableGraph_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<class UPresetDesc*> UBlockyGraphData::GetPresetDescArray(bool LocalOnly)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetPresetDescArray");

	UBlockyGraphData_GetPresetDescArray_Params params;
	params.LocalOnly = LocalOnly;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UBlockyGraphData::GetNewBlocksNumWithMenu(const struct FString& menuItemName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetNewBlocksNumWithMenu");

	UBlockyGraphData_GetNewBlocksNumWithMenu_Params params;
	params.menuItemName = menuItemName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBlockyGraphData::GetIsDisableComment()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetIsDisableComment");

	UBlockyGraphData_GetIsDisableComment_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<struct FGraphString> UBlockyGraphData::GetGraphStrings()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetGraphStrings");

	UBlockyGraphData_GetGraphStrings_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TMap<struct FString, struct FString> UBlockyGraphData::GetGraphMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetGraphMap");

	UBlockyGraphData_GetGraphMap_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<class UFunctionDesc*> UBlockyGraphData::GetFunctionDescArray()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetFunctionDescArray");

	UBlockyGraphData_GetFunctionDescArray_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyGraphData::GetDeleteBlockUIRect(float InRectWidth)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetDeleteBlockUIRect");

	UBlockyGraphData_GetDeleteBlockUIRect_Params params;
	params.InRectWidth = InRectWidth;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







TArray<struct FCustomVariableString> UBlockyGraphData::GetCustomVariableStrings()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetCustomVariableStrings");

	UBlockyGraphData_GetCustomVariableStrings_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<struct FText> UBlockyGraphData::GetCustomNames()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetCustomNames");

	UBlockyGraphData_GetCustomNames_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<class UCustomConfig*> UBlockyGraphData::GetCustomEventConfigs(bool isCloudGameEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetCustomEventConfigs");

	UBlockyGraphData_GetCustomEventConfigs_Params params;
	params.isCloudGameEvent = isCloudGameEvent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<struct FCustomConfigString> UBlockyGraphData::GetCustomConfigStrings()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetCustomConfigStrings");

	UBlockyGraphData_GetCustomConfigStrings_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UBlockyGraphData::GetCurrentGraphBlockyNumberByType(EBlockyCurrentGraphBlockyNumberType Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetCurrentGraphBlockyNumberByType");

	UBlockyGraphData_GetCurrentGraphBlockyNumberByType_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UBlockyGraph* UBlockyGraphData::GetCurrentGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetCurrentGraph");

	UBlockyGraphData_GetCurrentGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









int UBlockyGraphData::GetCurrentBlockyNumByMune(const struct FString& Menu, const struct FString& Category)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetCurrentBlockyNumByMune");

	UBlockyGraphData_GetCurrentBlockyNumByMune_Params params;
	params.Menu = Menu;
	params.Category = Category;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TMap<struct FString, struct FString> UBlockyGraphData::GetCacheData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetCacheData");

	UBlockyGraphData_GetCacheData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UBlockyGraphData::GetBlockyStringDatasInPairWithBlocks(TArray<struct FBlockySlotString>* OutSlotStrings, TArray<class UBlockBase*>* OutBlocks)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetBlockyStringDatasInPairWithBlocks");

	UBlockyGraphData_GetBlockyStringDatasInPairWithBlocks_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutSlotStrings != nullptr)
		*OutSlotStrings = params.OutSlotStrings;
	if (OutBlocks != nullptr)
		*OutBlocks = params.OutBlocks;
}







TArray<struct FBlockySlotString> UBlockyGraphData::GetBlockyStringDatasInPair()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetBlockyStringDatasInPair");

	UBlockyGraphData_GetBlockyStringDatasInPair_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<class UBlockBase*> UBlockyGraphData::GetBlocks()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetBlocks");

	UBlockyGraphData_GetBlocks_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<class UBlockBase*> UBlockyGraphData::GetAllBlockyInGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetAllBlockyInGraph");

	UBlockyGraphData_GetAllBlockyInGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<struct FString> UBlockyGraphData::GetAllBlockIdStrings()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetAllBlockIdStrings");

	UBlockyGraphData_GetAllBlockIdStrings_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TMap<struct FString, int> UBlockyGraphData::GetAllBlockByKeyName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.GetAllBlockByKeyName");

	UBlockyGraphData_GetAllBlockByKeyName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UBlockBase* UBlockyGraphData::FocusToSlotByBlockySlotId(const struct FBlockySlotString& SlotID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.FocusToSlotByBlockySlotId");

	UBlockyGraphData_FocusToSlotByBlockySlotId_Params params;
	params.SlotID = SlotID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UBlockyGraphData::FocusToSlot(class UBlockBase* TargetBlock, const struct FString& TargetSlotIdStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.FocusToSlot");

	UBlockyGraphData_FocusToSlot_Params params;
	params.TargetBlock = TargetBlock;
	params.TargetSlotIdStr = TargetSlotIdStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphData::FocusTo(class UBlockBase* TargetBlock)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.FocusTo");

	UBlockyGraphData_FocusTo_Params params;
	params.TargetBlock = TargetBlock;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyGraphData::FinishVariableEdit(bool bSaveVar, bool bReEdit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.FinishVariableEdit");

	UBlockyGraphData_FinishVariableEdit_Params params;
	params.bSaveVar = bSaveVar;
	params.bReEdit = bReEdit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphData::FinishCustomEdit(bool bSave)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.FinishCustomEdit");

	UBlockyGraphData_FinishCustomEdit_Params params;
	params.bSave = bSave;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphData::FinishBlockSetting(bool bSaveVar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.FinishBlockSetting");

	UBlockyGraphData_FinishBlockSetting_Params params;
	params.bSaveVar = bSaveVar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class UBlockBase* UBlockyGraphData::FindBlockByIdStr(const struct FString& blockId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.FindBlockByIdStr");

	UBlockyGraphData_FindBlockByIdStr_Params params;
	params.blockId = blockId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBlockyGraphData::EmptyListItemSeleceted()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.EmptyListItemSeleceted");

	UBlockyGraphData_EmptyListItemSeleceted_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::Eject()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.Eject");

	UBlockyGraphData_Eject_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::EditVariable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.EditVariable");

	UBlockyGraphData_EditVariable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::EditCustumBlockGraph()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.EditCustumBlockGraph");

	UBlockyGraphData_EditCustumBlockGraph_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::EditCustom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.EditCustom");

	UBlockyGraphData_EditCustom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphData::DuplicateSubGraph(const struct FString& SrcName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.DuplicateSubGraph");

	UBlockyGraphData_DuplicateSubGraph_Params params;
	params.SrcName = SrcName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphData::DuplicateBlock(class UBlockBase* bLock)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.DuplicateBlock");

	UBlockyGraphData_DuplicateBlock_Params params;
	params.bLock = bLock;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::Disable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.Disable");

	UBlockyGraphData_Disable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphData::DeleteVariableListItem(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.DeleteVariableListItem");

	UBlockyGraphData_DeleteVariableListItem_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::DeleteSelected()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.DeleteSelected");

	UBlockyGraphData_DeleteSelected_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::DeleteCustom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.DeleteCustom");

	UBlockyGraphData_DeleteCustom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::DeleteBlocks()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.DeleteBlocks");

	UBlockyGraphData_DeleteBlocks_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyGraphData::DeleteBlockInGraph(class UBlockyGraph* InGraph, class UBlockBase* bLock)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.DeleteBlockInGraph");

	UBlockyGraphData_DeleteBlockInGraph_Params params;
	params.InGraph = InGraph;
	params.bLock = bLock;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyGraphData::DeleteBlockAndNextInGraph(class UBlockyGraph* InGraph, class UBlockBase* bLock)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.DeleteBlockAndNextInGraph");

	UBlockyGraphData_DeleteBlockAndNextInGraph_Params params;
	params.InGraph = InGraph;
	params.bLock = bLock;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphData::DeleteBlockAndNext(class UBlockBase* bLock)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.DeleteBlockAndNext");

	UBlockyGraphData_DeleteBlockAndNext_Params params;
	params.bLock = bLock;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyGraphData::DeleteBlock(class UBlockBase* bLock)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.DeleteBlock");

	UBlockyGraphData_DeleteBlock_Params params;
	params.bLock = bLock;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::DefineCustom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.DefineCustom");

	UBlockyGraphData_DefineCustom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::Define()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.Define");

	UBlockyGraphData_Define_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








int UBlockyGraphData::CustomNumByType(TEnumAsByte<ECustomBlockType> CustomType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.CustomNumByType");

	UBlockyGraphData_CustomNumByType_Params params;
	params.CustomType = CustomType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<class UBlockyGraph*> UBlockyGraphData::CurSelectSubBlockyGraphs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.CurSelectSubBlockyGraphs");

	UBlockyGraphData_CurSelectSubBlockyGraphs_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBlockyGraphData::Copy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.Copy");

	UBlockyGraphData_Copy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::Comment()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.Comment");

	UBlockyGraphData_Comment_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::Clone()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.Clone");

	UBlockyGraphData_Clone_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::ClearUndoRedoDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.ClearUndoRedoDatas");

	UBlockyGraphData_ClearUndoRedoDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::ClearTextSizeCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.ClearTextSizeCache");

	UBlockyGraphData_ClearTextSizeCache_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::ClearGraphDirty()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.ClearGraphDirty");

	UBlockyGraphData_ClearGraphDirty_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyGraphData::ClearBlockLog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.ClearBlockLog");

	UBlockyGraphData_ClearBlockLog_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UBlockyGraphData::CheckReports()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.CheckReports");

	UBlockyGraphData_CheckReports_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UBlockyGraphData::AsyncLoadGraphFromBinFile(const struct FString& FilePath, const struct FScriptDelegate& Callback)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.AsyncLoadGraphFromBinFile");

	UBlockyGraphData_AsyncLoadGraphFromBinFile_Params params;
	params.FilePath = FilePath;
	params.Callback = Callback;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









struct FString UBlockyGraphData::AddSubGraph(const struct FString& InName, const struct FString& InType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.AddSubGraph");

	UBlockyGraphData_AddSubGraph_Params params;
	params.InName = InName;
	params.InType = InType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyGraphData::AddOpendNameToArr(const struct FString& ItemStringName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.AddOpendNameToArr");

	UBlockyGraphData_AddOpendNameToArr_Params params;
	params.ItemStringName = ItemStringName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









class UBlockyGraph* UBlockyGraphData::AddGraph(const struct FString& InName, const struct FString& InType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.AddGraph");

	UBlockyGraphData_AddGraph_Params params;
	params.InName = InName;
	params.InType = InType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBlockyGraphData::AddGlobalComment()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyGraphData.AddGlobalComment");

	UBlockyGraphData_AddGlobalComment_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyLuaConfig::SetCustomDefaultFont(struct FSlateFontInfo* DefaultFont)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaConfig.SetCustomDefaultFont");

	UBlockyLuaConfig_SetCustomDefaultFont_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DefaultFont != nullptr)
		*DefaultFont = params.DefaultFont;
}








struct FString UBlockyLuaConfig::ReplaceChCharToMaskChar(const struct FString& Source)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaConfig.ReplaceChCharToMaskChar");

	UBlockyLuaConfig_ReplaceChCharToMaskChar_Params params;
	params.Source = Source;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyLuaConfig::PlayPresetSound(const struct FString& SoundPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaConfig.PlayPresetSound");

	UBlockyLuaConfig_PlayPresetSound_Params params;
	params.SoundPath = SoundPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UBlockyLuaConfig::IsNameStringValid(const struct FString& NameString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaConfig.IsNameStringValid");

	UBlockyLuaConfig_IsNameStringValid_Params params;
	params.NameString = NameString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBlockyLuaConfig::IsBlackboardVar(class UVarDefiner* Definer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaConfig.IsBlackboardVar");

	UBlockyLuaConfig_IsBlackboardVar_Params params;
	params.Definer = Definer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UBlockyLuaConfig::GetValidString(const struct FString& CheckString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaConfig.GetValidString");

	UBlockyLuaConfig_GetValidString_Params params;
	params.CheckString = CheckString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UBlockyLuaConfig::GetTranslateStringTest(const struct FString& KeyString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaConfig.GetTranslateStringTest");

	UBlockyLuaConfig_GetTranslateStringTest_Params params;
	params.KeyString = KeyString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UBlockyLuaConfig::GetTranslateString(const struct FString& KeyString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaConfig.GetTranslateString");

	UBlockyLuaConfig_GetTranslateString_Params params;
	params.KeyString = KeyString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UBlockyLuaConfig::GetLocaleString(const struct FString& KeyString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaConfig.GetLocaleString");

	UBlockyLuaConfig_GetLocaleString_Params params;
	params.KeyString = KeyString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UBlackboardDefiner* UBlockyLuaConfig::GetBlackboardDefiner(class UVarDefiner* Definer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaConfig.GetBlackboardDefiner");

	UBlockyLuaConfig_GetBlackboardDefiner_Params params;
	params.Definer = Definer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBlockyLuaConfig::ClearCustomDefaultFont()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaConfig.ClearCustomDefaultFont");

	UBlockyLuaConfig_ClearCustomDefaultFont_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyLuaConfig::ClearAsyncTextureHandleMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaConfig.ClearAsyncTextureHandleMap");

	UBlockyLuaConfig_ClearAsyncTextureHandleMap_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyLuaConfig::CheckStringValidTest(const struct FString& CheckString, const struct FCheckStringHandleData& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaConfig.CheckStringValidTest");

	UBlockyLuaConfig_CheckStringValidTest_Params params;
	params.CheckString = CheckString;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyLuaUtility::WriteUInt8(const struct FBlockyLuaHandle& ar, unsigned char Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.WriteUInt8");

	UBlockyLuaUtility_WriteUInt8_Params params;
	params.ar = ar;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyLuaUtility::WriteUInt64(const struct FBlockyLuaHandle& ar, uint64_t Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.WriteUInt64");

	UBlockyLuaUtility_WriteUInt64_Params params;
	params.ar = ar;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyLuaUtility::WriteUInt32(const struct FBlockyLuaHandle& ar, uint32_t Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.WriteUInt32");

	UBlockyLuaUtility_WriteUInt32_Params params;
	params.ar = ar;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyLuaUtility::WriteUInt16(const struct FBlockyLuaHandle& ar, uint16_t Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.WriteUInt16");

	UBlockyLuaUtility_WriteUInt16_Params params;
	params.ar = ar;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyLuaUtility::WriteString(const struct FBlockyLuaHandle& ar, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.WriteString");

	UBlockyLuaUtility_WriteString_Params params;
	params.ar = ar;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyLuaUtility::WriteSingle(const struct FBlockyLuaHandle& ar, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.WriteSingle");

	UBlockyLuaUtility_WriteSingle_Params params;
	params.ar = ar;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyLuaUtility::WriteObjectPtr(const struct FBlockyLuaHandle& ar, class UObject* Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.WriteObjectPtr");

	UBlockyLuaUtility_WriteObjectPtr_Params params;
	params.ar = ar;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyLuaUtility::WriteInt8(const struct FBlockyLuaHandle& ar, int8_t Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.WriteInt8");

	UBlockyLuaUtility_WriteInt8_Params params;
	params.ar = ar;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyLuaUtility::WriteInt64(const struct FBlockyLuaHandle& ar, int64_t Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.WriteInt64");

	UBlockyLuaUtility_WriteInt64_Params params;
	params.ar = ar;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyLuaUtility::WriteInt32(const struct FBlockyLuaHandle& ar, int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.WriteInt32");

	UBlockyLuaUtility_WriteInt32_Params params;
	params.ar = ar;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyLuaUtility::WriteInt16(const struct FBlockyLuaHandle& ar, int16_t Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.WriteInt16");

	UBlockyLuaUtility_WriteInt16_Params params;
	params.ar = ar;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyLuaUtility::WriteHandle(const struct FBlockyLuaHandle& ar, const struct FBlockyLuaHandle& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.WriteHandle");

	UBlockyLuaUtility_WriteHandle_Params params;
	params.ar = ar;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyLuaUtility::WriteDouble(const struct FBlockyLuaHandle& ar, double Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.WriteDouble");

	UBlockyLuaUtility_WriteDouble_Params params;
	params.ar = ar;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBlockyLuaUtility::WriteBool(const struct FBlockyLuaHandle& ar, bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.WriteBool");

	UBlockyLuaUtility_WriteBool_Params params;
	params.ar = ar;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








unsigned char UBlockyLuaUtility::ReadUInt8(const struct FBlockyLuaHandle& ar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.ReadUInt8");

	UBlockyLuaUtility_ReadUInt8_Params params;
	params.ar = ar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








uint64_t UBlockyLuaUtility::ReadUInt64(const struct FBlockyLuaHandle& ar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.ReadUInt64");

	UBlockyLuaUtility_ReadUInt64_Params params;
	params.ar = ar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








uint32_t UBlockyLuaUtility::ReadUInt32(const struct FBlockyLuaHandle& ar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.ReadUInt32");

	UBlockyLuaUtility_ReadUInt32_Params params;
	params.ar = ar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








uint16_t UBlockyLuaUtility::ReadUInt16(const struct FBlockyLuaHandle& ar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.ReadUInt16");

	UBlockyLuaUtility_ReadUInt16_Params params;
	params.ar = ar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UBlockyLuaUtility::ReadString(const struct FBlockyLuaHandle& ar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.ReadString");

	UBlockyLuaUtility_ReadString_Params params;
	params.ar = ar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








float UBlockyLuaUtility::ReadSingle(const struct FBlockyLuaHandle& ar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.ReadSingle");

	UBlockyLuaUtility_ReadSingle_Params params;
	params.ar = ar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UObject* UBlockyLuaUtility::ReadObjectPtr(const struct FBlockyLuaHandle& ar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.ReadObjectPtr");

	UBlockyLuaUtility_ReadObjectPtr_Params params;
	params.ar = ar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int8_t UBlockyLuaUtility::ReadInt8(const struct FBlockyLuaHandle& ar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.ReadInt8");

	UBlockyLuaUtility_ReadInt8_Params params;
	params.ar = ar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int64_t UBlockyLuaUtility::ReadInt64(const struct FBlockyLuaHandle& ar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.ReadInt64");

	UBlockyLuaUtility_ReadInt64_Params params;
	params.ar = ar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UBlockyLuaUtility::ReadInt32(const struct FBlockyLuaHandle& ar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.ReadInt32");

	UBlockyLuaUtility_ReadInt32_Params params;
	params.ar = ar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int16_t UBlockyLuaUtility::ReadInt16(const struct FBlockyLuaHandle& ar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.ReadInt16");

	UBlockyLuaUtility_ReadInt16_Params params;
	params.ar = ar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UBlockyLuaUtility::ReadHandle(const struct FBlockyLuaHandle& ar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.ReadHandle");

	UBlockyLuaUtility_ReadHandle_Params params;
	params.ar = ar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








double UBlockyLuaUtility::ReadDouble(const struct FBlockyLuaHandle& ar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.ReadDouble");

	UBlockyLuaUtility_ReadDouble_Params params;
	params.ar = ar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBlockyLuaUtility::ReadBool(const struct FBlockyLuaHandle& ar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.ReadBool");

	UBlockyLuaUtility_ReadBool_Params params;
	params.ar = ar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyLuaUtility::DestroyReturnWriter(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.DestroyReturnWriter");

	UBlockyLuaUtility_DestroyReturnWriter_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyLuaUtility::DestroyArgumentsReader(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.DestroyArgumentsReader");

	UBlockyLuaUtility_DestroyArgumentsReader_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FBlockyLuaHandle UBlockyLuaUtility::CreateReturnWriter(const struct FBlockyLuaHandle& stubHandle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.CreateReturnWriter");

	UBlockyLuaUtility_CreateReturnWriter_Params params;
	params.stubHandle = stubHandle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UBlockyLuaUtility::CreateArgumentsReader(const struct FBlockyLuaHandle& stubHandle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyLuaUtility.CreateArgumentsReader");

	UBlockyLuaUtility_CreateArgumentsReader_Params params;
	params.stubHandle = stubHandle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyMenuItemObject::SetShowRedDotVar(bool var)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyMenuItemObject.SetShowRedDotVar");

	UBlockyMenuItemObject_SetShowRedDotVar_Params params;
	params.var = var;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyMenuItemObject::InitShowRedDotVar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyMenuItemObject.InitShowRedDotVar");

	UBlockyMenuItemObject_InitShowRedDotVar_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyMenuItemObject_Custom::NewCustom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyMenuItemObject_Custom.NewCustom");

	UBlockyMenuItemObject_Custom_NewCustom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UBlockyMenuItemObject_Custom::IsCurrentCategoryEmpty()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyMenuItemObject_Custom.IsCurrentCategoryEmpty");

	UBlockyMenuItemObject_Custom_IsCurrentCategoryEmpty_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TEnumAsByte<ECustomBlockType> UBlockyMenuItemObject_Custom::GetCustomType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyMenuItemObject_Custom.GetCustomType");

	UBlockyMenuItemObject_Custom_GetCustomType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBlockyMenuItemObject_Custom::ClosePopUp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyMenuItemObject_Custom.ClosePopUp");

	UBlockyMenuItemObject_Custom_ClosePopUp_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyMenuItemObject_Variable::NewVariable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyMenuItemObject_Variable.NewVariable");

	UBlockyMenuItemObject_Variable_NewVariable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBlockyMenuItemObject_Variable::NewCustomVariable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyMenuItemObject_Variable.NewCustomVariable");

	UBlockyMenuItemObject_Variable_NewCustomVariable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UBlockyMenuItemObject_Variable::IsSlotCustomVarToShow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyMenuItemObject_Variable.IsSlotCustomVarToShow");

	UBlockyMenuItemObject_Variable_IsSlotCustomVarToShow_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBlockyMenuItemObject_Variable::IsPlayerBlackboard()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyMenuItemObject_Variable.IsPlayerBlackboard");

	UBlockyMenuItemObject_Variable_IsPlayerBlackboard_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBlockyMenuItemObject_Variable::IsCurrentCategoryEmpty()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyMenuItemObject_Variable.IsCurrentCategoryEmpty");

	UBlockyMenuItemObject_Variable_IsCurrentCategoryEmpty_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBlockyMenuItemObject_Variable::IsBlackBoardVariable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyMenuItemObject_Variable.IsBlackBoardVariable");

	UBlockyMenuItemObject_Variable_IsBlackBoardVariable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBlockyMenuItemObject_Variable::FilterBlackboard(bool bIsPlayerVar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyMenuItemObject_Variable.FilterBlackboard");

	UBlockyMenuItemObject_Variable_FilterBlackboard_Params params;
	params.bIsPlayerVar = bIsPlayerVar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBlockyMenuItemObject_Variable::FilterAccess(TEnumAsByte<EBlockyAccessType> InAccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyMenuItemObject_Variable.FilterAccess");

	UBlockyMenuItemObject_Variable_FilterAccess_Params params;
	params.InAccess = InAccess;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UBlockyMenuItemObject_Variable::CanSeeCustomVar(bool* IsConfigContain, bool* IsOnlyShowCustom, bool* IsHiddenCustom)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BlockyMenuItemObject_Variable.CanSeeCustomVar");

	UBlockyMenuItemObject_Variable_CanSeeCustomVar_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (IsConfigContain != nullptr)
		*IsConfigContain = params.IsConfigContain;
	if (IsOnlyShowCustom != nullptr)
		*IsOnlyShowCustom = params.IsOnlyShowCustom;
	if (IsHiddenCustom != nullptr)
		*IsHiddenCustom = params.IsHiddenCustom;
}








void UCastExpression::SetTargetType(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Target)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CastExpression.SetTargetType");

	UCastExpression_SetTargetType_Params params;
	params.ptr = ptr;
	params.Target = Target;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCastExpression::SetExpression(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Target)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CastExpression.SetExpression");

	UCastExpression_SetExpression_Params params;
	params.ptr = ptr;
	params.Target = Target;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FBlockyLuaHandle UCastExpression::GetTargetType(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CastExpression.GetTargetType");

	UCastExpression_GetTargetType_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UCastExpression::GetExpression(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CastExpression.GetExpression");

	UCastExpression_GetExpression_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FBlockyLuaHandle UCastExpression::CreateCastExpression2(const struct FBlockyLuaHandle& TargetType, const struct FBlockyLuaHandle& expression)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CastExpression.CreateCastExpression2");

	UCastExpression_CreateCastExpression2_Params params;
	params.TargetType = TargetType;
	params.expression = expression;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FBlockyLuaHandle UCastExpression::CreateCastExpression()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CastExpression.CreateCastExpression");

	UCastExpression_CreateCastExpression_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UClassReferenceExpression::SetClass(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& klass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ClassReferenceExpression.SetClass");

	UClassReferenceExpression_SetClass_Params params;
	params.ptr = ptr;
	params.klass = klass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FBlockyLuaHandle UClassReferenceExpression::GetClass(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ClassReferenceExpression.GetClass");

	UClassReferenceExpression_GetClass_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UClassReferenceExpression::CreateClassReferenceExpression(const struct FBlockyLuaHandle& klass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ClassReferenceExpression.CreateClassReferenceExpression");

	UClassReferenceExpression_CreateClassReferenceExpression_Params params;
	params.klass = klass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UColorDesc::NameContainsString(const struct FString& filter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ColorDesc.NameContainsString");

	UColorDesc_NameContainsString_Params params;
	params.filter = filter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UColorDesc::IsNameEmpty()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ColorDesc.IsNameEmpty");

	UColorDesc_IsNameEmpty_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UColorDesc::IsCodeNameEmpty()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ColorDesc.IsCodeNameEmpty");

	UColorDesc_IsCodeNameEmpty_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FType UColorDesc::GetType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ColorDesc.GetType");

	UColorDesc_GetType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UColorDesc::GetLocaleName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ColorDesc.GetLocaleName");

	UColorDesc_GetLocaleName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UColorDesc::GetHSVStr()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ColorDesc.GetHSVStr");

	UColorDesc_GetHSVStr_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FLinearColor UColorDesc::GetColor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ColorDesc.GetColor");

	UColorDesc_GetColor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCommonUIFunctionLibrary::VarDefinerTypeCanBeArray(class UVarDefiner* Definer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.VarDefinerTypeCanBeArray");

	UCommonUIFunctionLibrary_VarDefinerTypeCanBeArray_Params params;
	params.Definer = Definer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCommonUIFunctionLibrary::SetIsVirtualKeyboardVisible(bool Visible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.SetIsVirtualKeyboardVisible");

	UCommonUIFunctionLibrary_SetIsVirtualKeyboardVisible_Params params;
	params.Visible = Visible;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










bool UCommonUIFunctionLibrary::LimitTextLength(const struct FText& InputText, int MaxCharCount, struct FText* OutText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.LimitTextLength");

	UCommonUIFunctionLibrary_LimitTextLength_Params params;
	params.InputText = InputText;
	params.MaxCharCount = MaxCharCount;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutText != nullptr)
		*OutText = params.OutText;

	return params.ReturnValue;
}








struct FText UCommonUIFunctionLibrary::LimitTextEmojiInput(const struct FText& InputText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.LimitTextEmojiInput");

	UCommonUIFunctionLibrary_LimitTextEmojiInput_Params params;
	params.InputText = InputText;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCommonUIFunctionLibrary::IsNameStringValid(const struct FString& NameString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.IsNameStringValid");

	UCommonUIFunctionLibrary_IsNameStringValid_Params params;
	params.NameString = NameString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCommonUIFunctionLibrary::IsFuncDisabled(const struct FString& FuncName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.IsFuncDisabled");

	UCommonUIFunctionLibrary_IsFuncDisabled_Params params;
	params.FuncName = FuncName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UCommonUIFunctionLibrary::IsDeveloperMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.IsDeveloperMode");

	UCommonUIFunctionLibrary_IsDeveloperMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCommonUIFunctionLibrary::GetTranslateString_BP(const struct FString& KeyString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.GetTranslateString_BP");

	UCommonUIFunctionLibrary_GetTranslateString_BP_Params params;
	params.KeyString = KeyString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCommonUIFunctionLibrary::GetTranslateString(const struct FString& KeyString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.GetTranslateString");

	UCommonUIFunctionLibrary_GetTranslateString_Params params;
	params.KeyString = KeyString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UCommonUIFunctionLibrary::GetTextLen(const struct FText& Text)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.GetTextLen");

	UCommonUIFunctionLibrary_GetTextLen_Params params;
	params.Text = Text;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<class UPresetDesc*> UCommonUIFunctionLibrary::GetPresetDescs(class UVarDefiner* Definer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.GetPresetDescs");

	UCommonUIFunctionLibrary_GetPresetDescs_Params params;
	params.Definer = Definer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FText UCommonUIFunctionLibrary::GetLocaleText(const struct FText& KeyString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.GetLocaleText");

	UCommonUIFunctionLibrary_GetLocaleText_Params params;
	params.KeyString = KeyString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCommonUIFunctionLibrary::GetLocaleString(const struct FString& KeyString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.GetLocaleString");

	UCommonUIFunctionLibrary_GetLocaleString_Params params;
	params.KeyString = KeyString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UCommonUIFunctionLibrary::GetIsVirtualKeyboardVisible()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.GetIsVirtualKeyboardVisible");

	UCommonUIFunctionLibrary_GetIsVirtualKeyboardVisible_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UCommonUIFunctionLibrary::GetCustomVarNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.GetCustomVarNum");

	UCommonUIFunctionLibrary_GetCustomVarNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UCommonUIFunctionLibrary::GetArrayInitStringStart()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.GetArrayInitStringStart");

	UCommonUIFunctionLibrary_GetArrayInitStringStart_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UCommonUIFunctionLibrary::GetArrayInitStringEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.GetArrayInitStringEnd");

	UCommonUIFunctionLibrary_GetArrayInitStringEnd_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<class UVarDefiner*> UCommonUIFunctionLibrary::GetAllDefiners()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.GetAllDefiners");

	UCommonUIFunctionLibrary_GetAllDefiners_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










struct FString UCommonUIFunctionLibrary::GenerateNextNameWithSuffix(TArray<struct FString> ExistingNames, const struct FString& InputName, bool InDuplicate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.GenerateNextNameWithSuffix");

	UCommonUIFunctionLibrary_GenerateNextNameWithSuffix_Params params;
	params.ExistingNames = ExistingNames;
	params.InputName = InputName;
	params.InDuplicate = InDuplicate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCommonUIFunctionLibrary::FormatNumber(const struct FString& Input)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.FormatNumber");

	UCommonUIFunctionLibrary_FormatNumber_Params params;
	params.Input = Input;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCommonUIFunctionLibrary::DisplayNameToTranslate(class UBlockBase* bLock)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.DisplayNameToTranslate");

	UCommonUIFunctionLibrary_DisplayNameToTranslate_Params params;
	params.bLock = bLock;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCommonUIFunctionLibrary::CollectAllObjects()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.CollectAllObjects");

	UCommonUIFunctionLibrary_CollectAllObjects_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UCommonUIFunctionLibrary::CheckNameValid(const struct FString& InName, struct FText* ErrorMsg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.CheckNameValid");

	UCommonUIFunctionLibrary_CheckNameValid_Params params;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ErrorMsg != nullptr)
		*ErrorMsg = params.ErrorMsg;

	return params.ReturnValue;
}








bool UCommonUIFunctionLibrary::CheckNameHasInvalidChar(const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommonUIFunctionLibrary.CheckNameHasInvalidChar");

	UCommonUIFunctionLibrary_CheckNameHasInvalidChar_Params params;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UConfigDataAsset::SaveToAsset(const struct FString& PackageName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ConfigDataAsset.SaveToAsset");

	UConfigDataAsset_SaveToAsset_Params params;
	params.PackageName = PackageName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreateObjectExpression::SetTypeName(const struct FBlockyLuaHandle& ptr, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CreateObjectExpression.SetTypeName");

	UCreateObjectExpression_SetTypeName_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreateObjectExpression::SetParameters(const struct FBlockyLuaHandle& ptr, TArray<struct FBlockyLuaHandle> Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CreateObjectExpression.SetParameters");

	UCreateObjectExpression_SetParameters_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FString UCreateObjectExpression::GetTypeName(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CreateObjectExpression.GetTypeName");

	UCreateObjectExpression_GetTypeName_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<struct FBlockyLuaHandle> UCreateObjectExpression::GetParameters(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CreateObjectExpression.GetParameters");

	UCreateObjectExpression_GetParameters_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UCreateObjectExpression::CreateCreateObjectExpression(const struct FString& TypeName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CreateObjectExpression.CreateCreateObjectExpression");

	UCreateObjectExpression_CreateCreateObjectExpression_Params params;
	params.TypeName = TypeName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCustomParam::CopyFrom(class UCustomParam* Other)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CustomParam.CopyFrom");

	UCustomParam_CopyFrom_Params params;
	params.Other = Other;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCustomConfig::UpdateDesc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CustomConfig.UpdateDesc");

	UCustomConfig_UpdateDesc_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCustomConfig::SetParamNum(int paramNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CustomConfig.SetParamNum");

	UCustomConfig_SetParamNum_Params params;
	params.paramNum = paramNum;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







class UCustomParam* UCustomConfig::InitResult()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CustomConfig.InitResult");

	UCustomConfig_InitResult_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCustomConfig::Init()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CustomConfig.Init");

	UCustomConfig_Init_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class UCustomParam* UCustomConfig::GetParam(int idx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CustomConfig.GetParam");

	UCustomConfig_GetParam_Params params;
	params.idx = idx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UCustomConfig::GetCustomGraphName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CustomConfig.GetCustomGraphName");

	UCustomConfig_GetCustomGraphName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCustomConfig::CopyFrom(class UCustomConfig* Other)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CustomConfig.CopyFrom");

	UCustomConfig_CopyFrom_Params params;
	params.Other = Other;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UDefaultValueExpression::SetType(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.DefaultValueExpression.SetType");

	UDefaultValueExpression_SetType_Params params;
	params.ptr = ptr;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FBlockyLuaHandle UDefaultValueExpression::GetType(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.DefaultValueExpression.GetType");

	UDefaultValueExpression_GetType_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UDefaultValueExpression::CreateDefaultValueExpression2(const struct FBlockyLuaHandle& typeRef)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.DefaultValueExpression.CreateDefaultValueExpression2");

	UDefaultValueExpression_CreateDefaultValueExpression2_Params params;
	params.typeRef = typeRef;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UDefaultValueExpression::CreateDefaultValueExpression(const struct FBlockyLuaHandle& typeClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.DefaultValueExpression.CreateDefaultValueExpression");

	UDefaultValueExpression_CreateDefaultValueExpression_Params params;
	params.typeClass = typeClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UFunctionDesc::GetMenu()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionDesc.GetMenu");

	UFunctionDesc_GetMenu_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UFunctionDesc::GetCategory()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionDesc.GetCategory");

	UFunctionDesc_GetCategory_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UFunctionInvokeArgumentExpression::SetOperationType(const struct FBlockyLuaHandle& ptr, TEnumAsByte<EBlockyFunctionArgumentAttribute> Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeArgumentExpression.SetOperationType");

	UFunctionInvokeArgumentExpression_SetOperationType_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UFunctionInvokeArgumentExpression::SetExpression(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeArgumentExpression.SetExpression");

	UFunctionInvokeArgumentExpression_SetExpression_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UFunctionInvokeArgumentExpression::SetAdditionPostCode(const struct FBlockyLuaHandle& ptr, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeArgumentExpression.SetAdditionPostCode");

	UFunctionInvokeArgumentExpression_SetAdditionPostCode_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








TEnumAsByte<EBlockyFunctionArgumentAttribute> UFunctionInvokeArgumentExpression::GetOperationType(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeArgumentExpression.GetOperationType");

	UFunctionInvokeArgumentExpression_GetOperationType_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UFunctionInvokeArgumentExpression::GetExpression(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeArgumentExpression.GetExpression");

	UFunctionInvokeArgumentExpression_GetExpression_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UFunctionInvokeArgumentExpression::GetAdditionPostCode(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeArgumentExpression.GetAdditionPostCode");

	UFunctionInvokeArgumentExpression_GetAdditionPostCode_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FBlockyLuaHandle UFunctionInvokeArgumentExpression::CreateFunctionInvokeArgumentExpression()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeArgumentExpression.CreateFunctionInvokeArgumentExpression");

	UFunctionInvokeArgumentExpression_CreateFunctionInvokeArgumentExpression_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UFunctionInvokeExpression::SetReturnValue(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeExpression.SetReturnValue");

	UFunctionInvokeExpression_SetReturnValue_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UFunctionInvokeExpression::SetHost(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeExpression.SetHost");

	UFunctionInvokeExpression_SetHost_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UFunctionInvokeExpression::SetFunctionName(const struct FBlockyLuaHandle& ptr, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeExpression.SetFunctionName");

	UFunctionInvokeExpression_SetFunctionName_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UFunctionInvokeExpression::SetComment(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeExpression.SetComment");

	UFunctionInvokeExpression_SetComment_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UFunctionInvokeExpression::SetArguments(const struct FBlockyLuaHandle& ptr, TArray<struct FBlockyLuaHandle> Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeExpression.SetArguments");

	UFunctionInvokeExpression_SetArguments_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FBlockyLuaHandle UFunctionInvokeExpression::GetReturnValue(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeExpression.GetReturnValue");

	UFunctionInvokeExpression_GetReturnValue_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UFunctionInvokeExpression::GetHost(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeExpression.GetHost");

	UFunctionInvokeExpression_GetHost_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UFunctionInvokeExpression::GetFunctionName(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeExpression.GetFunctionName");

	UFunctionInvokeExpression_GetFunctionName_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UFunctionInvokeExpression::GetComment(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeExpression.GetComment");

	UFunctionInvokeExpression_GetComment_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<struct FBlockyLuaHandle> UFunctionInvokeExpression::GetArguments(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeExpression.GetArguments");

	UFunctionInvokeExpression_GetArguments_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FBlockyLuaHandle UFunctionInvokeExpression::CreateFunctionInvokeExpression()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.FunctionInvokeExpression.CreateFunctionInvokeExpression");

	UFunctionInvokeExpression_CreateFunctionInvokeExpression_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UHotfixUtility::UVarDefiner_GetCurrentLocateShowName(class UVarDefiner* pThis)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UVarDefiner_GetCurrentLocateShowName");

	UHotfixUtility_UVarDefiner_GetCurrentLocateShowName_Params params;
	params.pThis = pThis;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UHotfixUtility::UPresetDesc_GetLocaleName(class UPresetDesc* PresetDesc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UPresetDesc_GetLocaleName");

	UHotfixUtility_UPresetDesc_GetLocaleName_Params params;
	params.PresetDesc = PresetDesc;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UHotfixUtility::UNumFromTo_UpdateParameterDisplayName_Index_DisplayName(class UFunctionDesc* Desc, const struct FString& DisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UNumFromTo_UpdateParameterDisplayName_Index_DisplayName");

	UHotfixUtility_UNumFromTo_UpdateParameterDisplayName_Index_DisplayName_Params params;
	params.Desc = Desc;
	params.DisplayName = DisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UHotfixUtility::UNumFromTo_UpdateParameterDisplayName_CurrNum_DisplayName(class UFunctionDesc* Desc, const struct FString& DisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UNumFromTo_UpdateParameterDisplayName_CurrNum_DisplayName");

	UHotfixUtility_UNumFromTo_UpdateParameterDisplayName_CurrNum_DisplayName_Params params;
	params.Desc = Desc;
	params.DisplayName = DisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










struct FString UHotfixUtility::UNumFromTo_SetFunctionDesc_NamedVarBlock_DisplayName(class UFunctionDesc* Desc, int ParamIdx, const struct FString& DisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UNumFromTo_SetFunctionDesc_NamedVarBlock_DisplayName");

	UHotfixUtility_UNumFromTo_SetFunctionDesc_NamedVarBlock_DisplayName_Params params;
	params.Desc = Desc;
	params.ParamIdx = ParamIdx;
	params.DisplayName = DisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UHotfixUtility::UNumFromTo_InitializeBlock_IndexBlock_Name(class UNumFromTo* NumFromTo, const struct FString& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UNumFromTo_InitializeBlock_IndexBlock_Name");

	UHotfixUtility_UNumFromTo_InitializeBlock_IndexBlock_Name_Params params;
	params.NumFromTo = NumFromTo;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UHotfixUtility::UNumFromTo_InitializeBlock_CurrentBlock_Name(class UNumFromTo* NumFromTo, const struct FString& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UNumFromTo_InitializeBlock_CurrentBlock_Name");

	UHotfixUtility_UNumFromTo_InitializeBlock_CurrentBlock_Name_Params params;
	params.NumFromTo = NumFromTo;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UHotfixUtility::UNamedVar_UpdateFormater_VarFormatNameText(class UNamedVar* var)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UNamedVar_UpdateFormater_VarFormatNameText");

	UHotfixUtility_UNamedVar_UpdateFormater_VarFormatNameText_Params params;
	params.var = var;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UHotfixUtility::UForEach_UpdateParameterDisplayName_ForeachIndex_DisplayName(class UFunctionDesc* Desc, const struct FString& DisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UForEach_UpdateParameterDisplayName_ForeachIndex_DisplayName");

	UHotfixUtility_UForEach_UpdateParameterDisplayName_ForeachIndex_DisplayName_Params params;
	params.Desc = Desc;
	params.DisplayName = DisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UHotfixUtility::UForEach_UpdateParameterDisplayName_ForeachElement_DisplayName(class UFunctionDesc* Desc, const struct FString& DisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UForEach_UpdateParameterDisplayName_ForeachElement_DisplayName");

	UHotfixUtility_UForEach_UpdateParameterDisplayName_ForeachElement_DisplayName_Params params;
	params.Desc = Desc;
	params.DisplayName = DisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UHotfixUtility::UForEach_UpdateParameterDisplayName_ElementNormalDisplay(class UFunctionDesc* Desc, const struct FString& DisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UForEach_UpdateParameterDisplayName_ElementNormalDisplay");

	UHotfixUtility_UForEach_UpdateParameterDisplayName_ElementNormalDisplay_Params params;
	params.Desc = Desc;
	params.DisplayName = DisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UHotfixUtility::UForEach_UpdateParameterDisplayName_ElementDisableDisplay(class UFunctionDesc* Desc, const struct FString& DisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UForEach_UpdateParameterDisplayName_ElementDisableDisplay");

	UHotfixUtility_UForEach_UpdateParameterDisplayName_ElementDisableDisplay_Params params;
	params.Desc = Desc;
	params.DisplayName = DisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UHotfixUtility::UForEach_SetFunctionDesc_ForeachIndex_DisplayName(class UFunctionDesc* Desc, const struct FString& DisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UForEach_SetFunctionDesc_ForeachIndex_DisplayName");

	UHotfixUtility_UForEach_SetFunctionDesc_ForeachIndex_DisplayName_Params params;
	params.Desc = Desc;
	params.DisplayName = DisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UHotfixUtility::UForEach_SetFunctionDesc_ForeachElement_DisplayName(class UFunctionDesc* Desc, const struct FString& DisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UForEach_SetFunctionDesc_ForeachElement_DisplayName");

	UHotfixUtility_UForEach_SetFunctionDesc_ForeachElement_DisplayName_Params params;
	params.Desc = Desc;
	params.DisplayName = DisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UHotfixUtility::UForEach_SetFunctionDesc_ElementNormalDisplay(class UFunctionDesc* Desc, const struct FString& DisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UForEach_SetFunctionDesc_ElementNormalDisplay");

	UHotfixUtility_UForEach_SetFunctionDesc_ElementNormalDisplay_Params params;
	params.Desc = Desc;
	params.DisplayName = DisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UHotfixUtility::UForEach_SetFunctionDesc_ElementDisableDisplay(class UFunctionDesc* Desc, const struct FString& DisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UForEach_SetFunctionDesc_ElementDisableDisplay");

	UHotfixUtility_UForEach_SetFunctionDesc_ElementDisableDisplay_Params params;
	params.Desc = Desc;
	params.DisplayName = DisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










struct FString UHotfixUtility::UExecuteable_SetFunctionDesc_ParamDisplayName(class UFunctionDesc* Desc, int ParamIdx, const struct FString& ParamDisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UExecuteable_SetFunctionDesc_ParamDisplayName");

	UHotfixUtility_UExecuteable_SetFunctionDesc_ParamDisplayName_Params params;
	params.Desc = Desc;
	params.ParamIdx = ParamIdx;
	params.ParamDisplayName = ParamDisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











struct FString UHotfixUtility::UEnumDesc_GetCurrentLocaleEnumValueName(class UEnumDesc* EnumDesc, const struct FName& enumValueName, const struct FString& enumValueLocName, bool useDefaultWhenNotFound)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UEnumDesc_GetCurrentLocaleEnumValueName");

	UHotfixUtility_UEnumDesc_GetCurrentLocaleEnumValueName_Params params;
	params.EnumDesc = EnumDesc;
	params.enumValueName = enumValueName;
	params.enumValueLocName = enumValueLocName;
	params.useDefaultWhenNotFound = useDefaultWhenNotFound;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










struct FString UHotfixUtility::UEnumDesc_GetCurrentLocaleEnumTypeName(class UEnumDesc* EnumDesc, const struct FString& EnumTypeName, bool useDefaultWhenNotFound)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UEnumDesc_GetCurrentLocaleEnumTypeName");

	UHotfixUtility_UEnumDesc_GetCurrentLocaleEnumTypeName_Params params;
	params.EnumDesc = EnumDesc;
	params.EnumTypeName = EnumTypeName;
	params.useDefaultWhenNotFound = useDefaultWhenNotFound;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UHotfixUtility::UDoNum_UpdateParameterDisplayName_CurrentIndexSlotDisplayName(class UFunctionDesc* Desc, const struct FString& CurrentIndexDisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UDoNum_UpdateParameterDisplayName_CurrentIndexSlotDisplayName");

	UHotfixUtility_UDoNum_UpdateParameterDisplayName_CurrentIndexSlotDisplayName_Params params;
	params.Desc = Desc;
	params.CurrentIndexDisplayName = CurrentIndexDisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UHotfixUtility::UDoNum_SetFunctionDesc_CurrentIndexSlotDisplayName(class UFunctionDesc* Desc, const struct FString& CurrentIndexDisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UDoNum_SetFunctionDesc_CurrentIndexSlotDisplayName");

	UHotfixUtility_UDoNum_SetFunctionDesc_CurrentIndexSlotDisplayName_Params params;
	params.Desc = Desc;
	params.CurrentIndexDisplayName = CurrentIndexDisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










struct FString UHotfixUtility::UDefineFunction_SetFunctionDesc_ParamName(class UFunctionDesc* Desc, int ParamIdx, const struct FString& ParamName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UDefineFunction_SetFunctionDesc_ParamName");

	UHotfixUtility_UDefineFunction_SetFunctionDesc_ParamName_Params params;
	params.Desc = Desc;
	params.ParamIdx = ParamIdx;
	params.ParamName = ParamName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UHotfixUtility::UCommonUIFunctionLibrary_GetTranslateString(const struct FString& KeyString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UCommonUIFunctionLibrary_GetTranslateString");

	UHotfixUtility_UCommonUIFunctionLibrary_GetTranslateString_Params params;
	params.KeyString = KeyString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UHotfixUtility::UCommonUIFunctionLibrary_GetLocaleString(const struct FString& KeyString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UCommonUIFunctionLibrary_GetLocaleString");

	UHotfixUtility_UCommonUIFunctionLibrary_GetLocaleString_Params params;
	params.KeyString = KeyString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UHotfixUtility::UColorDesc_GetLocaleName(class UColorDesc* ColorDesc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UColorDesc_GetLocaleName");

	UHotfixUtility_UColorDesc_GetLocaleName_Params params;
	params.ColorDesc = ColorDesc;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UHotfixUtility::UBlockyTimer_UpdateParameterDisplayName_CurrentCount_DisplayName(class UFunctionDesc* Desc, const struct FString& DisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyTimer_UpdateParameterDisplayName_CurrentCount_DisplayName");

	UHotfixUtility_UBlockyTimer_UpdateParameterDisplayName_CurrentCount_DisplayName_Params params;
	params.Desc = Desc;
	params.DisplayName = DisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UHotfixUtility::UBlockyTimer_SetFunctionDesc_CurrentCount_DisplayName(class UFunctionDesc* Desc, const struct FString& DisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyTimer_SetFunctionDesc_CurrentCount_DisplayName");

	UHotfixUtility_UBlockyTimer_SetFunctionDesc_CurrentCount_DisplayName_Params params;
	params.Desc = Desc;
	params.DisplayName = DisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UHotfixUtility::UBlockySearchWidget_RefreshTabContainerView_ContentName(class UUserWidget* pThis)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockySearchWidget_RefreshTabContainerView_ContentName");

	UHotfixUtility_UBlockySearchWidget_RefreshTabContainerView_ContentName_Params params;
	params.pThis = pThis;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UHotfixUtility::UBlockySearchWidget_RefreshTabContainerView_CategoryName(class UUserWidget* pThis, class UBlockyCategoryItemObject* Category)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockySearchWidget_RefreshTabContainerView_CategoryName");

	UHotfixUtility_UBlockySearchWidget_RefreshTabContainerView_CategoryName_Params params;
	params.pThis = pThis;
	params.Category = Category;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UHotfixUtility::UBlockyMenuWidget_UpdateMenus_MenuWidgetName(class UUserWidget* pThis, class UBlockyMenuItemObject* MenuItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyMenuWidget_UpdateMenus_MenuWidgetName");

	UHotfixUtility_UBlockyMenuWidget_UpdateMenus_MenuWidgetName_Params params;
	params.pThis = pThis;
	params.MenuItem = MenuItem;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UHotfixUtility::UBlockyMenuItemObject_Search_SearchMatchingResults_ItemObjectString(class UBlockyMenuItemObject_Search* MenuItem, class UBlockyBlockListItemObject* ItemObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Search_SearchMatchingResults_ItemObjectString");

	UHotfixUtility_UBlockyMenuItemObject_Search_SearchMatchingResults_ItemObjectString_Params params;
	params.MenuItem = MenuItem;
	params.ItemObject = ItemObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UHotfixUtility::UBlockyMenuItemObject_Search_PaintSearchedItems_CategoryName(class UBlockyMenuItemObject_Search* MenuItem, class UBlockyCategoryItemObject* CategoryItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Search_PaintSearchedItems_CategoryName");

	UHotfixUtility_UBlockyMenuItemObject_Search_PaintSearchedItems_CategoryName_Params params;
	params.MenuItem = MenuItem;
	params.CategoryItem = CategoryItem;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UHotfixUtility::UBlockyMenuItemObject_Search_PaintSearchedContentTitle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Search_PaintSearchedContentTitle");

	UHotfixUtility_UBlockyMenuItemObject_Search_PaintSearchedContentTitle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UHotfixUtility::UBlockyMenuItemObject_Search_GetBlockSearchString_NamedVarName(class UNamedVar* var)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Search_GetBlockSearchString_NamedVarName");

	UHotfixUtility_UBlockyMenuItemObject_Search_GetBlockSearchString_NamedVarName_Params params;
	params.var = var;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UHotfixUtility::UBlockyMenuItemObject_Search_GetBlockSearchString_Block(class UBlockBase* InBlock)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Search_GetBlockSearchString_Block");

	UHotfixUtility_UBlockyMenuItemObject_Search_GetBlockSearchString_Block_Params params;
	params.InBlock = InBlock;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UHotfixUtility::UBlockyMenuItemObject_Paint_CategoryName(class UBlockyMenuItemObject* MenuItem, class UBlockyCategoryItemObject* CategoryItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyMenuItemObject_Paint_CategoryName");

	UHotfixUtility_UBlockyMenuItemObject_Paint_CategoryName_Params params;
	params.MenuItem = MenuItem;
	params.CategoryItem = CategoryItem;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UHotfixUtility::UBlockyGraphData_GetCustomNames_CustomName(class UCustomConfig* Custom)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyGraphData_GetCustomNames_CustomName");

	UHotfixUtility_UBlockyGraphData_GetCustomNames_CustomName_Params params;
	params.Custom = Custom;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UHotfixUtility::UBlockyGraph_LoadGraphFromXnd_OnLocalVarBlockLoaded(class UBlockyGraph* pThis, class UNamedVar* bLock)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyGraph_LoadGraphFromXnd_OnLocalVarBlockLoaded");

	UHotfixUtility_UBlockyGraph_LoadGraphFromXnd_OnLocalVarBlockLoaded_Params params;
	params.pThis = pThis;
	params.bLock = bLock;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UHotfixUtility::UBlockyGraph_LoadGraphFromXnd_OnBlockLoaded(class UBlockyGraph* pThis, class UBlockBase* bLock)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyGraph_LoadGraphFromXnd_OnBlockLoaded");

	UHotfixUtility_UBlockyGraph_LoadGraphFromXnd_OnBlockLoaded_Params params;
	params.pThis = pThis;
	params.bLock = bLock;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










struct FString UHotfixUtility::UBlockyEditor_OnClickSlot_TypeFilterMenuName(class UBlockBase* slotHost, const struct FHotFixSlotHandle& Handle, const struct FString& menuName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_TypeFilterMenuName");

	UHotfixUtility_UBlockyEditor_OnClickSlot_TypeFilterMenuName_Params params;
	params.slotHost = slotHost;
	params.Handle = Handle;
	params.menuName = menuName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










struct FString UHotfixUtility::UBlockyEditor_OnClickSlot_TypeFilterCategoryName(class UBlockBase* slotHost, const struct FHotFixSlotHandle& Handle, const struct FString& CategoryName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_TypeFilterCategoryName");

	UHotfixUtility_UBlockyEditor_OnClickSlot_TypeFilterCategoryName_Params params;
	params.slotHost = slotHost;
	params.Handle = Handle;
	params.CategoryName = CategoryName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










struct FString UHotfixUtility::UBlockyEditor_OnClickSlot_SelectFromSceneWidget_DefaultShowName(class UBlockBase* slotHost, const struct FHotFixSlotHandle& Handle, const struct FString& slotCustomClickTypeName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_SelectFromSceneWidget_DefaultShowName");

	UHotfixUtility_UBlockyEditor_OnClickSlot_SelectFromSceneWidget_DefaultShowName_Params params;
	params.slotHost = slotHost;
	params.Handle = Handle;
	params.slotCustomClickTypeName = slotCustomClickTypeName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











struct FString UHotfixUtility::UBlockyEditor_OnClickSlot_EnumName(class UBlockBase* slotHost, class UEnumDesc* EnumDesc, const struct FName& EnumName, const struct FString& EnumString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_EnumName");

	UHotfixUtility_UBlockyEditor_OnClickSlot_EnumName_Params params;
	params.slotHost = slotHost;
	params.EnumDesc = EnumDesc;
	params.EnumName = EnumName;
	params.EnumString = EnumString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UHotfixUtility::UBlockyEditor_OnClickSlot_CategoryItemName(class UBlockBase* slotHost, const struct FString& CategoryName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_CategoryItemName");

	UHotfixUtility_UBlockyEditor_OnClickSlot_CategoryItemName_Params params;
	params.slotHost = slotHost;
	params.CategoryName = CategoryName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UHotfixUtility::UBlockyEditor_OnClickSlot_BPMenuItemName(class UBlockBase* slotHost, const struct FString& menuName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyEditor_OnClickSlot_BPMenuItemName");

	UHotfixUtility_UBlockyEditor_OnClickSlot_BPMenuItemName_Params params;
	params.slotHost = slotHost;
	params.menuName = menuName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UHotfixUtility::UBlockyEditor_GetLocaleString(const struct FString& KeyString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyEditor_GetLocaleString");

	UHotfixUtility_UBlockyEditor_GetLocaleString_Params params;
	params.KeyString = KeyString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UHotfixUtility::UBlockyCategoryWidget_FilterWithBlockyMenuItem_WidgetName(class UUserWidget* pThis, class UBlockyCategoryItemObject* Category)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyCategoryWidget_FilterWithBlockyMenuItem_WidgetName");

	UHotfixUtility_UBlockyCategoryWidget_FilterWithBlockyMenuItem_WidgetName_Params params;
	params.pThis = pThis;
	params.Category = Category;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UHotfixUtility::UBlockyBlockListItemObject_Variable_GetStingUsedToSearch(class UBlockyBlockListItemObject_Variable* ItemObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyBlockListItemObject_Variable_GetStingUsedToSearch");

	UHotfixUtility_UBlockyBlockListItemObject_Variable_GetStingUsedToSearch_Params params;
	params.ItemObject = ItemObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UHotfixUtility::UBlockyBlockListItemObject_GetStingUsedToSearch(class UBlockyBlockListItemObject* ItemObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyBlockListItemObject_GetStingUsedToSearch");

	UHotfixUtility_UBlockyBlockListItemObject_GetStingUsedToSearch_Params params;
	params.ItemObject = ItemObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UHotfixUtility::UBlockyBlockListItemObject_Custom_GetStingUsedToSearch(class UBlockyBlockListItemObject_Custom* ItemObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.UBlockyBlockListItemObject_Custom_GetStingUsedToSearch");

	UHotfixUtility_UBlockyBlockListItemObject_Custom_GetStingUsedToSearch_Params params;
	params.ItemObject = ItemObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UHotfixUtility::Slot_IsValidPreset(const struct FHotFixSlotHandle& Handle, class UPresetDesc* Preset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_IsValidPreset");

	UHotfixUtility_Slot_IsValidPreset_Params params;
	params.Handle = Handle;
	params.Preset = Preset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UHotfixUtility::Slot_IsValidItem(const struct FHotFixSlotHandle& Handle, class UBlockyBlockListItemObject* Item)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_IsValidItem");

	UHotfixUtility_Slot_IsValidItem_Params params;
	params.Handle = Handle;
	params.Item = Item;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UHotfixUtility::Slot_IsValidHandle(const struct FHotFixSlotHandle& Handle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_IsValidHandle");

	UHotfixUtility_Slot_IsValidHandle_Params params;
	params.Handle = Handle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UHotfixUtility::Slot_IsValidBlock(const struct FHotFixSlotHandle& Handle, class UBlockBase* blk)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_IsValidBlock");

	UHotfixUtility_Slot_IsValidBlock_Params params;
	params.Handle = Handle;
	params.blk = blk;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UHotfixUtility::Slot_HasClickType(const struct FHotFixSlotHandle& Handle, int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_HasClickType");

	UHotfixUtility_Slot_HasClickType_Params params;
	params.Handle = Handle;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UPresetDesc* UHotfixUtility::Slot_GetSlotPresetDesc(const struct FHotFixSlotHandle& Handle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_GetSlotPresetDesc");

	UHotfixUtility_Slot_GetSlotPresetDesc_Params params;
	params.Handle = Handle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UHotfixUtility::Slot_GetSlotName(const struct FHotFixSlotHandle& Handle, struct FText* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_GetSlotName");

	UHotfixUtility_Slot_GetSlotName_Params params;
	params.Handle = Handle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}









bool UHotfixUtility::Slot_GetSlotItemType(const struct FHotFixSlotHandle& Handle, struct FType* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_GetSlotItemType");

	UHotfixUtility_Slot_GetSlotItemType_Params params;
	params.Handle = Handle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}









bool UHotfixUtility::Slot_GetSlotGetColorValue(const struct FHotFixSlotHandle& Handle, struct FLinearColor* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_GetSlotGetColorValue");

	UHotfixUtility_Slot_GetSlotGetColorValue_Params params;
	params.Handle = Handle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}









bool UHotfixUtility::Slot_GetSlotDisplayName(const struct FHotFixSlotHandle& Handle, struct FString* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_GetSlotDisplayName");

	UHotfixUtility_Slot_GetSlotDisplayName_Params params;
	params.Handle = Handle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}









bool UHotfixUtility::Slot_GetSlotDefaultValue(const struct FHotFixSlotHandle& Handle, struct FString* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_GetSlotDefaultValue");

	UHotfixUtility_Slot_GetSlotDefaultValue_Params params;
	params.Handle = Handle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}









bool UHotfixUtility::Slot_GetSlotCustomClickTypeName(const struct FHotFixSlotHandle& Handle, struct FString* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_GetSlotCustomClickTypeName");

	UHotfixUtility_Slot_GetSlotCustomClickTypeName_Params params;
	params.Handle = Handle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}









bool UHotfixUtility::Slot_GetSlotCustomClickType(const struct FHotFixSlotHandle& Handle, struct FString* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_GetSlotCustomClickType");

	UHotfixUtility_Slot_GetSlotCustomClickType_Params params;
	params.Handle = Handle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}








class UColorDesc* UHotfixUtility::Slot_GetSlotColorDesc(const struct FHotFixSlotHandle& Handle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_GetSlotColorDesc");

	UHotfixUtility_Slot_GetSlotColorDesc_Params params;
	params.Handle = Handle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UHotfixUtility::Slot_GetSlotClickType(const struct FHotFixSlotHandle& Handle, int* OutValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_GetSlotClickType");

	UHotfixUtility_Slot_GetSlotClickType_Params params;
	params.Handle = Handle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}








class UBlockBase* UHotfixUtility::Slot_GetHostBlock(const struct FHotFixSlotHandle& Handle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_GetHostBlock");

	UHotfixUtility_Slot_GetHostBlock_Params params;
	params.Handle = Handle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UHotfixUtility::Slot_CanSetBlock(const struct FHotFixSlotHandle& Handle, class UBlockBase* Host, class UBlockBase* blk)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.Slot_CanSetBlock");

	UHotfixUtility_Slot_CanSetBlock_Params params;
	params.Handle = Handle;
	params.Host = Host;
	params.blk = blk;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UHotfixUtility::SetTypeValue(int NewValue, struct FType* Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.SetTypeValue");

	UHotfixUtility_SetTypeValue_Params params;
	params.NewValue = NewValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}








int UHotfixUtility::GetTypeValue(const struct FType& Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.GetTypeValue");

	UHotfixUtility_GetTypeValue_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UHotfixUtility::GetTranslateString_ShowTips(const struct FString& Tip)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.GetTranslateString_ShowTips");

	UHotfixUtility_GetTranslateString_ShowTips_Params params;
	params.Tip = Tip;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UHotfixUtility::GetTranslateString(const struct FString& String)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.GetTranslateString");

	UHotfixUtility_GetTranslateString_Params params;
	params.String = String;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










struct FString UHotfixUtility::GetDisplayNameString_SlotDisplayName(const struct FHotFixSlotHandle& Handle, const struct FString& SlotDisplayName, const struct FString& SlotName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.GetDisplayNameString_SlotDisplayName");

	UHotfixUtility_GetDisplayNameString_SlotDisplayName_Params params;
	params.Handle = Handle;
	params.SlotDisplayName = SlotDisplayName;
	params.SlotName = SlotName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UHotfixUtility::FPresetTypeData_GetLocalTypeName(const struct FPresetTypeData& PresetTypeData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.FPresetTypeData_GetLocalTypeName");

	UHotfixUtility_FPresetTypeData_GetLocalTypeName_Params params;
	params.PresetTypeData = PresetTypeData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










struct FString UHotfixUtility::FMsgData_CreateMessageData_InfoString_ReplaceTriggerName(class UFunctionDesc* Desc, const struct FString& ListItemFormatString, struct FString* InfoString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.FMsgData_CreateMessageData_InfoString_ReplaceTriggerName");

	UHotfixUtility_FMsgData_CreateMessageData_InfoString_ReplaceTriggerName_Params params;
	params.Desc = Desc;
	params.ListItemFormatString = ListItemFormatString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InfoString != nullptr)
		*InfoString = params.InfoString;

	return params.ReturnValue;
}










struct FString UHotfixUtility::FMsgData_CreateMessageData_InfoString_ReplaceBlockName(class UBlockBase* bLock, const struct FString& ListItemFormatString, struct FString* InfoString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.FMsgData_CreateMessageData_InfoString_ReplaceBlockName");

	UHotfixUtility_FMsgData_CreateMessageData_InfoString_ReplaceBlockName_Params params;
	params.bLock = bLock;
	params.ListItemFormatString = ListItemFormatString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InfoString != nullptr)
		*InfoString = params.InfoString;

	return params.ReturnValue;
}










struct FString UHotfixUtility::FMsgData_CreateMessageData_GetInfoTranslateString(class UBlockBase* bLock, const struct FHotFixSlotHandle& Slot, const struct FString& Info)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.FMsgData_CreateMessageData_GetInfoTranslateString");

	UHotfixUtility_FMsgData_CreateMessageData_GetInfoTranslateString_Params params;
	params.bLock = bLock;
	params.Slot = Slot;
	params.Info = Info;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UHotfixUtility::FLocaleFormatter_UpdateVarFormatters_SeparatorStr(const struct FString& str)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.FLocaleFormatter_UpdateVarFormatters_SeparatorStr");

	UHotfixUtility_FLocaleFormatter_UpdateVarFormatters_SeparatorStr_Params params;
	params.str = str;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UHotfixUtility::FLocaleFormatter_InitializeListItemFormats_ListItemFormatString(const struct FString& ListItemFormatString, bool bNeedLocalization)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.FLocaleFormatter_InitializeListItemFormats_ListItemFormatString");

	UHotfixUtility_FLocaleFormatter_InitializeListItemFormats_ListItemFormatString_Params params;
	params.ListItemFormatString = ListItemFormatString;
	params.bNeedLocalization = bNeedLocalization;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UHotfixUtility::FLocaleFormatter_InitializeFormats_FormatString(const struct FString& FormatString, bool bNeedLocalization)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.FLocaleFormatter_InitializeFormats_FormatString");

	UHotfixUtility_FLocaleFormatter_InitializeFormats_FormatString_Params params;
	params.FormatString = FormatString;
	params.bNeedLocalization = bNeedLocalization;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










struct FString UHotfixUtility::FLocaleFormatter_FFormatData_SlotIdx_OnPaintListItem_ParamDisplayName(class UBlockyBlockListItemObject* ListItemObject, int ParamIdx, const struct FString& DisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.FLocaleFormatter_FFormatData_SlotIdx_OnPaintListItem_ParamDisplayName");

	UHotfixUtility_FLocaleFormatter_FFormatData_SlotIdx_OnPaintListItem_ParamDisplayName_Params params;
	params.ListItemObject = ListItemObject;
	params.ParamIdx = ParamIdx;
	params.DisplayName = DisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










struct FString UHotfixUtility::FLocaleFormatter_FFormatData_SlotIdx_OnArrangeListItem_ParamDisplayName(class UBlockyBlockListItemObject* ListItemObject, int ParamIdx, const struct FString& DisplayName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.HotfixUtility.FLocaleFormatter_FFormatData_SlotIdx_OnArrangeListItem_ParamDisplayName");

	UHotfixUtility_FLocaleFormatter_FFormatData_SlotIdx_OnArrangeListItem_ParamDisplayName_Params params;
	params.ListItemObject = ListItemObject;
	params.ParamIdx = ParamIdx;
	params.DisplayName = DisplayName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UIndexerOperatorExpression::SetTarget(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.IndexerOperatorExpression.SetTarget");

	UIndexerOperatorExpression_SetTarget_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UIndexerOperatorExpression::SetIndices(const struct FBlockyLuaHandle& ptr, TArray<struct FBlockyLuaHandle> Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.IndexerOperatorExpression.SetIndices");

	UIndexerOperatorExpression_SetIndices_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FBlockyLuaHandle UIndexerOperatorExpression::GetTarget(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.IndexerOperatorExpression.GetTarget");

	UIndexerOperatorExpression_GetTarget_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<struct FBlockyLuaHandle> UIndexerOperatorExpression::GetIndices(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.IndexerOperatorExpression.GetIndices");

	UIndexerOperatorExpression_GetIndices_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FBlockyLuaHandle UIndexerOperatorExpression::CreateIndexerOperatorExpression()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.IndexerOperatorExpression.CreateIndexerOperatorExpression");

	UIndexerOperatorExpression_CreateIndexerOperatorExpression_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FBlockyLuaHandle UNullExpression::CreateNullExpression()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.NullExpression.CreateNullExpression");

	UNullExpression_CreateNullExpression_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UPresetDesc::NameContainsString(const struct FString& filter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PresetDesc.NameContainsString");

	UPresetDesc_NameContainsString_Params params;
	params.filter = filter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UPresetDesc::IsNameEmpty()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PresetDesc.IsNameEmpty");

	UPresetDesc_IsNameEmpty_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UPresetDesc::IsCodeNameEmpty()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PresetDesc.IsCodeNameEmpty");

	UPresetDesc_IsCodeNameEmpty_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UPresetDesc::HasIcon()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PresetDesc.HasIcon");

	UPresetDesc_HasIcon_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FType UPresetDesc::GetType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PresetDesc.GetType");

	UPresetDesc_GetType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UPresetDesc::GetPresetValidityDurationValue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PresetDesc.GetPresetValidityDurationValue");

	UPresetDesc_GetPresetValidityDurationValue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UPresetDesc::GetLocaleName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PresetDesc.GetLocaleName");

	UPresetDesc_GetLocaleName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TEnumAsByte<EBlockyValueType> UPrimitiveExpression::GetValueType(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.GetValueType");

	UPrimitiveExpression_GetValueType_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UPrimitiveExpression::GetValueString(const struct FBlockyLuaHandle& ptr, struct FString* str)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.GetValueString");

	UPrimitiveExpression_GetValueString_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (str != nullptr)
		*str = params.str;
}








struct FBlockyLuaHandle UPrimitiveExpression::CreatePrimitiveExpression_UInt8(int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_UInt8");

	UPrimitiveExpression_CreatePrimitiveExpression_UInt8_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UPrimitiveExpression::CreatePrimitiveExpression_UInt64(const struct FBlockyLuaHandle& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_UInt64");

	UPrimitiveExpression_CreatePrimitiveExpression_UInt64_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UPrimitiveExpression::CreatePrimitiveExpression_UInt32(int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_UInt32");

	UPrimitiveExpression_CreatePrimitiveExpression_UInt32_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UPrimitiveExpression::CreatePrimitiveExpression_UInt16(int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_UInt16");

	UPrimitiveExpression_CreatePrimitiveExpression_UInt16_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UPrimitiveExpression::CreatePrimitiveExpression_Str(const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Str");

	UPrimitiveExpression_CreatePrimitiveExpression_Str_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UPrimitiveExpression::CreatePrimitiveExpression_Int8(int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Int8");

	UPrimitiveExpression_CreatePrimitiveExpression_Int8_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UPrimitiveExpression::CreatePrimitiveExpression_Int64(const struct FBlockyLuaHandle& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Int64");

	UPrimitiveExpression_CreatePrimitiveExpression_Int64_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UPrimitiveExpression::CreatePrimitiveExpression_Int32(int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Int32");

	UPrimitiveExpression_CreatePrimitiveExpression_Int32_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UPrimitiveExpression::CreatePrimitiveExpression_Int16(int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Int16");

	UPrimitiveExpression_CreatePrimitiveExpression_Int16_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UPrimitiveExpression::CreatePrimitiveExpression_Float(float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Float");

	UPrimitiveExpression_CreatePrimitiveExpression_Float_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UPrimitiveExpression::CreatePrimitiveExpression_Double(const struct FBlockyLuaHandle& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Double");

	UPrimitiveExpression_CreatePrimitiveExpression_Double_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UPrimitiveExpression::CreatePrimitiveExpression_Bool(bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.CreatePrimitiveExpression_Bool");

	UPrimitiveExpression_CreatePrimitiveExpression_Bool_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UPrimitiveExpression::Clear(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.PrimitiveExpression.Clear");

	UPrimitiveExpression_Clear_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool USelectionData::IsCurrentSlot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.SelectionData.IsCurrentSlot");

	USelectionData_IsCurrentSlot_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FBlockyLuaHandle USelfReferenceExpression::CreateSelfReferenceExpression()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.SelfReferenceExpression.CreateSelfReferenceExpression");

	USelfReferenceExpression_CreateSelfReferenceExpression_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString USnippetExpression::GetSnippetString(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.SnippetExpression.GetSnippetString");

	USnippetExpression_GetSnippetString_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<struct FBlockyLuaHandle> USnippetExpression::GetParameters(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.SnippetExpression.GetParameters");

	USnippetExpression_GetParameters_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FBlockyLuaHandle USnippetExpression::CreateDefaultValueExpression()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.SnippetExpression.CreateDefaultValueExpression");

	USnippetExpression_CreateDefaultValueExpression_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UStatementBase::SetNextExpr(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& nextExpr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.StatementBase.SetNextExpr");

	UStatementBase_SetNextExpr_Params params;
	params.ptr = ptr;
	params.nextExpr = nextExpr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UStatementBase::ReleaseExpression(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.StatementBase.ReleaseExpression");

	UStatementBase_ReleaseExpression_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FBlockyLuaHandle UStatementBase::GetNextExpr(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.StatementBase.GetNextExpr");

	UStatementBase_GetNextExpr_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FBlockyLuaHandle UStatementBase::CreateStatementBase()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.StatementBase.CreateStatementBase");

	UStatementBase_CreateStatementBase_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UVariableDeclaration::SetVisitMode(const struct FBlockyLuaHandle& ptr, TEnumAsByte<EBlockyVisitMode> visitMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableDeclaration.SetVisitMode");

	UVariableDeclaration_SetVisitMode_Params params;
	params.ptr = ptr;
	params.visitMode = visitMode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UVariableDeclaration::SetVariableName(const struct FBlockyLuaHandle& ptr, const struct FString& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableDeclaration.SetVariableName");

	UVariableDeclaration_SetVariableName_Params params;
	params.ptr = ptr;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UVariableDeclaration::SetInitValue(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& initValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableDeclaration.SetInitValue");

	UVariableDeclaration_SetInitValue_Params params;
	params.ptr = ptr;
	params.initValue = initValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UVariableDeclaration::SetComment(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Comment)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableDeclaration.SetComment");

	UVariableDeclaration_SetComment_Params params;
	params.ptr = ptr;
	params.Comment = Comment;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








TEnumAsByte<EBlockyVisitMode> UVariableDeclaration::GetVisitMode(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableDeclaration.GetVisitMode");

	UVariableDeclaration_GetVisitMode_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UVariableDeclaration::GetVariableName(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableDeclaration.GetVariableName");

	UVariableDeclaration_GetVariableName_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UVariableDeclaration::GetInitValue(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableDeclaration.GetInitValue");

	UVariableDeclaration_GetInitValue_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UVariableDeclaration::GetComment(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableDeclaration.GetComment");

	UVariableDeclaration_GetComment_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FBlockyLuaHandle UVariableDeclaration::CreateVariableDeclaration()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableDeclaration.CreateVariableDeclaration");

	UVariableDeclaration_CreateVariableDeclaration_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UAssignOperatorStatement::SetTo(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& To)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.AssignOperatorStatement.SetTo");

	UAssignOperatorStatement_SetTo_Params params;
	params.ptr = ptr;
	params.To = To;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UAssignOperatorStatement::SetFrom(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& From)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.AssignOperatorStatement.SetFrom");

	UAssignOperatorStatement_SetFrom_Params params;
	params.ptr = ptr;
	params.From = From;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FBlockyLuaHandle UAssignOperatorStatement::GetTo(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.AssignOperatorStatement.GetTo");

	UAssignOperatorStatement_GetTo_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UAssignOperatorStatement::GetFrom(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.AssignOperatorStatement.GetFrom");

	UAssignOperatorStatement_GetFrom_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FBlockyLuaHandle UAssignOperatorStatement::CreateAssignOperatorStatement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.AssignOperatorStatement.CreateAssignOperatorStatement");

	UAssignOperatorStatement_CreateAssignOperatorStatement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UExecuteSequenceStatement::SetSequence(const struct FBlockyLuaHandle& ptr, TArray<struct FBlockyLuaHandle> Sequence)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ExecuteSequenceStatement.SetSequence");

	UExecuteSequenceStatement_SetSequence_Params params;
	params.ptr = ptr;
	params.Sequence = Sequence;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








TArray<struct FBlockyLuaHandle> UExecuteSequenceStatement::GetSequence(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ExecuteSequenceStatement.GetSequence");

	UExecuteSequenceStatement_GetSequence_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FBlockyLuaHandle UExecuteSequenceStatement::CreateExecuteSequenceStatement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ExecuteSequenceStatement.CreateExecuteSequenceStatement");

	UExecuteSequenceStatement_CreateExecuteSequenceStatement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FBlockyLuaHandle UReturnStatement::CreateReturnStatement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ReturnStatement.CreateReturnStatement");

	UReturnStatement_CreateReturnStatement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UIfStatement::SetTrueStatement(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& trueStatement)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.IfStatement.SetTrueStatement");

	UIfStatement_SetTrueStatement_Params params;
	params.ptr = ptr;
	params.trueStatement = trueStatement;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UIfStatement::SetFalseStatement(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& falseStatement)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.IfStatement.SetFalseStatement");

	UIfStatement_SetFalseStatement_Params params;
	params.ptr = ptr;
	params.falseStatement = falseStatement;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UIfStatement::SetElseIfs(const struct FBlockyLuaHandle& ptr, TArray<struct FBlockyLuaHandle> elseIfs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.IfStatement.SetElseIfs");

	UIfStatement_SetElseIfs_Params params;
	params.ptr = ptr;
	params.elseIfs = elseIfs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UIfStatement::SetCondition(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Condition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.IfStatement.SetCondition");

	UIfStatement_SetCondition_Params params;
	params.ptr = ptr;
	params.Condition = Condition;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FBlockyLuaHandle UIfStatement::GetTrueStatement(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.IfStatement.GetTrueStatement");

	UIfStatement_GetTrueStatement_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UIfStatement::GetFalseStatement(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.IfStatement.GetFalseStatement");

	UIfStatement_GetFalseStatement_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<struct FBlockyLuaHandle> UIfStatement::GetElseIfs(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.IfStatement.GetElseIfs");

	UIfStatement_GetElseIfs_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UIfStatement::GetCondition(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.IfStatement.GetCondition");

	UIfStatement_GetCondition_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FBlockyLuaHandle UIfStatement::CreateIfStatement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.IfStatement.CreateIfStatement");

	UIfStatement_CreateIfStatement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UForLoopStatement::SetStepExpression(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& stepExpression)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForLoopStatement.SetStepExpression");

	UForLoopStatement_SetStepExpression_Params params;
	params.ptr = ptr;
	params.stepExpression = stepExpression;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UForLoopStatement::SetLoopIndexName(const struct FBlockyLuaHandle& ptr, const struct FString& loopIndexName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForLoopStatement.SetLoopIndexName");

	UForLoopStatement_SetLoopIndexName_Params params;
	params.ptr = ptr;
	params.loopIndexName = loopIndexName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UForLoopStatement::SetLoopBody(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& loopBody)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForLoopStatement.SetLoopBody");

	UForLoopStatement_SetLoopBody_Params params;
	params.ptr = ptr;
	params.loopBody = loopBody;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UForLoopStatement::SetEndExpression(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& endExpression)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForLoopStatement.SetEndExpression");

	UForLoopStatement_SetEndExpression_Params params;
	params.ptr = ptr;
	params.endExpression = endExpression;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UForLoopStatement::SetBeginExpression(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& beginExpression)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForLoopStatement.SetBeginExpression");

	UForLoopStatement_SetBeginExpression_Params params;
	params.ptr = ptr;
	params.beginExpression = beginExpression;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FBlockyLuaHandle UForLoopStatement::GetStepExpression(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForLoopStatement.GetStepExpression");

	UForLoopStatement_GetStepExpression_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UForLoopStatement::GetLoopIndexName(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForLoopStatement.GetLoopIndexName");

	UForLoopStatement_GetLoopIndexName_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UForLoopStatement::GetLoopBody(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForLoopStatement.GetLoopBody");

	UForLoopStatement_GetLoopBody_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UForLoopStatement::GetEndExpression(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForLoopStatement.GetEndExpression");

	UForLoopStatement_GetEndExpression_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UForLoopStatement::GetBeginExpression(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForLoopStatement.GetBeginExpression");

	UForLoopStatement_GetBeginExpression_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FBlockyLuaHandle UForLoopStatement::CreateForLoopStatement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForLoopStatement.CreateForLoopStatement");

	UForLoopStatement_CreateForLoopStatement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UForeachLoopStatement::SetLoopItemName(const struct FBlockyLuaHandle& ptr, const struct FString& loopIndexName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForeachLoopStatement.SetLoopItemName");

	UForeachLoopStatement_SetLoopItemName_Params params;
	params.ptr = ptr;
	params.loopIndexName = loopIndexName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UForeachLoopStatement::SetLoopItemExp(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& loopItemExp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForeachLoopStatement.SetLoopItemExp");

	UForeachLoopStatement_SetLoopItemExp_Params params;
	params.ptr = ptr;
	params.loopItemExp = loopItemExp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UForeachLoopStatement::SetLoopIndexName(const struct FBlockyLuaHandle& ptr, const struct FString& loopIndexName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForeachLoopStatement.SetLoopIndexName");

	UForeachLoopStatement_SetLoopIndexName_Params params;
	params.ptr = ptr;
	params.loopIndexName = loopIndexName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UForeachLoopStatement::SetLoopBody(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& loopBody)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForeachLoopStatement.SetLoopBody");

	UForeachLoopStatement_SetLoopBody_Params params;
	params.ptr = ptr;
	params.loopBody = loopBody;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FString UForeachLoopStatement::GetLoopItemName(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForeachLoopStatement.GetLoopItemName");

	UForeachLoopStatement_GetLoopItemName_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UForeachLoopStatement::GetLoopItemExp(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForeachLoopStatement.GetLoopItemExp");

	UForeachLoopStatement_GetLoopItemExp_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UForeachLoopStatement::GetLoopIndexName(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForeachLoopStatement.GetLoopIndexName");

	UForeachLoopStatement_GetLoopIndexName_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UForeachLoopStatement::GetLoopBody(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForeachLoopStatement.GetLoopBody");

	UForeachLoopStatement_GetLoopBody_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FBlockyLuaHandle UForeachLoopStatement::CreateForeachLoopStatement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ForeachLoopStatement.CreateForeachLoopStatement");

	UForeachLoopStatement_CreateForeachLoopStatement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UWhileLoopStatement::SetLoopBody(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& loopBody)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.WhileLoopStatement.SetLoopBody");

	UWhileLoopStatement_SetLoopBody_Params params;
	params.ptr = ptr;
	params.loopBody = loopBody;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UWhileLoopStatement::SetCondition(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Condition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.WhileLoopStatement.SetCondition");

	UWhileLoopStatement_SetCondition_Params params;
	params.ptr = ptr;
	params.Condition = Condition;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FBlockyLuaHandle UWhileLoopStatement::GetLoopBody(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.WhileLoopStatement.GetLoopBody");

	UWhileLoopStatement_GetLoopBody_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UWhileLoopStatement::GetCondition(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.WhileLoopStatement.GetCondition");

	UWhileLoopStatement_GetCondition_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FBlockyLuaHandle UWhileLoopStatement::CreateWhileLoopStatement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.WhileLoopStatement.CreateWhileLoopStatement");

	UWhileLoopStatement_CreateWhileLoopStatement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FBlockyLuaHandle UContinueStatement::CreateContinueStatement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ContinueStatement.CreateContinueStatement");

	UContinueStatement_CreateContinueStatement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FBlockyLuaHandle UBreakStatement::CreateBreakStatement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.BreakStatement.CreateBreakStatement");

	UBreakStatement_CreateBreakStatement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UCommentStatement::SetNewLine(const struct FBlockyLuaHandle& ptr, bool newLine)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommentStatement.SetNewLine");

	UCommentStatement_SetNewLine_Params params;
	params.ptr = ptr;
	params.newLine = newLine;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCommentStatement::SetCommentString(const struct FBlockyLuaHandle& ptr, const struct FString& commentString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommentStatement.SetCommentString");

	UCommentStatement_SetCommentString_Params params;
	params.ptr = ptr;
	params.commentString = commentString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UCommentStatement::GetNewLine(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommentStatement.GetNewLine");

	UCommentStatement_GetNewLine_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCommentStatement::GetCommentString(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommentStatement.GetCommentString");

	UCommentStatement_GetCommentString_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FBlockyLuaHandle UCommentStatement::CreateCommentStatement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.CommentStatement.CreateCommentStatement");

	UCommentStatement_CreateCommentStatement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UExpressionStatement::SetNextStatement(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& nextStatement)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ExpressionStatement.SetNextStatement");

	UExpressionStatement_SetNextStatement_Params params;
	params.ptr = ptr;
	params.nextStatement = nextStatement;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UExpressionStatement::SetExpression(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& expression)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ExpressionStatement.SetExpression");

	UExpressionStatement_SetExpression_Params params;
	params.ptr = ptr;
	params.expression = expression;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FBlockyLuaHandle UExpressionStatement::GetNextStatement(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ExpressionStatement.GetNextStatement");

	UExpressionStatement_GetNextStatement_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UExpressionStatement::GetExpression(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ExpressionStatement.GetExpression");

	UExpressionStatement_GetExpression_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FBlockyLuaHandle UExpressionStatement::CreateExpressionStatement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.ExpressionStatement.CreateExpressionStatement");

	UExpressionStatement_CreateExpressionStatement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UStringAppendExpression::SetRight(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.StringAppendExpression.SetRight");

	UStringAppendExpression_SetRight_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UStringAppendExpression::SetLeft(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.StringAppendExpression.SetLeft");

	UStringAppendExpression_SetLeft_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UStringAppendExpression::SetExtras(const struct FBlockyLuaHandle& ptr, TArray<struct FBlockyLuaHandle> Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.StringAppendExpression.SetExtras");

	UStringAppendExpression_SetExtras_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FBlockyLuaHandle UStringAppendExpression::GetRight(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.StringAppendExpression.GetRight");

	UStringAppendExpression_GetRight_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UStringAppendExpression::GetLeft(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.StringAppendExpression.GetLeft");

	UStringAppendExpression_GetLeft_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<struct FBlockyLuaHandle> UStringAppendExpression::GetExtras(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.StringAppendExpression.GetExtras");

	UStringAppendExpression_GetExtras_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FBlockyLuaHandle UStringAppendExpression::CreateStringAppendExpression()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.StringAppendExpression.CreateStringAppendExpression");

	UStringAppendExpression_CreateStringAppendExpression_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UTypeReference::SetTypeName(const struct FBlockyLuaHandle& Self, const struct FString& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.TypeReference.SetTypeName");

	UTypeReference_SetTypeName_Params params;
	params.Self = Self;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UTypeReference::ReleaseTypeReference(const struct FBlockyLuaHandle& Self)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.TypeReference.ReleaseTypeReference");

	UTypeReference_ReleaseTypeReference_Params params;
	params.Self = Self;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FString UTypeReference::GetTypeName(const struct FBlockyLuaHandle& Self)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.TypeReference.GetTypeName");

	UTypeReference_GetTypeName_Params params;
	params.Self = Self;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UTypeReference::FindClass(const struct FString& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.TypeReference.FindClass");

	UTypeReference_FindClass_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










struct FBlockyLuaHandle UTypeReference::CreateTypeReference3(const struct FBlockyLuaHandle& klass, int numOfPointer, bool isRefer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.TypeReference.CreateTypeReference3");

	UTypeReference_CreateTypeReference3_Params params;
	params.klass = klass;
	params.numOfPointer = numOfPointer;
	params.isRefer = isRefer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FBlockyLuaHandle UTypeReference::CreateTypeReference()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.TypeReference.CreateTypeReference");

	UTypeReference_CreateTypeReference_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaStub UTypeReference::AsStub(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.TypeReference.AsStub");

	UTypeReference_AsStub_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UUnaryOperatorExpression::SetValue(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.UnaryOperatorExpression.SetValue");

	UUnaryOperatorExpression_SetValue_Params params;
	params.ptr = ptr;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UUnaryOperatorExpression::SetOperation(const struct FBlockyLuaHandle& ptr, TEnumAsByte<EBlockyUnaryOperation> Op)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.UnaryOperatorExpression.SetOperation");

	UUnaryOperatorExpression_SetOperation_Params params;
	params.ptr = ptr;
	params.Op = Op;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FBlockyLuaHandle UUnaryOperatorExpression::GetValue(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.UnaryOperatorExpression.GetValue");

	UUnaryOperatorExpression_GetValue_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TEnumAsByte<EBlockyUnaryOperation> UUnaryOperatorExpression::GetOperation(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.UnaryOperatorExpression.GetOperation");

	UUnaryOperatorExpression_GetOperation_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FBlockyLuaHandle UUnaryOperatorExpression::CreateUnaryOperatorExpression()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.UnaryOperatorExpression.CreateUnaryOperatorExpression");

	UUnaryOperatorExpression_CreateUnaryOperatorExpression_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UVarDefiner::SetType(const struct FType& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VarDefiner.SetType");

	UVarDefiner_SetType_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







TEnumAsByte<EBlockyVariableType> UVarDefiner::GetVarTypeEnum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VarDefiner.GetVarTypeEnum");

	UVarDefiner_GetVarTypeEnum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TEnumAsByte<EBlockyListItemType> UVarDefiner::GetTypeEnum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VarDefiner.GetTypeEnum");

	UVarDefiner_GetTypeEnum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FType UVarDefiner::GetType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VarDefiner.GetType");

	UVarDefiner_GetType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UVarDefiner::GetFirstShowName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VarDefiner.GetFirstShowName");

	UVarDefiner_GetFirstShowName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UVarDefiner::GetCurrentLocateShowName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VarDefiner.GetCurrentLocateShowName");

	UVarDefiner_GetCurrentLocateShowName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UVariableReferenceExpression::SetVariableName(const struct FBlockyLuaHandle& ptr, const struct FString& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableReferenceExpression.SetVariableName");

	UVariableReferenceExpression_SetVariableName_Params params;
	params.ptr = ptr;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UVariableReferenceExpression::SetHost(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Host)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableReferenceExpression.SetHost");

	UVariableReferenceExpression_SetHost_Params params;
	params.ptr = ptr;
	params.Host = Host;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FString UVariableReferenceExpression::GetVariableName(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableReferenceExpression.GetVariableName");

	UVariableReferenceExpression_GetVariableName_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UVariableReferenceExpression::GetHost(const struct FBlockyLuaHandle& ptr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableReferenceExpression.GetHost");

	UVariableReferenceExpression_GetHost_Params params;
	params.ptr = ptr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FBlockyLuaHandle UVariableReferenceExpression::CreateVariableReferenceExpression2(const struct FBlockyLuaHandle& Host, const struct FString& VariableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableReferenceExpression.CreateVariableReferenceExpression2");

	UVariableReferenceExpression_CreateVariableReferenceExpression2_Params params;
	params.Host = Host;
	params.VariableName = VariableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBlockyLuaHandle UVariableReferenceExpression::CreateVariableReferenceExpression(const struct FString& VariableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BlockyLuaCore.VariableReferenceExpression.CreateVariableReferenceExpression");

	UVariableReferenceExpression_CreateVariableReferenceExpression_Params params;
	params.VariableName = VariableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

