#pragma once


 
namespace SDK
{






class ULobby_Main_Wifi_UIBP_C : public UUserWidget
{
public:
	class UWidgetAnimation*                            FadeIn;                                                   
	class UWidgetAnimation*                            Animation_Battery;                                        
	class UButton*                                     Button_AccountRisk;                                       
	class UButton*                                     Button_BanMatch;                                          
	class UCanvasPanel*                                CanvasPanel_AccountRisk;                                  
	class UCanvasPanel*                                CanvasPanel_BanMatch;                                     
	class UCanvasPanel*                                CanvasPanel_High;                                         
	class UCanvasPanel*                                CanvasPanel_Low;                                          
	class UImage*                                      Image_11;                                                 
	class UImage*                                      Image_12;                                                 
	class UImage*                                      Image_37;                                                 
	class UImage*                                      Image_Charge;                                             
	class UImage*                                      Image_kefu;                                               
	class UImage*                                      Image_xunyou;                                             
	class UProgressBar*                                ProgressBar_Battery;                                      
	class UTextBlock*                                  TextBlock_3;                                              
	class UTextBlock*                                  TextBlock_AccountRisk;                                    
	class UTextBlock*                                  TextBlock_CurTime;                                        
	class UTextBlock*                                  TextBlock_High;                                           
	class UTextBlock*                                  TextBlock_Zone;                                           
	class UWidgetSwitcher*                             WidgetSwitcher_Network;                                   
	class UWidgetSwitcher*                             WidgetSwitcher_Quality;                                   
	class UWidgetSwitcher*                             WidgetSwitcher_Signal;                                    
	class UWidgetSwitcher*                             WidgetSwitcher_WIFI;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Lobby_Main_Wifi_UIBP.Lobby_Main_Wifi_UIBP_C");
		return pStaticClass;
	}

};


}

