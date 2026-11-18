#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UBattleItemHandle_Pistol_C_GetWrapperClass_Params
{
	bool                                               found;                                                    
	class UClass*                                      WrapperClass;                                             
};


struct UBattleItemHandle_Pistol_C_HandleWeaponDestroy_Params
{
	EBattleItemDisuseReason                            Reason;                                                   
};


struct UBattleItemHandle_Pistol_C_IsMainSlotsHaveWeapon_Params
{
	bool                                               HasWeapon;                                                
};


struct UBattleItemHandle_Pistol_C_GetOwingtWeapon_Params
{
	class ASTExtraWeapon*                              NewParam;                                                 
};


struct UBattleItemHandle_Pistol_C_LocalHandleDisuse_Params
{
	EBattleItemDisuseReason                            Reason;                                                   
};


struct UBattleItemHandle_Pistol_C_GetAvailableTargetLogicSocketName_Params
{
	struct FName                                       TargetSocket;                                             
	struct FName                                       Ret;                                                      
	bool                                               bNeedPutDownOldWeapon;                                    
	bool                                               bAutoUse;                                                 
};


struct UBattleItemHandle_Pistol_C_GetAvailableInstantLogicSocketName_Params
{
	struct FName                                       Ret;                                                      
	bool                                               bNeedPutDownOldWeapon;                                    
	bool                                               bAutoUse;                                                 
};


struct UBattleItemHandle_Pistol_C_CreateWrapperOnGround_Params
{
};


struct UBattleItemHandle_Pistol_C_HandlePickup_Params
{
	TScriptInterface<class UItemContainerInterface>    ItemContainer;                                            
	struct FBattleItemPickupInfo*                      PickupInfo;                                               
	EBattleItemPickupReason*                           Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandle_Pistol_C_HandleUse_Params
{
	struct FBattleItemUseTarget*                       Target;                                                   
	EBattleItemUseReason*                              Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandle_Pistol_C_HandleDrop_Params
{
	int*                                               InCount;                                                  
	EBattleItemDropReason*                             Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandle_Pistol_C_HandleDisuse_Params
{
	EBattleItemDisuseReason*                           Reason;                                                   
	bool                                               ReturnValue;                                              
};

}

