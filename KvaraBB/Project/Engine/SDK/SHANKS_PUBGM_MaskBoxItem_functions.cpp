
 
#include "../SDK.hpp"

namespace SDK
{







void UMaskBoxItem_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MaskBoxItem.MaskBoxItem_C.Construct");

	UMaskBoxItem_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMaskBoxItem_C::ExecuteUbergraph_MaskBoxItem(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MaskBoxItem.MaskBoxItem_C.ExecuteUbergraph_MaskBoxItem");

	UMaskBoxItem_C_ExecuteUbergraph_MaskBoxItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

