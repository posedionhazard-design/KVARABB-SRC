#pragma once


 
namespace SDK
{






class UNewLogin_UIBP_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           
	class UWidgetAnimation*                            FadeIn;                                                   
	class UImage*                                      age18;                                                    
	class UWidgetSwitcher*                             AuthTypeSwitcher;                                         
	class UButton*                                     btnHelpLogin;                                             
	class UButton*                                     Button_1;                                                 
	class UButton*                                     Button_2;                                                 
	class UButton*                                     Button_3;                                                 
	class UButton*                                     Button_Agreement;                                         
	class UButton*                                     Button_BackToSelect;                                      
	class UButton*                                     Button_Bulletin;                                          
	class UButton*                                     Button_Clause;                                            
	class UButton*                                     Button_CloseFBWebLogin;                                   
	class UButton*                                     Button_Language;                                          
	class UButton*                                     Button_LoginByChannel;                                    
	class UButton*                                     Button_LoginByPassword;                                   
	class UButton*                                     Button_MORE;                                              
	class UButton*                                     Button_NoAuthLogin;                                       
	class UButton*                                     Button_OfflineServer;                                     
	class UButton*                                     Button_Privacy;                                           
	class UButton*                                     Button_QRCode;                                            
	class UButton*                                     Button_Repair;                                            
	class UButton*                                     Button_Service_Agreement;                                 
	class UButton*                                     Button_Service_Privacy;                                   
	class UCanvasPanel*                                CanvasPanel_11;                                           
	class UCanvasPanel*                                CanvasPanel_13;                                           
	class UCanvasPanel*                                CanvasPanel_AgeLimited;                                   
	class UCanvasPanel*                                CanvasPanel_Bulletin;                                     
	class UCanvasPanel*                                CanvasPanel_Content;                                      
	class UCanvasPanel*                                CanvasPanel_HelpLogin;                                    
	class UCanvasPanel*                                CanvasPanel_Language;                                     
	class UCanvasPanel*                                CanvasPanel_Privacy;                                      
	class UCanvasPanel*                                CanvasPanel_QRCode;                                       
	class UCanvasPanel*                                CanvasPanel_Repair;                                       
	class UCanvasPanel*                                CanvasPanel_Sound;                                        
	class UCanvasPanel*                                CanvasPanel_Tips;                                         
	class UCheckBox*                                   CheckBox_1;                                               
	class UCheckBox*                                   CheckBox_AgreementAgree;                                  
	class UCheckBox*                                   CheckBox_PrivacyAgree;                                    
	class UWINSDKFBWebLogin*                           FBWebLoginBrowser;                                        
	class UGridPanel*                                  GridPanel_IPX;                                            
	class UHorizontalBox*                              HorizontalBox_2;                                          
	class UHorizontalBox*                              HorizontalBox_7;                                          
	class UHorizontalBox*                              HorizontalBox_10;                                         
	class UHorizontalBox*                              HorizontalBox_autoHide_3;                                 
	class UCanvasPanel*                                HorizontalBox_autoHide_4;                                 
	class UImage*                                      Image_2;                                                  
	class UImage*                                      Image_5;                                                  
	class UImage*                                      Image_9;                                                  
	class UImage*                                      Image_17;                                                 
	class UImage*                                      Image_18;                                                 
	class UImage*                                      Image_19;                                                 
	class UImage*                                      Image_20;                                                 
	class UImage*                                      Image_26;                                                 
	class UImage*                                      Image_34;                                                 
	class UImage*                                      Image_40;                                                 
	class UImage*                                      Image_41;                                                 
	class UImage*                                      Image_42;                                                 
	class UImage*                                      Image_44;                                                 
	class UImage*                                      Image_45;                                                 
	class UImage*                                      Image_Logo;                                               
	class UImage*                                      Image_Logo_India;                                         
	class UImage*                                      Image_weigouxuan;                                         
	class UImage*                                      Image_yigouxuan;                                          
	class ULogin_InputOfflineLoginItem_UIBP_C*         Login_InputOfflineLoginItem_UIBP_Password;                
	class ULogin_InputOfflineLoginItem_UIBP_C*         Login_InputOfflineLoginItem_UIBP_Username;                
	class ULoopScrollBox*                              LoopScrollBox_Channel;                                    
	class UCanvasPanel*                                Panel_LoginBtn;                                           
	class UCanvasPanel*                                Panel_LoginNoAuth;                                        
	class UCanvasPanel*                                Panel_LoginSelect;                                        
	class UCanvasPanel*                                Panel_Repair;                                             
	class UGridPanel*                                  PanelRoot;                                                
	class UUTRichTextBlock*                            RichText_PrivacyPolicy;                                   
	class UMultiLineEditableTextBox*                   Text_Account;                                             
	class UMultiLineEditableTextBox*                   Text_Password;                                            
	class UTextBlock*                                  TextBlock_3;                                              
	class UTextBlock*                                  TextBlock_4;                                              
	class UTextBlock*                                  TextBlock_6;                                              
	class UTextBlock*                                  TextBlock_14;                                             
	class UTextBlock*                                  TextBlock_17;                                             
	class UTextBlock*                                  TextBlock_21;                                             
	class UTextBlock*                                  TextBlock_25;                                             
	class UTextBlock*                                  TextBlock_Account;                                        
	class UTextBlock*                                  TextBlock_AgeLimited;                                     
	class UTextBlock*                                  TextBlock_Bulletin;                                       
	class UTextBlock*                                  TextBlock_LANServer;                                      
	class UTextBlock*                                  TextBlock_Pwd;                                            
	class UTextBlock*                                  TextBlock_QRCode;                                         
	class UTextBlock*                                  TextBlock_UserAgreement;                                  
	class UTextBlock*                                  TextBlock_Version;                                        
	class UTextBlock*                                  TextGuestTips;                                            
	class UImage*                                      TURBO;                                                    
	class UVerticalBox*                                VerticalBox_autoHide_4;                                   
	class UVerticalBox*                                VerticalBox_FuncButtons;                                  
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                         
	class UWidgetSwitcher*                             WidgetSwitcher_2;                                         
	class UWidgetSwitcher*                             WidgetSwitcher_AgreementCheckBox;                         
	class UWidgetSwitcher*                             WidgetSwitcher_LoginMode;                                 
	class UWidgetSwitcher*                             WidgetSwitcher_Logo;                                      
	class UWidgetSwitcher*                             WidgetSwitcher_OfflineServer;                             
	class UWidgetSwitcher*                             WidgetSwitcher_PrivacyCheckBox;                           
	class UCanvasPanel*                                WINSDKFacebookLoginContainer;                             
	class UAkAudioBank*                                LoginAudioBank;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass NewLogin_UIBP.NewLogin_UIBP_C");
		return pStaticClass;
	}


	void SetRenderTransformWheniPhone();
	void Construct();
	void ExecuteUbergraph_NewLogin_UIBP(int EntryPoint);
};


}

