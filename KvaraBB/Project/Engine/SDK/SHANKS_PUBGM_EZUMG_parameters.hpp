#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UEnhancedButton_GetCurrentHeldDuration_Params
{
	float                                              ReturnValue;                                              
};


struct UEnhancedButton_ForceCancel_Params
{
};


struct UEnhancedButton_ApplyConfig_Params
{
};


struct UEnhancedSlider_SetUnfilledBarColor_Params
{
	struct FLinearColor                                InValue;                                                  
};


struct UEnhancedSlider_SetOnlyRespondToThumb_Params
{
	bool                                               InValue;                                                  
};


struct UEnhancedSlider_SetFilledBarColor_Params
{
	struct FLinearColor                                InValue;                                                  
};


struct UEnhancedSlider_SetEnableSteppedSliding_Params
{
	bool                                               InValue;                                                  
};


struct UEnhancedSlider_GetUnfilledBarColor_Params
{
	struct FLinearColor                                ReturnValue;                                              
};


struct UEnhancedSlider_GetOnlyRespondToThumb_Params
{
	bool                                               ReturnValue;                                              
};


struct UEnhancedSlider_GetFilledBarColor_Params
{
	struct FLinearColor                                ReturnValue;                                              
};


struct UEnhancedSlider_GetEnableSteppedSliding_Params
{
	bool                                               ReturnValue;                                              
};


struct UEzAnimationLibrary_DuplicateAnimWithRemap_Params
{
	class UUserWidget*                                 OwningWidget;                                             
	class UWidgetAnimation*                            Template;                                                 
	TMap<class UWidget*, class UWidget*>               RemapTable;                                               
	class UWidgetAnimation*                            ReturnValue;                                              
};


struct UEzAnimationLibrary_DuplicateAnimRebindTrack_Params
{
	class UUserWidget*                                 OwningWidget;                                             
	class UWidgetAnimation*                            Template;                                                 
	class UWidget*                                     SourceWidget;                                             
	class UWidget*                                     TargetWidget;                                             
	class UWidgetAnimation*                            ReturnValue;                                              
};


struct UEzAnimationLibrary_DuplicateAnimForWidget_Params
{
	class UUserWidget*                                 OwningWidget;                                             
	class UWidgetAnimation*                            Template;                                                 
	class UWidget*                                     TargetWidget;                                             
	class UWidgetAnimation*                            ReturnValue;                                              
};


struct UEzFactory_SetNum_Params
{
	int                                                NumItems;                                                 
};


struct UEzFactory_RemoveLastItem_Params
{
	bool                                               ReturnValue;                                              
};


struct UEzFactory_GetFactoryItemCount_Params
{
	int                                                ReturnValue;                                              
};


struct UEzFactory_AddItem_Params
{
	class UWidget*                                     ReturnValue;                                              
};


struct UEzSelectable_OnStateRefresh_Params
{
	EEzItemState                                       NewState;                                                 
};


struct UEzSelector_SetSelection_Params
{
	int                                                Index;                                                    
};


struct UEzSelector_SetSelectedIndex_Params
{
	int                                                Index;                                                    
};


struct UEzSelector_SetItemEnabled_Params
{
	int                                                ItemIndex;                                                
	bool                                               bEnabled;                                                 
};


struct UEzSelector_IsItemSelected_Params
{
	int                                                ItemIndex;                                                
	bool                                               ReturnValue;                                              
};


struct UEzSelector_IsItemEnabled_Params
{
	int                                                ItemIndex;                                                
	bool                                               ReturnValue;                                              
};


struct UEzSelector_GetSelectedIndices_Params
{
	TArray<int>                                        OutIndices;                                               
};


struct UEzSelector_GetSelectedIndex_Params
{
	int                                                ReturnValue;                                              
};


struct UEzSelector_GetNumSelectedItems_Params
{
	int                                                ReturnValue;                                              
};


struct UEzSelector_GetItemState_Params
{
	int                                                ItemIndex;                                                
	EEzItemState                                       ReturnValue;                                              
};


struct UEzSelector_GetHoveredIndex_Params
{
	int                                                ReturnValue;                                              
};


struct UEzSelector_GetFocusedIndex_Params
{
	int                                                ReturnValue;                                              
};


struct UEzSelector_ForceSelection_Params
{
	int                                                Index;                                                    
};


struct UEzSelector_ClearSelection_Params
{
};


struct URadialPanel_SetStartAngleOffset_Params
{
	float                                              InStartAngleOffset;                                       
};


struct URadialPanel_SetSectorPadding_Params
{
	float                                              InSectorPadding;                                          
};


struct URadialPanel_SetArrangement_Params
{
	ERadialArrangement                                 InArrangement;                                            
};


struct URadialPanel_GetAngleAtPosition_Params
{
	struct FVector2D                                   LocalPosition;                                            
	float                                              ReturnValue;                                              
};


struct URadialSlot_SlotAsRadialSlot_Params
{
	class UWidget*                                     Widget;                                                   
	class URadialSlot*                                 ReturnValue;                                              
};


struct URadialSlot_SetSectorSizeValue_Params
{
	float                                              Value;                                                    
};


struct URadialSlot_SetSectorSizeRule_Params
{
	TEnumAsByte<ESectorSizeRule>                       InRule;                                                   
};


struct URadialSlot_SetSectorColorAndOpacity_Params
{
	struct FLinearColor                                InTint;                                                   
};


struct URadialSlot_SetSectorBrush_Params
{
	struct FSlateBrush                                 InBrush;                                                  
};


struct URadialSlot_SetOuterRadiusRatio_Params
{
	float                                              InOuterRadiusRatio;                                       
};


struct URadialSlot_SetInnerRadiusRatio_Params
{
	float                                              InInnerRadiusRatio;                                       
};


struct URadialSlot_SetAutoSize_Params
{
	bool                                               bInAutoSize;                                              
};


struct URadialSlot_GetCenterRadiusRatio_Params
{
	float                                              ReturnValue;                                              
};


struct URadialSlot_GetCenterAngle_Params
{
	float                                              ReturnValue;                                              
};


struct URadialSlot_GetArcSize_Params
{
	float                                              ReturnValue;                                              
};


struct URadialSelector_GetChildIndexByVector_Params
{
	struct FVector2D                                   CenterOffset;                                             
	float                                              DeadzoneLength;                                           
	int                                                ReturnValue;                                              
};


struct URadialSelector_GetChildIndexByAngle_Params
{
	float                                              Angle;                                                    
	int                                                ReturnValue;                                              
};


struct URadialSelector_GetChildIndexAtPosition_Params
{
	struct FVector2D                                   LocalPosition;                                            
	int                                                ReturnValue;                                              
};


struct UVerticalSelector_GetChildIndexAtPosition_Params
{
	struct FVector2D                                   LocalPosition;                                            
	int                                                ReturnValue;                                              
};

}

