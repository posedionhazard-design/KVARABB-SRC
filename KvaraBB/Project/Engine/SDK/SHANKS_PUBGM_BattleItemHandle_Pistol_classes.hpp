#pragma once


 
namespace SDK
{






class UBattleItemHandle_Pistol_C : public UBattleItemHandleWeaponBase_Handle_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       
	struct FName                                       Socket;                                                   
	class UBattleItemHandleBase*                       CharacterItemHandle;                                      
	class ASTExtraWeapon*                              TargetWeaponActor;                                        
	struct FName                                       LogicSlotName;                                            
	class UWeaponManagerComponent*                     WeaponManager;                                            
	TArray<struct FWeaponAttachmentSlot>               AvailableWeaponAttachment;                                
	TArray<EWeaponAttachmentSocketType>                WeaponAttachmentSockTypeList;                             
	bool                                               bCheckUseState;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_Pistol.BattleItemHandle_Pistol_C");
		return pStaticClass;
	}


	void GetWrapperClass(bool* found, class UClass** WrapperClass);
	void HandleWeaponDestroy(EBattleItemDisuseReason Reason);
	void IsMainSlotsHaveWeapon(bool* HasWeapon);
	void GetOwingtWeapon(class ASTExtraWeapon** NewParam);
	void LocalHandleDisuse(EBattleItemDisuseReason Reason);
	void GetAvailableTargetLogicSocketName(const struct FName& TargetSocket, struct FName* Ret, bool* bNeedPutDownOldWeapon, bool* bAutoUse);
	void GetAvailableInstantLogicSocketName(struct FName* Ret, bool* bNeedPutDownOldWeapon, bool* bAutoUse);
	void CreateWrapperOnGround();
	bool HandlePickup(struct FBattleItemPickupInfo* PickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer);
	bool HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason);
	bool HandleDrop(int* InCount, EBattleItemDropReason* Reason);
	bool HandleDisuse(EBattleItemDisuseReason* Reason);
};


}

