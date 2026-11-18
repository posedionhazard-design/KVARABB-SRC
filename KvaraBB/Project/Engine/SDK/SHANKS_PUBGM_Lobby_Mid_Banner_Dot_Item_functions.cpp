
 
#include "../SDK.hpp"

namespace SDK
{









void ULobby_Mid_Banner_Dot_Item_C::SetData(bool bSelect)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Lobby_Mid_Banner_Dot_Item.Lobby_Mid_Banner_Dot_Item_C.SetData");

	ULobby_Mid_Banner_Dot_Item_C_SetData_Params params;
	params.bSelect = bSelect;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

