#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UBattleItemHandle_MainWeapon_C_MakeBulletInBagOrOnGround_Params
{
	struct FItemDefineID                               BulletDefine;                                             
	int                                                Count;                                                    
};


struct UBattleItemHandle_MainWeapon_C_CanDropWeapon_Params
{
	EBattleItemDropReason                              DropReason;                                               
	bool                                               bCanDrop;                                                 
};


struct UBattleItemHandle_MainWeapon_C_HandleOnWeaponDestroy_Params
{
	EBattleItemDisuseReason                            Reason;                                                   
};


struct UBattleItemHandle_MainWeapon_C_AutoEquipAttachmentsInArray_Params
{
	TArray<class UBattleItemHandleBase*>               Array;                                                    
	bool                                               bReplaceUse;                                              
};


struct UBattleItemHandle_MainWeapon_C_ReturnMultiBullet_Params
{
	int                                                WantReturnCount;                                          
};


struct UBattleItemHandle_MainWeapon_C_GetWrapperClass_Params
{
	bool                                               found;                                                    
	class UClass*                                      WrapperClass;                                             
};


struct UBattleItemHandle_MainWeapon_C_GetBulletWrapperClass_Params
{
	int                                                BulletID;                                                 
	bool                                               found;                                                    
	class UClass*                                      WrapperClass;                                             
};


struct UBattleItemHandle_MainWeapon_C_GetWeaponClass_Params
{
	bool                                               found;                                                    
	class UClass*                                      WeaponClass;                                              
};


struct UBattleItemHandle_MainWeapon_C_CreateVirtualPendantItemHandle_Params
{
	struct FItemDefineID                               ItemDefineID;                                             
	class UBattleItemHandleBase*                       ItemHandle;                                               
};


struct UBattleItemHandle_MainWeapon_C_AutoEquipPendant_Params
{
};


struct UBattleItemHandle_MainWeapon_C_EquipPendant_Params
{
	int                                                pendantID;                                                
};


struct UBattleItemHandle_MainWeapon_C_CheckPendantCanAttach_Params
{
	bool                                               CanAttach;                                                
};


struct UBattleItemHandle_MainWeapon_C_GetOwingtWeapon_Params
{
	class ASTExtraWeapon*                              NewParam;                                                 
};


struct UBattleItemHandle_MainWeapon_C_AutoEquipAttachments_Params
{
};


struct UBattleItemHandle_MainWeapon_C_ReturnBullets_Params
{
	int                                                Count;                                                    
};


struct UBattleItemHandle_MainWeapon_C_UpdateEquipedAttach_Params
{
	EWeaponAttachmentSocketType                        WeapAttachSockType;                                       
	class UBattleItemHandle_WeapAttachment_C*          WeapAttachItemHandle;                                     
	bool                                               IsEquip;                                                  
};


struct UBattleItemHandle_MainWeapon_C_LocalHandleDisuse_Params
{
	EBattleItemDisuseReason                            Reason;                                                   
};


struct UBattleItemHandle_MainWeapon_C_CreateWrapperOnGround_Params
{
};


struct UBattleItemHandle_MainWeapon_C_GetAvailableTargetLogicSocketName_Params
{
	struct FName                                       TargetSocket;                                             
	struct FName                                       Ret;                                                      
	bool                                               bNeedPutDownOldWeapon;                                    
	bool                                               bAutoUse;                                                 
};


struct UBattleItemHandle_MainWeapon_C_GetAvailableInstantLogicSocketName_Params
{
	struct FName                                       Ret;                                                      
	bool                                               bNeedPutDownOldWeapon;                                    
	bool                                               bAutoUse;                                                 
};


struct UBattleItemHandle_MainWeapon_C_JudgeHasTargetAttachmentSlot_Params
{
	int                                                AttachBPID;                                               
	EWeaponAttachmentSocketType                        AttachType;                                               
	class UBackpackWeaponAttachHandle*                 AttachHandle;                                             
	bool                                               CanSwap;                                                  
	int                                                AttachResID;                                              
	bool                                               CanEquip;                                                 
	bool                                               HasOcupied;                                               
	bool                                               CanReplace;                                               
};


struct UBattleItemHandle_MainWeapon_C_HandleDisuse_Params
{
	EBattleItemDisuseReason*                           Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandle_MainWeapon_C_HandleUse_Params
{
	struct FBattleItemUseTarget*                       Target;                                                   
	EBattleItemUseReason*                              Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandle_MainWeapon_C_HandleDrop_Params
{
	int*                                               InCount;                                                  
	EBattleItemDropReason*                             Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandle_MainWeapon_C_HandlePickup_Params
{
	TScriptInterface<class UItemContainerInterface>    ItemContainer;                                            
	struct FBattleItemPickupInfo*                      PickupInfo;                                               
	EBattleItemPickupReason*                           Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandle_MainWeapon_C_ReturnAllBullets_Params
{
};


struct UBattleItemHandle_MainWeapon_C_LocalAutoEquipAttachments_Params
{
};


struct UBattleItemHandle_MainWeapon_C_ReturnBullet_Params
{
	int*                                               BulletNum;                                                
};


struct UBattleItemHandle_MainWeapon_C_ExecuteUbergraph_BattleItemHandle_MainWeapon_Params
{
	int                                                EntryPoint;                                               
};

}

