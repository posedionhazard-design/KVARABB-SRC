#pragma once


 
namespace SDK
{






class UCommon_Item_BP_C : public UCommonItemBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           
	class UWidgetAnimation*                            Auto_Item;                                                
	class UCommon_DragDrop_Item_C*                     Common_DragDrop_Item;                                     
	class UGridPanel*                                  GridPanel_1;                                              
	class UNamedSlot*                                  NamedSlot_1;                                              
	class UCanvasPanel*                                Panel_Download;                                           
	class USizeBox*                                    SizeBox_Show;                                             
	class UButton*                                     Button_Item;                                              
	struct FScriptMulticastDelegate                    OnClickItemCallback;                                      
	struct FScriptMulticastDelegate                    OnPressItemCallback;                                      
	struct FScriptMulticastDelegate                    OnReleaseItemCallback;                                    
	class UObject*                                     ODPaksDownload_Component;                                 
	class UUserWidget*                                 targetUI;                                                 
	int                                                resID;                                                    

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Common_Item_BP.Common_Item_BP_C");
		return pStaticClass;
	}


	void SetTexture(class UImage* Control, const struct FString& Path);
	void SetEveryPackIcon(int specailIconTable);
	void SetLight(bool bShow);
	void SetNameColor(const struct FSlateColor& Color);
	void SetLimitCount(bool IsShow, int Has, int Max);
	void SetCostCount(bool IsShow, int Has, int Cost);
	void HideQualityOfBG();
	void HideQuality();
	void SetTimeLimitIcon(bool Show);
	void SetValidTime(int validTime);
	void SetIsShowSubTransparentBg(bool IsShow);
	void SetGrayBg(bool IsShow);
	void SetBlackBg(bool IsShow);
	void SetAwardState(int State);
	void SetCombatReadinessIcon(bool Visibility);
	void SetIsWear(bool isWear);
	void PlayDecomposeAni(int OldItemID, int NewItemID, int newCnt);
	void SetTakeState(bool canTake);
	void SetHasGet(bool hasGet);
	void EnableItemPreview();
	void SetIconFromTexture(class UTexture2D* Texture);
	void ShowItemName();
	void DisableItemPreview();
	void OnReleaseItem();
	void OnPressItem();
	void OnClickItem();
	void SetUseCount(int UseCount, bool isRolewear);
	void SetSmallerIcon(bool IsNeedSmall);
	void SetSpecialIcon(const struct FString& Path);
	void SetDecomposeEffectIcon(int from_id, int to_id, int to_cnt, float playAnimDelayTime);
	void PlayDecomposeAnim();
	void EnableShowLimit(bool Enable);
	void SetColorAndPattern(int Color, int Pattern);
	void SetIsolated(bool bShow);
	void ShowMask(bool IsShow);
	void SetBGVisibility(bool Visible);
	void EnableShowTips(bool Enable);
	void HideNameAddrStr();
	void SetIsTryOn(bool tryOn);
	void SetNameAddStr(const struct FString& NewParam);
	void SetIconAlpha(float Alpha);
	void SetIsLock(bool isLock);
	void SetIsNew(bool IsNew);
	void SetQuality(int Quality);
	void SetUsingState(bool IsUsing);
	void SetSelected(bool IsSelected);
	void SetNumber(int Number);
	void InitView(int resID, int Count, int Style, int validHour, bool isShowTips, bool isRedEmotion, class UCommon_Item_BP_C** Item);
	void OnClickEvent();
	void OnPressEvent();
	void OnReleaseEvent();
	void _BindEvent();
	void _ClearEvent();
	void _BindDragEvent();
	void _ClearDragEvent();
	void ExecuteUbergraph_Common_Item_BP(int EntryPoint);
	void OnReleaseItemCallback__DelegateSignature();
	void OnPressItemCallback__DelegateSignature();
	void OnClickItemCallback__DelegateSignature(int resID);
};


}

