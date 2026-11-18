#pragma once


 
namespace SDK
{





enum class ECheckBoxState : uint8_t
{
	ECheckBoxState__Unchecked      = 0,
	ECheckBoxState__Checked        = 1,
	ECheckBoxState__Undetermined   = 2,
	ECheckBoxState__ECheckBoxState_MAX = 3
};



enum class EWidgetClipping : uint8_t
{
	EWidgetClipping__Inherit       = 0,
	EWidgetClipping__ClipToBounds  = 1,
	EWidgetClipping__ClipToBoundsWithoutIntersecting = 2,
	EWidgetClipping__ClipToBoundsAlways = 3,
	EWidgetClipping__OnDemand      = 4,
	EWidgetClipping__EWidgetClipping_MAX = 5
};



enum class ESlateBrushImageType : uint8_t
{
	ESlateBrushImageType__NoImage  = 0,
	ESlateBrushImageType__FullColor = 1,
	ESlateBrushImageType__Linear   = 2,
	ESlateBrushImageType__ESlateBrushImageType_MAX = 3
};



enum class ESlateBrushMirrorType : uint8_t
{
	ESlateBrushMirrorType__NoMirror = 0,
	ESlateBrushMirrorType__Horizontal = 1,
	ESlateBrushMirrorType__Vertical = 2,
	ESlateBrushMirrorType__Both    = 3,
	ESlateBrushMirrorType__ESlateBrushMirrorType_MAX = 4
};



enum class ESlateBrushTileType : uint8_t
{
	ESlateBrushTileType__NoTile    = 0,
	ESlateBrushTileType__Horizontal = 1,
	ESlateBrushTileType__Vertical  = 2,
	ESlateBrushTileType__Both      = 3,
	ESlateBrushTileType__ESlateBrushTileType_MAX = 4
};



enum class ESlateBrushDrawType : uint8_t
{
	ESlateBrushDrawType__NoDrawType = 0,
	ESlateBrushDrawType__Box       = 1,
	ESlateBrushDrawType__Border    = 2,
	ESlateBrushDrawType__Image     = 3,
	ESlateBrushDrawType__HollowBox = 4,
	ESlateBrushDrawType__ESlateBrushDrawType_MAX = 5
};



enum class ESlateColorStylingMode : uint8_t
{
	ESlateColorStylingMode__UseColor_Specified = 0,
	ESlateColorStylingMode__UseColor_Specified_Link = 1,
	ESlateColorStylingMode__UseColor_Foreground = 2,
	ESlateColorStylingMode__UseColor_Foreground_Subdued = 3,
	ESlateColorStylingMode__UseColor_MAX = 4
};



enum class EWidgetVisible : uint8_t
{
	EWidgetVisible__Default        = 0,
	EWidgetVisible__ForceNotVisible = 1,
	EWidgetVisible__ForceVisible   = 2,
	EWidgetVisible__MaxVisible     = 3,
	EWidgetVisible__EWidgetVisible_MAX = 4
};



enum class EUINavigationRule : uint8_t
{
	EUINavigationRule__Escape      = 0,
	EUINavigationRule__Explicit    = 1,
	EUINavigationRule__Wrap        = 2,
	EUINavigationRule__Stop        = 3,
	EUINavigationRule__Custom      = 4,
	EUINavigationRule__Invalid     = 5,
	EUINavigationRule__EUINavigationRule_MAX = 6
};



enum class EUINavigation : uint8_t
{
	EUINavigation__Left            = 0,
	EUINavigation__Right           = 1,
	EUINavigation__Up              = 2,
	EUINavigation__Down            = 3,
	EUINavigation__Next            = 4,
	EUINavigation__Previous        = 5,
	EUINavigation__Num             = 6,
	EUINavigation__Invalid         = 7,
	EUINavigation__EUINavigation_MAX = 8
};



enum class EButtonClickMethod : uint8_t
{
	EButtonClickMethod__DownAndUp  = 0,
	EButtonClickMethod__MouseDown  = 1,
	EButtonClickMethod__MouseUp    = 2,
	EButtonClickMethod__PreciseClick = 3,
	EButtonClickMethod__EButtonClickMethod_MAX = 4
};



enum class EButtonTouchMethod : uint8_t
{
	EButtonTouchMethod__DownAndUp  = 0,
	EButtonTouchMethod__PreciseTap = 1,
	EButtonTouchMethod__EButtonTouchMethod_MAX = 2
};



enum class ESelectInfo : uint8_t
{
	ESelectInfo__OnKeyPress        = 0,
	ESelectInfo__OnNavigation      = 1,
	ESelectInfo__OnMouseClick      = 2,
	ESelectInfo__Direct            = 3,
	ESelectInfo__ESelectInfo_MAX   = 4
};



enum class ETextCommit : uint8_t
{
	ETextCommit__Default           = 0,
	ETextCommit__OnEnter           = 1,
	ETextCommit__OnUserMovedFocus  = 2,
	ETextCommit__OnCleared         = 3,
	ETextCommit__ETextCommit_MAX   = 4
};



enum class ETextShapingMethod : uint8_t
{
	ETextShapingMethod__Auto       = 0,
	ETextShapingMethod__KerningOnly = 1,
	ETextShapingMethod__FullShaping = 2,
	ETextShapingMethod__ETextShapingMethod_MAX = 3
};



enum class EOrientation : uint8_t
{
	Orient_Horizontal              = 0,
	Orient_Vertical                = 1,
	Orient_MAX                     = 2
};



enum class EConsumeMouseWheel : uint8_t
{
	EConsumeMouseWheel__WhenScrollingPossible = 0,
	EConsumeMouseWheel__Always     = 1,
	EConsumeMouseWheel__Never      = 2,
	EConsumeMouseWheel__EConsumeMouseWheel_MAX = 3
};



enum class EFontLayoutMethod : uint8_t
{
	EFontLayoutMethod__Metrics     = 0,
	EFontLayoutMethod__BoundingBox = 1,
	EFontLayoutMethod__EFontLayoutMethod_MAX = 2
};



enum class EFontLoadingPolicy : uint8_t
{
	EFontLoadingPolicy__LazyLoad   = 0,
	EFontLoadingPolicy__Stream     = 1,
	EFontLoadingPolicy__Inline     = 2,
	EFontLoadingPolicy__EFontLoadingPolicy_MAX = 3
};



enum class EFontHinting : uint8_t
{
	EFontHinting__Default          = 0,
	EFontHinting__Auto             = 1,
	EFontHinting__AutoLight        = 2,
	EFontHinting__Monochrome       = 3,
	EFontHinting__None             = 4,
	EFontHinting__EFontHinting_MAX = 5
};



enum class EFocusCause : uint8_t
{
	EFocusCause__Mouse             = 0,
	EFocusCause__Navigation        = 1,
	EFocusCause__SetDirectly       = 2,
	EFocusCause__Cleared           = 3,
	EFocusCause__OtherWidgetLostFocus = 4,
	EFocusCause__WindowActivate    = 5,
	EFocusCause__EFocusCause_MAX   = 6
};



enum class EFlowDirectionPreference : uint8_t
{
	EFlowDirectionPreference__Inherit = 0,
	EFlowDirectionPreference__Culture = 1,
	EFlowDirectionPreference__LeftToRight = 2,
	EFlowDirectionPreference__RightToLeft = 3,
	EFlowDirectionPreference__EFlowDirectionPreference_MAX = 4
};



enum class EHitTestAreaPolicyType : uint8_t
{
	EHitTestAreaPolicyType__UnknowType = 0,
	EHitTestAreaPolicyType__CircularHitTestArea = 1,
	EHitTestAreaPolicyType__EHitTestAreaPolicyType_MAX = 2
};



enum class ESlateDebuggingFocusEvent : uint8_t
{
	ESlateDebuggingFocusEvent__FocusChanging = 0,
	ESlateDebuggingFocusEvent__FocusLost = 1,
	ESlateDebuggingFocusEvent__FocusReceived = 2,
	ESlateDebuggingFocusEvent__MAX = 3
};



enum class ESlateDebuggingNavigationMethod : uint8_t
{
	ESlateDebuggingNavigationMethod__Unknown = 0,
	ESlateDebuggingNavigationMethod__Explicit = 1,
	ESlateDebuggingNavigationMethod__CustomDelegateBound = 2,
	ESlateDebuggingNavigationMethod__CustomDelegateUnbound = 3,
	ESlateDebuggingNavigationMethod__NextOrPrevious = 4,
	ESlateDebuggingNavigationMethod__HitTestGrid = 5,
	ESlateDebuggingNavigationMethod__ESlateDebuggingNavigationMethod_MAX = 6
};



enum class ESlateDebuggingStateChangeEvent : uint8_t
{
	ESlateDebuggingStateChangeEvent__MouseCaptureGained = 0,
	ESlateDebuggingStateChangeEvent__MouseCaptureLost = 1,
	ESlateDebuggingStateChangeEvent__ESlateDebuggingStateChangeEvent_MAX = 2
};



enum class ESlateDebuggingInputEvent : uint8_t
{
	ESlateDebuggingInputEvent__MouseMove = 0,
	ESlateDebuggingInputEvent__MouseEnter = 1,
	ESlateDebuggingInputEvent__MouseLeave = 2,
	ESlateDebuggingInputEvent__PreviewMouseButtonDown = 3,
	ESlateDebuggingInputEvent__MouseButtonDown = 4,
	ESlateDebuggingInputEvent__MouseButtonUp = 5,
	ESlateDebuggingInputEvent__MouseButtonDoubleClick = 6,
	ESlateDebuggingInputEvent__MouseWheel = 7,
	ESlateDebuggingInputEvent__TouchStart = 8,
	ESlateDebuggingInputEvent__TouchEnd = 9,
	ESlateDebuggingInputEvent__TouchForceChanged = 10,
	ESlateDebuggingInputEvent__TouchFirstMove = 11,
	ESlateDebuggingInputEvent__TouchMoved = 12,
	ESlateDebuggingInputEvent__DragDetected = 13,
	ESlateDebuggingInputEvent__DragEnter = 14,
	ESlateDebuggingInputEvent__DragLeave = 15,
	ESlateDebuggingInputEvent__DragOver = 16,
	ESlateDebuggingInputEvent__DragDrop = 17,
	ESlateDebuggingInputEvent__DropMessage = 18,
	ESlateDebuggingInputEvent__PreviewKeyDown = 19,
	ESlateDebuggingInputEvent__KeyDown = 20,
	ESlateDebuggingInputEvent__KeyUp = 21,
	ESlateDebuggingInputEvent__KeyChar = 22,
	ESlateDebuggingInputEvent__AnalogInput = 23,
	ESlateDebuggingInputEvent__TouchGesture = 24,
	ESlateDebuggingInputEvent__MotionDetected = 25,
	ESlateDebuggingInputEvent__MAX = 26
};



enum class EBlurType : uint8_t
{
	BlurType_None                  = 0,
	BlurType_Default               = 1,
	BlurType_Directional           = 2,
	BlurType_Radial                = 3,
	BlurType_Rotate                = 4,
	BlurType_AlphaOnly             = 5,
	BlurType_MAX                   = 6
};



enum class EScrollDirection : uint8_t
{
	Scroll_Down                    = 0,
	Scroll_Up                      = 1,
	Scroll_MAX                     = 2
};



enum class EMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor      = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox         = 3,
	MenuPlacement_ComboBoxRight    = 4,
	MenuPlacement_MenuRight        = 5,
	MenuPlacement_AboveAnchor      = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft         = 9,
	MenuPlacement_Center           = 10,
	MenuPlacement_RightLeftCenter  = 11,
	MenuPlacement_MatchBottomLeft  = 12,
	MenuPlacement_ComboBoxAbove    = 13,
	MenuPlacement_MAX              = 14
};



enum class EVerticalAlignment : uint8_t
{
	VAlign_Fill                    = 0,
	VAlign_Top                     = 1,
	VAlign_Center                  = 2,
	VAlign_Bottom                  = 3,
	VAlign_MAX                     = 4
};



enum class EHorizontalAlignment : uint8_t
{
	HAlign_Fill                    = 0,
	HAlign_Left                    = 1,
	HAlign_Center                  = 2,
	HAlign_Right                   = 3,
	HAlign_MAX                     = 4
};



enum class ENavigationGenesis : uint8_t
{
	ENavigationGenesis__Keyboard   = 0,
	ENavigationGenesis__Controller = 1,
	ENavigationGenesis__User       = 2,
	ENavigationGenesis__ENavigationGenesis_MAX = 3
};



enum class ENavigationSource : uint8_t
{
	ENavigationSource__FocusedWidget = 0,
	ENavigationSource__WidgetUnderCursor = 1,
	ENavigationSource__ENavigationSource_MAX = 2
};



enum class EButtonPressMethod : uint8_t
{
	EButtonPressMethod__DownAndUp  = 0,
	EButtonPressMethod__ButtonPress = 1,
	EButtonPressMethod__ButtonRelease = 2,
	EButtonPressMethod__EButtonPressMethod_MAX = 3
};



enum class EFontFallback : uint8_t
{
	EFontFallback__FF_NoFallback   = 0,
	EFontFallback__FF_LocalizedFallback = 1,
	EFontFallback__FF_LastResortFallback = 2,
	EFontFallback__FF_Max          = 3
};



enum class ESlateCheckBoxType : uint8_t
{
	ESlateCheckBoxType__CheckBox   = 0,
	ESlateCheckBoxType__ToggleButton = 1,
	ESlateCheckBoxType__ESlateCheckBoxType_MAX = 2
};



enum class EWidgetPixelSnapping : uint8_t
{
	EWidgetPixelSnapping__Inherit  = 0,
	EWidgetPixelSnapping__Disabled = 1,
	EWidgetPixelSnapping__SnapToPixel = 2,
	EWidgetPixelSnapping__EWidgetPixelSnapping_MAX = 3
};









struct FInputEvent
{
	unsigned char                                      UnknownData00[0x20];                                      
};



struct FKeyEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x20];                                      
};



struct FAnalogInputEvent : public FKeyEvent
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FGeometry
{
	unsigned char                                      UnknownData00[0x38];                                      
};



struct FMargin
{
	float                                              Left;                                                     
	float                                              Top;                                                      
	float                                              Right;                                                    
	float                                              Bottom;                                                   
};



struct FSlateColor
{
	struct FLinearColor                                SpecifiedColor;                                           
	TEnumAsByte<ESlateColorStylingMode>                ColorUseRule;                                             
	unsigned char                                      UnknownData00[0x17];                                      
};



struct FSlateBrush
{
	unsigned char                                      UnknownData00[0x8];                                       
	struct FVector2D                                   ImageSize;                                                
	struct FMargin                                     Margin;                                                   
	struct FSlateColor                                 TintColor;                                                
	bool                                               bAsyncEnabled;                                            
	bool                                               bOnlySoftInEditor;                                        
	unsigned char                                      UnknownData01[0x6];                                       
	class UObject*                                     ResourceObject;                                           
	unsigned char                                      UnknownData02[0x28];                                      
	struct FName                                       ResourceName;                                             
	struct FBox2D                                      UVRegion;                                                 
	TEnumAsByte<ESlateBrushDrawType>                   DrawAs;                                                   
	TEnumAsByte<ESlateBrushTileType>                   Tiling;                                                   
	TEnumAsByte<ESlateBrushMirrorType>                 Mirroring;                                                
	TEnumAsByte<ESlateBrushImageType>                  ImageType;                                                
	unsigned char                                      UnknownData03[0x10];                                      
	unsigned char                                      bIsDynamicallyLoaded : 1;                                 
	unsigned char                                      bHasUObject : 1;                                          
	unsigned char                                      bUseImageSizeAsTextureSize : 1;                           
	unsigned char                                      UnknownData04[0x7];                                       
};



struct FPointerEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x58];                                      
};



struct FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FSlateSound
{
	class UObject*                                     ResourceObject;                                           
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FButtonStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Normal;                                                   
	struct FSlateBrush                                 Hovered;                                                  
	struct FSlateBrush                                 Pressed;                                                  
	struct FSlateBrush                                 Disabled;                                                 
	struct FMargin                                     NormalPadding;                                            
	struct FMargin                                     PressedPadding;                                           
	struct FSlateSound                                 PressedSlateSound;                                        
	struct FSlateSound                                 HoveredSlateSound;                                        
};



struct FFontOutlineSettings
{
	int                                                OutlineSize;                                              
	unsigned char                                      UnknownData00[0x4];                                       
	class UObject*                                     OutlineMaterial;                                          
	struct FLinearColor                                OutlineColor;                                             
	bool                                               bSeparateFillAlpha;                                       
	unsigned char                                      UnknownData01[0x7];                                       
};



struct FSlateFontInfo
{
	class UObject*                                     FontObject;                                               
	class UObject*                                     FontMaterial;                                             
	struct FFontOutlineSettings                        OutlineSettings;                                          
	unsigned char                                      UnknownData00[0x10];                                      
	struct FName                                       TypefaceFontName;                                         
	int                                                Size;                                                     
	bool                                               IsBold;                                                   
	unsigned char                                      UnknownData01[0x3];                                       
};



struct FTableRowStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 SelectorFocusedBrush;                                     
	struct FSlateBrush                                 ActiveHoveredBrush;                                       
	struct FSlateBrush                                 ActiveBrush;                                              
	struct FSlateBrush                                 InactiveHoveredBrush;                                     
	struct FSlateBrush                                 InactiveBrush;                                            
	struct FSlateBrush                                 EvenRowBackgroundHoveredBrush;                            
	struct FSlateBrush                                 EvenRowBackgroundBrush;                                   
	struct FSlateBrush                                 OddRowBackgroundHoveredBrush;                             
	struct FSlateBrush                                 OddRowBackgroundBrush;                                    
	struct FSlateColor                                 TextColor;                                                
	struct FSlateColor                                 SelectedTextColor;                                        
	struct FSlateBrush                                 DropIndicator_Above;                                      
	struct FSlateBrush                                 DropIndicator_Onto;                                       
	struct FSlateBrush                                 DropIndicator_Below;                                      
};



struct FComboButtonStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                ButtonStyle;                                              
	struct FSlateBrush                                 DownArrowImage;                                           
	float                                              ArrowPaddingLeft;                                         
	float                                              ArrowPaddingRight;                                        
	float                                              ArrowPaddingTop;                                          
	float                                              ArrowPaddingBottom;                                       
	struct FSlateBrush                                 MenuBorderBrush;                                          
	struct FMargin                                     MenuBorderPadding;                                        
};



struct FComboBoxStyle : public FSlateWidgetStyle
{
	struct FComboButtonStyle                           ComboButtonStyle;                                         
	struct FSlateSound                                 PressedSlateSound;                                        
	struct FSlateSound                                 SelectionChangeSlateSound;                                
};



struct FEditableTextStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              Font;                                                     
	struct FSlateColor                                 ColorAndOpacity;                                          
	struct FSlateBrush                                 BackgroundImageSelected;                                  
	struct FSlateBrush                                 BackgroundImageComposing;                                 
	struct FSlateBrush                                 CaretImage;                                               
};



struct FScrollBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HorizontalBackgroundImage;                                
	struct FSlateBrush                                 VerticalBackgroundImage;                                  
	struct FSlateBrush                                 VerticalTopSlotImage;                                     
	struct FSlateBrush                                 HorizontalTopSlotImage;                                   
	struct FSlateBrush                                 VerticalBottomSlotImage;                                  
	struct FSlateBrush                                 HorizontalBottomSlotImage;                                
	struct FSlateBrush                                 NormalThumbImage;                                         
	struct FSlateBrush                                 HoveredThumbImage;                                        
	struct FSlateBrush                                 DraggedThumbImage;                                        
};



struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundImageNormal;                                    
	struct FSlateBrush                                 BackgroundImageHovered;                                   
	struct FSlateBrush                                 BackgroundImageFocused;                                   
	struct FSlateBrush                                 BackgroundImageReadOnly;                                  
	struct FMargin                                     Padding;                                                  
	struct FSlateFontInfo                              Font;                                                     
	struct FSlateColor                                 ForegroundColor;                                          
	struct FSlateColor                                 BackgroundColor;                                          
	struct FSlateColor                                 ReadOnlyForegroundColor;                                  
	struct FMargin                                     HScrollBarPadding;                                        
	struct FMargin                                     VScrollBarPadding;                                        
	struct FScrollBarStyle                             ScrollBarStyle;                                           
};



struct FTextBlockStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              Font;                                                     
	unsigned char                                      UnknownData00[0x8];                                       
	struct FSlateColor                                 ColorAndOpacity;                                          
	struct FVector2D                                   ShadowOffset;                                             
	struct FLinearColor                                ShadowColorAndOpacity;                                    
	struct FSlateColor                                 SelectedBackgroundColor;                                  
	struct FLinearColor                                HighlightColor;                                           
	struct FSlateBrush                                 HighlightShape;                                           
	struct FSlateBrush                                 UnderlineBrush;                                           
};



struct FSpinBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundBrush;                                          
	struct FSlateBrush                                 HoveredBackgroundBrush;                                   
	struct FSlateBrush                                 ActiveFillBrush;                                          
	struct FSlateBrush                                 InactiveFillBrush;                                        
	struct FSlateBrush                                 ArrowsImage;                                              
	struct FSlateColor                                 ForegroundColor;                                          
	struct FMargin                                     TextPadding;                                              
};



struct FScrollBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 TopShadowBrush;                                           
	struct FSlateBrush                                 BottomShadowBrush;                                        
	struct FSlateBrush                                 LeftShadowBrush;                                          
	struct FSlateBrush                                 RightShadowBrush;                                         
};



struct FFocusEvent
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FCharacterEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FMotionEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x30];                                      
};



struct FWAnimTime
{
	float                                              PlayTime_2;                                               
	float                                              PlayTime_3;                                               
	float                                              PlayTime_4;                                               
	float                                              PlayTime_5;                                               
};



struct FFontData
{
	struct FString                                     FontFilename;                                             
	EFontHinting                                       Hinting;                                                  
	EFontLoadingPolicy                                 LoadingPolicy;                                            
	unsigned char                                      UnknownData00[0x6];                                       
	class UObject*                                     FontFaceAsset;                                            
};



struct FTypefaceEntry
{
	struct FName                                       Name;                                                     
	struct FFontData                                   Font;                                                     
};



struct FTypeface
{
	TArray<struct FTypefaceEntry>                      Fonts;                                                    
};



struct FCompositeSubFont
{
	struct FTypeface                                   Typeface;                                                 
	TArray<struct FInt32Range>                         CharacterRanges;                                          
	float                                              ScalingFactor;                                            
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FCompositeFont
{
	struct FTypeface                                   DefaultTypeface;                                          
	TArray<struct FCompositeSubFont>                   SubTypefaces;                                             
};



struct FNavigationEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FWindowStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                MinimizeButtonStyle;                                      
	struct FButtonStyle                                MaximizeButtonStyle;                                      
	struct FButtonStyle                                RestoreButtonStyle;                                       
	struct FButtonStyle                                CloseButtonStyle;                                         
	struct FTextBlockStyle                             TitleTextStyle;                                           
	struct FSlateBrush                                 ActiveTitleBrush;                                         
	struct FSlateBrush                                 InactiveTitleBrush;                                       
	struct FSlateBrush                                 FlashTitleBrush;                                          
	struct FSlateColor                                 BackgroundColor;                                          
	struct FSlateBrush                                 OutlineBrush;                                             
	struct FSlateColor                                 OutlineColor;                                             
	struct FSlateBrush                                 BorderBrush;                                              
	struct FSlateBrush                                 BackgroundBrush;                                          
	struct FSlateBrush                                 ChildBackgroundBrush;                                     
};



struct FScrollBorderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 TopShadowBrush;                                           
	struct FSlateBrush                                 BottomShadowBrush;                                        
};



struct FDockTabStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                CloseButtonStyle;                                         
	struct FSlateBrush                                 NormalBrush;                                              
	struct FSlateBrush                                 ActiveBrush;                                              
	struct FSlateBrush                                 ColorOverlayTabBrush;                                     
	struct FSlateBrush                                 ColorOverlayIconBrush;                                    
	struct FSlateBrush                                 ForegroundBrush;                                          
	struct FSlateBrush                                 HoveredBrush;                                             
	struct FSlateBrush                                 ContentAreaBrush;                                         
	struct FSlateBrush                                 TabWellBrush;                                             
	struct FMargin                                     TabPadding;                                               
	float                                              OverlapWidth;                                             
	unsigned char                                      UnknownData00[0x4];                                       
	struct FSlateColor                                 FlashColor;                                               
};



struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 SortPrimaryAscendingImage;                                
	struct FSlateBrush                                 SortPrimaryDescendingImage;                               
	struct FSlateBrush                                 SortSecondaryAscendingImage;                              
	struct FSlateBrush                                 SortSecondaryDescendingImage;                             
	struct FSlateBrush                                 NormalBrush;                                              
	struct FSlateBrush                                 HoveredBrush;                                             
	struct FSlateBrush                                 MenuDropdownImage;                                        
	struct FSlateBrush                                 MenuDropdownNormalBorderBrush;                            
	struct FSlateBrush                                 MenuDropdownHoveredBorderBrush;                           
};



struct FSplitterStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HandleNormalBrush;                                        
	struct FSlateBrush                                 HandleHighlightBrush;                                     
};



struct FHeaderRowStyle : public FSlateWidgetStyle
{
	struct FTableColumnHeaderStyle                     ColumnStyle;                                              
	struct FTableColumnHeaderStyle                     LastColumnStyle;                                          
	struct FSplitterStyle                              ColumnSplitterStyle;                                      
	struct FSlateBrush                                 BackgroundBrush;                                          
	struct FSlateColor                                 ForegroundColor;                                          
};



struct FInlineTextImageStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Image;                                                    
	int16_t                                            Baseline;                                                 
	unsigned char                                      UnknownData00[0x6];                                       
};



struct FSliderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 NormalBarImage;                                           
	struct FSlateBrush                                 DisabledBarImage;                                         
	struct FSlateBrush                                 NormalThumbImage;                                         
	struct FSlateBrush                                 DisabledThumbImage;                                       
	float                                              BarThickness;                                             
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FVolumeControlStyle : public FSlateWidgetStyle
{
	struct FSliderStyle                                SliderStyle;                                              
	struct FSlateBrush                                 HighVolumeImage;                                          
	struct FSlateBrush                                 MidVolumeImage;                                           
	struct FSlateBrush                                 LowVolumeImage;                                           
	struct FSlateBrush                                 NoVolumeImage;                                            
	struct FSlateBrush                                 MutedImage;                                               
};



struct FSearchBoxStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle                       TextBoxStyle;                                             
	struct FSlateFontInfo                              ActiveFontInfo;                                           
	struct FSlateBrush                                 UpArrowImage;                                             
	struct FSlateBrush                                 DownArrowImage;                                           
	struct FSlateBrush                                 GlassImage;                                               
	struct FSlateBrush                                 ClearImage;                                               
	struct FMargin                                     ImagePadding;                                             
	bool                                               bLeftAlignButtons;                                        
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FExpandableAreaStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 CollapsedImage;                                           
	struct FSlateBrush                                 ExpandedImage;                                            
	float                                              RolloutAnimationSeconds;                                  
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FProgressBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundImage;                                          
	struct FSlateBrush                                 FillImage;                                                
	struct FSlateBrush                                 MarqueeImage;                                             
};



struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                     
	struct FTextBlockStyle                             TextStyle;                                                
};



struct FHyperlinkStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                UnderlineStyle;                                           
	struct FTextBlockStyle                             TextStyle;                                                
	struct FMargin                                     Padding;                                                  
};



struct FCheckBoxStyle : public FSlateWidgetStyle
{
	TEnumAsByte<ESlateCheckBoxType>                    CheckBoxType;                                             
	unsigned char                                      UnknownData00[0x7];                                       
	struct FSlateBrush                                 UncheckedImage;                                           
	struct FSlateBrush                                 UncheckedHoveredImage;                                    
	struct FSlateBrush                                 UncheckedPressedImage;                                    
	struct FSlateBrush                                 CheckedImage;                                             
	struct FSlateBrush                                 CheckedHoveredImage;                                      
	struct FSlateBrush                                 CheckedPressedImage;                                      
	struct FSlateBrush                                 UndeterminedImage;                                        
	struct FSlateBrush                                 UndeterminedHoveredImage;                                 
	struct FSlateBrush                                 UndeterminedPressedImage;                                 
	struct FMargin                                     Padding;                                                  
	struct FSlateColor                                 ForegroundColor;                                          
	struct FSlateColor                                 BorderBackgroundColor;                                    
	struct FSlateSound                                 CheckedSlateSound;                                        
	struct FSlateSound                                 UncheckedSlateSound;                                      
	struct FSlateSound                                 HoveredSlateSound;                                        
};

}

