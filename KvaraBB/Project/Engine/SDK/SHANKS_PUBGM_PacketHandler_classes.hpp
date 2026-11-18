#pragma once


 
namespace SDK
{






class UHandlerComponentFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PacketHandler.HandlerComponentFactory");
		return pStaticClass;
	}

};


}

