#pragma once


 
namespace SDK
{






class UCommon_RankIntegralLevel_Style_Small_UIBP_C : public ULuaUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           
	class UCanvasPanel*                                Root;                                                     
	TEnumAsByte<ERankIntegralType>                     RankIntegralType;                                         
	unsigned char                                      UnknownData00[0x7];                                       
	class UUserWidget*                                 RankIntegralUIBP;                                         
	struct FSlateColor                                 RankTextColor;                                            
	struct FSlateColor                                 RankTextShadowColor;                                      
	struct FSlateFontInfo                              RankFontInfo;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C");
		return pStaticClass;
	}


	void ConstructPreviewSubItem();
	void SetRankInteral(int rankIntegral, class UTextBlock* textIntegralName);
	void SetArenaRankInteral(int rankIntegral, class UTextBlock* textIntegralName);
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_Common_RankIntegralLevel_Style_Small_UIBP(int EntryPoint);
};


}

