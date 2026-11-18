#pragma once


 
namespace SDK
{






class ULobby_PrivateRoom_Gameplay_Item_UIBP_C : public UUserWidget
{
public:
	class UWidgetAnimation*                            FadeOut;                                                  
	class UWidgetAnimation*                            FadeIn;                                                   
	class UButton*                                     Button_1;                                                 
	class UButton*                                     Button_Click;                                             
	class UCanvasPanel*                                CanvasPanel_2;                                            
	class UImage*                                      Image_bg;                                                 
	class UTextBlock*                                  TextBlock_1;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Lobby_PrivateRoom_Gameplay_Item_UIBP.Lobby_PrivateRoom_Gameplay_Item_UIBP_C");
		return pStaticClass;
	}

};


}

