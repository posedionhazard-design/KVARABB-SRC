
 
#include "../SDK.hpp"

namespace SDK
{









void UCommon_Tips_Bg_UIBP_C::PreConstruct(bool* IsDesignTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_Tips_Bg_UIBP.Common_Tips_Bg_UIBP_C.PreConstruct");

	UCommon_Tips_Bg_UIBP_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCommon_Tips_Bg_UIBP_C::ExecuteUbergraph_Common_Tips_Bg_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_Tips_Bg_UIBP.Common_Tips_Bg_UIBP_C.ExecuteUbergraph_Common_Tips_Bg_UIBP");

	UCommon_Tips_Bg_UIBP_C_ExecuteUbergraph_Common_Tips_Bg_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

