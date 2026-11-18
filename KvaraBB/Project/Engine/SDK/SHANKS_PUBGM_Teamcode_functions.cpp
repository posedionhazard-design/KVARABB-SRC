
 
#include "../SDK.hpp"

namespace SDK
{










void UTeamcode_C::SetData(const struct FString& code, bool isShowClose)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Teamcode.Teamcode_C.SetData");

	UTeamcode_C_SetData_Params params;
	params.code = code;
	params.isShowClose = isShowClose;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

