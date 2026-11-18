#pragma once


 
namespace SDK
{






class ULobby_Main_UIBP_C : public UUserWidget
{
public:
	class UWidgetAnimation*                            Anim_Offset_UI_ModeToSocial;                              
	class UWidgetAnimation*                            Anim_Offset_UI_ModeToSocial02;                            
	class UWidgetAnimation*                            Anim_Offset_UI_SocialToMode02;                            
	class UWidgetAnimation*                            Anim_Offset_UI_SocialToMode;                              
	class UWidgetAnimation*                            Anim_Offset_UI_ModeToLobby;                               
	class UWidgetAnimation*                            Anim_Offset_UI_LobbyToMode;                               
	class UWidgetAnimation*                            Anim_Offset_Blur_LobbyToMode;                             
	class UWidgetAnimation*                            Anim_Offset_UI_LobbyToSocial;                             
	class UWidgetAnimation*                            Anim_Offset_UI_SocialToLobby;                             
	class UWidgetAnimation*                            Anim_Offset_Blur_SocialToLobby;                           
	class UWidgetAnimation*                            FadeIn;                                                   
	class UBackgroundBlur*                             BackgroundBlur_1;                                         
	class UBorder*                                     Border_14;                                                
	class UBorder*                                     Border_15;                                                
	class UBorder*                                     Border_47;                                                
	class UBorder*                                     Border_48;                                                
	class UBorder*                                     Border1;                                                  
	class UBorder*                                     Border3;                                                  
	class UBorder*                                     Border4;                                                  
	class UBorder*                                     Border5;                                                  
	class UBorder*                                     Border_ActorVoice;                                        
	class UBorder*                                     Border_Downloader_Btn;                                    
	class UBorder*                                     Border_GiftVideo;                                         
	class UBorder*                                     Border_LuckyKT;                                           
	class UBorder*                                     Border_Match_Entry;                                       
	class UBorder*                                     Border_matchcenter;                                       
	class UBorder*                                     Border_MedioPlayer;                                       
	class UBorder*                                     Border_MidActivity;                                       
	class UBorder*                                     Border_MidBanner;                                         
	class UBorder*                                     Border_MidChat;                                           
	class UBorder*                                     Border_MidChatVoice;                                      
	class UBorder*                                     Border_MidExpression;                                     
	class UBorder*                                     Border_MidFriend;                                         
	class UBorder*                                     Border_MidMessage;                                        
	class UBorder*                                     Border_MidMission;                                        
	class UBorder*                                     Border_MidShop;                                           
	class UBorder*                                     Border_MidSubscribe;                                      
	class UBorder*                                     Border_money;                                             
	class UBorder*                                     Border_notification;                                      
	class UBorder*                                     Border_PlayerReturnProfit;                                
	class UBorder*                                     Border_PMGC;                                              
	class UBorder*                                     Border_RecommendDownload;                                 
	class UBorder*                                     Border_ReddotMessageEntrance;                             
	class UBorder*                                     Border_SkillSelection;                                    
	class UBorder*                                     Border_SmartAssistant;                                    
	class UBorder*                                     Border_SocialHall;                                        
	class UBorder*                                     Border_switch;                                            
	class UBorder*                                     Border_TabRoot;                                           
	class UBorder*                                     Border_TempButton;                                        
	class UBorder*                                     Border_Top;                                               
	class UBorder*                                     Border_TrensientXmission;                                 
	class UBorder*                                     Border_UI_All;                                            
	class UBorder*                                     Border_wifi;                                              
	class UBorder*                                     Border_WoWJoinTeam;                                       
	class UCanvasPanel*                                CanvasPanel_MiniTV;                                       
	class UCanvasPanel*                                CanvasPanel_PlayerModelDownloadUI;                        
	class UCanvasPanel*                                CanvasPanel_TeamExtra;                                    
	class UCanvasPanel*                                CanvasPanel_ThemeDownloadUIParent;                        
	class UCanvasPanel*                                CanvasPanel_UI_All;                                       
	class UCanvasPanel*                                CanvasPanel_VehicleModelDownloadUI;                       
	class UGridPanel*                                  Grid_Panel_Bottom_Right;                                  
	class UGridPanel*                                  GridPanel_Car_Other;                                      
	class UGridPanel*                                  GridPanel_Chat;                                           
	class UGridPanel*                                  GridPanel_Expression;                                     
	class UGridPanel*                                  GridPanel_Pet;                                            
	class UImage*                                      Image_1;                                                  
	class UImage*                                      Image_2;                                                  
	class UImage*                                      Image_bg_mask;                                            
	class UImage*                                      Image_Black;                                              
	class UImage*                                      Image_Left_Mid;                                           
	class UImage*                                      Image_Left_Mid_2;                                         
	class UImage*                                      image_Mid_Left;                                           
	class UImage*                                      image_Mid_Left_2;                                         
	class UImage*                                      Image_Train;                                              
	class ULobby_Control_Comp_C*                       Lobby20_Control_Comp;                                     
	class UImage*                                      XiuGaiZhaoByi;                                            
	int                                                preWidth;                                                 
	int                                                preHeight;                                                
	class UAkAudioBank*                                KeepHallAudioBank;                                        

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Lobby_Main_UIBP.Lobby_Main_UIBP_C");
		return pStaticClass;
	}

};


}

