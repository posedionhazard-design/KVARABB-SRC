#pragma once


 
namespace SDK
{






class UReconnect_UIBP_C : public UUserWidget
{
public:
	class UButton*                                     Button_Bg;                                                
	class UCanvasPanel*                                CanvasPanel_2;                                            
	class UTextBlock*                                  TextBlock_Tips;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Reconnect_UIBP.Reconnect_UIBP_C");
		return pStaticClass;
	}

};


}

