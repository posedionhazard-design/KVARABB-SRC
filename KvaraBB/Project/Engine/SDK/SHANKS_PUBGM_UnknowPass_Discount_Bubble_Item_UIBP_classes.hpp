#pragma once


 
namespace SDK
{






class UUnknowPass_Discount_Bubble_Item_UIBP_C : public UUserWidget
{
public:
	class UButton*                                     Button_Exclusive;                                         
	class UCanvasPanel*                                CanvasPanel_Discount;                                     
	class UImage*                                      Image_CDN_Bubble;                                         
	class UImage*                                      Image_Discount;                                           
	class UTextBlock*                                  TextBlock_1;                                              
	class UTextBlock*                                  TextBlock_25;                                             
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass UnknowPass_Discount_Bubble_Item_UIBP.UnknowPass_Discount_Bubble_Item_UIBP_C");
		return pStaticClass;
	}

};


}

