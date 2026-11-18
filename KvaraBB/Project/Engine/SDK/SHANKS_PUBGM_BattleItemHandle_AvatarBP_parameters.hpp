#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UBattleItemHandle_AvatarBP_C_IsSwimConfig_Params
{
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandle_AvatarBP_C_BPNeedCheckCapacityInHandleDisuse_Params
{
	EBattleItemDisuseReason*                           Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandle_AvatarBP_C_GetWrapperClass_Params
{
	class UClass*                                      WrapperClass;                                             
};


struct UBattleItemHandle_AvatarBP_C_ExtractItemData_Params
{
	struct FBattleItemData                             ReturnValue;                                              
};


struct UBattleItemHandle_AvatarBP_C_LocalHandleDisuse_Params
{
};


struct UBattleItemHandle_AvatarBP_C_GetWorldInternal_Params
{
	class UWorld*                                      ReturnValue;                                              
};


struct UBattleItemHandle_AvatarBP_C_SpawnWrapperOnGround_Params
{
	class UClass*                                      WrapperClass;                                             
	bool                                               bUseRandomLoc;                                            
};


struct UBattleItemHandle_AvatarBP_C_HandleDisuse_Params
{
	EBattleItemDisuseReason*                           Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandle_AvatarBP_C_HandleDrop_Params
{
	int*                                               InCount;                                                  
	EBattleItemDropReason*                             Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandle_AvatarBP_C_HandlePickup_Params
{
	TScriptInterface<class UItemContainerInterface>    ItemContainer;                                            
	struct FBattleItemPickupInfo*                      PickupInfo;                                               
	EBattleItemPickupReason*                           Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandle_AvatarBP_C_HandleUse_Params
{
	struct FBattleItemUseTarget*                       Target;                                                   
	EBattleItemUseReason*                              Reason;                                                   
	bool                                               ReturnValue;                                              
};

}

