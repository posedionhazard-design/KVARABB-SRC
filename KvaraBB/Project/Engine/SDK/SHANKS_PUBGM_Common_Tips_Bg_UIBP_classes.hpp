#pragma once


 
namespace SDK
{






class UCommon_Tips_Bg_UIBP_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           
	class UWidgetAnimation*                            FadeIn;                                                   
	class UImage*                                      Image_Arrow1;                                             
	class UImage*                                      Image_Arrow2;                                             
	class UImage*                                      Image_Arrow3;                                             
	class UImage*                                      Image_Arrow4;                                             
	class UImage*                                      Image_Line1;                                              
	class UImage*                                      Image_Line2;                                              
	class UImage*                                      Image_Line3;                                              
	class UImage*                                      Image_Line4;                                              
	class UTextBlock*                                  TextBlock_Main;                                           
	class UWidgetSwitcher*                             WidgetSwitcher_State;                                     
	int                                                StyleBg;                                                  
	struct FLinearColor                                BpColor;                                                  

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Common_Tips_Bg_UIBP.Common_Tips_Bg_UIBP_C");
		return pStaticClass;
	}


	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_Common_Tips_Bg_UIBP(int EntryPoint);
};


}

