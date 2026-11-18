#pragma once


 
namespace SDK
{






class UBpOverWrite_C : public UBPClassManager
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BpOverWrite.BpOverWrite_C");
		return pStaticClass;
	}

};


}

