#pragma once


 
namespace SDK
{






class UCS_ReloadEffect_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass CS_ReloadEffect.CS_ReloadEffect_C");
		return pStaticClass;
	}

};


}

