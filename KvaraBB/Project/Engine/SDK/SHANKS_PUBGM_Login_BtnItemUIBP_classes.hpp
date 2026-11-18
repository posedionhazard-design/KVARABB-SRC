#pragma once


 
namespace SDK
{






class ULogin_BtnItemUIBP_C : public UUAEUserWidget
{
public:
	class UButton*                                     ButtonChannel;                                            
	class UGridPanel*                                  GridPanel_1;                                              
	class UImage*                                      Image_Btn;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Login_BtnItemUIBP.Login_BtnItemUIBP_C");
		return pStaticClass;
	}

};


}

