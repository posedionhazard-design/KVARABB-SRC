#pragma once


 
namespace SDK
{






class UBattleItemHandle_AvatarBP_C : public UBackpackAvatarHandle
{
public:
	class ASTExtraPlayerController*                    OwningPlayerController;                                   
	class ASTExtraBaseCharacter*                       OwningCharacter;                                          
	class UBackpackComponent*                          OwningBackpackComponent;                                  
	struct FTransform                                  SourceWrapperTrans;                                       
	struct FTransform                                  WrapperPutdownTrans;                                      
	class UClass*                                      WrapperClass;                                             
	class UBattleItemHandleBase*                       CharacterItemHandle;                                      
	TEnumAsByte<EnumAvatarSlotNameConfig>              SlotNameConfig;                                           
	TEnumAsByte<EnumAvatarForceGender>                 ForceGender;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_AvatarBP.BattleItemHandle_AvatarBP_C");
		return pStaticClass;
	}


	bool IsSwimConfig();
	bool BPNeedCheckCapacityInHandleDisuse(EBattleItemDisuseReason* Reason);
	void GetWrapperClass(class UClass** WrapperClass);
	struct FBattleItemData ExtractItemData();
	void LocalHandleDisuse();
	class UWorld* GetWorldInternal();
	void SpawnWrapperOnGround(class UClass* WrapperClass, bool bUseRandomLoc);
	bool HandleDisuse(EBattleItemDisuseReason* Reason);
	bool HandleDrop(int* InCount, EBattleItemDropReason* Reason);
	bool HandlePickup(struct FBattleItemPickupInfo* PickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer);
	bool HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason);
};


}

