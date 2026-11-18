#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UBattleItemHandle_WeapAttachment_C_CalculateEquipAccessoriesPriority_Params
{
	class UBattleItemHandle_MainWeapon_C*              Weapon;                                                   
	class UBattleItemHandleBase*                       Accessories;                                              
	int                                                WeaponPriority;                                           
	int                                                OutPriority;                                              
};


struct UBattleItemHandle_WeapAttachment_C_ClearWeaponActor_Params
{
};


struct UBattleItemHandle_WeapAttachment_C_ReAutoEquip_Params
{
	class ASTExtraBaseCharacter*                       ACharacter;                                               
	class UBattleItemHandleWeaponBase_Handle_C*        Weapon;                                                   
};


struct UBattleItemHandle_WeapAttachment_C_RemoveParentAdditionData_Params
{
};


struct UBattleItemHandle_WeapAttachment_C_CanDisuseToBackpackWithoutSelf_Params
{
	struct FItemDefineID                               DefineID;                                                 
	bool                                               bCanDisuse;                                               
};


struct UBattleItemHandle_WeapAttachment_C_CheckCanUseWithPackage_Params
{
	bool                                               bCanUse;                                                  
};


struct UBattleItemHandle_WeapAttachment_C_GetCanEquipWeapon_Params
{
	bool                                               bCanSwap;                                                 
	class ASTExtraBaseCharacter*                       ACharater;                                                
	bool                                               bReplace;                                                 
	struct FBattleItemUseTarget                        Target;                                                   
	bool                                               HasTarget;                                                
	class UBattleItemHandle_MainWeapon_C*              TargetWeaponHandle;                                       
	class ASTExtraWeapon*                              WeaponActor;                                              
};


struct UBattleItemHandle_WeapAttachment_C_GetItemBaseBySlot_Params
{
	TEnumAsByte<ESurviveWeaponPropSlot>                Slot;                                                     
	class ASTExtraBaseCharacter*                       ACharacter;                                               
	class UItemHandleBase*                             NewParam;                                                 
};


struct UBattleItemHandle_WeapAttachment_C_CheckTargetValid_Params
{
	class UItemHandleBase*                             ItemHandleBase;                                           
	bool                                               CanSwap;                                                  
	bool                                               bReplace;                                                 
	struct FBattleItemUseTarget                        Target;                                                   
	bool                                               HasTarget;                                                
	class UBattleItemHandle_MainWeapon_C*              TargetWeaponHandle;                                       
	class ASTExtraWeapon*                              WeaponActor;                                              
};


struct UBattleItemHandle_WeapAttachment_C_CheckCanUse_Params
{
	TScriptInterface<class UItemContainerInterface>    ItemContainer;                                            
	struct FBattleItemUseTarget*                       Target;                                                   
	EBattleItemUseReason*                              Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandle_WeapAttachment_C_ReplaceAttach_Params
{
	class UBattleItemHandle_MainWeapon_C*              TWeaponItemHandle;                                        
};


struct UBattleItemHandle_WeapAttachment_C_CanSwap_Params
{
	class UBackpackWeaponAttachHandle*                 SpecificID;                                               
	bool                                               Can;                                                      
};


struct UBattleItemHandle_WeapAttachment_C_FilterWeaponItemHandle_Params
{
	class UBattleItemHandleBase*                       InputItemHandle;                                          
	bool                                               IsPickupDirectlyEquip;                                    
	struct FBattleItemUseTarget                        Target;                                                   
	bool                                               HasTarget;                                                
	class UBattleItemHandle_MainWeapon_C*              TargetWeaponHandle;                                       
	class ASTExtraWeapon*                              WeaponActor;                                              
};


struct UBattleItemHandle_WeapAttachment_C_ExtractItemData_Params
{
	struct FBattleItemData                             ReturnValue;                                              
};


struct UBattleItemHandle_WeapAttachment_C_GetWorldInternal_Params
{
	class UWorld*                                      ReturnValue;                                              
};


struct UBattleItemHandle_WeapAttachment_C_CreateWrapperOnGround_Params
{
	int                                                Count;                                                    
};


struct UBattleItemHandle_WeapAttachment_C_HandleDrop_Params
{
	int*                                               InCount;                                                  
	EBattleItemDropReason*                             Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandle_WeapAttachment_C_HandlePickup_Params
{
	TScriptInterface<class UItemContainerInterface>    ItemContainer;                                            
	struct FBattleItemPickupInfo*                      PickupInfo;                                               
	EBattleItemPickupReason*                           Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandle_WeapAttachment_C_HandleDisuse_Params
{
	EBattleItemDisuseReason*                           Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandle_WeapAttachment_C_HandleUse_Params
{
	struct FBattleItemUseTarget*                       Target;                                                   
	EBattleItemUseReason*                              Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandle_WeapAttachment_C_ReturnWeaponAdditionalBulletsToBackpack_Params
{
	class ASTExtraShootWeapon**                        Weapon;                                                   
	int*                                               BulletNum;                                                
};


struct UBattleItemHandle_WeapAttachment_C_ExecuteUbergraph_BattleItemHandle_WeapAttachment_Params
{
	int                                                EntryPoint;                                               
};

}

