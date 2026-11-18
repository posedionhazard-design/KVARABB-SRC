
 
#include "../SDK.hpp"

namespace SDK
{












void UStatManager::ReportUAStatsEvent(TArray<struct FString> InReportChannels, const struct FString& InEventName, TMap<struct FString, struct FString> InParams, bool InIsRealTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Intl.StatManager.ReportUAStatsEvent");

	UStatManager_ReportUAStatsEvent_Params params;
	params.InReportChannels = InReportChannels;
	params.InEventName = InEventName;
	params.InParams = InParams;
	params.InIsRealTime = InIsRealTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}












void UStatManager::ReportRevenueWithChannel(int InPurchaseEventType, const struct FString& InCurrencyCode, const struct FString& InExpense, TMap<struct FString, struct FString> InParams, const struct FString& InExtraJson, const struct FString& InChannel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Intl.StatManager.ReportRevenueWithChannel");

	UStatManager_ReportRevenueWithChannel_Params params;
	params.InPurchaseEventType = InPurchaseEventType;
	params.InCurrencyCode = InCurrencyCode;
	params.InExpense = InExpense;
	params.InParams = InParams;
	params.InExtraJson = InExtraJson;
	params.InChannel = InChannel;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void UStatManager::ReportRevenue(int InPurchaseEventType, const struct FString& InCurrencyCode, const struct FString& InExpense, TMap<struct FString, struct FString> InParams, const struct FString& InExtraJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Intl.StatManager.ReportRevenue");

	UStatManager_ReportRevenue_Params params;
	params.InPurchaseEventType = InPurchaseEventType;
	params.InCurrencyCode = InCurrencyCode;
	params.InExpense = InExpense;
	params.InParams = InParams;
	params.InExtraJson = InExtraJson;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UStatManager::ReportPurchase(int InPurchaseEventType, const struct FString& InCurrencyCode, const struct FString& InExpense, bool isRealTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Intl.StatManager.ReportPurchase");

	UStatManager_ReportPurchase_Params params;
	params.InPurchaseEventType = InPurchaseEventType;
	params.InCurrencyCode = InCurrencyCode;
	params.InExpense = InExpense;
	params.isRealTime = isRealTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UStatManager::ReportEventWithString(int EventType, const struct FString& _eventBody, bool isRealTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Intl.StatManager.ReportEventWithString");

	UStatManager_ReportEventWithString_Params params;
	params.EventType = EventType;
	params._eventBody = _eventBody;
	params.isRealTime = isRealTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UStatManager::ReportEventWithParam(int EventType, TMap<struct FString, struct FString> _params, bool isRealTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Intl.StatManager.ReportEventWithParam");

	UStatManager_ReportEventWithParam_Params params;
	params.EventType = EventType;
	params._params = _params;
	params.isRealTime = isRealTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UStatManager::ReportEventWithNoParam(int EventType, bool isRealTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Intl.StatManager.ReportEventWithNoParam");

	UStatManager_ReportEventWithNoParam_Params params;
	params.EventType = EventType;
	params.isRealTime = isRealTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







class UStatManager* UStatManager::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Intl.StatManager.GetInstance");

	UStatManager_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

