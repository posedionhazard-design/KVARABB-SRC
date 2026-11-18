#pragma once


 
namespace SDK
{






class USplashScreen_GL_C : public UUserWidget
{
public:
	class UWidgetAnimation*                            Animation;                                                
	class UImage*                                      Image_Pubg_Logobg;                                        
	class UImage*                                      PUBG_Logo_01;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass SplashScreen_GL.SplashScreen_GL_C");
		return pStaticClass;
	}

};


}

