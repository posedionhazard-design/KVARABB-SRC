#pragma once


 
namespace SDK
{






class UCS_Land_Heavy_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass CS_Land_Heavy.CS_Land_Heavy_C");
		return pStaticClass;
	}

};


}

