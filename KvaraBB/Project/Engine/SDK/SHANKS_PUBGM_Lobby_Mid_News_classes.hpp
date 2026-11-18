#pragma once


 
namespace SDK
{






class ULobby_Mid_News_C : public UUAEUserWidget
{
public:
	class UCanvasPanel*                                Base;                                                     
	class UButton*                                     Button;                                                   
	class UImage*                                      Icon1;                                                    
	class UImage*                                      Icon2;                                                    
	class UImage*                                      Icon3;                                                    
	class UImage*                                      Icon4;                                                    
	class UImage*                                      RedPoint;                                                 
	class UCanvasPanel*                                Root;                                                     
	class UWidgetSwitcher*                             WidgetSwitcher_Type;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Lobby_Mid_News.Lobby_Mid_News_C");
		return pStaticClass;
	}

};


}

