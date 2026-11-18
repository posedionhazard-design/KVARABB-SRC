#pragma once


 
namespace SDK
{






class UCommon_Qualifying_Rounds_Item_UIBP_C : public UUserWidget
{
public:
	class UWidgetAnimation*                            Anim_Refresh_02;                                          
	class UWidgetAnimation*                            Anim_Refresh;                                             
	class UButton*                                     Button_Detail;                                            
	class UButton*                                     Button_Detail02;                                          
	class UCanvasPanel*                                CanvasPanel_6;                                            
	class UCanvasPanel*                                CanvasPanel_QualifyRounds;                                
	class UCheckBox*                                   CheckBox_1;                                               
	class UCheckBox*                                   CheckBox_2;                                               
	class UImage*                                      Fx_Image;                                                 
	class UImage*                                      Fx_Image_4;                                               
	class UImage*                                      Image_2;                                                  
	class UImage*                                      Image_3;                                                  
	class UImage*                                      Image_Arrow;                                              
	class UImage*                                      Image_Arrow02;                                            
	class UImage*                                      Image_bg;                                                 
	class UImage*                                      Image_FlowLight_001;                                      
	class UImage*                                      Image_Glow_001;                                           
	class UTextBlock*                                  TextBlock_Text;                                           
	class UTextBlock*                                  TextBlock_Text02;                                         
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Common_Qualifying_Rounds_Item_UIBP.Common_Qualifying_Rounds_Item_UIBP_C");
		return pStaticClass;
	}

};


}

