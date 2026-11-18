
 
#include "../SDK.hpp"

namespace SDK
{







void UReconnect_BP_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Reconnect_BP.Reconnect_BP_C.Construct");

	UReconnect_BP_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UReconnect_BP_C::ExecuteUbergraph_Reconnect_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Reconnect_BP.Reconnect_BP_C.ExecuteUbergraph_Reconnect_BP");

	UReconnect_BP_C_ExecuteUbergraph_Reconnect_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

