
 
#include "../SDK.hpp"

namespace SDK
{









void UVirtualBattleItemHandle_AvatarBP_C::GetWrapperClass(class UClass** WrapperClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VirtualBattleItemHandle_AvatarBP.VirtualBattleItemHandle_AvatarBP_C.GetWrapperClass");

	UVirtualBattleItemHandle_AvatarBP_C_GetWrapperClass_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (WrapperClass != nullptr)
		*WrapperClass = params.WrapperClass;
}







void UVirtualBattleItemHandle_AvatarBP_C::Constuct(struct FItemDefineID* InDefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VirtualBattleItemHandle_AvatarBP.VirtualBattleItemHandle_AvatarBP_C.Constuct");

	UVirtualBattleItemHandle_AvatarBP_C_Constuct_Params params;
	params.InDefineID = InDefineID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVirtualBattleItemHandle_AvatarBP_C::ExecuteUbergraph_VirtualBattleItemHandle_AvatarBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function VirtualBattleItemHandle_AvatarBP.VirtualBattleItemHandle_AvatarBP_C.ExecuteUbergraph_VirtualBattleItemHandle_AvatarBP");

	UVirtualBattleItemHandle_AvatarBP_C_ExecuteUbergraph_VirtualBattleItemHandle_AvatarBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

