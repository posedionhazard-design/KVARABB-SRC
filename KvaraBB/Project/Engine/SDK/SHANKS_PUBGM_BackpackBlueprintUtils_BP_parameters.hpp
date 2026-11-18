#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UBackpackBlueprintUtils_BP_C_ConstructBattleItemDataByDefineIDInternal_Params
{
	struct FItemDefineID                               DefineID;                                                 
	struct FBattleItemData                             ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_GetEquipmentSkinIDByAvatar_Params
{
	int*                                               InItemID;                                                 
	struct FGameModePlayerEquipmentAvatar              InEquipmentAvatar;                                        
	int                                                ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_GetEquipmentArmorLevel_Params
{
	int*                                               ItemId;                                                   
	int                                                ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_GetEquipmentHelmetLevel_Params
{
	int*                                               ItemId;                                                   
	int                                                ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_IsForceLoadLobbyHandle_Params
{
	struct FItemDefineID                               InItemID;                                                 
	bool                                               ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_GetBattleItemHandleClass_Params
{
	struct FItemDefineID                               DefineID;                                                 
	class UClass*                                      ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_CanNotAutoSwitchToGrenade_Params
{
	int*                                               InGrenadeID;                                              
	bool                                               ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_IsConsumableMissionItemType_Params
{
	int*                                               ItemId;                                                   
	bool                                               ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_GetGrenadePriorityByType_Params
{
	int*                                               InGrenadeType;                                            
	int                                                ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_IsIceDrinkEmoteIDInBackpack_Params
{
	int*                                               InItemID;                                                 
	int*                                               InEmoteID;                                                
	bool                                               ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_IsEquipmentItem_Params
{
	int*                                               ItemId;                                                   
	bool                                               ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_CreateVirtualItemHandle_Params
{
	struct FItemDefineID                               DefineID;                                                 
	class UObject**                                    Outer;                                                    
	class UBattleItemHandleBase*                       ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_GetPendantIDByWeaponID_Params
{
	int*                                               WeaponId;                                                 
	int                                                ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_GetWeaponSkinMappingID_Params
{
	int*                                               InWeaponSkinID;                                           
	int                                                ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_GetItemOperationSoundAndBank_Params
{
	int*                                               ItemSoundID;                                              
	EBattleItemOperationType*                          ItemOperation;                                            
	struct FString                                     OutBankName;                                              
	struct FString                                     OutSoundName;                                             
	bool                                               ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_IsGhillieSuitItemType_Params
{
	int*                                               ItemId;                                                   
	bool                                               ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_GetEquipmentBagLevel_Params
{
	int*                                               ItemId;                                                   
	int                                                ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_GetEquipmentLevel_Params
{
	int*                                               ItemId;                                                   
	int                                                ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_Is3BackpackID_Params
{
	int*                                               ID;                                                       
	bool                                               ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_IsInPveMode_Params
{
	bool                                               ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_IsPVEMode_Params
{
	bool                                               Out;                                                      
};


struct UBackpackBlueprintUtils_BP_C_GetBPIDByResID_Params
{
	int*                                               resID;                                                    
	int                                                ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_AddToWeaponAttachPos_Params
{
	int                                                attachID;                                                 
	EWeaponAttachmentSocketType                        Socket;                                                   
};


struct UBackpackBlueprintUtils_BP_C_GetBattleItemHandlePath_Params
{
	struct FItemDefineID                               DefineID;                                                 
	bool*                                              bLobby;                                                   
	bool*                                              bForceLobby;                                              
	struct FString                                     ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_GetRawBattleTextByRawTextID_Params
{
	int*                                               ID;                                                       
	struct FString                                     ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_GetRawBattleTextByType_Params
{
	EBattleTextType*                                   Type;                                                     
	int*                                               InSubType;                                                
	struct FString                                     ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_GetItemSubTypeID_Params
{
	int*                                               SpecificID;                                               
	int                                                ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_GetBattleWeaponItemDisplayDataByDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 
	struct FBattleWeaponItemDisplayData                ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_GenerateItemDefineIDByItemTableID_Params
{
	int*                                               ItemTableID;                                              
	int                                                Type;                                                     
	int                                                TypeSpecificID;                                           
};


struct UBackpackBlueprintUtils_BP_C_IsVirtualItemData_Params
{
	struct FBattleItemData                             ItemData;                                                 
	bool                                               ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_GetCharacterVirtualItemHandleInBackpack_Params
{
	class UBackpackComponent**                         BackpackComp;                                             
	class UBattleItemHandleBase*                       ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_CreateBattleItemHandle_Character_Params
{
	class UObject*                                     Outer;                                                    
	class UBattleItemHandleBase*                       BattleItemHandle;                                         
};


struct UBackpackBlueprintUtils_BP_C_CreateBattleItemHandle_Default_Params
{
	int                                                Type;                                                     
	int                                                ID;                                                       
	class UObject*                                     Outer;                                                    
	bool                                               bLobby;                                                   
	class UBattleItemHandleBase*                       BattleItemHandle;                                         
};


struct UBackpackBlueprintUtils_BP_C_GetBattleItemFeatureData_Params
{
	struct FItemDefineID                               DefineID;                                                 
	struct FBattleItemFeatureData                      FeatureData;                                              
};


struct UBackpackBlueprintUtils_BP_C_GetBattleItemFeatureDataByDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 
	struct FBattleItemFeatureData                      ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_CreateBattleItemHandle_Params
{
	struct FItemDefineID                               DefineID;                                                 
	class UObject**                                    Outer;                                                    
	bool*                                              bLobby;                                                   
	class UBattleItemHandleBase*                       ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_GetCharacterVirtualItemInBackpack_Params
{
	class UBackpackComponent**                         BackpackComp;                                             
	struct FBattleItemData                             ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_ConstructBattleItemDataByItemTableID_Params
{
	int*                                               ItemTableID;                                              
	struct FBattleItemData                             ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_ConstructBattleItemDataByDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 
	struct FBattleItemData                             ReturnValue;                                              
};


struct UBackpackBlueprintUtils_BP_C_AddCharacterVirtualItemToBackpack_Params
{
	class UBackpackComponent**                         BackpackComp;                                             
	class ASTExtraBaseCharacter**                      Character;                                                
};


struct UBackpackBlueprintUtils_BP_C_InitialItemTable_Params
{
};


struct UBackpackBlueprintUtils_BP_C_ExecuteUbergraph_BackpackBlueprintUtils_BP_Params
{
	int                                                EntryPoint;                                               
};

}

