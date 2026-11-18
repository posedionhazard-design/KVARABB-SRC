#pragma once


 
namespace SDK
{






class UBP_Lobby_VehicleLicenseComponent_C : public UVehicleLicenseNumberComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_Lobby_VehicleLicenseComponent.BP_Lobby_VehicleLicenseComponent_C");
		return pStaticClass;
	}

};


}

