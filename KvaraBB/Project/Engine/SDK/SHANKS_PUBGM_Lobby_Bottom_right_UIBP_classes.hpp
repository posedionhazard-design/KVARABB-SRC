#pragma once


 
namespace SDK
{






class ULobby_Bottom_Right_UIBP_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           
	class ULobby_Main_Expression_UIBP_C*               Lobby_Main_Expression_UIBP;                               
	int                                                preWidth;                                                 
	int                                                preHeight;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Lobby_Bottom_right_UIBP.Lobby_Bottom_Right_UIBP_C");
		return pStaticClass;
	}


	void CheckAdaption(bool* bAdapt, float* Width, float* Height);
	void GetAdaptWidthHeight(float Width, float Height, float* adaptWidth, float* adaptHeight);
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void Construct();
	void ExecuteUbergraph_Lobby_Bottom_Right_UIBP(int EntryPoint);
};


}

