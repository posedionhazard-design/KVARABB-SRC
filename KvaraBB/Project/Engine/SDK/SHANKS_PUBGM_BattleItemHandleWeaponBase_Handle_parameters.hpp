#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UBattleItemHandleWeaponBase_Handle_C_CanDisuseOldWeapon_Params
{
	bool*                                              bDisuseResult;                                            
	EBattleItemUseReason*                              InReason;                                                 
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandleWeaponBase_Handle_C_GetBulletNumSaveToWrapper_Params
{
	int                                                Num;                                                      
};


struct UBattleItemHandleWeaponBase_Handle_C_ConditionalAddAdditionalData_Params
{
	TArray<struct FBattleItemAdditionalData>           InAdditionalData;                                         
};


struct UBattleItemHandleWeaponBase_Handle_C_ConditionalAddAdditionalDataToWrapper_Params
{
	class APickUpWrapperActor*                         PickUpWrapper;                                            
};


struct UBattleItemHandleWeaponBase_Handle_C_GetWeaponClassFromTable_Params
{
	bool                                               found;                                                    
	class UClass*                                      WeaponClass;                                              
};


struct UBattleItemHandleWeaponBase_Handle_C_EnableWeaponAttachmentBindDropToWeaponWrapper_Params
{
	bool                                               Out;                                                      
};


struct UBattleItemHandleWeaponBase_Handle_C_ParseAdditionalData_Params
{
	struct FBattleItemPickupInfo                       PickupInfo;                                               
};


struct UBattleItemHandleWeaponBase_Handle_C_GetOwingtWeapon_Params
{
	class ASTExtraWeapon*                              NewParam;                                                 
};


struct UBattleItemHandleWeaponBase_Handle_C_SpawnWrapperOnGround_Params
{
	class UClass*                                      WrapperClass;                                             
	bool                                               bUseRandomLoc;                                            
	struct FItemDefineID                               InDefineID;                                               
	class APickUpWrapperActor*                         TargetWrapper;                                            
};


struct UBattleItemHandleWeaponBase_Handle_C_GetWorldInternal_Params
{
	class UWorld*                                      ReturnValue;                                              
};


struct UBattleItemHandleWeaponBase_Handle_C_HandleDisuse_Params
{
	EBattleItemDisuseReason*                           Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandleWeaponBase_Handle_C_HandleUse_Params
{
	struct FBattleItemUseTarget*                       Target;                                                   
	EBattleItemUseReason*                              Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandleWeaponBase_Handle_C_HandleDrop_Params
{
	int*                                               InCount;                                                  
	EBattleItemDropReason*                             Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandleWeaponBase_Handle_C_HandlePickup_Params
{
	TScriptInterface<class UItemContainerInterface>    ItemContainer;                                            
	struct FBattleItemPickupInfo*                      PickupInfo;                                               
	EBattleItemPickupReason*                           Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandleWeaponBase_Handle_C_ExtractItemData_Params
{
	struct FBattleItemData                             ReturnValue;                                              
};

}

