#pragma once


 
namespace SDK
{






class UReddot_Anchor_C : public ULuaUserWidget
{
public:
	class UCanvasPanel*                                CanvasPanel_Anchor;                                       
	int                                                PosTemplate;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Reddot_Anchor.Reddot_Anchor_C");
		return pStaticClass;
	}

};


}

