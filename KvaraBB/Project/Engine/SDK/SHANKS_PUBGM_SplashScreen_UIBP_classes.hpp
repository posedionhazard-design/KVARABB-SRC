#pragma once


 
namespace SDK
{






class USplashScreen_UIBP_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           
	class UCanvasPanel*                                CanvasPanel_1;                                            
	class UTextBlock*                                  refactorLabel;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass SplashScreen_UIBP.SplashScreen_UIBP_C");
		return pStaticClass;
	}


	void Construct();
	void ExecuteUbergraph_SplashScreen_UIBP(int EntryPoint);
};


}

