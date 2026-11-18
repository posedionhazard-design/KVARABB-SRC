#pragma once


 
namespace SDK
{






class ULobby_Mid_Banner_Dot_Item_C : public UUserWidget
{
public:
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Lobby_Mid_Banner_Dot_Item.Lobby_Mid_Banner_Dot_Item_C");
		return pStaticClass;
	}


	void SetData(bool bSelect);
};


}

