#pragma once


 
namespace SDK
{






class ULobby_Main_Money_UIBP_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           
	class UButton*                                     Btn_Silver;                                               
	class UButton*                                     Btn_UC;                                                   
	class UButton*                                     Btn_Zhupai;                                               
	class UButton*                                     Button_Diamond;                                           
	class UCanvasPanel*                                Canvas_NewSeasonRecharge;                                 
	class UCanvasPanel*                                CanvasPanel_Diamond;                                      
	class UCanvasPanel*                                CanvasPanel_Silver;                                       
	class UCanvasPanel*                                CanvasPanel_Zhupai;                                       
	class UHorizontalBox*                              HorizontalBox_Content;                                    
	class UImage*                                      Image_1;                                                  
	class UImage*                                      Image_2;                                                  
	class UImage*                                      Image_4;                                                  
	class UImage*                                      Image_6;                                                  
	class UImage*                                      Image_11;                                                 
	class UImage*                                      Image_12;                                                 
	class UImage*                                      Image_171;                                                
	class UImage*                                      Image_NewSeasonRecharge;                                  
	class ULobby_Mid_Subscribe_UIBP_C*                 Lobby_Mid_Subscribe_UIBP;                                 
	class UTextBlock*                                  TextBlock_diamond;                                        
	class UTextBlock*                                  TextBlock_silver;                                         
	class UTextBlock*                                  Txt_uc;                                                   
	class UTextBlock*                                  Txt_zhupai;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Lobby_Main_Money_UIBP.Lobby_Main_Money_UIBP_C");
		return pStaticClass;
	}


	void Construct();
	void ExecuteUbergraph_Lobby_Main_Money_UIBP(int EntryPoint);
};


}

