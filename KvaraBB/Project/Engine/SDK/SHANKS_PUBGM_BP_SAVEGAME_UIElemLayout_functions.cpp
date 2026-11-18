
 
#include "../SDK.hpp"

namespace SDK
{










void UBP_SAVEGAME_UIElemLayout_C::BPStructToCPP(struct FBP_STRUCT_UIElemLayoutDetail* In, struct FUIElemLayoutDetail* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_SAVEGAME_UIElemLayout.BP_SAVEGAME_UIElemLayout_C.BPStructToCPP");

	UBP_SAVEGAME_UIElemLayout_C_BPStructToCPP_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (In != nullptr)
		*In = params.In;
	if (Out != nullptr)
		*Out = params.Out;
}








void UBP_SAVEGAME_UIElemLayout_C::CPPStructToBP(struct FUIElemLayoutDetail* In, struct FBP_STRUCT_UIElemLayoutDetail* Out)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BP_SAVEGAME_UIElemLayout.BP_SAVEGAME_UIElemLayout_C.CPPStructToBP");

	UBP_SAVEGAME_UIElemLayout_C_CPPStructToBP_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (In != nullptr)
		*In = params.In;
	if (Out != nullptr)
		*Out = params.Out;
}


}

