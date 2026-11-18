#pragma once


 
namespace SDK
{






class UIGH5CachePluginSettings : public UObject
{
public:
	struct FString                                     Html5Url;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class IGH5CachePlugin.IGH5CachePluginSettings");
		return pStaticClass;
	}

};


}

