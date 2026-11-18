#pragma once


 
namespace SDK
{






class ULobby_Main_Switch_UIBP_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           
	class UWidgetAnimation*                            Anim_Offset_Tab_ModeToSocial;                             
	class UWidgetAnimation*                            Anim_Offset_Tab_SocialToMode;                             
	class UWidgetAnimation*                            Anim_Offset_Tab_LobbyToMode;                              
	class UWidgetAnimation*                            Anim_Offset_Tab_ModeToLobby;                              
	class UWidgetAnimation*                            Anim_Offset_Tab_LobbyToSocial;                            
	class UWidgetAnimation*                            Anim_Offset_Tab_SocialToLobby;                            
	class UWidgetAnimation*                            FadeOut;                                                  
	class UWidgetAnimation*                            FadeIn;                                                   
	class UWidgetAnimation*                            NewAnimation_New;                                         
	class UWidgetAnimation*                            Ani_Mid_Right;                                            
	class UWidgetAnimation*                            Ani_Left_Mid;                                             
	class UBorder*                                     Border_1;                                                 
	class UBorder*                                     Border_Left_New;                                          
	class UBorder*                                     Border_Left_Select;                                       
	class UBorder*                                     Border_Mid_New;                                           
	class UBorder*                                     Border_Mid_Select;                                        
	class UBorder*                                     Border_Moment_New;                                        
	class UBorder*                                     Border_Right_New;                                         
	class UBorder*                                     Border_Right_Select;                                      
	class UButton*                                     Button_Left;                                              
	class UButton*                                     Button_Mid;                                               
	class UButton*                                     Button_Report;                                            
	class UButton*                                     Button_Right;                                             
	class UCanvasPanel*                                Canvas_L;                                                 
	class UCanvasPanel*                                Canvas_M;                                                 
	class UCanvasPanel*                                Canvas_R;                                                 
	class UCanvasPanel*                                CanvasPanel_Limit;                                        
	class UCanvasPanel*                                CanvasPanel_MainCityDownload;                             
	class UCanvasPanel*                                CanvasPanel_Newbie;                                       
	class UCanvasPanel*                                CanvasPanel_RDownload;                                    
	class UCanvasPanel*                                CanvasPanel_Report;                                       
	class UCommon_Tips_Bg_UIBP_C*                      Common_Tips_Bg_UIBP;                                      
	class UImage*                                      Image_4;                                                  
	class UImage*                                      Image_5;                                                  
	class UImage*                                      Image_13;                                                 
	class UImage*                                      Image_15;                                                 
	class UImage*                                      Image_MidTab;                                             
	class UImage*                                      Image_MidTab2;                                            
	class UImage*                                      Image_RedPoint;                                           
	class UImage*                                      Image_WOW;                                                
	class UCanvasPanel*                                Panel_Download;                                           
	class UProgressBar*                                ProgressBar_1;                                            
	class UTextBlock*                                  TextBlock_1;                                              
	class UTextBlock*                                  TextBlock_Name;                                           
	class UImage*                                      TextBlock_WOW;                                            
	class UImage*                                      TextBlock_WoW1;                                           
	class UUTRichTextBlock*                            UTRichTextBlock_1;                                        
	class UVerticalBox*                                VerticalBox_MainCity;                                     
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                         
	class UWidgetSwitcher*                             WidgetSwitcher_2;                                         
	class UWidgetSwitcher*                             WidgetSwitcher_3;                                         
	class UWidgetSwitcher*                             WidgetSwitcher_4;                                         
	int                                                preWidth;                                                 
	int                                                preHeight;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Lobby_Main_Switch_UIBP.Lobby_Main_Switch_UIBP_C");
		return pStaticClass;
	}


	void CheckAdaption(bool* bAdapt, float* Width, float* Height);
	void GetAdaptWidthHeight(float Width, float Height, float* adaptWidth, float* adaptHeight);
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void Construct();
	void ExecuteUbergraph_Lobby_Main_Switch_UIBP(int EntryPoint);
};


}

