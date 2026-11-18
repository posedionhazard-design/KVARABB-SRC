#pragma once


 
namespace SDK
{






class UJsonUtilitiesDummyObject : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class JsonUtilities.JsonUtilitiesDummyObject");
		return pStaticClass;
	}

};


}

