#pragma once


 
namespace SDK
{






class ULobby_Mid_Banner250_UIBP_C : public UUserWidget
{
public:
	class UTextBlock*                                  ActCount;                                                 
	class UButton*                                     Button_MoreAct;                                           
	class UCanvasPanel*                                Canvas_Panel_HandGuide2;                                  
	class UCanvasPanel*                                CanvasPanel_2;                                            
	class UCanvasPanel*                                CanvasPanel_3;                                            
	class UCanvasPanel*                                CanvasPanel_7;                                            
	class UCanvasPanel*                                CanvasPanel_14;                                           
	class UCanvasPanel*                                CanvasPanel_15;                                           
	class UCanvasPanel*                                CanvasPanel_Glow;                                         
	class UCanvasPanel*                                CanvasPanel_ReturnAct;                                    
	class UCommon_Tips_Bg_UIBP_C*                      Common_Tips_Bg_UIBP;                                      
	class UCanvasPanel*                                FX_Mask;                                                  
	class UButton*                                     GuideBtn;                                                 
	class UTextBlock*                                  GuideTip;                                                 
	class UImage*                                      Image_2;                                                  
	class UImage*                                      Image_RedPoint_Old;                                       
	class UReddot_Anchor_C*                            Reddot_Anchor;                                            
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                         
	class UWrapBox*                                    WrapBox_Entrance;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Lobby_Mid_Banner250_UIBP.Lobby_Mid_Banner250_UIBP_C");
		return pStaticClass;
	}

};


}

