#pragma once


 
namespace SDK
{






class ULobby_Mid_Subscribe_UIBP_C : public UUserWidget
{
public:
	class UButton*                                     Button_FirstCharge;                                       
	class UButton*                                     Button_Prime;                                             
	class UCanvasPanel*                                Canvas_Reddot;                                            
	class UCanvasPanel*                                CanvasPanel_FirstCharge;                                  
	class UCanvasPanel*                                CanvasPanel_Prime;                                        
	class UReddot_Anchor_C*                            Reddot_Anchor;                                            
	class UReddot_Anchor_Item01_C*                     Reddot_Anchor_Item01;                                     
	class UTextBlock*                                  TextBlock_FirstChargeProgress;                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Lobby_Mid_Subscribe_UIBP.Lobby_Mid_Subscribe_UIBP_C");
		return pStaticClass;
	}

};


}

