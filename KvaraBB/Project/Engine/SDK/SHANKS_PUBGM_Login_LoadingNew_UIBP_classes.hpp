#pragma once


 
namespace SDK
{






class ULogin_LoadingNew_UIBP_C : public UUAEUserWidget
{
public:
	class UWidgetAnimation*                            Animation_loading;                                        
	class UWidgetAnimation*                            Loading_anima;                                            
	class UWeakRefImage*                               BackImage;                                                
	class UNewButton*                                  Button_LoadingGm;                                         
	class UCanvasPanel*                                CanvasPanel_Attach;                                       
	class UCanvasPanel*                                CanvasPanel_Helmet;                                       
	class UCanvasPanel*                                CanvasPanel_IN;                                           
	class UCanvasPanel*                                CanvasPanel_PromotionMatch;                               
	class UCanvasPanel*                                CanvasPanel_Root;                                         
	class UCanvasPanel*                                CanvasPanel_Season;                                       
	class UGridPanel*                                  GridPanel_Root;                                           
	class UHorizontalBox*                              HorizontalBox_3;                                          
	class UImage*                                      Image_1;                                                  
	class UImage*                                      Image_2;                                                  
	class UImage*                                      Image_3;                                                  
	class UImage*                                      Image_4;                                                  
	class UImage*                                      Image_6;                                                  
	class UImage*                                      Image_8;                                                  
	class UImage*                                      Image_10;                                                 
	class UImage*                                      Image_Logo;                                               
	class UImage*                                      Image_Man;                                                
	class UImage*                                      ImageLogo;                                                
	class UCanvasPanel*                                Panel_FreeTraffic;                                        
	class UProgressBar*                                ProgressBar_Loading;                                      
	class UProgressBar*                                ProgressBar_ThemeLoading;                                 
	class UUTRichTextBlock*                            RichText_LoadingTip;                                      
	class USizeBox*                                    SizeBox_Badge;                                            
	class USpacer*                                     Spacer_1;                                                 
	class USpacer*                                     Spacer_2;                                                 
	class UTextBlock*                                  Text_Progress;                                            
	class UTextBlock*                                  TextBlock_Check;                                          
	class UTextBlock*                                  TextBlock_Dot;                                            
	class UTextBlock*                                  TextBlock_GameTime;                                       
	class UTextBlock*                                  TextBlock_GmState;                                        
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                         
	class UWidgetSwitcher*                             WidgetSwitcher_2;                                         
	class UWidgetSwitcher*                             WidgetSwitcher_3;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Login_LoadingNew_UIBP.Login_LoadingNew_UIBP_C");
		return pStaticClass;
	}

};


}

