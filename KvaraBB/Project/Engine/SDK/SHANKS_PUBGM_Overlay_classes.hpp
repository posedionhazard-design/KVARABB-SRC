#pragma once


 
namespace SDK
{






class UOverlays : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Overlay.Overlays");
		return pStaticClass;
	}

};




class UBasicOverlays : public UOverlays
{
public:
	TArray<struct FOverlayItem>                        Overlays;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Overlay.BasicOverlays");
		return pStaticClass;
	}

};




class ULocalizedOverlays : public UOverlays
{
public:
	class UBasicOverlays*                              DefaultOverlays;                                          
	TMap<struct FString, class UBasicOverlays*>        LocaleToOverlaysMap;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Overlay.LocalizedOverlays");
		return pStaticClass;
	}

};


}

