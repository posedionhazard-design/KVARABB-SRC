#pragma once


 
namespace SDK
{






class UBP_VehicleDIYComp_C : public UVehicleAvatarDIYComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_VehicleDIYComp.BP_VehicleDIYComp_C");
		return pStaticClass;
	}

};


}

