#pragma once


 
namespace SDK
{






class UCommon_System_Close_UIBP_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           
	class UButton*                                     Button_Close;                                             
	class UButton*                                     Button_Help;                                              
	class UImage*                                      Image_Closed;                                             
	class UImage*                                      Image_Question;                                           
	class UNamedSlot*                                  NamedSlot_Extend;                                         
	class USizeBox*                                    SizeBox_1;                                                
	class UTextBlock*                                  TextBlock_Title;                                          
	bool                                               Edit;                                                     
	bool                                               QuestionEnabled;                                                 
	bool                                               IsVisible;                                                     
	unsigned char                                      UnknownData00[0x5];                                       
	struct FText                                       DisplayText;                                                 
	bool                                               IsSelected;                                                     
	unsigned char                                      UnknownData01[0x7];                                       
	struct FSlateFontInfo                              VisibleFont;                                             
	struct FSlateColor                                 TextColor;                                                
	struct FSlateBrush                                 QuestionBrush;                                            
	struct FSlateBrush                                 ClosedBrush;                                              
	float                                              AnimationDuration;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Common_System_Close_UIBP.Common_System_Close_UIBP_C");
		return pStaticClass;
	}


	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_Common_System_Close_UIBP(int EntryPoint);
};


}

