#pragma once


 
namespace SDK
{






class ULobby_Mid_Activity250_UIBP_C : public UUserWidget
{
public:
	class UWidgetAnimation*                            Animation_loading;                                        
	class UWidgetAnimation*                            Animation_Hand_Loop;                                      
	class UWidgetAnimation*                            Animation_Mask;                                           
	class UWidgetAnimation*                            Animation_Hand;                                           
	class UCanvasPanel*                                ActivityBubbleRoot;                                       
	class UCanvasPanel*                                BottomBubbleRoot;                                         
	class UButton*                                     Button_1;                                                 
	class UButton*                                     Button_Activity;                                          
	class UButton*                                     Button_Close;                                             
	class UButton*                                     Button_RP;                                                
	class UButton*                                     Button_SpecialActice;                                     
	class UButton*                                     Button_SpecialDiscount;                                   
	class UCanvasPanel*                                Canvas_Panel_HandGuide2;                                  
	class UCanvasPanel*                                CanvasPanel_2;                                            
	class UCanvasPanel*                                CanvasPanel_6;                                            
	class UCanvasPanel*                                CanvasPanel_7;                                            
	class UCanvasPanel*                                CanvasPanel_18;                                           
	class UCanvasPanel*                                CanvasPanel_20;                                           
	class UCanvasPanel*                                CanvasPanel_28;                                           
	class UCanvasPanel*                                CanvasPanel_Act;                                          
	class UCanvasPanel*                                CanvasPanel_ActivityDownload;                             
	class UCanvasPanel*                                CanvasPanel_AdvertisementTask;                            
	class UCanvasPanel*                                CanvasPanel_DownloadOF;                                   
	class UCanvasPanel*                                CanvasPanel_HomeEntry;                                    
	class UCanvasPanel*                                CanvasPanel_Reddot;                                       
	class UCanvasPanel*                                CanvasPanel_Rp;                                           
	class UCanvasPanel*                                CanvasPanel_Sale;                                         
	class UCanvasPanel*                                CanvasPanel_SmartAssistant;                               
	class UCanvasPanel*                                CanvasPanel_SpecialAct;                                   
	class UCanvasPanel*                                CanvasPanel_SpecialActice;                                
	class UCanvasPanel*                                CanvasPanel_SpecialDiscount;                              
	class UCanvasPanel*                                CanvasPanel_Videos;                                       
	class UCanvasPanel*                                CanvasPanel_WeddingActivity;                              
	class UCanvasPanel*                                CanvasPanel_WorldCup;                                     
	class UCommon_Tips_Bg_UIBP_C*                      Common_Tips_Bg_UIBP;                                      
	class UCommon_Tips_Left_UIBP_C*                    Common_Tips_Left_UIBP;                                    
	class UCanvasPanel*                                Effect_RP;                                                
	class UCanvasPanel*                                FX_Mask;                                                  
	class UButton*                                     GuideBtn;                                                 
	class UCanvasPanel*                                GuidePanel;                                               
	class UTextBlock*                                  GuideTip;                                                 
	class UHorizontalBox*                              HorizontalBox_loading;                                    
	class UHorizontalBox*                              HorizontalBox_Newbie;                                     
	class UHorizontalBox*                              HorizontalBox_Sale;                                       
	class UImage*                                      Image_1;                                                  
	class UImage*                                      Image_4;                                                  
	class UImage*                                      Image_5;                                                  
	class UImage*                                      Image_7;                                                  
	class UImage*                                      Image_9;                                                  
	class UImage*                                      Image_10;                                                 
	class UImage*                                      Image_11;                                                 
	class UImage*                                      Image_12;                                                 
	class UImage*                                      Image_16;                                                 
	class UImage*                                      Image_57;                                                 
	class UImage*                                      Image_102;                                                
	class UImage*                                      Image_Act;                                                
	class UImage*                                      Image_Activice_CDN;                                       
	class UReddot_Anchor_C*                            Image_ActivityNewTips;                                    
	class UImage*                                      Image_Clock;                                              
	class UImage*                                      Image_Gift;                                               
	class UImage*                                      Image_Glow1;                                              
	class UImage*                                      Image_Glow2;                                              
	class UImage*                                      Image_Glow3;                                              
	class UImage*                                      Image_Rp_Mask;                                            
	class UImage*                                      Image_Sale;                                               
	class UImage*                                      Image_Theme;                                              
	class UImage*                                      Image_Theme02;                                            
	class UImage*                                      Image_Theme03;                                            
	class UImage*                                      Image_Theme04;                                            
	class UImage*                                      Image_Theme05;                                            
	class UImage*                                      Image_Theme06;                                            
	class UImage*                                      Image_Theme07;                                            
	class UCanvasPanel*                                Image_UnknowReddot;                                       
	class ULobby_Activity_RP_Item_C*                   Lobby_Activity_RP_Item;                                   
	class ULobby_Activity_RP_Item_C*                   Lobby_Activity_RP_Item_C_1;                               
	class ULobby_Activity_RP_Item_C*                   Lobby_Activity_RP_Item_C_3;                               
	class ULobby_Activity_RP_Item_C*                   Lobby_Activity_RP_Item_C_4;                               
	class UMaskBoxItem_C*                              MaskBoxItem;                                              
	class USizeBox*                                    Panel_ActivePack;                                         
	class UCanvasPanel*                                Panel_Activity;                                           
	class UCanvasPanel*                                Panel_Download;                                           
	class UCanvasPanel*                                Panel_FirstCharge;                                        
	class UCanvasPanel*                                Panel_UnknowButton;                                       
	class UReddot_Anchor_C*                            Reddot_Anchor;                                            
	class UReddot_Anchor_C*                            Reddot_Anchor_C_1;                                        
	class UReddot_Anchor_C*                            Reddot_Anchor_C_2;                                        
	class UReddot_Anchor_Item12_C*                     Reddot_Anchor_Item12;                                     
	class UScaleBox*                                   ScaleBox_5;                                               
	class USizeBox*                                    SizeBox_10;                                               
	class USizeBox*                                    SizeBox_Questionnaire;                                    
	class USizeBox*                                    SizeBox_RP;                                               
	class USpacer*                                     Spacer_Fit;                                               
	class UHorizontalBox*                              SpecialActice_Time;                                       
	class UTextBlock*                                  TextBlock_1;                                              
	class UTextBlock*                                  TextBlock_2;                                              
	class UTextBlock*                                  TextBlock_3;                                              
	class UTextBlock*                                  TextBlock_5;                                              
	class UTextBlock*                                  TextBlock_6;                                              
	class UTextBlock*                                  TextBlock_8;                                              
	class UTextBlock*                                  TextBlock_17;                                             
	class UTextBlock*                                  TextBlock_67;                                             
	class UTextBlock*                                  TextBlock_CountDown;                                      
	class UTextBlock*                                  TextBlock_Time;                                           
	class UUTRichTextBlock*                            TextBock_ActivityContentName;                             
	class UUnknowPass_Discount_Bubble_Item_UIBP_C*     UnknowPass_Discount_Bubble_Item_UIBP;                     
	class UVerticalBox*                                VerticalBox_RPText;                                       
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                         
	class UWidgetSwitcher*                             WidgetSwitcher_2;                                         
	class UWidgetSwitcher*                             WidgetSwitcher_3;                                         
	class UWidgetSwitcher*                             WidgetSwitcher_4;                                         
	class UWidgetSwitcher*                             WidgetSwitcher_PassReddot;                                
	class UWidgetSwitcher*                             WidgetSwitcher_RP;                                        
	class UCanvasPanel*                                WorldCup_Tips;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Lobby_Mid_Activity250_UIBP.Lobby_Mid_Activity250_UIBP_C");
		return pStaticClass;
	}

};


}

