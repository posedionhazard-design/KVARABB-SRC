#pragma once


 
namespace SDK
{






class UCommon_Tips_Bg02_UIBP_C : public UUserWidget
{
public:
	class UCanvasPanel*                                CanvasPanel_45;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Common_Tips_Bg02_UIBP.Common_Tips_Bg02_UIBP_C");
		return pStaticClass;
	}

};


}

