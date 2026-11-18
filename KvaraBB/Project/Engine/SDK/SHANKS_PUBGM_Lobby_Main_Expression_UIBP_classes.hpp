#pragma once


 
namespace SDK
{






class ULobby_Main_Expression_UIBP_C : public UUAEUserWidget
{
public:
	class UWidgetAnimation*                            FadeIn;                                                   
	class UWidgetAnimation*                            DX_Transitions_Enter;                                     
	class UWidgetAnimation*                            DX_Transitions_StartEnter;                                
	class UButton*                                     Button_1;                                                 
	class UButton*                                     Button_2;                                                 
	class UButton*                                     Button_Overlay_Ainm_2;                                    
	class UButton*                                     Button_Overlay_Ainm_3;                                    
	class UButton*                                     Button_SimpleUI;                                          
	class UCanvasPanel*                                CanvasPanel_9;                                            
	class UCanvasPanel*                                CanvasPanel_LookbackGuide;                                
	class UImage*                                      Image_7;                                                  
	class UImage*                                      Image_8;                                                  
	class UCanvasPanel*                                lobby_root_anchor;                                        
	class UOverlay*                                    Overlay_1;                                                
	class UOverlay*                                    Overlay_2;                                                
	class UOverlay*                                    Overlay_Ainm_2;                                           
	class UOverlay*                                    Overlay_Ainm_3;                                           
	class UReddot_Anchor_Item01_C*                     Reddot_Anchor_Item01;                                     
	class UTextBlock*                                  TextBlock_1;                                              
	class UTextBlock*                                  TextBlock_LookbackTips;                                   
	class UWidgetSwitcher*                             WidgetSwitcher_Ainm;                                      
	class UWidgetSwitcher*                             WidgetSwitcher_FunProp;                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Lobby_Main_Expression_UIBP.Lobby_Main_Expression_UIBP_C");
		return pStaticClass;
	}

};


}

