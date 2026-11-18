#pragma once


 
namespace SDK
{






class ULobby_Tab_Item_UIBP_C : public UUserWidget
{
public:
	class UWidgetAnimation*                            FadeIn;                                                   
	class UCanvasPanel*                                CanvasPanel_Tips;                                         
	class UCommon_Tips_Bg_UIBP_C*                      Common_Tips_Bg_UIBP;                                      
	class ULobby20_Tab_Item_UIBP_C*                    Lobby20_Tab_Item_UIBP;                                    
	class ULobby20_Tab_Item_UIBP_C*                    Lobby20_Tab_Item_UIBP_1;                                  
	class USizeBox*                                    SizeBox_Diy01;                                            
	class USizeBox*                                    SizeBox_Diy02;                                            
	class UUTRichTextBlock*                            UTRichTextBlock_3;                                        

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Lobby_Tab_Item_UIBP.Lobby_Tab_Item_UIBP_C");
		return pStaticClass;
	}

};


}

