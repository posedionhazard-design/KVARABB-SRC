#pragma once


 
namespace SDK
{






class UCommon_Tips_Left_UIBP_C : public UUserWidget
{
public:
	class UWidgetAnimation*                            Auto_Fadeout;                                             
	class UWidgetAnimation*                            Auto_Loop;                                                
	class UWidgetAnimation*                            Auto_Fadein;                                              
	class UButton*                                     Button_74;                                                
	class UTextBlock*                                  Text;                                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Common_Tips_Left_UIBP.Common_Tips_Left_UIBP_C");
		return pStaticClass;
	}

};


}

