#pragma once


 
namespace SDK
{






class UIOSDeviceProfileMatchingRules : public UObject
{
public:
	TArray<struct FProfileMatch>                       IOSMatchProfile;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class IOSDeviceProfileSelector.IOSDeviceProfileMatchingRules");
		return pStaticClass;
	}

};


}

