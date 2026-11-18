#pragma once


 
namespace SDK
{






class ULogin_Video_UIBP_C : public UUserWidget
{
public:
	class UCanvasPanel*                                CanvasPanel_1;                                            
	class UImage*                                      Image_Logo;                                               
	class UImage*                                      Image_Mask;                                               
	class UImage*                                      MediaContainer;                                           
	class UScaleBox*                                   ScaleBox_1;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Login_Video_UIBP.Login_Video_UIBP_C");
		return pStaticClass;
	}

};


}

