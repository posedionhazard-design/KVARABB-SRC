#pragma once


 
namespace SDK
{






class ULogin_Background_UIBP_C : public UUserWidget
{
public:
	class UGridPanel*                                  BGRoot;                                                   
	class UImage*                                      Image_LoginBG;                                            
	class UWidgetSwitcher*                             Switcher;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Login_Background_UIBP.Login_Background_UIBP_C");
		return pStaticClass;
	}

};


}

