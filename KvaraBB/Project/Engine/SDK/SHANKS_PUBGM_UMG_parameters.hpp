#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UWidget_SetWidgetVisibility_Params
{
	ESlateVisibility                                   InVisibility;                                             
};


struct UWidget_SetWidgetRender_Params
{
	EWidgetVisible                                     InWidgetVisible;                                          
};


struct UWidget_SetVisibility_Params
{
	ESlateVisibility                                   InVisibility;                                             
};


struct UWidget_SetUserFocus_Params
{
	class APlayerController*                           PlayerController;                                         
};


struct UWidget_SetToolTipText_Params
{
	struct FText                                       InToolTipText;                                            
};


struct UWidget_SetToolTip_Params
{
	class UWidget*                                     Widget;                                                   
};


struct UWidget_SetRenderTranslation_Params
{
	struct FVector2D                                   Translation;                                              
};


struct UWidget_SetRenderTransformPivot_Params
{
	struct FVector2D                                   Pivot;                                                    
};


struct UWidget_SetRenderTransform_Params
{
	struct FWidgetTransform                            InTransform;                                              
};


struct UWidget_SetRenderShear_Params
{
	struct FVector2D                                   Shear;                                                    
};


struct UWidget_SetRenderScale_Params
{
	struct FVector2D                                   Scale;                                                    
};


struct UWidget_SetRenderAngle_Params
{
	float                                              Angle;                                                    
};


struct UWidget_SetNavigationRule_Params
{
	EUINavigation                                      Direction;                                                
	EUINavigationRule                                  Rule;                                                     
	struct FName                                       WidgetToFocus;                                            
};


struct UWidget_SetKeyboardFocus_Params
{
};


struct UWidget_SetIsEnabled_Params
{
	bool                                               bInIsEnabled;                                             
};


struct UWidget_SetCursor_Params
{
	TEnumAsByte<EMouseCursor>                          InCursor;                                                 
};


struct UWidget_SetClipping_Params
{
	EWidgetClipping                                    InClipping;                                               
};


struct UWidget_SetAllNavigationRules_Params
{
	EUINavigationRule                                  Rule;                                                     
	struct FName                                       WidgetToFocus;                                            
};


struct UWidget_ResetCursor_Params
{
};


struct UWidget_RemoveFromParent_Params
{
};


struct UWidget_OnReply__DelegateSignature_Params
{
	struct FEventReply                                 ReturnValue;                                              
};


struct UWidget_OnPointerEvent__DelegateSignature_Params
{
	struct FGeometry                                   MyGeometry;                                               
	struct FPointerEvent                               MouseEvent;                                               
	struct FEventReply                                 ReturnValue;                                              
};


struct UWidget_IsVisible_Params
{
	bool                                               ReturnValue;                                              
};


struct UWidget_IsHovered_Params
{
	bool                                               ReturnValue;                                              
};


struct UWidget_InvalidateLayoutCache_Params
{
};


struct UWidget_InvalidateLayoutAndVolatility_Params
{
};


struct UWidget_HasUserFocusedDescendants_Params
{
	class APlayerController*                           PlayerController;                                         
	bool                                               ReturnValue;                                              
};


struct UWidget_HasUserFocus_Params
{
	class APlayerController*                           PlayerController;                                         
	bool                                               ReturnValue;                                              
};


struct UWidget_HasMouseCapture_Params
{
	bool                                               ReturnValue;                                              
};


struct UWidget_HasKeyboardFocus_Params
{
	bool                                               ReturnValue;                                              
};


struct UWidget_HasFocusedDescendants_Params
{
	bool                                               ReturnValue;                                              
};


struct UWidget_HasAnyUserFocus_Params
{
	bool                                               ReturnValue;                                              
};


struct UWidget_GetWidgetRender_Params
{
	EWidgetVisible                                     ReturnValue;                                              
};


struct UWidget_GetWidget__DelegateSignature_Params
{
	class UWidget*                                     ReturnValue;                                              
};


struct UWidget_GetVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              
};


struct UWidget_GetTickSpaceGeometry_Params
{
	struct FGeometry                                   ReturnValue;                                              
};


struct UWidget_GetTheTemplate_Params
{
	class UWidget*                                     ReturnValue;                                              
};


struct UWidget_GetText__DelegateSignature_Params
{
	struct FText                                       ReturnValue;                                              
};


struct UWidget_GetSlateVisibility__DelegateSignature_Params
{
	ESlateVisibility                                   ReturnValue;                                              
};


struct UWidget_GetSlateColor__DelegateSignature_Params
{
	struct FSlateColor                                 ReturnValue;                                              
};


struct UWidget_GetSlateBrush__DelegateSignature_Params
{
	struct FSlateBrush                                 ReturnValue;                                              
};


struct UWidget_GetParent_Params
{
	class UPanelWidget*                                ReturnValue;                                              
};


struct UWidget_GetPaintSpaceGeometry_Params
{
	struct FGeometry                                   ReturnValue;                                              
};


struct UWidget_GetOwningPlayer_Params
{
	class APlayerController*                           ReturnValue;                                              
};


struct UWidget_GetMouseCursor__DelegateSignature_Params
{
	TEnumAsByte<EMouseCursor>                          ReturnValue;                                              
};


struct UWidget_GetLinearColor__DelegateSignature_Params
{
	struct FLinearColor                                ReturnValue;                                              
};


struct UWidget_GetIsEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct UWidget_GetInt32__DelegateSignature_Params
{
	int                                                ReturnValue;                                              
};


struct UWidget_GetFloat__DelegateSignature_Params
{
	float                                              ReturnValue;                                              
};


struct UWidget_GetDesiredSize_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct UWidget_GetClipping_Params
{
	EWidgetClipping                                    ReturnValue;                                              
};


struct UWidget_GetCheckBoxState__DelegateSignature_Params
{
	ECheckBoxState                                     ReturnValue;                                              
};


struct UWidget_GetCachedGeometry_Params
{
	struct FGeometry                                   ReturnValue;                                              
};


struct UWidget_GetCachedAllottedGeometry_Params
{
	struct FGeometry                                   ReturnValue;                                              
};


struct UWidget_GetBool__DelegateSignature_Params
{
	bool                                               ReturnValue;                                              
};


struct UWidget_GenerateWidgetForString__DelegateSignature_Params
{
	struct FString                                     Item;                                                     
	class UWidget*                                     ReturnValue;                                              
};


struct UWidget_GenerateWidgetForObject__DelegateSignature_Params
{
	class UObject*                                     Item;                                                     
	class UWidget*                                     ReturnValue;                                              
};


struct UWidget_ForceVolatileThrottle_Params
{
	bool                                               bForce;                                                   
};


struct UWidget_ForceVolatile_Params
{
	bool                                               bForce;                                                   
};


struct UWidget_ForceLayoutPrepass_Params
{
};


struct UWidget_DisableVolatileInSlateGI_Params
{
	bool                                               bDisabled;                                                
};


struct UWidget_AdaptationWidgetSlot_Params
{
	struct FMargin                                     InOffset;                                                 
};


struct UImage_SetOpacity_Params
{
	float                                              InOpacity;                                                
};


struct UImage_SetMinDrawPixelSize_Params
{
	float                                              InMinPixelSize;                                           
};


struct UImage_SetDontPaintWhenColorZero_Params
{
	bool                                               Enable;                                                   
};


struct UImage_SetDontPaintWhenAlphaZero_Params
{
	bool                                               Enable;                                                   
};


struct UImage_SetColorAndOpacity_Params
{
	struct FLinearColor                                InColorAndOpacity;                                        
};


struct UImage_SetBrushResourceFromPathSync_Params
{
	struct FString                                     ResourcePath;                                             
	bool                                               bMatchSize;                                               
};


struct UImage_SetBrushFromTextureDynamic_Params
{
	class UTexture2DDynamic*                           Texture;                                                  
	bool                                               bMatchSize;                                               
};


struct UImage_SetBrushFromTexture_Params
{
	class UTexture2D*                                  Texture;                                                  
	bool                                               bMatchSize;                                               
};


struct UImage_SetBrushFromSoftObjectPathAsync_Params
{
	struct FSoftObjectPath                             SoftObjectPath;                                           
	bool                                               bMatchSize;                                               
};


struct UImage_SetBrushFromPathAsync_Params
{
	struct FString                                     ResourcePath;                                             
	bool                                               bMatchSize;                                               
};


struct UImage_SetBrushFromMaterial_Params
{
	class UMaterialInterface*                          Material;                                                 
};


struct UImage_SetBrushFromAtlasInterface_Params
{
	TScriptInterface<class USlateTextureAtlasInterface> AtlasRegion;                                              
	bool                                               bMatchSize;                                               
};


struct UImage_SetBrushFromAsset_Params
{
	class USlateBrushAsset*                            Asset;                                                    
};


struct UImage_SetBrush_Params
{
	struct FSlateBrush                                 InBrush;                                                  
};


struct UImage_SetActiveColorIndex_Params
{
	int                                                InIndex;                                                  
};


struct UImage_SeFixOverScale_Params
{
	bool                                               Enable;                                                   
};


struct UImage_GetDynamicMaterial_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              
};


struct UImage_GetDontPaintWhenColorZero_Params
{
	bool                                               ReturnValue;                                              
};


struct UImage_GetDontPaintWhenAlphaZero_Params
{
	bool                                               ReturnValue;                                              
};


struct UUserWidget_UnregisterInputComponent_Params
{
};


struct UUserWidget_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               
	float                                              InDeltaTime;                                              
};


struct UUserWidget_StopListeningForInputAction_Params
{
	struct FName                                       ActionName;                                               
	TEnumAsByte<EInputEvent>                           EventType;                                                
};


struct UUserWidget_StopListeningForAllInputActions_Params
{
};


struct UUserWidget_StopAnimation_Params
{
	class UWidgetAnimation*                            InAnimation;                                              
};


struct UUserWidget_SetWAnimTime_Params
{
	struct FWAnimTime                                  InWAnimTime;                                              
};


struct UUserWidget_SetTickFrequencyOverride_Params
{
	int                                                InFrequency;                                              
};


struct UUserWidget_SetPositionInViewport_Params
{
	struct FVector2D                                   Position;                                                 
	bool                                               bRemoveDPIScale;                                          
};


struct UUserWidget_SetPlaybackSpeed_Params
{
	class UWidgetAnimation*                            InAnimation;                                              
	float                                              PlaybackSpeed;                                            
};


struct UUserWidget_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                
};


struct UUserWidget_SetOwningPlayer_Params
{
	class APlayerController*                           LocalPlayerController;                                    
};


struct UUserWidget_SetOwningLocalPlayer_Params
{
	class ULocalPlayer*                                LocalPlayer;                                              
};


struct UUserWidget_SetNumLoopsToPlay_Params
{
	class UWidgetAnimation*                            InAnimation;                                              
	int                                                NumLoopsToPlay;                                           
};


struct UUserWidget_SetInputActionPriority_Params
{
	int                                                NewPriority;                                              
};


struct UUserWidget_SetInputActionBlocking_Params
{
	bool                                               bShouldBlock;                                             
};


struct UUserWidget_SetForegroundColor_Params
{
	struct FSlateColor                                 InForegroundColor;                                        
};


struct UUserWidget_SetDontPaintWhenChildEmpty_Params
{
	bool                                               Enable;                                                   
};


struct UUserWidget_SetDesiredSizeInViewport_Params
{
	struct FVector2D                                   Size;                                                     
};


struct UUserWidget_SetColorAndOpacity_Params
{
	struct FLinearColor                                InColorAndOpacity;                                        
};


struct UUserWidget_SetAnchorsInViewport_Params
{
	struct FAnchors                                    Anchors;                                                  
};


struct UUserWidget_SetAlignmentInViewport_Params
{
	struct FVector2D                                   Alignment;                                                
};


struct UUserWidget_ReverseAnimation_Params
{
	class UWidgetAnimation*                            InAnimation;                                              
};


struct UUserWidget_RemoveFromViewport_Params
{
};


struct UUserWidget_RegisterInputComponent_Params
{
};


struct UUserWidget_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             
};


struct UUserWidget_PlayUserWidgetAnimation_Params
{
	class UWidgetAnimation*                            InAnimation;                                              
	float                                              StartAtTime;                                              
	int                                                NumLoopsToPlay;                                           
	TEnumAsByte<EUMGSequencePlayMode>                  PlayMode;                                                 
	float                                              PlaybackSpeed;                                            
};


struct UUserWidget_PlaySound_Params
{
	class USoundBase*                                  SoundToPlay;                                              
};


struct UUserWidget_PlayAnimationTo_Params
{
	class UWidgetAnimation*                            InAnimation;                                              
	float                                              StartAtTime;                                              
	float                                              EndAtTime;                                                
	int                                                NumLoopsToPlay;                                           
	TEnumAsByte<EUMGSequencePlayMode>                  PlayMode;                                                 
	float                                              PlaybackSpeed;                                            
};


struct UUserWidget_PlayAnimation_Params
{
	class UWidgetAnimation*                            InAnimation;                                              
	float                                              StartAtTime;                                              
	int                                                NumLoopsToPlay;                                           
	TEnumAsByte<EUMGSequencePlayMode>                  PlayMode;                                                 
	float                                              PlaybackSpeed;                                            
};


struct UUserWidget_PauseAnimation_Params
{
	class UWidgetAnimation*                            InAnimation;                                              
	float                                              ReturnValue;                                              
};


struct UUserWidget_OnTouchStarted_Params
{
	struct FGeometry                                   MyGeometry;                                               
	struct FPointerEvent                               InTouchEvent;                                             
	struct FEventReply                                 ReturnValue;                                              
};


struct UUserWidget_OnTouchMoved_Params
{
	struct FGeometry                                   MyGeometry;                                               
	struct FPointerEvent                               InTouchEvent;                                             
	struct FEventReply                                 ReturnValue;                                              
};


struct UUserWidget_OnTouchGesture_Params
{
	struct FGeometry                                   MyGeometry;                                               
	struct FPointerEvent                               GestureEvent;                                             
	struct FEventReply                                 ReturnValue;                                              
};


struct UUserWidget_OnTouchEnded_Params
{
	struct FGeometry                                   MyGeometry;                                               
	struct FPointerEvent                               InTouchEvent;                                             
	struct FEventReply                                 ReturnValue;                                              
};


struct UUserWidget_OnRemovedFromFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             
};


struct UUserWidget_OnPreviewMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               
	struct FPointerEvent                               MouseEvent;                                               
	struct FEventReply                                 ReturnValue;                                              
};


struct UUserWidget_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               
	struct FKeyEvent                                   InKeyEvent;                                               
	struct FEventReply                                 ReturnValue;                                              
};


struct UUserWidget_OnPaint_Params
{
	struct FPaintContext                               Context;                                                  
};


struct UUserWidget_OnMouseWheel_Params
{
	struct FGeometry                                   MyGeometry;                                               
	struct FPointerEvent                               MouseEvent;                                               
	struct FEventReply                                 ReturnValue;                                              
};


struct UUserWidget_OnMouseMove_Params
{
	struct FGeometry                                   MyGeometry;                                               
	struct FPointerEvent                               MouseEvent;                                               
	struct FEventReply                                 ReturnValue;                                              
};


struct UUserWidget_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                               
};


struct UUserWidget_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               
	struct FPointerEvent                               MouseEvent;                                               
};


struct UUserWidget_OnMouseCaptureLost_Params
{
};


struct UUserWidget_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                               
	struct FPointerEvent                               MouseEvent;                                               
	struct FEventReply                                 ReturnValue;                                              
};


struct UUserWidget_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               
	struct FPointerEvent                               MouseEvent;                                               
	struct FEventReply                                 ReturnValue;                                              
};


struct UUserWidget_OnMouseButtonDoubleClick_Params
{
	struct FGeometry                                   InMyGeometry;                                             
	struct FPointerEvent                               InMouseEvent;                                             
	struct FEventReply                                 ReturnValue;                                              
};


struct UUserWidget_OnMotionDetected_Params
{
	struct FGeometry                                   MyGeometry;                                               
	struct FMotionEvent                                InMotionEvent;                                            
	struct FEventReply                                 ReturnValue;                                              
};


struct UUserWidget_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                               
	struct FKeyEvent                                   InKeyEvent;                                               
	struct FEventReply                                 ReturnValue;                                              
};


struct UUserWidget_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               
	struct FKeyEvent                                   InKeyEvent;                                               
	struct FEventReply                                 ReturnValue;                                              
};


struct UUserWidget_OnKeyChar_Params
{
	struct FGeometry                                   MyGeometry;                                               
	struct FCharacterEvent                             InCharacterEvent;                                         
	struct FEventReply                                 ReturnValue;                                              
};


struct UUserWidget_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                               
	struct FFocusEvent                                 InFocusEvent;                                             
	struct FEventReply                                 ReturnValue;                                              
};


struct UUserWidget_OnFocusLost_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             
};


struct UUserWidget_OnDrop_Params
{
	struct FGeometry                                   MyGeometry;                                               
	struct FPointerEvent                               PointerEvent;                                             
	class UDragDropOperation*                          Operation;                                                
	bool                                               ReturnValue;                                              
};


struct UUserWidget_OnDragOver_Params
{
	struct FGeometry                                   MyGeometry;                                               
	struct FPointerEvent                               PointerEvent;                                             
	class UDragDropOperation*                          Operation;                                                
	bool                                               ReturnValue;                                              
};


struct UUserWidget_OnDragLeave_Params
{
	struct FPointerEvent                               PointerEvent;                                             
	class UDragDropOperation*                          Operation;                                                
};


struct UUserWidget_OnDragEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               
	struct FPointerEvent                               PointerEvent;                                             
	class UDragDropOperation*                          Operation;                                                
};


struct UUserWidget_OnDragDetected_Params
{
	struct FGeometry                                   MyGeometry;                                               
	struct FPointerEvent                               PointerEvent;                                             
	class UDragDropOperation*                          Operation;                                                
};


struct UUserWidget_OnDragCancelled_Params
{
	struct FPointerEvent                               PointerEvent;                                             
	class UDragDropOperation*                          Operation;                                                
};


struct UUserWidget_OnAnimationStarted_Params
{
	class UWidgetAnimation*                            Animation;                                                
};


struct UUserWidget_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                
};


struct UUserWidget_OnAnalogValueChanged_Params
{
	struct FGeometry                                   MyGeometry;                                               
	struct FAnalogInputEvent                           InAnalogInputEvent;                                       
	struct FEventReply                                 ReturnValue;                                              
};


struct UUserWidget_OnAddedToFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             
};


struct UUserWidget_ListenForInputAction_Params
{
	struct FName                                       ActionName;                                               
	TEnumAsByte<EInputEvent>                           EventType;                                                
	bool                                               bConsume;                                                 
	struct FScriptDelegate                             Callback;                                                 
};


struct UUserWidget_IsPlayingAnimation_Params
{
	bool                                               ReturnValue;                                              
};


struct UUserWidget_IsListeningForInputAction_Params
{
	struct FName                                       ActionName;                                               
	bool                                               ReturnValue;                                              
};


struct UUserWidget_IsInViewport_Params
{
	bool                                               ReturnValue;                                              
};


struct UUserWidget_IsInteractable_Params
{
	bool                                               ReturnValue;                                              
};


struct UUserWidget_IsAnyAnimationPlaying_Params
{
	bool                                               ReturnValue;                                              
};


struct UUserWidget_IsAnimationPlayingForward_Params
{
	class UWidgetAnimation*                            InAnimation;                                              
	bool                                               ReturnValue;                                              
};


struct UUserWidget_IsAnimationPlaying_Params
{
	class UWidgetAnimation*                            InAnimation;                                              
	bool                                               ReturnValue;                                              
};


struct UUserWidget_GetWidgetFromName_Params
{
	struct FName                                       Name;                                                     
	class UWidget*                                     ReturnValue;                                              
};


struct UUserWidget_GetTickFrequencyOverride_Params
{
	int                                                ReturnValue;                                              
};


struct UUserWidget_GetOwningPlayerPawn_Params
{
	class APawn*                                       ReturnValue;                                              
};


struct UUserWidget_GetOwningPlayer_Params
{
	class APlayerController*                           ReturnValue;                                              
};


struct UUserWidget_GetOwningLocalPlayer_Params
{
	class ULocalPlayer*                                ReturnValue;                                              
};


struct UUserWidget_GetOrCreateLazyChild_Params
{
	struct FString                                     Name;                                                     
	class UWidget*                                     ReturnValue;                                              
};


struct UUserWidget_GetIsVisible_Params
{
	bool                                               ReturnValue;                                              
};


struct UUserWidget_GetEnableLazyLoad_Params
{
	bool                                               ReturnValue;                                              
};


struct UUserWidget_GetDontPaintWhenChildEmpty_Params
{
	bool                                               ReturnValue;                                              
};


struct UUserWidget_GetAnimationCurrentTime_Params
{
	class UWidgetAnimation*                            InAnimation;                                              
	float                                              ReturnValue;                                              
};


struct UUserWidget_GetAnchorsInViewport_Params
{
	struct FAnchors                                    ReturnValue;                                              
};


struct UUserWidget_GetAlignmentInViewport_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct UUserWidget_Destruct_Params
{
};


struct UUserWidget_Construct_Params
{
};


struct UUserWidget_AddToViewport_Params
{
	int                                                ZOrder;                                                   
};


struct UUserWidget_AddToPlayerScreen_Params
{
	int                                                ZOrder;                                                   
	bool                                               ReturnValue;                                              
};


struct UWidgetComponent_SetWidget_Params
{
	class UUserWidget*                                 Widget;                                                   
};


struct UWidgetComponent_SetTintColorAndOpacity_Params
{
	struct FLinearColor                                NewTintColorAndOpacity;                                   
};


struct UWidgetComponent_SetOwnerPlayer_Params
{
	class ULocalPlayer*                                LocalPlayer;                                              
};


struct UWidgetComponent_SetDrawSize_Params
{
	struct FVector2D                                   Size;                                                     
};


struct UWidgetComponent_SetBackgroundColor_Params
{
	struct FLinearColor                                NewBackgroundColor;                                       
};


struct UWidgetComponent_RequestRedraw_Params
{
};


struct UWidgetComponent_GetUserWidgetObject_Params
{
	class UUserWidget*                                 ReturnValue;                                              
};


struct UWidgetComponent_GetRenderTarget_Params
{
	class UTextureRenderTarget2D*                      ReturnValue;                                              
};


struct UWidgetComponent_GetOwnerPlayer_Params
{
	class ULocalPlayer*                                ReturnValue;                                              
};


struct UWidgetComponent_GetMaterialInstance_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              
};


struct UWidgetComponent_GetDrawSize_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct UWidgetComponent_GetCurrentDrawSize_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct UPanelWidget_RemoveChildAt_Params
{
	int                                                Index;                                                    
	bool                                               ReturnValue;                                              
};


struct UPanelWidget_RemoveChild_Params
{
	class UWidget*                                     Content;                                                  
	bool                                               ReturnValue;                                              
};


struct UPanelWidget_HasChild_Params
{
	class UWidget*                                     Content;                                                  
	bool                                               ReturnValue;                                              
};


struct UPanelWidget_HasAnyChildren_Params
{
	bool                                               ReturnValue;                                              
};


struct UPanelWidget_GetChildrenCount_Params
{
	int                                                ReturnValue;                                              
};


struct UPanelWidget_GetChildIndex_Params
{
	class UWidget*                                     Content;                                                  
	int                                                ReturnValue;                                              
};


struct UPanelWidget_GetChildAt_Params
{
	int                                                Index;                                                    
	class UWidget*                                     ReturnValue;                                              
};


struct UPanelWidget_ClearChildren_Params
{
};


struct UPanelWidget_AddChildAt_Params
{
	int                                                Index;                                                    
	class UWidget*                                     Content;                                                  
	class UPanelSlot*                                  ReturnValue;                                              
};


struct UPanelWidget_AddChild_Params
{
	class UWidget*                                     Content;                                                  
	class UPanelSlot*                                  ReturnValue;                                              
};


struct UCanvasPanel_SetDontPaintWhenChildEmpty_Params
{
	bool                                               Enable;                                                   
};


struct UCanvasPanel_GetDontPaintWhenChildEmpty_Params
{
	bool                                               ReturnValue;                                              
};


struct UCanvasPanel_AddChildToCanvas_Params
{
	class UWidget*                                     Content;                                                  
	class UCanvasPanelSlot*                            ReturnValue;                                              
};


struct UContentWidget_SetContent_Params
{
	class UWidget*                                     Content;                                                  
	class UPanelSlot*                                  ReturnValue;                                              
};


struct UContentWidget_GetContentSlot_Params
{
	class UPanelSlot*                                  ReturnValue;                                              
};


struct UContentWidget_GetContent_Params
{
	class UWidget*                                     ReturnValue;                                              
};


struct USlider_SetValue_Params
{
	float                                              InValue;                                                  
};


struct USlider_SetStepSize_Params
{
	float                                              InValue;                                                  
};


struct USlider_SetSliderHandleColor_Params
{
	struct FLinearColor                                InValue;                                                  
};


struct USlider_SetSliderBarColor_Params
{
	struct FLinearColor                                InValue;                                                  
};


struct USlider_SetLocked_Params
{
	bool                                               InValue;                                                  
};


struct USlider_SetIndentHandle_Params
{
	bool                                               InValue;                                                  
};


struct USlider_GetValue_Params
{
	float                                              ReturnValue;                                              
};


struct UHorizontalBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      
};


struct UHorizontalBoxSlot_SetSize_Params
{
	struct FSlateChildSize                             InSize;                                                   
};


struct UHorizontalBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                
};


struct UHorizontalBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    
};


struct UHorizontalBox_SetDontPaintWhenChildEmpty_Params
{
	bool                                               Enable;                                                   
};


struct UHorizontalBox_GetDontPaintWhenChildEmpty_Params
{
	bool                                               ReturnValue;                                              
};


struct UHorizontalBox_AddChildToHorizontalBox_Params
{
	class UWidget*                                     Content;                                                  
	class UHorizontalBoxSlot*                          ReturnValue;                                              
};


struct UVerticalBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      
};


struct UVerticalBoxSlot_SetSize_Params
{
	struct FSlateChildSize                             InSize;                                                   
};


struct UVerticalBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                
};


struct UVerticalBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    
};


struct UVerticalBox_SetDontPaintWhenChildEmpty_Params
{
	bool                                               Enable;                                                   
};


struct UVerticalBox_GetDontPaintWhenChildEmpty_Params
{
	bool                                               ReturnValue;                                              
};


struct UVerticalBox_AddChildToVerticalBox_Params
{
	class UWidget*                                     Content;                                                  
	class UVerticalBoxSlot*                            ReturnValue;                                              
};


struct UWrapBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      
};


struct UWrapBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                
};


struct UWrapBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    
};


struct UWrapBoxSlot_SetFillSpanWhenLessThan_Params
{
	float                                              InFillSpanWhenLessThan;                                   
};


struct UWrapBoxSlot_SetFillEmptySpace_Params
{
	bool                                               InbFillEmptySpace;                                        
};


struct UWrapBox_SetWrapWidth_Params
{
	float                                              InWrapWidth;                                              
};


struct UWrapBox_SetInnerSlotPadding_Params
{
	struct FVector2D                                   InPadding;                                                
};


struct UWrapBox_AddChildWrapBox_Params
{
	class UWidget*                                     Content;                                                  
	class UWrapBoxSlot*                                ReturnValue;                                              
};


struct UScrollBox_StopScroll_Params
{
};


struct UScrollBox_SetScrollOffset_Params
{
	float                                              NewScrollOffset;                                          
};


struct UScrollBox_SetScrollBarVisibility_Params
{
	ESlateVisibility                                   NewScrollBarVisibility;                                   
};


struct UScrollBox_SetScrollbarThickness_Params
{
	struct FVector2D                                   NewScrollbarThickness;                                    
};


struct UScrollBox_SetOrientation_Params
{
	TEnumAsByte<EOrientation>                          NewOrientation;                                           
};


struct UScrollBox_SetMaxScrollSpd_Params
{
	float                                              Val;                                                      
};


struct UScrollBox_SetDontPaintWhenChildEmpty_Params
{
	bool                                               Enable;                                                   
};


struct UScrollBox_SetAlwaysShowScrollbar_Params
{
	bool                                               NewAlwaysShowScrollbar;                                   
};


struct UScrollBox_SetAllowOverscroll_Params
{
	bool                                               NewAllowOverscroll;                                       
};


struct UScrollBox_ScrollWidgetIntoView_Params
{
	class UWidget*                                     WidgetToFind;                                             
	bool                                               AnimateScroll;                                            
	EDescendantScrollDestination                       ScrollDestination;                                        
};


struct UScrollBox_ScrollToStart_Params
{
};


struct UScrollBox_ScrollToEnd_Params
{
};


struct UScrollBox_GetScrollOffset_Params
{
	float                                              ReturnValue;                                              
};


struct UScrollBox_GetScrollEndOffset_Params
{
	float                                              ReturnValue;                                              
};


struct UScrollBox_GetIsScrolling_Params
{
	bool                                               ReturnValue;                                              
};


struct UScrollBox_GetDontPaintWhenChildEmpty_Params
{
	bool                                               ReturnValue;                                              
};


struct UScrollBox_GetCacheOverscrollOffset_Params
{
	float                                              ReturnValue;                                              
};


struct UTextBlock_SetVerticalJustification_Params
{
	TEnumAsByte<ETextVerticalJustify>                  InJustification;                                          
};


struct UTextBlock_SetText_Params
{
	struct FText                                       InText;                                                   
};


struct UTextBlock_SetShadowOffset_Params
{
	struct FVector2D                                   InShadowOffset;                                           
};


struct UTextBlock_SetShadowColorAndOpacity_Params
{
	struct FLinearColor                                InShadowColorAndOpacity;                                  
};


struct UTextBlock_SetSelectColor_Params
{
	bool                                               bIsSelect;                                                
};


struct UTextBlock_SetOpacity_Params
{
	float                                              InOpacity;                                                
};


struct UTextBlock_SetMinDesiredWidth_Params
{
	float                                              InMinDesiredWidth;                                        
};


struct UTextBlock_SetJustification_Params
{
	TEnumAsByte<ETextJustify>                          InJustification;                                          
};


struct UTextBlock_SetIgnoreOutlineForPerformance_Params
{
	bool                                               bIgnore;                                                  
};


struct UTextBlock_SetFont_Params
{
	struct FSlateFontInfo                              InFontInfo;                                               
};


struct UTextBlock_SetColorAndOpacity_Params
{
	struct FSlateColor                                 InColorAndOpacity;                                        
};


struct UTextBlock_SetAutoEllipsisText_Params
{
	bool                                               InAutoEllipsisText;                                       
};


struct UTextBlock_SetActiveColorIndex_Params
{
	int                                                InIndex;                                                  
};


struct UTextBlock_GetText_Params
{
	struct FText                                       ReturnValue;                                              
};


struct UComboBoxString_SetSelectedOption_Params
{
	struct FString                                     Option;                                                   
};


struct UComboBoxString_SetComboListViewOffset_Params
{
	float                                              Offset;                                                   
	int                                                ReturnValue;                                              
};


struct UComboBoxString_RemoveOption_Params
{
	struct FString                                     Option;                                                   
	bool                                               ReturnValue;                                              
};


struct UComboBoxString_RefreshOptions_Params
{
};


struct UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            
};


struct UComboBoxString_OnOpeningEvent__DelegateSignature_Params
{
};


struct UComboBoxString_OnOpenChangedEvent__DelegateSignature_Params
{
	bool                                               bIsOpen;                                                  
	bool                                               bAbove;                                                   
};


struct UComboBoxString_GetSelectedOption_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UComboBoxString_GetOptionCount_Params
{
	int                                                ReturnValue;                                              
};


struct UComboBoxString_GetOptionAtIndex_Params
{
	int                                                Index;                                                    
	struct FString                                     ReturnValue;                                              
};


struct UComboBoxString_FindOptionIndex_Params
{
	struct FString                                     Option;                                                   
	int                                                ReturnValue;                                              
};


struct UComboBoxString_CloseComboBox_Params
{
};


struct UComboBoxString_ClearSelection_Params
{
};


struct UComboBoxString_ClearOptions_Params
{
};


struct UComboBoxString_AddOption_Params
{
	struct FString                                     Option;                                                   
};


struct UButton_SetTouchMethod_Params
{
	TEnumAsByte<EButtonTouchMethod>                    InTouchMethod;                                            
};


struct UButton_SetStyle_Params
{
	struct FButtonStyle                                InStyle;                                                  
};


struct UButton_SetPressEventWithParamPassEnabled_Params
{
	bool                                               bEnabled;                                                 
};


struct UButton_SetOnClickSound_Params
{
	struct FScriptDelegate                             onSound;                                                  
};


struct UButton_SetColorAndOpacity_Params
{
	struct FLinearColor                                InColorAndOpacity;                                        
};


struct UButton_SetClickSoundType_Params
{
	EButtonOnClickSound                                onSoundType;                                              
};


struct UButton_SetClickMethod_Params
{
	TEnumAsByte<EButtonClickMethod>                    InClickMethod;                                            
};


struct UButton_SetBackgroundColor_Params
{
	struct FLinearColor                                InBackgroundColor;                                        
};


struct UButton_Release_Params
{
};


struct UButton_OnButtonSoundEvent__DelegateSignature_Params
{
	unsigned char                                      Sound;                                                    
};


struct UButton_IsPressed_Params
{
	bool                                               ReturnValue;                                              
};


struct UEditableTextBox_SetText_Params
{
	struct FText                                       InText;                                                   
};


struct UEditableTextBox_SetScrollOffset_Params
{
	float                                              Offset;                                                   
};


struct UEditableTextBox_SetIsReadOnly_Params
{
	bool                                               bReadOnly;                                                
};


struct UEditableTextBox_SetHintText_Params
{
	struct FText                                       InText;                                                   
};


struct UEditableTextBox_SetError_Params
{
	struct FText                                       InError;                                                  
};


struct UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             
};


struct UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     
};


struct UEditableTextBox_HasError_Params
{
	bool                                               ReturnValue;                                              
};


struct UEditableTextBox_GetText_Params
{
	struct FText                                       ReturnValue;                                              
};


struct UEditableTextBox_ClearError_Params
{
};


struct UOverlay_AddChildToOverlay_Params
{
	class UWidget*                                     Content;                                                  
	class UOverlaySlot*                                ReturnValue;                                              
};


struct UInvalidationBox_SetDontPaintWhenChildEmpty_Params
{
	bool                                               Enable;                                                   
};


struct UInvalidationBox_SetCanCache_Params
{
	bool                                               CanCache;                                                 
};


struct UInvalidationBox_InvalidateCache_Params
{
};


struct UInvalidationBox_GetDontPaintWhenChildEmpty_Params
{
	bool                                               ReturnValue;                                              
};


struct UInvalidationBox_GetCanCache_Params
{
	bool                                               ReturnValue;                                              
};


struct URetainerBox_SkipCurrentFrameRender_Params
{
};


struct URetainerBox_SetTextureParameter_Params
{
	struct FName                                       TextureParameter;                                         
};


struct URetainerBox_SetEffectMaterial_Params
{
	class UMaterialInterface*                          EffectMaterial;                                           
};


struct URetainerBox_RequestRender_Params
{
};


struct URetainerBox_GetEffectMaterial_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              
};


struct UAsyncTaskDownloadImage_DownloadImage_Params
{
	struct FString                                     URL;                                                      
	class UAsyncTaskDownloadImage*                     ReturnValue;                                              
};


struct UBackgroundBlur_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      
};


struct UBackgroundBlur_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                
};


struct UBackgroundBlur_SetLowQualityFallbackBrush_Params
{
	struct FSlateBrush                                 InBrush;                                                  
};


struct UBackgroundBlur_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    
};


struct UBackgroundBlur_SetBlurStrength_Params
{
	float                                              InStrength;                                               
};


struct UBackgroundBlur_SetBlurRadius_Params
{
	int                                                InBlurRadius;                                             
};


struct UBackgroundBlur_SetBlurMask_Params
{
	class UTexture*                                    InTexture;                                                
};


struct UBackgroundBlur_SetBlurDirection_Params
{
	float                                              InDirection;                                              
};


struct UBackgroundBlur_SetBlurCenter_Params
{
	struct FVector2D                                   InCenter;                                                 
};


struct UBackgroundBlur_SetApplyAlphaToBlur_Params
{
	bool                                               bInApplyAlphaToBlur;                                      
};


struct UBackgroundBlurSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      
};


struct UBackgroundBlurSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                
};


struct UBackgroundBlurSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    
};


struct UBoolBinding_GetValue_Params
{
	bool                                               ReturnValue;                                              
};


struct UBorder_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      
};


struct UBorder_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                
};


struct UBorder_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    
};


struct UBorder_SetDontPaintWhenChildEmpty_Params
{
	bool                                               Enable;                                                   
};


struct UBorder_SetDontPaintWhenAlphaZero_Params
{
	bool                                               Enable;                                                   
};


struct UBorder_SetDesiredSizeScale_Params
{
	struct FVector2D                                   InScale;                                                  
};


struct UBorder_SetContentColorAndOpacity_Params
{
	struct FLinearColor                                InContentColorAndOpacity;                                 
};


struct UBorder_SetBrushFromTexture_Params
{
	class UTexture2D*                                  Texture;                                                  
};


struct UBorder_SetBrushFromMaterial_Params
{
	class UMaterialInterface*                          Material;                                                 
};


struct UBorder_SetBrushFromAsset_Params
{
	class USlateBrushAsset*                            Asset;                                                    
};


struct UBorder_SetBrushColor_Params
{
	struct FLinearColor                                InBrushColor;                                             
};


struct UBorder_SetBrush_Params
{
	struct FSlateBrush                                 InBrush;                                                  
};


struct UBorder_GetDynamicMaterial_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              
};


struct UBorder_GetDontPaintWhenChildEmpty_Params
{
	bool                                               ReturnValue;                                              
};


struct UBorder_GetDontPaintWhenAlphaZero_Params
{
	bool                                               ReturnValue;                                              
};


struct UBorderSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      
};


struct UBorderSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                
};


struct UBorderSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    
};


struct UBrushBinding_GetValue_Params
{
	struct FSlateBrush                                 ReturnValue;                                              
};


struct UButtonSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      
};


struct UButtonSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                
};


struct UButtonSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    
};


struct UCanvasPanelSlot_SetZOrder_Params
{
	int                                                InZOrder;                                                 
};


struct UCanvasPanelSlot_SetSupportNotch_Params
{
	bool                                               InSupportNotch;                                           
};


struct UCanvasPanelSlot_SetSize_Params
{
	struct FVector2D                                   InSize;                                                   
};


struct UCanvasPanelSlot_SetPosition_Params
{
	struct FVector2D                                   InPosition;                                               
};


struct UCanvasPanelSlot_SetOffsets_Params
{
	struct FMargin                                     InOffset;                                                 
};


struct UCanvasPanelSlot_SetMinimum_Params
{
	struct FVector2D                                   InMinimumAnchors;                                         
};


struct UCanvasPanelSlot_SetMaximum_Params
{
	struct FVector2D                                   InMaximumAnchors;                                         
};


struct UCanvasPanelSlot_SetLayout_Params
{
	struct FAnchorData                                 InLayoutData;                                             
};


struct UCanvasPanelSlot_SetAutoSize_Params
{
	bool                                               InbAutoSize;                                              
};


struct UCanvasPanelSlot_SetAnchors_Params
{
	struct FAnchors                                    InAnchors;                                                
};


struct UCanvasPanelSlot_SetAlignment_Params
{
	struct FVector2D                                   InAlignment;                                              
};


struct UCanvasPanelSlot_GetZOrder_Params
{
	int                                                ReturnValue;                                              
};


struct UCanvasPanelSlot_GetSize_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct UCanvasPanelSlot_GetPosition_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct UCanvasPanelSlot_GetOffsets_Params
{
	struct FMargin                                     ReturnValue;                                              
};


struct UCanvasPanelSlot_GetLayout_Params
{
	struct FAnchorData                                 ReturnValue;                                              
};


struct UCanvasPanelSlot_GetAutoSize_Params
{
	bool                                               ReturnValue;                                              
};


struct UCanvasPanelSlot_GetAnchors_Params
{
	struct FAnchors                                    ReturnValue;                                              
};


struct UCanvasPanelSlot_GetAlignment_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct UCanvasPanelSlot_GeSupportNotch_Params
{
	bool                                               ReturnValue;                                              
};


struct UCheckBox_SetIsChecked_Params
{
	bool                                               InIsChecked;                                              
};


struct UCheckBox_SetCheckedState_Params
{
	ECheckBoxState                                     InCheckedState;                                           
};


struct UCheckBox_IsPressed_Params
{
	bool                                               ReturnValue;                                              
};


struct UCheckBox_IsChecked_Params
{
	bool                                               ReturnValue;                                              
};


struct UCheckBox_GetCheckedState_Params
{
	ECheckBoxState                                     ReturnValue;                                              
};


struct UCheckedStateBinding_GetValue_Params
{
	ECheckBoxState                                     ReturnValue;                                              
};


struct UCircularThrobber_SetRadius_Params
{
	float                                              InRadius;                                                 
};


struct UCircularThrobber_SetPeriod_Params
{
	float                                              InPeriod;                                                 
};


struct UCircularThrobber_SetNumberOfPieces_Params
{
	int                                                InNumberOfPieces;                                         
};


struct UColorBinding_GetSlateValue_Params
{
	struct FSlateColor                                 ReturnValue;                                              
};


struct UColorBinding_GetLinearValue_Params
{
	struct FLinearColor                                ReturnValue;                                              
};


struct UDragDropOperation_Drop_Params
{
	struct FPointerEvent                               PointerEvent;                                             
};


struct UDragDropOperation_Dragged_Params
{
	struct FPointerEvent                               PointerEvent;                                             
};


struct UDragDropOperation_DragCancelled_Params
{
	struct FPointerEvent                               PointerEvent;                                             
};


struct UEditableText_SetText_Params
{
	struct FText                                       InText;                                                   
};


struct UEditableText_SetIsReadOnly_Params
{
	bool                                               InbIsReadyOnly;                                           
};


struct UEditableText_SetIsPassword_Params
{
	bool                                               InbIsPassword;                                            
};


struct UEditableText_SetHintText_Params
{
	struct FText                                       InHintText;                                               
};


struct UEditableText_SetActiveColorIndex_Params
{
	int                                                InIndex;                                                  
};


struct UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             
};


struct UEditableText_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     
};


struct UEditableText_GetText_Params
{
	struct FText                                       ReturnValue;                                              
};


struct UExpandableArea_SetIsExpanded_Animated_Params
{
	bool                                               IsExpanded;                                               
};


struct UExpandableArea_SetIsExpanded_Params
{
	bool                                               IsExpanded;                                               
};


struct UExpandableArea_GetIsExpanded_Params
{
	bool                                               ReturnValue;                                              
};


struct UFloatBinding_GetValue_Params
{
	float                                              ReturnValue;                                              
};


struct UGridPanel_SetDontPaintWhenChildEmpty_Params
{
	bool                                               Enable;                                                   
};


struct UGridPanel_ReSortSlot_Params
{
};


struct UGridPanel_GetDontPaintWhenChildEmpty_Params
{
	bool                                               ReturnValue;                                              
};


struct UGridPanel_AddChildToGrid_Params
{
	class UWidget*                                     Content;                                                  
	class UGridSlot*                                   ReturnValue;                                              
};


struct UGridSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      
};


struct UGridSlot_SetRowSpan_Params
{
	int                                                InRowSpan;                                                
};


struct UGridSlot_SetRow_Params
{
	int                                                InRow;                                                    
};


struct UGridSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                
};


struct UGridSlot_SetLayer_Params
{
	int                                                InLayer;                                                  
};


struct UGridSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    
};


struct UGridSlot_SetColumnSpan_Params
{
	int                                                InColumnSpan;                                             
};


struct UGridSlot_SetColumn_Params
{
	int                                                InColumn;                                                 
};


struct UInputKeySelector_SetTextBlockVisibility_Params
{
	ESlateVisibility                                   InVisibility;                                             
};


struct UInputKeySelector_SetSelectedKey_Params
{
	struct FInputChord                                 InSelectedKey;                                            
};


struct UInputKeySelector_SetNoKeySpecifiedText_Params
{
	struct FText                                       InNoKeySpecifiedText;                                     
};


struct UInputKeySelector_SetKeySelectionText_Params
{
	struct FText                                       InKeySelectionText;                                       
};


struct UInputKeySelector_SetAllowModifierKeys_Params
{
	bool                                               bInAllowModifierKeys;                                     
};


struct UInputKeySelector_SetAllowGamepadKeys_Params
{
	bool                                               bInAllowGamepadKeys;                                      
};


struct UInputKeySelector_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                              
};


struct UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Params
{
};


struct UInputKeySelector_GetIsSelectingKey_Params
{
	bool                                               ReturnValue;                                              
};


struct UInt32Binding_GetValue_Params
{
	int                                                ReturnValue;                                              
};


struct UMenuAnchor_ToggleOpen_Params
{
	bool                                               bFocusOnOpen;                                             
};


struct UMenuAnchor_ShouldOpenDueToClick_Params
{
	bool                                               ReturnValue;                                              
};


struct UMenuAnchor_Open_Params
{
	bool                                               bFocusMenu;                                               
};


struct UMenuAnchor_IsOpen_Params
{
	bool                                               ReturnValue;                                              
};


struct UMenuAnchor_HasOpenSubMenus_Params
{
	bool                                               ReturnValue;                                              
};


struct UMenuAnchor_GetMenuPosition_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct UMenuAnchor_Close_Params
{
};


struct UMouseCursorBinding_GetValue_Params
{
	TEnumAsByte<EMouseCursor>                          ReturnValue;                                              
};


struct UMultiLineEditableText_SetText_Params
{
	struct FText                                       InText;                                                   
};


struct UMultiLineEditableText_SetIsReadOnly_Params
{
	bool                                               bReadOnly;                                                
};


struct UMultiLineEditableText_SetHintText_Params
{
	struct FText                                       InText;                                                   
};


struct UMultiLineEditableText_SetFont_Params
{
	struct FSlateFontInfo                              InNewFont;                                                
};


struct UMultiLineEditableText_SetActiveColorIndex_Params
{
	int                                                InIndex;                                                  
};


struct UMultiLineEditableText_ScrollToEnd_Params
{
};


struct UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             
};


struct UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     
};


struct UMultiLineEditableText_GetText_Params
{
	struct FText                                       ReturnValue;                                              
};


struct UMultiLineEditableTextBox_SetText_Params
{
	struct FText                                       InText;                                                   
};


struct UMultiLineEditableTextBox_SetIsReadOnly_Params
{
	bool                                               bReadOnly;                                                
};


struct UMultiLineEditableTextBox_SetHintText_Params
{
	struct FText                                       InText;                                                   
};


struct UMultiLineEditableTextBox_SetError_Params
{
	struct FText                                       InError;                                                  
};


struct UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             
};


struct UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     
};


struct UMultiLineEditableTextBox_GetText_Params
{
	struct FText                                       ReturnValue;                                              
};


struct UOverlaySlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      
};


struct UOverlaySlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                
};


struct UOverlaySlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    
};


struct UProgressBar_SetPercent_Params
{
	float                                              InPercent;                                                
};


struct UProgressBar_SetIsMarquee_Params
{
	bool                                               InbIsMarquee;                                             
};


struct UProgressBar_SetFillColorAndOpacity_Params
{
	struct FLinearColor                                InColor;                                                  
};


struct URichTextBlock_SetIgnoreOutlineForPerformance_Params
{
	bool                                               bIgnore;                                                  
};


struct USafeZone_SetSidesToPad_Params
{
	bool                                               InPadLeft;                                                
	bool                                               InPadRight;                                               
	bool                                               InPadTop;                                                 
	bool                                               InPadBottom;                                              
};


struct UScaleBox_SetUserSpecifiedScaleBias_Params
{
	float                                              InUserSpecifiedScaleBias;                                 
};


struct UScaleBox_SetUserSpecifiedScale_Params
{
	float                                              InUserSpecifiedScale;                                     
};


struct UScaleBox_SetStretchDirection_Params
{
	TEnumAsByte<EStretchDirection>                     InStretchDirection;                                       
};


struct UScaleBox_SetStretch_Params
{
	TEnumAsByte<EStretch>                              InStretch;                                                
};


struct UScaleBox_SetIgnoreInheritedScale_Params
{
	bool                                               bInIgnoreInheritedScale;                                  
};


struct UScaleBox_SetFixQuiver_Params
{
	bool                                               InFixQuiver;                                              
};


struct UScaleBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      
};


struct UScaleBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                
};


struct UScaleBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    
};


struct UScrollBar_SetState_Params
{
	float                                              InOffsetFraction;                                         
	float                                              InThumbSizeFraction;                                      
};


struct UScrollBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                
};


struct UScrollBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    
};


struct USizeBox_SetWidthOverride_Params
{
	float                                              InWidthOverride;                                          
};


struct USizeBox_SetMinDesiredWidth_Params
{
	float                                              InMinDesiredWidth;                                        
};


struct USizeBox_SetMinDesiredHeight_Params
{
	float                                              InMinDesiredHeight;                                       
};


struct USizeBox_SetMaxDesiredWidth_Params
{
	float                                              InMaxDesiredWidth;                                        
};


struct USizeBox_SetMaxDesiredHeight_Params
{
	float                                              InMaxDesiredHeight;                                       
};


struct USizeBox_SetMaxAspectRatio_Params
{
	float                                              InMaxAspectRatio;                                         
};


struct USizeBox_SetHeightOverride_Params
{
	float                                              InHeightOverride;                                         
};


struct USizeBox_SetDontPaintWhenChildEmpty_Params
{
	bool                                               Enable;                                                   
};


struct USizeBox_GetDontPaintWhenChildEmpty_Params
{
	bool                                               ReturnValue;                                              
};


struct USizeBox_ClearWidthOverride_Params
{
};


struct USizeBox_ClearMinDesiredWidth_Params
{
};


struct USizeBox_ClearMinDesiredHeight_Params
{
};


struct USizeBox_ClearMaxDesiredWidth_Params
{
};


struct USizeBox_ClearMaxDesiredHeight_Params
{
};


struct USizeBox_ClearMaxAspectRatio_Params
{
};


struct USizeBox_ClearHeightOverride_Params
{
};


struct USizeBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      
};


struct USizeBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                
};


struct USizeBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    
};


struct USlateBlueprintLibrary_ScreenToWidgetLocal_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FGeometry                                   Geometry;                                                 
	struct FVector2D                                   ScreenPosition;                                           
	struct FVector2D                                   LocalCoordinate;                                          
};


struct USlateBlueprintLibrary_ScreenToWidgetAbsolute_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector2D                                   ScreenPosition;                                           
	struct FVector2D                                   AbsoluteCoordinate;                                       
};


struct USlateBlueprintLibrary_ScreenToViewport_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector2D                                   ScreenPosition;                                           
	struct FVector2D                                   ViewportPosition;                                         
};


struct USlateBlueprintLibrary_LocalToViewport_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FGeometry                                   Geometry;                                                 
	struct FVector2D                                   LocalCoordinate;                                          
	struct FVector2D                                   PixelPosition;                                            
	struct FVector2D                                   ViewportPosition;                                         
};


struct USlateBlueprintLibrary_LocalToAbsolute_Params
{
	struct FGeometry                                   Geometry;                                                 
	struct FVector2D                                   LocalCoordinate;                                          
	struct FVector2D                                   ReturnValue;                                              
};


struct USlateBlueprintLibrary_IsUnderLocation_Params
{
	struct FGeometry                                   Geometry;                                                 
	struct FVector2D                                   AbsoluteCoordinate;                                       
	bool                                               ReturnValue;                                              
};


struct USlateBlueprintLibrary_GetLocalSize_Params
{
	struct FGeometry                                   Geometry;                                                 
	struct FVector2D                                   ReturnValue;                                              
};


struct USlateBlueprintLibrary_GetAbsoluteSize_Params
{
	struct FGeometry                                   Geometry;                                                 
	struct FVector2D                                   ReturnValue;                                              
};


struct USlateBlueprintLibrary_GetAbsolutePosition_Params
{
	struct FGeometry                                   Geometry;                                                 
	struct FVector2D                                   ReturnValue;                                              
};


struct USlateBlueprintLibrary_EqualEqual_SlateBrush_Params
{
	struct FSlateBrush                                 A;                                                        
	struct FSlateBrush                                 B;                                                        
	bool                                               ReturnValue;                                              
};


struct USlateBlueprintLibrary_AbsoluteToViewport_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector2D                                   AbsoluteDesktopCoordinate;                                
	struct FVector2D                                   PixelPosition;                                            
	struct FVector2D                                   ViewportPosition;                                         
};


struct USlateBlueprintLibrary_AbsoluteToLocal_Params
{
	struct FGeometry                                   Geometry;                                                 
	struct FVector2D                                   AbsoluteCoordinate;                                       
	struct FVector2D                                   ReturnValue;                                              
};


struct USpacer_SetSize_Params
{
	struct FVector2D                                   InSize;                                                   
};


struct USpinBox_SetValue_Params
{
	float                                              NewValue;                                                 
};


struct USpinBox_SetMinValue_Params
{
	float                                              NewValue;                                                 
};


struct USpinBox_SetMinSliderValue_Params
{
	float                                              NewValue;                                                 
};


struct USpinBox_SetMaxValue_Params
{
	float                                              NewValue;                                                 
};


struct USpinBox_SetMaxSliderValue_Params
{
	float                                              NewValue;                                                 
};


struct USpinBox_SetForegroundColor_Params
{
	struct FSlateColor                                 InForegroundColor;                                        
};


struct USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             
};


struct USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  
};


struct USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Params
{
};


struct USpinBox_GetValue_Params
{
	float                                              ReturnValue;                                              
};


struct USpinBox_GetMinValue_Params
{
	float                                              ReturnValue;                                              
};


struct USpinBox_GetMinSliderValue_Params
{
	float                                              ReturnValue;                                              
};


struct USpinBox_GetMaxValue_Params
{
	float                                              ReturnValue;                                              
};


struct USpinBox_GetMaxSliderValue_Params
{
	float                                              ReturnValue;                                              
};


struct USpinBox_ClearMinValue_Params
{
};


struct USpinBox_ClearMinSliderValue_Params
{
};


struct USpinBox_ClearMaxValue_Params
{
};


struct USpinBox_ClearMaxSliderValue_Params
{
};


struct UTextBinding_GetTextValue_Params
{
	struct FText                                       ReturnValue;                                              
};


struct UTextBinding_GetStringValue_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UThrobber_SetNumberOfPieces_Params
{
	int                                                InNumberOfPieces;                                         
};


struct UThrobber_SetAnimateVertically_Params
{
	bool                                               bInAnimateVertically;                                     
};


struct UThrobber_SetAnimateOpacity_Params
{
	bool                                               bInAnimateOpacity;                                        
};


struct UThrobber_SetAnimateHorizontally_Params
{
	bool                                               bInAnimateHorizontally;                                   
};


struct UTileView_SetItemWidth_Params
{
	float                                              Width;                                                    
};


struct UTileView_SetItemHeight_Params
{
	float                                              Height;                                                   
};


struct UTileView_RequestListRefresh_Params
{
};


struct UUniformGridPanel_SetSlotPadding_Params
{
	struct FMargin                                     InSlotPadding;                                            
};


struct UUniformGridPanel_SetMinDesiredSlotWidth_Params
{
	float                                              InMinDesiredSlotWidth;                                    
};


struct UUniformGridPanel_SetMinDesiredSlotHeight_Params
{
	float                                              InMinDesiredSlotHeight;                                   
};


struct UUniformGridPanel_AddChildToUniformGrid_Params
{
	class UWidget*                                     Content;                                                  
	class UUniformGridSlot*                            ReturnValue;                                              
};


struct UUniformGridSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      
};


struct UUniformGridSlot_SetRow_Params
{
	int                                                InRow;                                                    
};


struct UUniformGridSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    
};


struct UUniformGridSlot_SetColumn_Params
{
	int                                                InColumn;                                                 
};


struct UViewport_Spawn_Params
{
	class UClass*                                      ActorClass;                                               
	class AActor*                                      ReturnValue;                                              
};


struct UViewport_SetViewRotation_Params
{
	struct FRotator                                    Rotation;                                                 
};


struct UViewport_SetViewLocation_Params
{
	struct FVector                                     Location;                                                 
};


struct UViewport_GetViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                              
};


struct UViewport_GetViewportWorld_Params
{
	class UWorld*                                      ReturnValue;                                              
};


struct UViewport_GetViewLocation_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UVisibilityBinding_GetValue_Params
{
	ESlateVisibility                                   ReturnValue;                                              
};


struct UWeakRefImage_UnloadTextureResource_Params
{
};


struct UWeakRefImage_LoadTextureResource_Params
{
	bool                                               bAsync;                                                   
};


struct UWidgetAnimation_GetStartTime_Params
{
	float                                              ReturnValue;                                              
};


struct UWidgetAnimation_GetEndTime_Params
{
	float                                              ReturnValue;                                              
};


struct UWidgetBinding_GetValue_Params
{
	class UWidget*                                     ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_UnlockMouse_Params
{
	struct FEventReply                                 Reply;                                                    
	struct FEventReply                                 ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_Unhandled_Params
{
	struct FEventReply                                 ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_SetUserFocus_Params
{
	struct FEventReply                                 Reply;                                                    
	class UWidget*                                     FocusWidget;                                              
	bool                                               bInAllUsers;                                              
	struct FEventReply                                 ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_SetMousePosition_Params
{
	struct FEventReply                                 Reply;                                                    
	struct FVector2D                                   NewMousePosition;                                         
	struct FEventReply                                 ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Params
{
	class APlayerController*                           Target;                                                   
	class UWidget*                                     InWidgetToFocus;                                          
	EMouseLockMode                                     InMouseLockMode;                                          
};


struct UWidgetBlueprintLibrary_SetInputMode_UIOnly_Params
{
	class APlayerController*                           Target;                                                   
	class UWidget*                                     InWidgetToFocus;                                          
	bool                                               bLockMouseToViewport;                                     
};


struct UWidgetBlueprintLibrary_SetInputMode_GameOnly_Params
{
	class APlayerController*                           Target;                                                   
};


struct UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Params
{
	class APlayerController*                           Target;                                                   
	class UWidget*                                     InWidgetToFocus;                                          
	EMouseLockMode                                     InMouseLockMode;                                          
	bool                                               bHideCursorDuringCapture;                                 
};


struct UWidgetBlueprintLibrary_SetInputMode_GameAndUI_Params
{
	class APlayerController*                           Target;                                                   
	class UWidget*                                     InWidgetToFocus;                                          
	bool                                               bLockMouseToViewport;                                     
	bool                                               bHideCursorDuringCapture;                                 
};


struct UWidgetBlueprintLibrary_SetHardwareCursor_Params
{
	class UObject*                                     WorldContextObject;                                       
	TEnumAsByte<EMouseCursor>                          CursorShape;                                              
	struct FName                                       CursorName;                                               
	struct FVector2D                                   HotSpot;                                                  
	bool                                               ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_SetFocusToGameViewport_Params
{
};


struct UWidgetBlueprintLibrary_SetBrushResourceToTexture_Params
{
	struct FSlateBrush                                 Brush;                                                    
	class UTexture2D*                                  Texture;                                                  
};


struct UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Params
{
	struct FSlateBrush                                 Brush;                                                    
	class UMaterialInterface*                          Material;                                                 
};


struct UWidgetBlueprintLibrary_ReleaseMouseCapture_Params
{
	struct FEventReply                                 Reply;                                                    
	struct FEventReply                                 ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_ReleaseJoystickCapture_Params
{
	struct FEventReply                                 Reply;                                                    
	bool                                               bInAllJoysticks;                                          
	struct FEventReply                                 ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_NoResourceBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_MakeBrushFromTexture_Params
{
	class UTexture2D*                                  Texture;                                                  
	int                                                Width;                                                    
	int                                                Height;                                                   
	struct FSlateBrush                                 ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_MakeBrushFromMaterial_Params
{
	class UMaterialInterface*                          Material;                                                 
	int                                                Width;                                                    
	int                                                Height;                                                   
	struct FSlateBrush                                 ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_MakeBrushFromAsset_Params
{
	class USlateBrushAsset*                            BrushAsset;                                               
	struct FSlateBrush                                 ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_LockMouse_Params
{
	struct FEventReply                                 Reply;                                                    
	class UWidget*                                     CapturingWidget;                                          
	struct FEventReply                                 ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_IsDragDropping_Params
{
	bool                                               ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_Handled_Params
{
	struct FEventReply                                 ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_GetSafeZonePadding_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector2D                                   SafePadding;                                              
	struct FVector2D                                   SafePaddingScale;                                         
	struct FVector2D                                   SpillOverPadding;                                         
};


struct UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Params
{
	struct FAnalogInputEvent                           Event;                                                    
	struct FKeyEvent                                   ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Params
{
	struct FPointerEvent                               Event;                                                    
	struct FInputEvent                                 ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Params
{
	struct FNavigationEvent                            Event;                                                    
	struct FInputEvent                                 ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Params
{
	struct FKeyEvent                                   Event;                                                    
	struct FInputEvent                                 ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Params
{
	struct FCharacterEvent                             Event;                                                    
	struct FInputEvent                                 ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_GetDynamicMaterial_Params
{
	struct FSlateBrush                                 Brush;                                                    
	class UMaterialInstanceDynamic*                    ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_GetDragDroppingContent_Params
{
	class UDragDropOperation*                          ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Params
{
	struct FSlateBrush                                 Brush;                                                    
	class UTexture2D*                                  ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Params
{
	struct FSlateBrush                                 Brush;                                                    
	class UMaterialInterface*                          ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_GetBrushResource_Params
{
	struct FSlateBrush                                 Brush;                                                    
	class UObject*                                     ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UClass*                                      Interface;                                                
	TArray<class UUserWidget*>                         FoundWidgets;                                             
	bool                                               TopLevelOnly;                                             
};


struct UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Params
{
	class UObject*                                     WorldContextObject;                                       
	TArray<class UUserWidget*>                         FoundWidgets;                                             
	class UClass*                                      WidgetClass;                                              
	bool                                               TopLevelOnly;                                             
};


struct UWidgetBlueprintLibrary_EndDragDrop_Params
{
	struct FEventReply                                 Reply;                                                    
	struct FEventReply                                 ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_DrawTextFormatted_Params
{
	struct FPaintContext                               Context;                                                  
	struct FText                                       Text;                                                     
	struct FVector2D                                   Position;                                                 
	class UFont*                                       Font;                                                     
	int                                                FontSize;                                                 
	struct FName                                       FontTypeFace;                                             
	struct FLinearColor                                Tint;                                                     
};


struct UWidgetBlueprintLibrary_DrawText_Params
{
	struct FPaintContext                               Context;                                                  
	struct FString                                     inString;                                                 
	struct FVector2D                                   Position;                                                 
	struct FLinearColor                                Tint;                                                     
};


struct UWidgetBlueprintLibrary_DrawLines_Params
{
	struct FPaintContext                               Context;                                                  
	TArray<struct FVector2D>                           Points;                                                   
	struct FLinearColor                                Tint;                                                     
	bool                                               bAntiAlias;                                               
};


struct UWidgetBlueprintLibrary_DrawLine_Params
{
	struct FPaintContext                               Context;                                                  
	struct FVector2D                                   PositionA;                                                
	struct FVector2D                                   PositionB;                                                
	struct FLinearColor                                Tint;                                                     
	bool                                               bAntiAlias;                                               
};


struct UWidgetBlueprintLibrary_DrawBox_Params
{
	struct FPaintContext                               Context;                                                  
	struct FVector2D                                   Position;                                                 
	struct FVector2D                                   Size;                                                     
	class USlateBrushAsset*                            Brush;                                                    
	struct FLinearColor                                Tint;                                                     
};


struct UWidgetBlueprintLibrary_DismissAllMenus_Params
{
};


struct UWidgetBlueprintLibrary_DetectDragIfPressed_Params
{
	struct FPointerEvent                               PointerEvent;                                             
	class UWidget*                                     WidgetDetectingDrag;                                      
	struct FKey                                        DragKey;                                                  
	struct FEventReply                                 ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_DetectDrag_Params
{
	struct FEventReply                                 Reply;                                                    
	class UWidget*                                     WidgetDetectingDrag;                                      
	struct FKey                                        DragKey;                                                  
	struct FEventReply                                 ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_CreateDragDropOperation_Params
{
	class UClass*                                      OperationClass;                                           
	class UDragDropOperation*                          ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_Create_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UClass*                                      WidgetType;                                               
	class APlayerController*                           OwningPlayer;                                             
	class UUserWidget*                                 ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_ClearUserFocus_Params
{
	struct FEventReply                                 Reply;                                                    
	bool                                               bInAllUsers;                                              
	struct FEventReply                                 ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_CheckWidgetIsActive_Params
{
	class UWidget*                                     Widget;                                                   
	bool                                               ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_CaptureMouse_Params
{
	struct FEventReply                                 Reply;                                                    
	class UWidget*                                     CapturingWidget;                                          
	struct FEventReply                                 ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_CaptureJoystick_Params
{
	struct FEventReply                                 Reply;                                                    
	class UWidget*                                     CapturingWidget;                                          
	bool                                               bInAllJoysticks;                                          
	struct FEventReply                                 ReturnValue;                                              
};


struct UWidgetBlueprintLibrary_CancelDragDrop_Params
{
};


struct UWidgetInteractionComponent_SetCustomHitResult_Params
{
	struct FHitResult                                  HitResult;                                                
};


struct UWidgetInteractionComponent_SendKeyChar_Params
{
	struct FString                                     Characters;                                               
	bool                                               bRepeat;                                                  
	bool                                               ReturnValue;                                              
};


struct UWidgetInteractionComponent_ScrollWheel_Params
{
	float                                              ScrollDelta;                                              
};


struct UWidgetInteractionComponent_ReleasePointerKey_Params
{
	struct FKey                                        Key;                                                      
};


struct UWidgetInteractionComponent_ReleaseKey_Params
{
	struct FKey                                        Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UWidgetInteractionComponent_PressPointerKey_Params
{
	struct FKey                                        Key;                                                      
};


struct UWidgetInteractionComponent_PressKey_Params
{
	struct FKey                                        Key;                                                      
	bool                                               bRepeat;                                                  
	bool                                               ReturnValue;                                              
};


struct UWidgetInteractionComponent_PressAndReleaseKey_Params
{
	struct FKey                                        Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UWidgetInteractionComponent_IsOverInteractableWidget_Params
{
	bool                                               ReturnValue;                                              
};


struct UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Params
{
	bool                                               ReturnValue;                                              
};


struct UWidgetInteractionComponent_IsOverFocusableWidget_Params
{
	bool                                               ReturnValue;                                              
};


struct UWidgetInteractionComponent_GetLastHitResult_Params
{
	struct FHitResult                                  ReturnValue;                                              
};


struct UWidgetInteractionComponent_GetHoveredWidgetComponent_Params
{
	class UWidgetComponent*                            ReturnValue;                                              
};


struct UWidgetInteractionComponent_Get2DHitLocation_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Params
{
	class UWidget*                                     Widget;                                                   
	class UVerticalBoxSlot*                            ReturnValue;                                              
};


struct UWidgetLayoutLibrary_SlotAsUniformGridSlot_Params
{
	class UWidget*                                     Widget;                                                   
	class UUniformGridSlot*                            ReturnValue;                                              
};


struct UWidgetLayoutLibrary_SlotAsOverlaySlot_Params
{
	class UWidget*                                     Widget;                                                   
	class UOverlaySlot*                                ReturnValue;                                              
};


struct UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Params
{
	class UWidget*                                     Widget;                                                   
	class UHorizontalBoxSlot*                          ReturnValue;                                              
};


struct UWidgetLayoutLibrary_SlotAsGridSlot_Params
{
	class UWidget*                                     Widget;                                                   
	class UGridSlot*                                   ReturnValue;                                              
};


struct UWidgetLayoutLibrary_SlotAsCanvasSlot_Params
{
	class UWidget*                                     Widget;                                                   
	class UCanvasPanelSlot*                            ReturnValue;                                              
};


struct UWidgetLayoutLibrary_SlotAsBorderSlot_Params
{
	class UWidget*                                     Widget;                                                   
	class UBorderSlot*                                 ReturnValue;                                              
};


struct UWidgetLayoutLibrary_SetOriginalViewPortSizeXY_Params
{
	int                                                X;                                                        
	int                                                Y;                                                        
};


struct UWidgetLayoutLibrary_SetOriginalViewPortSize_Params
{
	struct FIntPoint                                   Size;                                                     
};


struct UWidgetLayoutLibrary_RemoveAllWidgets_Params
{
	class UObject*                                     WorldContextObject;                                       
};


struct UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPositionReturnValue_Params
{
	class APlayerController*                           PlayerController;                                         
	struct FVector                                     WorldLocation;                                            
	struct FVector2D                                   ReturnValue;                                              
};


struct UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Params
{
	class APlayerController*                           PlayerController;                                         
	struct FVector                                     WorldLocation;                                            
	struct FVector2D                                   ScreenPosition;                                           
	bool                                               ReturnValue;                                              
};


struct UWidgetLayoutLibrary_GetViewportWidgetGeometry_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FGeometry                                   ReturnValue;                                              
};


struct UWidgetLayoutLibrary_GetViewportSize_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector2D                                   ReturnValue;                                              
};


struct UWidgetLayoutLibrary_GetViewportScale_Params
{
	class UObject*                                     WorldContextObject;                                       
	float                                              ReturnValue;                                              
};


struct UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Params
{
	class APlayerController*                           PlayerController;                                         
	struct FGeometry                                   ReturnValue;                                              
};


struct UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Params
{
	class APlayerController*                           Player;                                                   
	float                                              LocationX;                                                
	float                                              LocationY;                                                
	bool                                               ReturnValue;                                              
};


struct UWidgetLayoutLibrary_GetMousePositionOnViewport_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector2D                                   ReturnValue;                                              
};


struct UWidgetLayoutLibrary_GetMousePositionOnPlatform_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct UWidgetSwitcher_SetDontPaintWhenChildEmpty_Params
{
	bool                                               Enable;                                                   
};


struct UWidgetSwitcher_SetActiveWidgetIndex_Params
{
	int                                                Index;                                                    
};


struct UWidgetSwitcher_SetActiveWidget_Params
{
	class UWidget*                                     Widget;                                                   
};


struct UWidgetSwitcher_GetWidgetAtIndex_Params
{
	int                                                Index;                                                    
	class UWidget*                                     ReturnValue;                                              
};


struct UWidgetSwitcher_GetNumWidgets_Params
{
	int                                                ReturnValue;                                              
};


struct UWidgetSwitcher_GetDontPaintWhenChildEmpty_Params
{
	bool                                               ReturnValue;                                              
};


struct UWidgetSwitcher_GetActiveWidgetIndex_Params
{
	int                                                ReturnValue;                                              
};


struct UWidgetSwitcher_GetActiveWidget_Params
{
	class UWidget*                                     ReturnValue;                                              
};


struct UWidgetSwitcherSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      
};


struct UWidgetSwitcherSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                
};


struct UWidgetSwitcherSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    
};


struct UWindowTitleBarArea_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      
};


struct UWindowTitleBarArea_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                
};


struct UWindowTitleBarArea_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    
};


struct UWindowTitleBarAreaSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      
};


struct UWindowTitleBarAreaSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                
};


struct UWindowTitleBarAreaSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    
};

}

