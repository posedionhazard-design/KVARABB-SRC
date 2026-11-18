#pragma once


 
namespace SDK
{






class ULobby20_Tab_Item_UIBP_C : public UUserWidget
{
public:
	class UWidgetAnimation*                            Anim_Shake;                                               
	class UButton*                                     Button_1;                                                 
	class UImage*                                      Image_5;                                                  
	class UImage*                                      Image_Reddot;                                             
	class UCanvasPanel*                                Panel_Download;                                           
	class UReddot_Anchor_C*                            Reddot_Anchor;                                            
	class USizeBox*                                    SizeBox_6;                                                
	class UTextBlock*                                  TextBlock_1;                                              
	class UWidgetSwitcher*                             WidgetSwitcher_Handbook;                                  

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Lobby20_Tab_Item_UIBP.Lobby20_Tab_Item_UIBP_C");
		return pStaticClass;
	}

};


}

