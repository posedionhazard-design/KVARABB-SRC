#pragma once


 
namespace SDK
{






class UEnhancedButton : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      
	struct FScriptMulticastDelegate                    OnPressed;                                                
	struct FScriptMulticastDelegate                    OnReleased;                                               
	struct FScriptMulticastDelegate                    OnCancelled;                                              
	struct FScriptMulticastDelegate                    OnDragStarted;                                            
	struct FScriptMulticastDelegate                    OnDragMoved;                                              
	struct FScriptMulticastDelegate                    OnDragEnded;                                              
	struct FScriptMulticastDelegate                    OnSwipedUp;                                               
	struct FScriptMulticastDelegate                    OnSwipedDown;                                             
	struct FScriptMulticastDelegate                    OnSwipedLeft;                                             
	struct FScriptMulticastDelegate                    OnSwipedRight;                                            
	struct FScriptMulticastDelegate                    OnTapped;                                                 
	struct FScriptMulticastDelegate                    OnLongPressed;                                            
	struct FScriptMulticastDelegate                    OnLongReleased;                                           
	unsigned char                                      UnknownData01[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EZUMG.EnhancedButton");
		return pStaticClass;
	}


	float GetCurrentHeldDuration();
	void ForceCancel();
	void ApplyConfig();
};




class UEnhancedSlider : public USlider
{
public:
	bool                                               bEnableSteppedSliding;                                    
	bool                                               bOnlyRespondToThumb;                                      
	unsigned char                                      UnknownData00[0x2];                                       
	struct FLinearColor                                FilledBarColor;                                           
	struct FLinearColor                                UnfilledBarColor;                                         
	unsigned char                                      UnknownData01[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EZUMG.EnhancedSlider");
		return pStaticClass;
	}


	void SetUnfilledBarColor(const struct FLinearColor& InValue);
	void SetOnlyRespondToThumb(bool InValue);
	void SetFilledBarColor(const struct FLinearColor& InValue);
	void SetEnableSteppedSliding(bool InValue);
	struct FLinearColor GetUnfilledBarColor();
	bool GetOnlyRespondToThumb();
	struct FLinearColor GetFilledBarColor();
	bool GetEnableSteppedSliding();
};




class UEzAnimationLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EZUMG.EzAnimationLibrary");
		return pStaticClass;
	}


	static class UWidgetAnimation* DuplicateAnimWithRemap(class UUserWidget* OwningWidget, class UWidgetAnimation* Template, TMap<class UWidget*, class UWidget*> RemapTable);
	static class UWidgetAnimation* DuplicateAnimRebindTrack(class UUserWidget* OwningWidget, class UWidgetAnimation* Template, class UWidget* SourceWidget, class UWidget* TargetWidget);
	static class UWidgetAnimation* DuplicateAnimForWidget(class UUserWidget* OwningWidget, class UWidgetAnimation* Template, class UWidget* TargetWidget);
};




class UEzFactory : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EZUMG.EzFactory");
		return pStaticClass;
	}


	void SetNum(int NumItems);
	bool RemoveLastItem();
	int GetFactoryItemCount();
	class UWidget* AddItem();
};




class UEzSelectable : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EZUMG.EzSelectable");
		return pStaticClass;
	}


	void OnStateRefresh(EEzItemState NewState);
};




class UEzSelectorSlot : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EZUMG.EzSelectorSlot");
		return pStaticClass;
	}

};




class UEzSelector : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EZUMG.EzSelector");
		return pStaticClass;
	}


	void SetSelection(int Index);
	void SetSelectedIndex(int Index);
	void SetItemEnabled(int ItemIndex, bool bEnabled);
	bool IsItemSelected(int ItemIndex);
	bool IsItemEnabled(int ItemIndex);
	void GetSelectedIndices(TArray<int>* OutIndices);
	int GetSelectedIndex();
	int GetNumSelectedItems();
	EEzItemState GetItemState(int ItemIndex);
	int GetHoveredIndex();
	int GetFocusedIndex();
	void ForceSelection(int Index);
	void ClearSelection();
};




class UHorizontalSelectorSlot : public UHorizontalBoxSlot
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EZUMG.HorizontalSelectorSlot");
		return pStaticClass;
	}

};




class UHorizontalSelector : public UHorizontalBox
{
public:
	unsigned char                                      UnknownData00[0x10];                                      
	EEzSelectionMode                                   SelectionMode;                                            
	unsigned char                                      UnknownData01[0x7];                                       
	class UClass*                                      itemType;                                                 
	class UHorizontalSelectorSlot*                     DefaultSlotTemplate;                                      
	TArray<TWeakObjectPtr<class UWidget>>              FactoryCreatedItems;                                      
	struct FScriptDelegate                             OnItemSelected;                                           
	struct FScriptMulticastDelegate                    OnItemStateChanged;                                       
	unsigned char                                      UnknownData02[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EZUMG.HorizontalSelector");
		return pStaticClass;
	}

};




class URadialPanel : public UPanelWidget
{
public:
	float                                              SectorPadding;                                            
	ERadialArrangement                                 Arrangement;                                              
	unsigned char                                      UnknownData00[0x13];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EZUMG.RadialPanel");
		return pStaticClass;
	}


	void SetStartAngleOffset(float InStartAngleOffset);
	void SetSectorPadding(float InSectorPadding);
	void SetArrangement(ERadialArrangement InArrangement);
	float GetAngleAtPosition(const struct FVector2D& LocalPosition);
};




class URadialSlot : public UPanelSlot
{
public:
	TEnumAsByte<ESectorSizeRule>                       SectorSizeRule;                                           
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              SectorSizeValue;                                          
	float                                              InnerRadiusRatio;                                         
	float                                              OuterRadiusRatio;                                         
	bool                                               bAutoSize;                                                
	unsigned char                                      UnknownData01[0x7];                                       
	struct FSlateBrush                                 SectorBrush;                                              
	struct FLinearColor                                SectorColorAndOpacity;                                    
	unsigned char                                      UnknownData02[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EZUMG.RadialSlot");
		return pStaticClass;
	}


	static class URadialSlot* SlotAsRadialSlot(class UWidget* Widget);
	void SetSectorSizeValue(float Value);
	void SetSectorSizeRule(TEnumAsByte<ESectorSizeRule> InRule);
	void SetSectorColorAndOpacity(const struct FLinearColor& InTint);
	void SetSectorBrush(const struct FSlateBrush& InBrush);
	void SetOuterRadiusRatio(float InOuterRadiusRatio);
	void SetInnerRadiusRatio(float InInnerRadiusRatio);
	void SetAutoSize(bool bInAutoSize);
	float GetCenterRadiusRatio();
	float GetCenterAngle();
	float GetArcSize();
};




class URadialSelectorSlot : public URadialSlot
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EZUMG.RadialSelectorSlot");
		return pStaticClass;
	}

};




class URadialSelector : public URadialPanel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      
	EEzSelectionMode                                   SelectionMode;                                            
	unsigned char                                      UnknownData01[0x7];                                       
	class UClass*                                      itemType;                                                 
	class URadialSelectorSlot*                         DefaultSlotTemplate;                                      
	TArray<TWeakObjectPtr<class UWidget>>              FactoryCreatedItems;                                      
	struct FScriptDelegate                             OnItemSelected;                                           
	struct FScriptMulticastDelegate                    OnItemStateChanged;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EZUMG.RadialSelector");
		return pStaticClass;
	}


	int GetChildIndexByVector(const struct FVector2D& CenterOffset, float DeadzoneLength);
	int GetChildIndexByAngle(float Angle);
	int GetChildIndexAtPosition(const struct FVector2D& LocalPosition);
};




class UVerticalSelectorSlot : public UVerticalBoxSlot
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EZUMG.VerticalSelectorSlot");
		return pStaticClass;
	}

};




class UVerticalSelector : public UVerticalBox
{
public:
	unsigned char                                      UnknownData00[0x10];                                      
	EEzSelectionMode                                   SelectionMode;                                            
	unsigned char                                      UnknownData01[0x7];                                       
	class UClass*                                      itemType;                                                 
	class UVerticalSelectorSlot*                       DefaultSlotTemplate;                                      
	TArray<TWeakObjectPtr<class UWidget>>              FactoryCreatedItems;                                      
	struct FScriptDelegate                             OnItemSelected;                                           
	struct FScriptMulticastDelegate                    OnItemStateChanged;                                       
	unsigned char                                      UnknownData02[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EZUMG.VerticalSelector");
		return pStaticClass;
	}


	int GetChildIndexAtPosition(const struct FVector2D& LocalPosition);
};




class UWrapSelectorSlot : public UWrapBoxSlot
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EZUMG.WrapSelectorSlot");
		return pStaticClass;
	}

};




class UWrapSelector : public UWrapBox
{
public:
	unsigned char                                      UnknownData00[0x10];                                      
	EEzSelectionMode                                   SelectionMode;                                            
	unsigned char                                      UnknownData01[0x7];                                       
	class UClass*                                      itemType;                                                 
	class UWrapSelectorSlot*                           DefaultSlotTemplate;                                      
	TArray<TWeakObjectPtr<class UWidget>>              FactoryCreatedItems;                                      
	struct FScriptDelegate                             OnItemSelected;                                           
	struct FScriptMulticastDelegate                    OnItemStateChanged;                                       
	unsigned char                                      UnknownData02[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EZUMG.WrapSelector");
		return pStaticClass;
	}

};


}

