#pragma once


 
namespace SDK
{






class UMeshDescription : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MeshDescription.MeshDescription");
		return pStaticClass;
	}

};


}

