#pragma once


 
namespace SDK
{






class UTeam_Main_UIBP_C : public UUserWidget
{
public:
	class UCanvasPanel*                                CanvasPanel_IPX;                                          
	class UCanvasPanel*                                CanvasPanel_Menus;                                        
	class UTeamcode_C*                                 Teamcode;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Team_Main_UIBP.Team_Main_UIBP_C");
		return pStaticClass;
	}

};


}

