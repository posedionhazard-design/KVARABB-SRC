#pragma once


 
namespace SDK
{






class ULogin_InputOfflineLoginItem_UIBP_C : public UCommonSearchBox
{
public:
	class UEditableTextBox*                            Input_Password;                                           
	class UEditableTextBox*                            Input_Username;                                           
	class UWidgetSwitcher*                             WidgetSwitcher_Image;                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Login_InputOfflineLoginItem_UIBP.Login_InputOfflineLoginItem_UIBP_C");
		return pStaticClass;
	}

};


}

