#pragma once


 
namespace SDK
{






class ULobby_Activity_RP_Item_C : public UUserWidget
{
public:
	class UCanvasPanel*                                CanvasPanel_18;                                           
	class UCanvasPanel*                                Effect_RP_2;                                              
	class UCanvasPanel*                                Effect_RP_3;                                              
	class UImage*                                      Image_BranchRP;                                           
	class UImage*                                      Image_Rp;                                                 
	class UImage*                                      Image_Unlock_BranchRP;                                    
	class UTextBlock*                                  TextBlock_Time;                                           
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                         
	class UWidgetSwitcher*                             WidgetSwitcher_RP;                                        

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Lobby_Activity_RP_Item.Lobby_Activity_RP_Item_C");
		return pStaticClass;
	}

};


}

