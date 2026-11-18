
 
#include "../SDK.hpp"

namespace SDK
{












void UTemBPLibrary::TempUIMsgInvokeRef(class UObject* ObjContext, const struct FString& MsgName, const struct FString& ModuleName, TArray<struct FTemBPDataAddr> ParamArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TemBPNode.TemBPLibrary.TempUIMsgInvokeRef");

	UTemBPLibrary_TempUIMsgInvokeRef_Params params;
	params.ObjContext = ObjContext;
	params.MsgName = MsgName;
	params.ModuleName = ModuleName;
	params.ParamArray = ParamArray;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UTemBPLibrary::TempBridgeEventInvokeRef(class UObject* ObjContext, const struct FString& EventType, const struct FString& EventID, TArray<struct FTemBPDataAddr> ParamArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TemBPNode.TemBPLibrary.TempBridgeEventInvokeRef");

	UTemBPLibrary_TempBridgeEventInvokeRef_Params params;
	params.ObjContext = ObjContext;
	params.EventType = EventType;
	params.EventID = EventID;
	params.ParamArray = ParamArray;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









struct FTemBPDataAddr UTemBPLibrary::AddrFromWild(const struct FString& DataType, const struct FTemBPDataAddr& InAny)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TemBPNode.TemBPLibrary.AddrFromWild");

	UTemBPLibrary_AddrFromWild_Params params;
	params.DataType = DataType;
	params.InAny = InAny;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FTemBPDataAddr UTemBPLibrary::AddrFromSet(const struct FString& DataType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TemBPNode.TemBPLibrary.AddrFromSet");

	UTemBPLibrary_AddrFromSet_Params params;
	params.DataType = DataType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FTemBPDataAddr UTemBPLibrary::AddrFromMap(const struct FString& DataType, TMap<int, int> InAny)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TemBPNode.TemBPLibrary.AddrFromMap");

	UTemBPLibrary_AddrFromMap_Params params;
	params.DataType = DataType;
	params.InAny = InAny;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FTemBPDataAddr UTemBPLibrary::AddrFromArray(const struct FString& DataType, TArray<int> InAny)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TemBPNode.TemBPLibrary.AddrFromArray");

	UTemBPLibrary_AddrFromArray_Params params;
	params.DataType = DataType;
	params.InAny = InAny;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

