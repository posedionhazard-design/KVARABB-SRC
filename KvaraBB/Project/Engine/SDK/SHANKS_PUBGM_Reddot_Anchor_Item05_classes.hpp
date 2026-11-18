#pragma once


 
namespace SDK
{






class UReddot_Anchor_Item05_C : public ULuaUserWidget
{
public:
	class UImage*                                      Image_Breathing;                                          
	int                                                PosTemplate;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Reddot_Anchor_Item05.Reddot_Anchor_Item05_C");
		return pStaticClass;
	}

};


}

