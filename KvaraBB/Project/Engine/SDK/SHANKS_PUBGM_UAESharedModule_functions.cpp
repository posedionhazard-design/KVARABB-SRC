
 
#include "../SDK.hpp"

namespace SDK
{









TArray<struct FUAEBlackboardParameter> UOwnBlackboardInterface::GetOwnBlackboardParameter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.OwnBlackboardInterface.GetOwnBlackboardParameter");

	UOwnBlackboardInterface_GetOwnBlackboardParameter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UUAEBlackboard* UOwnBlackboardInterface::GetOwnBlackboard()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.OwnBlackboardInterface.GetOwnBlackboard");

	UOwnBlackboardInterface_GetOwnBlackboard_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UUAEBlackboardBlueprintFunctionLibrary::SetValueAsWeakObject(const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue, struct FUAEBlackboardContainer* UAEBlackboardContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsWeakObject");

	UUAEBlackboardBlueprintFunctionLibrary_SetValueAsWeakObject_Params params;
	params.Key = Key;
	params.ObjectValue = ObjectValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UAEBlackboardContainer != nullptr)
		*UAEBlackboardContainer = params.UAEBlackboardContainer;
}









void UUAEBlackboardBlueprintFunctionLibrary::SetValueAsVector(const struct FUAEBlackboardKeySelector& Key, const struct FVector& VectorValue, struct FUAEBlackboardContainer* UAEBlackboardContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsVector");

	UUAEBlackboardBlueprintFunctionLibrary_SetValueAsVector_Params params;
	params.Key = Key;
	params.VectorValue = VectorValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UAEBlackboardContainer != nullptr)
		*UAEBlackboardContainer = params.UAEBlackboardContainer;
}









void UUAEBlackboardBlueprintFunctionLibrary::SetValueAsString(const struct FUAEBlackboardKeySelector& Key, const struct FString& StringValue, struct FUAEBlackboardContainer* UAEBlackboardContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsString");

	UUAEBlackboardBlueprintFunctionLibrary_SetValueAsString_Params params;
	params.Key = Key;
	params.StringValue = StringValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UAEBlackboardContainer != nullptr)
		*UAEBlackboardContainer = params.UAEBlackboardContainer;
}









void UUAEBlackboardBlueprintFunctionLibrary::SetValueAsRotator(const struct FUAEBlackboardKeySelector& Key, const struct FRotator& RotatorValue, struct FUAEBlackboardContainer* UAEBlackboardContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsRotator");

	UUAEBlackboardBlueprintFunctionLibrary_SetValueAsRotator_Params params;
	params.Key = Key;
	params.RotatorValue = RotatorValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UAEBlackboardContainer != nullptr)
		*UAEBlackboardContainer = params.UAEBlackboardContainer;
}









void UUAEBlackboardBlueprintFunctionLibrary::SetValueAsObject(const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue, struct FUAEBlackboardContainer* UAEBlackboardContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsObject");

	UUAEBlackboardBlueprintFunctionLibrary_SetValueAsObject_Params params;
	params.Key = Key;
	params.ObjectValue = ObjectValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UAEBlackboardContainer != nullptr)
		*UAEBlackboardContainer = params.UAEBlackboardContainer;
}









void UUAEBlackboardBlueprintFunctionLibrary::SetValueAsName(const struct FUAEBlackboardKeySelector& Key, const struct FName& NameValue, struct FUAEBlackboardContainer* UAEBlackboardContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsName");

	UUAEBlackboardBlueprintFunctionLibrary_SetValueAsName_Params params;
	params.Key = Key;
	params.NameValue = NameValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UAEBlackboardContainer != nullptr)
		*UAEBlackboardContainer = params.UAEBlackboardContainer;
}









void UUAEBlackboardBlueprintFunctionLibrary::SetValueAsInt(const struct FUAEBlackboardKeySelector& Key, int IntValue, struct FUAEBlackboardContainer* UAEBlackboardContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsInt");

	UUAEBlackboardBlueprintFunctionLibrary_SetValueAsInt_Params params;
	params.Key = Key;
	params.IntValue = IntValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UAEBlackboardContainer != nullptr)
		*UAEBlackboardContainer = params.UAEBlackboardContainer;
}









void UUAEBlackboardBlueprintFunctionLibrary::SetValueAsFloat(const struct FUAEBlackboardKeySelector& Key, float FloatValue, struct FUAEBlackboardContainer* UAEBlackboardContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsFloat");

	UUAEBlackboardBlueprintFunctionLibrary_SetValueAsFloat_Params params;
	params.Key = Key;
	params.FloatValue = FloatValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UAEBlackboardContainer != nullptr)
		*UAEBlackboardContainer = params.UAEBlackboardContainer;
}









void UUAEBlackboardBlueprintFunctionLibrary::SetValueAsEnum(const struct FUAEBlackboardKeySelector& Key, unsigned char EnumValue, struct FUAEBlackboardContainer* UAEBlackboardContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsEnum");

	UUAEBlackboardBlueprintFunctionLibrary_SetValueAsEnum_Params params;
	params.Key = Key;
	params.EnumValue = EnumValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UAEBlackboardContainer != nullptr)
		*UAEBlackboardContainer = params.UAEBlackboardContainer;
}









void UUAEBlackboardBlueprintFunctionLibrary::SetValueAsClass(const struct FUAEBlackboardKeySelector& Key, class UClass* ClassValue, struct FUAEBlackboardContainer* UAEBlackboardContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsClass");

	UUAEBlackboardBlueprintFunctionLibrary_SetValueAsClass_Params params;
	params.Key = Key;
	params.ClassValue = ClassValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UAEBlackboardContainer != nullptr)
		*UAEBlackboardContainer = params.UAEBlackboardContainer;
}









void UUAEBlackboardBlueprintFunctionLibrary::SetValueAsBool(const struct FUAEBlackboardKeySelector& Key, bool BoolValue, struct FUAEBlackboardContainer* UAEBlackboardContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.SetValueAsBool");

	UUAEBlackboardBlueprintFunctionLibrary_SetValueAsBool_Params params;
	params.Key = Key;
	params.BoolValue = BoolValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UAEBlackboardContainer != nullptr)
		*UAEBlackboardContainer = params.UAEBlackboardContainer;
}









bool UUAEBlackboardBlueprintFunctionLibrary::IsExistWeakObject(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistWeakObject");

	UUAEBlackboardBlueprintFunctionLibrary_IsExistWeakObject_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UUAEBlackboardBlueprintFunctionLibrary::IsExistVector(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistVector");

	UUAEBlackboardBlueprintFunctionLibrary_IsExistVector_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UUAEBlackboardBlueprintFunctionLibrary::IsExistString(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistString");

	UUAEBlackboardBlueprintFunctionLibrary_IsExistString_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UUAEBlackboardBlueprintFunctionLibrary::IsExistRotator(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistRotator");

	UUAEBlackboardBlueprintFunctionLibrary_IsExistRotator_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UUAEBlackboardBlueprintFunctionLibrary::IsExistObject(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistObject");

	UUAEBlackboardBlueprintFunctionLibrary_IsExistObject_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UUAEBlackboardBlueprintFunctionLibrary::IsExistName(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistName");

	UUAEBlackboardBlueprintFunctionLibrary_IsExistName_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UUAEBlackboardBlueprintFunctionLibrary::IsExistInt(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistInt");

	UUAEBlackboardBlueprintFunctionLibrary_IsExistInt_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UUAEBlackboardBlueprintFunctionLibrary::IsExistFloat(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistFloat");

	UUAEBlackboardBlueprintFunctionLibrary_IsExistFloat_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UUAEBlackboardBlueprintFunctionLibrary::IsExistEnum(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistEnum");

	UUAEBlackboardBlueprintFunctionLibrary_IsExistEnum_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UUAEBlackboardBlueprintFunctionLibrary::IsExistClass(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistClass");

	UUAEBlackboardBlueprintFunctionLibrary_IsExistClass_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UUAEBlackboardBlueprintFunctionLibrary::IsExistBool(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.IsExistBool");

	UUAEBlackboardBlueprintFunctionLibrary_IsExistBool_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class UObject* UUAEBlackboardBlueprintFunctionLibrary::GetValueAsWeakObject(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsWeakObject");

	UUAEBlackboardBlueprintFunctionLibrary_GetValueAsWeakObject_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class AActor* UUAEBlackboardBlueprintFunctionLibrary::GetValueAsWeakActor(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsWeakActor");

	UUAEBlackboardBlueprintFunctionLibrary_GetValueAsWeakActor_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FVector UUAEBlackboardBlueprintFunctionLibrary::GetValueAsVector(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsVector");

	UUAEBlackboardBlueprintFunctionLibrary_GetValueAsVector_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UUAEBlackboardBlueprintFunctionLibrary::GetValueAsString(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsString");

	UUAEBlackboardBlueprintFunctionLibrary_GetValueAsString_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FRotator UUAEBlackboardBlueprintFunctionLibrary::GetValueAsRotator(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsRotator");

	UUAEBlackboardBlueprintFunctionLibrary_GetValueAsRotator_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class UObject* UUAEBlackboardBlueprintFunctionLibrary::GetValueAsObject(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsObject");

	UUAEBlackboardBlueprintFunctionLibrary_GetValueAsObject_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FName UUAEBlackboardBlueprintFunctionLibrary::GetValueAsName(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsName");

	UUAEBlackboardBlueprintFunctionLibrary_GetValueAsName_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









int UUAEBlackboardBlueprintFunctionLibrary::GetValueAsInt(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsInt");

	UUAEBlackboardBlueprintFunctionLibrary_GetValueAsInt_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









float UUAEBlackboardBlueprintFunctionLibrary::GetValueAsFloat(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsFloat");

	UUAEBlackboardBlueprintFunctionLibrary_GetValueAsFloat_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









unsigned char UUAEBlackboardBlueprintFunctionLibrary::GetValueAsEnum(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsEnum");

	UUAEBlackboardBlueprintFunctionLibrary_GetValueAsEnum_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class UClass* UUAEBlackboardBlueprintFunctionLibrary::GetValueAsClass(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsClass");

	UUAEBlackboardBlueprintFunctionLibrary_GetValueAsClass_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UUAEBlackboardBlueprintFunctionLibrary::GetValueAsBool(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsBool");

	UUAEBlackboardBlueprintFunctionLibrary_GetValueAsBool_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class AActor* UUAEBlackboardBlueprintFunctionLibrary::GetValueAsActor(const struct FUAEBlackboardContainer& UAEBlackboardContainer, const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.GetValueAsActor");

	UUAEBlackboardBlueprintFunctionLibrary_GetValueAsActor_Params params;
	params.UAEBlackboardContainer = UAEBlackboardContainer;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UUAEBlackboardBlueprintFunctionLibrary::FillBlackboardByBlackboard(struct FUAEBlackboardContainer* UAEBlackboardContainer, struct FUAEBlackboardContainer* OtherUAEBlackboardContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.FillBlackboardByBlackboard");

	UUAEBlackboardBlueprintFunctionLibrary_FillBlackboardByBlackboard_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UAEBlackboardContainer != nullptr)
		*UAEBlackboardContainer = params.UAEBlackboardContainer;
	if (OtherUAEBlackboardContainer != nullptr)
		*OtherUAEBlackboardContainer = params.OtherUAEBlackboardContainer;
}








void UUAEBlackboardBlueprintFunctionLibrary::FillBlackboard(TArray<struct FUAEBlackboardParameter> ParamList, struct FUAEBlackboardContainer* UAEBlackboardContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.FillBlackboard");

	UUAEBlackboardBlueprintFunctionLibrary_FillBlackboard_Params params;
	params.ParamList = ParamList;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UAEBlackboardContainer != nullptr)
		*UAEBlackboardContainer = params.UAEBlackboardContainer;
}








void UUAEBlackboardBlueprintFunctionLibrary::AddValueByParam(const struct FUAEBlackboardParameter& NewParam, struct FUAEBlackboardContainer* UAEBlackboardContainer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboardBlueprintFunctionLibrary.AddValueByParam");

	UUAEBlackboardBlueprintFunctionLibrary_AddValueByParam_Params params;
	params.NewParam = NewParam;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UAEBlackboardContainer != nullptr)
		*UAEBlackboardContainer = params.UAEBlackboardContainer;
}








void UUAEBlackboard::SetValueAsWeakObject(const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.SetValueAsWeakObject");

	UUAEBlackboard_SetValueAsWeakObject_Params params;
	params.Key = Key;
	params.ObjectValue = ObjectValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UUAEBlackboard::SetValueAsVector(const struct FUAEBlackboardKeySelector& Key, const struct FVector& VectorValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.SetValueAsVector");

	UUAEBlackboard_SetValueAsVector_Params params;
	params.Key = Key;
	params.VectorValue = VectorValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UUAEBlackboard::SetValueAsString(const struct FUAEBlackboardKeySelector& Key, const struct FString& StringValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.SetValueAsString");

	UUAEBlackboard_SetValueAsString_Params params;
	params.Key = Key;
	params.StringValue = StringValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UUAEBlackboard::SetValueAsRotator(const struct FUAEBlackboardKeySelector& Key, const struct FRotator& VectorValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.SetValueAsRotator");

	UUAEBlackboard_SetValueAsRotator_Params params;
	params.Key = Key;
	params.VectorValue = VectorValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UUAEBlackboard::SetValueAsObject(const struct FUAEBlackboardKeySelector& Key, class UObject* ObjectValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.SetValueAsObject");

	UUAEBlackboard_SetValueAsObject_Params params;
	params.Key = Key;
	params.ObjectValue = ObjectValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UUAEBlackboard::SetValueAsName(const struct FUAEBlackboardKeySelector& Key, const struct FName& NameValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.SetValueAsName");

	UUAEBlackboard_SetValueAsName_Params params;
	params.Key = Key;
	params.NameValue = NameValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UUAEBlackboard::SetValueAsInt(const struct FUAEBlackboardKeySelector& Key, int IntValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.SetValueAsInt");

	UUAEBlackboard_SetValueAsInt_Params params;
	params.Key = Key;
	params.IntValue = IntValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UUAEBlackboard::SetValueAsFloat(const struct FUAEBlackboardKeySelector& Key, float FloatValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.SetValueAsFloat");

	UUAEBlackboard_SetValueAsFloat_Params params;
	params.Key = Key;
	params.FloatValue = FloatValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UUAEBlackboard::SetValueAsEnum(const struct FUAEBlackboardKeySelector& Key, unsigned char EnumValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.SetValueAsEnum");

	UUAEBlackboard_SetValueAsEnum_Params params;
	params.Key = Key;
	params.EnumValue = EnumValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UUAEBlackboard::SetValueAsClass(const struct FUAEBlackboardKeySelector& Key, class UClass* ClassValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.SetValueAsClass");

	UUAEBlackboard_SetValueAsClass_Params params;
	params.Key = Key;
	params.ClassValue = ClassValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UUAEBlackboard::SetValueAsBool(const struct FUAEBlackboardKeySelector& Key, bool BoolValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.SetValueAsBool");

	UUAEBlackboard_SetValueAsBool_Params params;
	params.Key = Key;
	params.BoolValue = BoolValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UUAEBlackboard::IsExistWeakObject(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.IsExistWeakObject");

	UUAEBlackboard_IsExistWeakObject_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UUAEBlackboard::IsExistVector(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.IsExistVector");

	UUAEBlackboard_IsExistVector_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UUAEBlackboard::IsExistString(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.IsExistString");

	UUAEBlackboard_IsExistString_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UUAEBlackboard::IsExistRotator(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.IsExistRotator");

	UUAEBlackboard_IsExistRotator_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UUAEBlackboard::IsExistObject(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.IsExistObject");

	UUAEBlackboard_IsExistObject_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UUAEBlackboard::IsExistName(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.IsExistName");

	UUAEBlackboard_IsExistName_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UUAEBlackboard::IsExistInt(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.IsExistInt");

	UUAEBlackboard_IsExistInt_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UUAEBlackboard::IsExistFloat(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.IsExistFloat");

	UUAEBlackboard_IsExistFloat_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UUAEBlackboard::IsExistEnum(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.IsExistEnum");

	UUAEBlackboard_IsExistEnum_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UUAEBlackboard::IsExistClass(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.IsExistClass");

	UUAEBlackboard_IsExistClass_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UUAEBlackboard::IsExistBool(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.IsExistBool");

	UUAEBlackboard_IsExistBool_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UObject* UUAEBlackboard::GetValueAsWeakObject(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.GetValueAsWeakObject");

	UUAEBlackboard_GetValueAsWeakObject_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class AActor* UUAEBlackboard::GetValueAsWeakActor(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.GetValueAsWeakActor");

	UUAEBlackboard_GetValueAsWeakActor_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FVector UUAEBlackboard::GetValueAsVector(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.GetValueAsVector");

	UUAEBlackboard_GetValueAsVector_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UUAEBlackboard::GetValueAsString(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.GetValueAsString");

	UUAEBlackboard_GetValueAsString_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FRotator UUAEBlackboard::GetValueAsRotator(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.GetValueAsRotator");

	UUAEBlackboard_GetValueAsRotator_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UObject* UUAEBlackboard::GetValueAsObject(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.GetValueAsObject");

	UUAEBlackboard_GetValueAsObject_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FName UUAEBlackboard::GetValueAsName(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.GetValueAsName");

	UUAEBlackboard_GetValueAsName_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UUAEBlackboard::GetValueAsInt(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.GetValueAsInt");

	UUAEBlackboard_GetValueAsInt_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








float UUAEBlackboard::GetValueAsFloat(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.GetValueAsFloat");

	UUAEBlackboard_GetValueAsFloat_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








unsigned char UUAEBlackboard::GetValueAsEnum(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.GetValueAsEnum");

	UUAEBlackboard_GetValueAsEnum_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UClass* UUAEBlackboard::GetValueAsClass(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.GetValueAsClass");

	UUAEBlackboard_GetValueAsClass_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UUAEBlackboard::GetValueAsBool(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.GetValueAsBool");

	UUAEBlackboard_GetValueAsBool_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class AActor* UUAEBlackboard::GetValueAsActor(const struct FUAEBlackboardKeySelector& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.GetValueAsActor");

	UUAEBlackboard_GetValueAsActor_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UUAEBlackboard::AddValueByParam(const struct FUAEBlackboardParameter& NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAESharedModule.UAEBlackboard.AddValueByParam");

	UUAEBlackboard_AddValueByParam_Params params;
	params.NewParam = NewParam;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

