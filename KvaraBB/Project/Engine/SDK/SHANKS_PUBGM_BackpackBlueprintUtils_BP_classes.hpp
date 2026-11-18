#pragma once


 
namespace SDK
{






class UBackpackBlueprintUtils_BP_C : public UBackpackBlueprintUtils
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           
	TArray<struct FBattleItemAdditionalData>           EmptyAdditionalData;                                      
	TMap<struct FName, struct FItemAssociation>        EmptyAssociationMap;                                      
	TArray<struct FItemAssociation>                    EmptyAssociationArray;                                    
	TMap<int, EAvatarSlotType>                         EquipmentID2SlotID_Map;                                   
	TMap<int, int>                                     EquipmentBagID2Level_Map;                                 
	TMap<int, int>                                     EquipmentHelmetID2Level_Map;                              
	TMap<int, int>                                     EquipmentArmorID2Level_Map;                               
	TArray<int>                                        GhillieSuitItem;                                          
	TMap<int, int>                                     GrenadeTypeToPriority;                                    
	TMap<int, int>                                     CacheItemId2BagLevelMap;                                  

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C");
		return pStaticClass;
	}


	struct FBattleItemData ConstructBattleItemDataByDefineIDInternal(struct FItemDefineID* DefineID);
	int GetEquipmentSkinIDByAvatar(int* InItemID, struct FGameModePlayerEquipmentAvatar* InEquipmentAvatar);
	int GetEquipmentArmorLevel(int* ItemId);
	int GetEquipmentHelmetLevel(int* ItemId);
	bool IsForceLoadLobbyHandle(struct FItemDefineID* InItemID);
	class UClass* GetBattleItemHandleClass(struct FItemDefineID* DefineID);
	bool CanNotAutoSwitchToGrenade(int* InGrenadeID);
	bool IsConsumableMissionItemType(int* ItemId);
	int GetGrenadePriorityByType(int* InGrenadeType);
	bool IsIceDrinkEmoteIDInBackpack(int* InItemID, int* InEmoteID);
	bool IsEquipmentItem(int* ItemId);
	class UBattleItemHandleBase* CreateVirtualItemHandle(class UObject** Outer, struct FItemDefineID* DefineID);
	int GetPendantIDByWeaponID(int* WeaponId);
	int GetWeaponSkinMappingID(int* InWeaponSkinID);
	bool GetItemOperationSoundAndBank(int* ItemSoundID, EBattleItemOperationType* ItemOperation, struct FString* OutBankName, struct FString* OutSoundName);
	bool IsGhillieSuitItemType(int* ItemId);
	int GetEquipmentBagLevel(int* ItemId);
	int GetEquipmentLevel(int* ItemId);
	bool Is3BackpackID(int* ID);
	bool IsInPveMode();
	void IsPVEMode(bool* Out);
	int GetBPIDByResID(int* resID);
	void AddToWeaponAttachPos(int attachID, EWeaponAttachmentSocketType Socket);
	struct FString GetBattleItemHandlePath(bool* bLobby, bool* bForceLobby, struct FItemDefineID* DefineID);
	struct FString GetRawBattleTextByRawTextID(int* ID);
	struct FString GetRawBattleTextByType(EBattleTextType* Type, int* InSubType);
	int GetItemSubTypeID(int* SpecificID);
	struct FBattleWeaponItemDisplayData GetBattleWeaponItemDisplayDataByDefineID(struct FItemDefineID* DefineID);
	void GenerateItemDefineIDByItemTableID(int* ItemTableID, int* Type, int* TypeSpecificID);
	bool IsVirtualItemData(struct FBattleItemData* ItemData);
	class UBattleItemHandleBase* GetCharacterVirtualItemHandleInBackpack(class UBackpackComponent** BackpackComp);
	void CreateBattleItemHandle_Character(class UObject* Outer, class UBattleItemHandleBase** BattleItemHandle);
	void CreateBattleItemHandle_Default(int Type, int ID, class UObject* Outer, bool bLobby, class UBattleItemHandleBase** BattleItemHandle);
	void GetBattleItemFeatureData(const struct FItemDefineID& DefineID, struct FBattleItemFeatureData* FeatureData);
	struct FBattleItemFeatureData GetBattleItemFeatureDataByDefineID(struct FItemDefineID* DefineID);
	class UBattleItemHandleBase* CreateBattleItemHandle(class UObject** Outer, bool* bLobby, struct FItemDefineID* DefineID);
	struct FBattleItemData GetCharacterVirtualItemInBackpack(class UBackpackComponent** BackpackComp);
	struct FBattleItemData ConstructBattleItemDataByItemTableID(int* ItemTableID);
	struct FBattleItemData ConstructBattleItemDataByDefineID(struct FItemDefineID* DefineID);
	void AddCharacterVirtualItemToBackpack(class UBackpackComponent** BackpackComp, class ASTExtraBaseCharacter** Character);
	void InitialItemTable();
	void ExecuteUbergraph_BackpackBlueprintUtils_BP(int EntryPoint);
};


}

