#pragma once


 
namespace SDK
{






class UWoW_CommonEnterRoomTips_UIBP_C : public UUserWidget
{
public:
	class UCanvasPanel*                                Panel_EnterRoomTips;                                      
	class UCanvasPanel*                                Panel_EnterRoomTips1;                                     
	class UScaleBox*                                   ScaleBox_EnterRoomTips;                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass WoW_CommonEnterRoomTips_UIBP.WoW_CommonEnterRoomTips_UIBP_C");
		return pStaticClass;
	}

};


}

