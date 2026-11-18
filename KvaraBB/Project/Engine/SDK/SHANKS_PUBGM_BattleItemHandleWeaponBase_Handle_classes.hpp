#pragma once


 
namespace SDK
{






class UBattleItemHandleWeaponBase_Handle_C : public UBackpackWeaponHandle
{
public:
	class ASTExtraPlayerController*                    OwningPlayerController;                                   
	class ASTExtraBaseCharacter*                       OwningCharacter;                                          
	class UBackpackComponent*                          OwningBackpackComponent;                                  
	unsigned char                                      UnknownData00[0x8];                                       
	struct FTransform                                  WrapperPutdownTrans;                                      
	struct FTransform                                  SourceWrapperTrans;                                       
	class ABaseAIController*                           OwningAIController;                                       
	struct FName                                       TargetLogicSocket;                                        
	bool                                               TargetAutoUse;                                            
	bool                                               bHidePendantOnScope;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C");
		return pStaticClass;
	}


	bool CanDisuseOldWeapon(bool* bDisuseResult, EBattleItemUseReason* InReason);
	void GetBulletNumSaveToWrapper(int* Num);
	void ConditionalAddAdditionalData(TArray<struct FBattleItemAdditionalData>* InAdditionalData);
	void ConditionalAddAdditionalDataToWrapper(class APickUpWrapperActor* PickUpWrapper);
	void GetWeaponClassFromTable(bool* found, class UClass** WeaponClass);
	void EnableWeaponAttachmentBindDropToWeaponWrapper(bool* Out);
	void ParseAdditionalData(const struct FBattleItemPickupInfo& PickupInfo);
	void GetOwingtWeapon(class ASTExtraWeapon** NewParam);
	void SpawnWrapperOnGround(class UClass* WrapperClass, bool bUseRandomLoc, const struct FItemDefineID& InDefineID, class APickUpWrapperActor** TargetWrapper);
	class UWorld* GetWorldInternal();
	bool HandleDisuse(EBattleItemDisuseReason* Reason);
	bool HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason);
	bool HandleDrop(int* InCount, EBattleItemDropReason* Reason);
	bool HandlePickup(struct FBattleItemPickupInfo* PickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer);
	struct FBattleItemData ExtractItemData();
};


}

