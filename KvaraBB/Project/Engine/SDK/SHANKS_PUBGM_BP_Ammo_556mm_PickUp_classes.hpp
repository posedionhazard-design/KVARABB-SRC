#pragma once


 
namespace SDK
{






class ABP_Ammo_556mm_Pickup_C : public APickUpWrapperActor
{
public:
	class UStaticMeshComponent*                        SM_Ammo_556mm;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_Ammo_556mm_PickUp.BP_Ammo_556mm_Pickup_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

