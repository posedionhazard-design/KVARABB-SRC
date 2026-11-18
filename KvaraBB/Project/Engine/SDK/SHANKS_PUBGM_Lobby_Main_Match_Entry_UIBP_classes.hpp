#pragma once


 
namespace SDK
{






class ULobby_Main_Match_Entry_UIBP_C : public UUserWidget
{
public:
	class UWidgetAnimation*                            Animation_MatchingGuide;                                  
	class UWidgetAnimation*                            Anim_Weapon;                                              
	class UWidgetAnimation*                            Anina_Permanent;                                          
	class UWidgetAnimation*                            Animation_Hand_Loop;                                      
	class UWidgetAnimation*                            Animation_Mask;                                           
	class UWidgetAnimation*                            NewAnimation_2;                                           
	class UWidgetAnimation*                            Animation_Hand;                                           
	class UWidgetAnimation*                            Animation_ShrinkAndExpansion;                             
	class UCanvasPanel*                                Battle_NewbieGuide;                                       
	class UBorder*                                     Border_1;                                                 
	class UBorder*                                     Border_MatchInfo;                                         
	class UButton*                                     Button_1;                                                 
	class UButton*                                     Button_ArenaWeapon;                                       
	class UButton*                                     Button_Close;                                             
	class UButton*                                     Button_Entry;                                             
	class UButton*                                     Button_Expand;                                            
	class UButton*                                     Button_FirstWin;                                          
	class UButton*                                     Button_Lock;                                              
	class UButton*                                     Button_Mask;                                              
	class UButton*                                     Button_RecPlay1;                                          
	class UButton*                                     Button_RecPlay2;                                          
	class UButton*                                     Button_SpMode;                                            
	class UCanvasPanel*                                Canvas_FirstBattle_Newbie;                                
	class UCanvasPanel*                                Canvas_Panel_HandGuide;                                   
	class UCanvasPanel*                                Canvas_Panel_HandGuide01;                                 
	class UCanvasPanel*                                Canvas_Panel_HandGuide2;                                  
	class UCanvasPanel*                                CanvasPanel_4;                                            
	class UCanvasPanel*                                CanvasPanel_20;                                           
	class UCanvasPanel*                                CanvasPanel_30;                                           
	class UCanvasPanel*                                CanvasPanel_76;                                           
	class UCanvasPanel*                                CanvasPanel_77;                                           
	class UCanvasPanel*                                CanvasPanel_78;                                           
	class UCanvasPanel*                                CanvasPanel_79;                                           
	class UCanvasPanel*                                CanvasPanel_BG;                                           
	class UCanvasPanel*                                CanvasPanel_DoubleCard;                                   
	class UCanvasPanel*                                CanvasPanel_FirstWin;                                     
	class UCanvasPanel*                                CanvasPanel_Glow;                                         
	class UCanvasPanel*                                CanvasPanel_highLeveTips;                                 
	class UCanvasPanel*                                CanvasPanel_JK;                                           
	class UCanvasPanel*                                CanvasPanel_Matching;                                     
	class UCanvasPanel*                                CanvasPanel_Pre;                                          
	class UCanvasPanel*                                CanvasPanel_SpMode;                                       
	class UCanvasPanel*                                CanvasPanel_TeamCnt;                                      
	class UCanvasPanel*                                CanvasPanel_Theme;                                        
	class UCanvasPanel*                                CanvasPanel_Tips;                                         
	class UCommon_Tips_Bg02_UIBP_C*                    Common_Tips_Bg02_UIBP;                                    
	class UCommon_Tips_Bg_UIBP_C*                      Common_Tips_Bg_UIBP;                                      
	class UCanvasPanel*                                Effect_StartGame;                                         
	class UCanvasPanel*                                EntryGuide_FX;                                            
	class UCommon_Item_BP_C*                           FirstWinReward;                                           
	class UCanvasPanel*                                Fx_CanvasPanel;                                           
	class UCanvasPanel*                                FX_Mask;                                                  
	class UGridPanel*                                  GridPanel_1;                                              
	class UGridPanel*                                  GridPanel_LTMatch;                                        
	class UButton*                                     GuideBtn;                                                 
	class UCanvasPanel*                                GuidePanel;                                               
	class UTextBlock*                                  GuideTip;                                                 
	class UHorizontalBox*                              HorizontalBox_HotStat;                                    
	class UImage*                                      Image_4;                                                  
	class UImage*                                      Image_8;                                                  
	class UImage*                                      Image_9;                                                  
	class UImage*                                      Image_12;                                                 
	class UImage*                                      Image_14;                                                 
	class UImage*                                      Image_16;                                                 
	class UImage*                                      Image_18;                                                 
	class UImage*                                      Image_20;                                                 
	class UImage*                                      Image_21;                                                 
	class UImage*                                      Image_22;                                                 
	class UImage*                                      Image_23;                                                 
	class UImage*                                      Image_30;                                                 
	class UImage*                                      Image_32;                                                 
	class UImage*                                      Image_37;                                                 
	class UImage*                                      Image_45;                                                 
	class UImage*                                      Image_51;                                                 
	class UImage*                                      Image_54;                                                 
	class UImage*                                      Image_Arrow;                                              
	class UImage*                                      Image_bg1;                                                
	class UImage*                                      Image_bg10;                                               
	class UImage*                                      Image_bg2;                                                
	class UImage*                                      Image_bg3;                                                
	class UImage*                                      Image_bg5;                                                
	class UImage*                                      Image_bg6;                                                
	class UImage*                                      Image_bg9;                                                
	class UImage*                                      Image_guide;                                              
	class UImage*                                      Image_Hot;                                                
	class UImage*                                      Image_Line1;                                              
	class UImage*                                      Image_Line2;                                              
	class UImage*                                      Image_SpMode;                                             
	class UImage*                                      Image_TeamFlag;                                           
	class ULobby_PrivateRoom_Gameplay_Item_UIBP_C*     Lobby_PrivateRoom_Gameplay_Item_UIBP;                     
	class UMaskBoxItem_C*                              MaskBoxItem;                                              
	class UVerticalBox*                                MatchInfo;                                                
	class UImage*                                      MatchInfo_HorizontalSplitLine;                            
	class UCanvasPanel*                                MatchTips;                                                
	class UCanvasPanel*                                New_Mode;                                                 
	class UCanvasPanel*                                Panel_laodaixin;                                          
	class UCanvasPanel*                                ReturnActivity;                                           
	class UCanvasPanel*                                SameLanguageMatch;                                        
	class UScaleBox*                                   ScaleBox_EstimateTime;                                    
	class USizeBox*                                    SizeBox_top;                                              
	class UCanvasPanel*                                TeammateMatch;                                            
	class UTextBlock*                                  Text_State;                                               
	class UTextBlock*                                  Text_TeamCnt;                                             
	class UTextBlock*                                  Text_WaitForMatchNum;                                     
	class UTextBlock*                                  TextBlock_1;                                              
	class UTextBlock*                                  TextBlock_4;                                              
	class UTextBlock*                                  TextBlock_5;                                              
	class UTextBlock*                                  TextBlock_6;                                              
	class UTextBlock*                                  TextBlock_8;                                              
	class UTextBlock*                                  TextBlock_15;                                             
	class UTextBlock*                                  TextBlock_54;                                             
	class UTextBlock*                                  TextBlock_Cross;                                          
	class UTextBlock*                                  TextBlock_Entry;                                          
	class UUTRichTextBlock*                            TextBlock_FindingTeammatesNum;                            
	class UTextBlock*                                  TextBlock_FindingTeammatesTime;                           
	class UTextBlock*                                  TextBlock_JoinGame;                                       
	class UTextBlock*                                  TextBlock_LModeName1;                                     
	class UTextBlock*                                  TextBlock_LModeName2;                                     
	class UTextBlock*                                  TextBlock_Matching;                                       
	class UUTRichTextBlock*                            TextBlock_Matching_New;                                   
	class UTextBlock*                                  TextBlock_MatchingTime;                                   
	class UTextBlock*                                  TextBlock_Num;                                            
	class UTextBlock*                                  TextBlock_Player;                                         
	class UTextBlock*                                  TextBlock_QueueError;                                     
	class UTextBlock*                                  TextBlock_QueueErrorTime;                                 
	class UTextBlock*                                  TextBlock_QuickStart;                                     
	class UTextBlock*                                  TextBlock_Readying;                                       
	class UTextBlock*                                  TextBlock_SameLangMatch;                                  
	class UTextBlock*                                  TextBlock_UGCMatchTime;                                   
	class UTextBlock*                                  TextBlock_Waiting;                                        
	class UUTRichTextBlock*                            UTRichTextBlock_2;                                        
	class UUTRichTextBlock*                            UTRichTextBlock_210;                                      
	class UUTRichTextBlock*                            UTRichTextBlock_211;                                      
	class UUTRichTextBlock*                            UTRichTextBlock_highLevelTips;                            
	class UUTRichTextBlock*                            UTRichTextBlock_LPerspective1;                            
	class UUTRichTextBlock*                            UTRichTextBlock_LPerspective2;                            
	class UUTRichTextBlock*                            UTRichTextBlock_LTime1;                                   
	class UUTRichTextBlock*                            UTRichTextBlock_LTime2;                                   
	class UUTRichTextBlock*                            UTRichTextBlock_RemainingTime;                            
	class UUTRichTextBlock*                            UTRichTextBlock_TeamMatch;                                
	class UVerticalBox*                                VerticalBox_8;                                            
	class UCanvasPanel*                                WaitForMatch;                                             
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                         
	class UWidgetSwitcher*                             WidgetSwitcher_Matching;                                  
	class UWidgetSwitcher*                             WidgetSwitcher_Progress;                                  
	class UWidgetSwitcher*                             WidgetSwitcher_State;                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Lobby_Main_Match_Entry_UIBP.Lobby_Main_Match_Entry_UIBP_C");
		return pStaticClass;
	}

};


}

