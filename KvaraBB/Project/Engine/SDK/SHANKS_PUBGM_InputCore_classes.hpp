#pragma once


 
namespace SDK
{






class UInputCoreTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class InputCore.InputCoreTypes");
		return pStaticClass;
	}

};


}

