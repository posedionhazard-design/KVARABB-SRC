#pragma once


 
namespace SDK
{






class UCommon_Items_UIBP_C : public UUserWidget
{
public:
	class UWidgetAnimation*                            Transform;                                                
	class UButton*                                     Button_Item;                                              
	class UCanvasPanel*                                Canvas_BaseElement;                                       
	class UCanvasPanel*                                Canvas_Decompose;                                         
	class UCanvasPanel*                                CanvasPanel_ItemShow;                                     
	class UCanvasPanel*                                CanvasPanel_NotScale;                                     
	class UCanvasPanel*                                CanvasPanel_Quality;                                      
	class UCanvasPanel*                                CanvasPanel_Signature;                                    
	class UCanvasPanel*                                CanvasPanel_Size;                                         
	class UImage*                                      Image_Icon;                                               
	class UImage*                                      Image_Quality;                                            
	class UCanvasPanel*                                Panel_Download;                                           
	class UUTRichTextBlock*                            RichText_ItemCount;                                       
	class UScaleBox*                                   ScaleBox_AvatarIcon;                                      
	class UScaleBox*                                   ScaleBox_Count;                                           
	class UScaleBox*                                   ScaleBox_Icon;                                            
	class UWidgetSwitcher*                             Switcher_IconShow;                                        

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Common_Items_UIBP.Common_Items_UIBP_C");
		return pStaticClass;
	}

};


}

