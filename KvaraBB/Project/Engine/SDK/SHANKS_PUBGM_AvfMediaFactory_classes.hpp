#pragma once


 
namespace SDK
{






class UAvfMediaSettings : public UObject
{
public:
	bool                                               NativeAudioOut;                                           
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AvfMediaFactory.AvfMediaSettings");
		return pStaticClass;
	}

};


}

