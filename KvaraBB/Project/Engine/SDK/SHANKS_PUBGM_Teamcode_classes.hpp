#pragma once


 
namespace SDK
{






class UTeamcode_C : public UUserWidget
{
public:
	class UButton*                                     Button_TeamCode_X;                                        
	class UImage*                                      Image_1;                                                  
	class UImage*                                      Image_TeamCodeAdd;                                        
	class UCanvasPanel*                                PanelClose;                                               
	class UUTRichTextBlock*                            TeamCodeText;                                             
	class UTextBlock*                                  TextBlock_Code;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Teamcode.Teamcode_C");
		return pStaticClass;
	}


	void SetData(const struct FString& code, bool isShowClose);
};


}

