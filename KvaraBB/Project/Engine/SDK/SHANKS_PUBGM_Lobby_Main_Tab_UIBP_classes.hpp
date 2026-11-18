#pragma once


 
namespace SDK
{






class ULobby_Main_Tab_UIBP_C : public UUserWidget
{
public:
	class UWidgetAnimation*                            FadeIn;                                                   
	class UWidgetAnimation*                            NewAnimation_Fold_Mail;                                   
	class UButton*                                     Button_DepotSystemNew;                                    
	class UButton*                                     Button_FoldUI_BottomRight;                                
	class UButton*                                     Button_FoldUI_Mail;                                       
	class UButton*                                     Button_Missions;                                          
	class UButton*                                     Button_Season;                                            
	class UButton*                                     Button_Theme;                                             
	class UButton*                                     Button_Workshop;                                          
	class UCanvasPanel*                                CanvasPanel_1;                                            
	class UCanvasPanel*                                CanvasPanel_8;                                            
	class UCanvasPanel*                                CanvasPanel_12;                                           
	class UCanvasPanel*                                CanvasPanel_Corps;                                        
	class UCanvasPanel*                                CanvasPanel_Download;                                     
	class UCanvasPanel*                                CanvasPanel_DownloadSeason;                               
	class UCanvasPanel*                                CanvasPanel_TeamBtn;                                      
	class UCanvasPanel*                                CanvasPanel_Version1;                                     
	class UCommon_RankIntegralLevel_Style_Small_UIBP_C* Common_RankIntegralLevel_Style_Small_UIBP;                
	class UReddot_Anchor_C*                            Fold_Reddot_Anchor;                                       
	class UHorizontalBox*                              HorizontalBox_7;                                          
	class UImage*                                      Image_Club;                                               
	class UImage*                                      Image_Fold_Redpoint;                                      
	class UImage*                                      Image_Guide_New;                                          
	class UImage*                                      Image_Liston;                                             
	class UImage*                                      Image_Lock;                                               
	class UImage*                                      Image_ReserchNew;                                         
	class UImage*                                      Image_SeasonIcon;                                         
	class ULobby_Tab_Item_UIBP_C*                      Lobby_Tab_Item_UIBP;                                      
	class USizeBox*                                    NewbieGuide_Season;                                       
	class UCanvasPanel*                                NewbieGuide_Season02;                                     
	class UReddot_Anchor_C*                            Reddot_Anchor;                                            
	class UReddot_Anchor_C*                            Reddot_Anchor_Season;                                     
	class UReddot_Anchor_C*                            Reddot_Anchor_TaskNewTips;                                
	class UReddot_Anchor_C*                            Reddot_Anchor_Wardrobe;                                   
	class UReddot_Anchor_C*                            Reddot_Anchor_Workshop;                                   
	class UReddot_Anchor_Item05_C*                     SeasonUnlockNew;                                          
	class USizeBox*                                    SizeBox_4;                                                
	class USizeBox*                                    SizeBox_13;                                               
	class USizeBox*                                    SizeBox_Bubble_Workshop;                                  
	class USizeBox*                                    SizeBox_Diy;                                              
	class USizeBox*                                    SizeBox_Inventory;                                        
	class USizeBox*                                    SizeBox_Missions;                                         
	class USizeBox*                                    SizeBox_NewbieGuide;                                      
	class USizeBox*                                    SizeBox_Season;                                           
	class USizeBox*                                    SizeBox_Theme;                                            
	class USizeBox*                                    SizeBox_Workshop;                                         
	class UTextBlock*                                  TextBlock_1;                                              
	class UTextBlock*                                  TextBlock_2;                                              
	class UTextBlock*                                  TextBlock_8;                                              
	class UTextBlock*                                  TextBlock_AmoryTitle;                                     
	class UTextBlock*                                  TextBlock_Corps;                                          
	class UTextBlock*                                  TextBlock_DepotTitleNew;                                  
	class UTextBlock*                                  TextBlock_season;                                         
	class UImage*                                      Theme_EntranceIcon;                                       
	class UReddot_Anchor_C*                            Theme_RedDot;                                             
	class UWidgetSwitcher*                             WidgetSwitcher_Fold;                                      
	class UCanvasPanel*                                WorkshopReddot;                                           
	class UReddot_Anchor_Item05_C*                     WorkshopUnlockNew;                                        

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Lobby_Main_Tab_UIBP.Lobby_Main_Tab_UIBP_C");
		return pStaticClass;
	}

};


}

