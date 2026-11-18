#pragma once


 
namespace SDK
{






class UBattleItemHandle_MainWeapon_C : public UBattleItemHandleWeaponBase_Handle_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           
	class UWeaponManagerComponent*                     WeaponManager;                                            
	struct FName                                       Socket;                                                   
	class UBattleItemHandleBase*                       CharacterItemHandle;                                      
	class UClass*                                      WeaponClass;                                              
	TArray<struct FWeaponAttachmentSlot>               AvailableWeaponAttachment;                                
	class ASTExtraWeapon*                              TargetWeaponActor;                                        
	struct FName                                       MainLogicSlot1Name;                                       
	struct FName                                       MainLogicSlot2Name;                                       
	class UClass*                                      WrapperClass;                                             
	TMap<EWeaponAttachmentSocketType, bool>            WeaponAttachmentSockTypeList;                             
	class UClass*                                      BulletWrapperClass;                                       
	TMap<EWeaponAttachmentSocketType, class UBattleItemHandle_WeapAttachment_C*> EquipedWeapAttachments;                                   
	bool                                               bResetInitBulletInBullet;                                 
	bool                                               bIsPistol;                                                
	unsigned char                                      UnknownData01[0x6];                                       
	struct FName                                       SubLogicSlotName;                                         
	struct FBattleItemPickupInfo                       BattleIItemHandlePickInfo;                                
	bool                                               IsAttachPendant;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C");
		return pStaticClass;
	}


	void MakeBulletInBagOrOnGround(const struct FItemDefineID& BulletDefine, int Count);
	void CanDropWeapon(EBattleItemDropReason DropReason, bool* bCanDrop);
	void HandleOnWeaponDestroy(EBattleItemDisuseReason Reason);
	void AutoEquipAttachmentsInArray(bool bReplaceUse, TArray<class UBattleItemHandleBase*>* Array);
	void ReturnMultiBullet(int WantReturnCount);
	void GetWrapperClass(bool* found, class UClass** WrapperClass);
	void GetBulletWrapperClass(int BulletID, bool* found, class UClass** WrapperClass);
	void GetWeaponClass(bool* found, class UClass** WeaponClass);
	void CreateVirtualPendantItemHandle(const struct FItemDefineID& ItemDefineID, class UBattleItemHandleBase** ItemHandle);
	void AutoEquipPendant();
	void EquipPendant(int pendantID);
	void CheckPendantCanAttach(bool* CanAttach);
	void GetOwingtWeapon(class ASTExtraWeapon** NewParam);
	void AutoEquipAttachments();
	void ReturnBullets(int Count);
	void UpdateEquipedAttach(EWeaponAttachmentSocketType WeapAttachSockType, class UBattleItemHandle_WeapAttachment_C* WeapAttachItemHandle, bool IsEquip);
	void LocalHandleDisuse(EBattleItemDisuseReason Reason);
	void CreateWrapperOnGround();
	void GetAvailableTargetLogicSocketName(const struct FName& TargetSocket, struct FName* Ret, bool* bNeedPutDownOldWeapon, bool* bAutoUse);
	void GetAvailableInstantLogicSocketName(struct FName* Ret, bool* bNeedPutDownOldWeapon, bool* bAutoUse);
	void JudgeHasTargetAttachmentSlot(int AttachBPID, EWeaponAttachmentSocketType AttachType, class UBackpackWeaponAttachHandle* AttachHandle, bool CanSwap, int AttachResID, bool* CanEquip, bool* HasOcupied, bool* CanReplace);
	bool HandleDisuse(EBattleItemDisuseReason* Reason);
	bool HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason);
	bool HandleDrop(int* InCount, EBattleItemDropReason* Reason);
	bool HandlePickup(struct FBattleItemPickupInfo* PickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer);
	void ReturnAllBullets();
	void LocalAutoEquipAttachments();
	void ReturnBullet(int* BulletNum);
	void ExecuteUbergraph_BattleItemHandle_MainWeapon(int EntryPoint);
};


}

