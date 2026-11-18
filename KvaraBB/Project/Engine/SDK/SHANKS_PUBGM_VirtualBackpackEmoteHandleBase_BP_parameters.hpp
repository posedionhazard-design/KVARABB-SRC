#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UVirtualBackpackEmoteHandleBase_BP_C_ExtractItemData_Params
{
	struct FBattleItemData                             ReturnValue;                                              
};


struct UVirtualBackpackEmoteHandleBase_BP_C_HandleDisuse_Params
{
	EBattleItemDisuseReason*                           Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UVirtualBackpackEmoteHandleBase_BP_C_HandleUse_Params
{
	struct FBattleItemUseTarget*                       Target;                                                   
	EBattleItemUseReason*                              Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UVirtualBackpackEmoteHandleBase_BP_C_HandlePickup_Params
{
	TScriptInterface<class UItemContainerInterface>    ItemContainer;                                            
	struct FBattleItemPickupInfo*                      PickupInfo;                                               
	EBattleItemPickupReason*                           Reason;                                                   
	bool                                               ReturnValue;                                              
};

}

