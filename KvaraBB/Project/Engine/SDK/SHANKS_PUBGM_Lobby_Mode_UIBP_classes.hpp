#pragma once


 
namespace SDK
{






class ULobby_Mode_UIBP_C : public UUserWidget
{
public:
	class UWidgetAnimation*                            Anim_Swtich_Specialplay_Loop;                             
	class UWidgetAnimation*                            Anim_Swtich_Specialplay;                                  
	class UWidgetAnimation*                            Animation_Hand;                                           
	class UWidgetAnimation*                            Anim_Refresh_02;                                          
	class UWidgetAnimation*                            Anim_Refresh_01;                                          
	class UWidgetAnimation*                            Anim_Switch_Match;                                        
	class UWidgetAnimation*                            Anim_FirstGameBonus;                                      
	class UWidgetAnimation*                            Anim_Tips;                                                
	class UWidgetAnimation*                            Anim_loop;                                                
	class UWidgetAnimation*                            Animation_LoadingLoop;                                    
	class UWidgetAnimation*                            Animation_Seletion;                                       
	class UBorder*                                     Border_Normal;                                            
	class UBorder*                                     Border_UnNormal;                                          
	class UButton*                                     Button_1;                                                 
	class UButton*                                     Button_2;                                                 
	class UButton*                                     Button_3;                                                 
	class UButton*                                     Button_4;                                                 
	class UButton*                                     Button_Collection;                                        
	class UButton*                                     Button_Enter;                                             
	class UButton*                                     Button_Match;                                             
	class UButton*                                     Button_MatchingTips;                                      
	class UButton*                                     Button_ModeLock;                                          
	class UButton*                                     Button_NotDownloaded;                                     
	class UButton*                                     Button_OptimizePing;                                      
	class UButton*                                     Button_PSSkillSprint;                                     
	class UButton*                                     Button_RankLimitTip;                                      
	class UButton*                                     Button_Search;                                            
	class UButton*                                     Button_SearchCompilation;                                 
	class UButton*                                     Button_SkillSelection;                                    
	class UButton*                                     Button_SpecialPlay;                                       
	class UButton*                                     Button_TeamStatus;                                        
	class UButton*                                     Button_Tips_ChangeMode;                                   
	class UButton*                                     Button_UGCMulti;                                          
	class UCanvasPanel*                                Canvas_Panel_HandGuide;                                   
	class UCanvasPanel*                                CanvasPanel_23;                                           
	class UCanvasPanel*                                CanvasPanel_Activity;                                     
	class UCanvasPanel*                                CanvasPanel_CrossMatch;                                   
	class UCanvasPanel*                                CanvasPanel_DownloadTips;                                 
	class UCanvasPanel*                                CanvasPanel_GuideTips;                                    
	class UCanvasPanel*                                CanvasPanel_loading;                                      
	class UCanvasPanel*                                CanvasPanel_Match;                                        
	class UCanvasPanel*                                CanvasPanel_NotDownloaded;                                
	class UCanvasPanel*                                CanvasPanel_OptimizePing;                                 
	class UCanvasPanel*                                CanvasPanel_Plant;                                        
	class UCanvasPanel*                                CanvasPanel_Protect;                                      
	class UCanvasPanel*                                CanvasPanel_PVE;                                          
	class UCanvasPanel*                                CanvasPanel_Qualifying_Rounds;                            
	class UCanvasPanel*                                CanvasPanel_Quantity;                                     
	class UCanvasPanel*                                CanvasPanel_RankLimit;                                    
	class UCanvasPanel*                                CanvasPanel_SkillSelection;                               
	class UCanvasPanel*                                CanvasPanel_SpecialPlay;                                  
	class UCanvasPanel*                                CanvasPanel_TeamStatus;                                   
	class UCanvasPanel*                                CanvasPanel_UGC_Multi;                                    
	class UCanvasPanel*                                CanvasPanel_UGCDownloadGuide;                             
	class UCanvasPanel*                                CanvasPanel_Vampire;                                      
	class UCanvasPanel*                                CanvasPanel_VideoStream;                                  
	class UCheckBox*                                   CheckBox_CrossMatch;                                      
	class UCheckBox*                                   CheckBox_SameLanguage;                                    
	class UCommon_Qualifying_Rounds_Item_UIBP_C*       Common_Qualifying_Rounds_Item_UIBP;                       
	class UHorizontalBox*                              HorizontalBox_1;                                          
	class UHorizontalBox*                              HorizontalBox_MapInfo;                                    
	class UImage*                                      Image_2;                                                  
	class UImage*                                      Image_14;                                                 
	class UImage*                                      Image_15;                                                 
	class UImage*                                      Image_21;                                                 
	class UImage*                                      Image_28;                                                 
	class UImage*                                      Image_30;                                                 
	class UImage*                                      Image_31;                                                 
	class UImage*                                      Image_47;                                                 
	class UImage*                                      Image_56;                                                 
	class UImage*                                      Image_77;                                                 
	class UImage*                                      Image_80;                                                 
	class UImage*                                      Image_Arrow;                                              
	class UImage*                                      Image_bg;                                                 
	class UImage*                                      Image_BG_UGC;                                             
	class UImage*                                      Image_FlowLight_001;                                      
	class UImage*                                      Image_Icon;                                               
	class UImage*                                      Image_Icon1;                                              
	class UImage*                                      Image_Line01;                                             
	class UImage*                                      Image_Line02;                                             
	class UImage*                                      Image_Mod;                                                
	class UImage*                                      Image_Mode_PlayerCnt;                                     
	class UImage*                                      Image_Progress;                                           
	class UImage*                                      Image_Protect;                                            
	class UImage*                                      Image_PSSkillSprint_RoleIcon;                             
	class UImage*                                      Image_SkillIcon;                                          
	class UImage*                                      Image_Team;                                               
	class UCanvasPanel*                                Panel_Download;                                           
	class UReddot_Anchor_C*                            Reddot_Anchor;                                            
	class USizeBox*                                    SizeBox_Icon;                                             
	class USizeBox*                                    SizeBox_Icon1;                                            
	class USizeBox*                                    SizeBox_Search;                                           
	class USizeBox*                                    SizeBox_SearchCompilation;                                
	class USizeBox*                                    SizeBox_TeameName;                                        
	class USpacer*                                     Spacer_3;                                                 
	class UTextBlock*                                  Text_MapName;                                             
	class UTextBlock*                                  Text_ModelName;                                           
	class UTextBlock*                                  Text_PerspectiveType;                                     
	class UTextBlock*                                  TextBlock_10;                                             
	class UTextBlock*                                  TextBlock_12;                                             
	class UTextBlock*                                  TextBlock_Activity;                                       
	class UUTRichTextBlock*                            TextBlock_Guide;                                          
	class UTextBlock*                                  TextBlock_Loading;                                        
	class UTextBlock*                                  TextBlock_Mode;                                           
	class UTextBlock*                                  TextBlock_Pers;                                           
	class UTextBlock*                                  TextBlock_Protect;                                        
	class UUTRichTextBlock*                            TextBlock_RankLimit;                                      
	class UTextBlock*                                  TextBlock_SameLanguage;                                   
	class UTextBlock*                                  TextBlock_SpecialPlay;                                    
	class UTextBlock*                                  TextBlock_TeamCnt;                                        
	class UTextBlock*                                  TextBlock_TeamMacth;                                      
	class UTextBlock*                                  TextBlock_WOW;                                            
	class UUTRichTextBlock*                            UTRichText_NotDownloaded;                                 
	class UUTRichTextBlock*                            UTRichTextBlock_CrossMatch;                               
	class UUTRichTextBlock*                            UTRichTextBlock_Download;                                 
	class UUTRichTextBlock*                            UTRichTextBlock_MapSelected;                              
	class UUTRichTextBlock*                            UTRichTextBlock_Ping;                                     
	class UUTRichTextBlock*                            UTRichTextBlock_Text;                                     
	class UUTRichTextBlock*                            UTRichTextBlock_VideoStream;                              
	class UImage*                                      vx_Image_6;                                               
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                         
	class UWidgetSwitcher*                             WidgetSwitcher_2;                                         
	class UWidgetSwitcher*                             WidgetSwitcher_3;                                         
	class UWidgetSwitcher*                             WidgetSwitcher_4;                                         
	class UWidgetSwitcher*                             WidgetSwitcher_MatchAndTeamStatus;                        
	class UWidgetSwitcher*                             WidgetSwitcher_Mod;                                       
	class UWidgetSwitcher*                             WidgetSwitcher_Mode;                                      
	class UWidgetSwitcher*                             WidgetSwitcher_Ping;                                      
	class UWidgetSwitcher*                             WidgetSwitcher_Status;                                    
	class UWidgetSwitcherExt*                          WidgetSwitcherExt_Teammate;                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Lobby_Mode_UIBP.Lobby_Mode_UIBP_C");
		return pStaticClass;
	}

};


}

