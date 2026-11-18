#pragma once


 
namespace SDK
{






class ULobby_Main_Chat_UIBP_C : public UUserWidget
{
public:
	class UWidgetAnimation*                            FadeIn;                                                   
	class UWidgetAnimation*                            RedEnvelope_Shake;                                        
	class UWidgetAnimation*                            Anim_tipsopen;                                            
	class UButton*                                     btn_friend_redpoint;                                      
	class UButton*                                     btn_open_chat;                                            
	class UButton*                                     Button_HouseKeeperChat;                                   
	class UButton*                                     Button_ShareCard;                                         
	class UCanvasPanel*                                CanvasPanel_4;                                            
	class UCanvasPanel*                                CanvasPanel_Speaker;                                      
	class UUTRichTextBlock*                            chat_content;                                             
	class UHorizontalBox*                              HorizontalBox_1;                                          
	class UImage*                                      Image_popArrow;                                           
	class UImage*                                      Image_popBG;                                              
	class UImage*                                      Image_RedEnvelope;                                        
	class UImage*                                      Image_relation;                                           
	class UCanvasPanel*                                NodeRoot;                                                 
	class UNamedSlot*                                  normalFriendUnreadSlot;                                   
	class UNamedSlot*                                  normalTagSlot;                                            
	class UOverlay*                                    RedPointRoot;                                             
	class UCanvasPanel*                                Root;                                                     
	class USizeBox*                                    SizeBox_ChatRoom;                                         
	class UTextBlock*                                  TextBlock_8;                                              
	class UTextBlock*                                  TextBlock_type;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Lobby_Main_Chat_UIBP.Lobby_Main_Chat_UIBP_C");
		return pStaticClass;
	}

};


}

