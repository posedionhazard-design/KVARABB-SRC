#pragma once


 
namespace SDK
{






class UReddot_Anchor_Item01_C : public ULuaUserWidget
{
public:
	class UWidgetAnimation*                            Breathing;                                                
	int                                                PosTemplate;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Reddot_Anchor_Item01.Reddot_Anchor_Item01_C");
		return pStaticClass;
	}

};


}

