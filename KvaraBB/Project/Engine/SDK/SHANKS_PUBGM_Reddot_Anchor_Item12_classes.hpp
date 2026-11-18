#pragma once


 
namespace SDK
{






class UReddot_Anchor_Item12_C : public UUserWidget
{
public:
	class UWidgetAnimation*                            Breathing;                                                
	class UImage*                                      Image_bg;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Reddot_Anchor_Item12.Reddot_Anchor_Item12_C");
		return pStaticClass;
	}

};


}

