#pragma once


 
namespace SDK
{





enum class ESlateVisibility : uint8_t
{
	ESlateVisibility__Visible      = 0,
	ESlateVisibility__Collapsed    = 1,
	ESlateVisibility__Hidden       = 2,
	ESlateVisibility__HitTestInvisible = 3,
	ESlateVisibility__SelfHitTestInvisible = 4,
	ESlateVisibility__ESlateVisibility_MAX = 5
};



enum class EButtonOnClickSound : uint8_t
{
	EButtonOnClickSound__None      = 0,
	EButtonOnClickSound__Click     = 1,
	EButtonOnClickSound__Confirm   = 2,
	EButtonOnClickSound__Switch    = 3,
	EButtonOnClickSound__Object_Click = 4,
	EButtonOnClickSound__Start     = 5,
	EButtonOnClickSound__Close     = 6,
	EButtonOnClickSound__Hall_click = 7,
	EButtonOnClickSound__Menu_open = 8,
	EButtonOnClickSound__Menu_close = 9,
	EButtonOnClickSound__Item_get  = 10,
	EButtonOnClickSound__Page      = 11,
	EButtonOnClickSound__Set       = 12,
	EButtonOnClickSound__EButtonOnClickSound_MAX = 13
};



enum class EButtonClickGroupEnum : uint8_t
{
	EButtonClickGroupEnum__None    = 0,
	EButtonClickGroupEnum__GlobalGroupOne = 1,
	EButtonClickGroupEnum__GlobalGroupTwo = 2,
	EButtonClickGroupEnum__GlobalGroupThere = 3,
	EButtonClickGroupEnum__GlobalGroupFour = 4,
	EButtonClickGroupEnum__GlobalGroupFive = 5,
	EButtonClickGroupEnum__ModuleGroupOne = 6,
	EButtonClickGroupEnum__ModuleGroupTwo = 7,
	EButtonClickGroupEnum__ModuleGroupThere = 8,
	EButtonClickGroupEnum__ModuleGroupFour = 9,
	EButtonClickGroupEnum__ModuleGroupFive = 10,
	EButtonClickGroupEnum__EButtonClickGroupEnum_MAX = 11
};



enum class EVirtualKeyboardType : uint8_t
{
	EVirtualKeyboardType__Default  = 0,
	EVirtualKeyboardType__Number   = 1,
	EVirtualKeyboardType__Web      = 2,
	EVirtualKeyboardType__Email    = 3,
	EVirtualKeyboardType__Password = 4,
	EVirtualKeyboardType__AlphaNumeric = 5,
	EVirtualKeyboardType__EVirtualKeyboardType_MAX = 6
};



enum class EAutoScrollType : uint8_t
{
	EAutoScrollType__LeftRight     = 0,
	EAutoScrollType__PingPong      = 1,
	EAutoScrollType__EAutoScrollType_MAX = 2
};



enum class EUMGSequencePlayMode : uint8_t
{
	EUMGSequencePlayMode__Forward  = 0,
	EUMGSequencePlayMode__Reverse  = 1,
	EUMGSequencePlayMode__PingPong = 2,
	EUMGSequencePlayMode__EUMGSequencePlayMode_MAX = 3
};



enum class EWidgetTickFrequency : uint8_t
{
	EWidgetTickFrequency__Never    = 0,
	EWidgetTickFrequency__Auto     = 1,
	EWidgetTickFrequency__EWidgetTickFrequency_MAX = 2
};



enum class EDragPivot : uint8_t
{
	EDragPivot__MouseDown          = 0,
	EDragPivot__TopLeft            = 1,
	EDragPivot__TopCenter          = 2,
	EDragPivot__TopRight           = 3,
	EDragPivot__CenterLeft         = 4,
	EDragPivot__CenterCenter       = 5,
	EDragPivot__CenterRight        = 6,
	EDragPivot__BottomLeft         = 7,
	EDragPivot__BottomCenter       = 8,
	EDragPivot__BottomRight        = 9,
	EDragPivot__EDragPivot_MAX     = 10
};



enum class ESlateSizeRule : uint8_t
{
	ESlateSizeRule__Automatic      = 0,
	ESlateSizeRule__Fill           = 1,
	ESlateSizeRule__ESlateSizeRule_MAX = 2
};



enum class EWidgetDesignFlags : uint8_t
{
	EWidgetDesignFlags__None       = 0,
	EWidgetDesignFlags__Designing  = 1,
	EWidgetDesignFlags__ShowOutline = 2,
	EWidgetDesignFlags__ExecutePreConstruct = 3,
	EWidgetDesignFlags__SimluateIphoneXNotch = 4,
	EWidgetDesignFlags__EWidgetDesignFlags_MAX = 5
};



enum class EBindingKind : uint8_t
{
	EBindingKind__Function         = 0,
	EBindingKind__Property         = 1,
	EBindingKind__EBindingKind_MAX = 2
};



enum class EWidgetGeometryMode : uint8_t
{
	EWidgetGeometryMode__Plane     = 0,
	EWidgetGeometryMode__Cylinder  = 1,
	EWidgetGeometryMode__EWidgetGeometryMode_MAX = 2
};



enum class EWidgetBlendMode : uint8_t
{
	EWidgetBlendMode__Opaque       = 0,
	EWidgetBlendMode__Masked       = 1,
	EWidgetBlendMode__Transparent  = 2,
	EWidgetBlendMode__EWidgetBlendMode_MAX = 3
};



enum class EWidgetTimingPolicy : uint8_t
{
	EWidgetTimingPolicy__RealTime  = 0,
	EWidgetTimingPolicy__GameTime  = 1,
	EWidgetTimingPolicy__EWidgetTimingPolicy_MAX = 2
};



enum class EWidgetSpace : uint8_t
{
	EWidgetSpace__World            = 0,
	EWidgetSpace__Screen           = 1,
	EWidgetSpace__EWidgetSpace_MAX = 2
};



enum class EWidgetInteractionSource : uint8_t
{
	EWidgetInteractionSource__World = 0,
	EWidgetInteractionSource__Mouse = 1,
	EWidgetInteractionSource__CenterScreen = 2,
	EWidgetInteractionSource__Custom = 3,
	EWidgetInteractionSource__EWidgetInteractionSource_MAX = 4
};









struct FWidgetTransform
{
	struct FVector2D                                   Translation;                                              
	struct FVector2D                                   Scale;                                                    
	struct FVector2D                                   Shear;                                                    
	float                                              Angle;                                                    
};



struct FEventReply
{
	unsigned char                                      UnknownData00[0xB8];                                      
};



struct FNamedSlotBinding
{
	struct FName                                       Name;                                                     
	class UWidget*                                     Content;                                                  
};



struct FPaintContext
{
	unsigned char                                      UnknownData00[0x30];                                      
};



struct FSlateChildSize
{
	float                                              Value;                                                    
	TEnumAsByte<ESlateSizeRule>                        SizeRule;                                                 
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FPropertyPathSegment
{
	struct FName                                       Name;                                                     
	int                                                ArrayIndex;                                               
	unsigned char                                      UnknownData00[0x4];                                       
	class UStruct*                                     Struct;                                                   
	class UField*                                      Field;                                                    
};



struct FDynamicPropertyPath
{
	TArray<struct FPropertyPathSegment>                Segments;                                                 
};



struct FDelegateRuntimeBinding
{
	struct FString                                     ObjectName;                                               
	struct FName                                       PropertyName;                                             
	struct FName                                       FunctionName;                                             
	struct FDynamicPropertyPath                        SourcePath;                                               
	EBindingKind                                       Kind;                                                     
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FShapedTextOptions
{
	unsigned char                                      bOverride_TextShapingMethod : 1;                          
	unsigned char                                      bOverride_TextFlowDirection : 1;                          
	ETextShapingMethod                                 TextShapingMethod;                                        
	ETextFlowDirection                                 TextFlowDirection;                                        
	unsigned char                                      UnknownData00[0x1];                                       
};



struct FAnchorData
{
	struct FMargin                                     Offsets;                                                  
	struct FAnchors                                    Anchors;                                                  
	struct FVector2D                                   Alignment;                                                
};



struct FSlateMeshVertex
{
	struct FVector2D                                   Position;                                                 
	struct FColor                                      Color;                                                    
	struct FVector2D                                   UV0;                                                      
	struct FVector2D                                   UV1;                                                      
	struct FVector2D                                   UV2;                                                      
	struct FVector2D                                   UV3;                                                      
	struct FVector2D                                   UV4;                                                      
	struct FVector2D                                   UV5;                                                      
};



struct FWidgetAnimationBinding
{
	struct FName                                       WidgetName;                                               
	struct FName                                       SlotWidgetName;                                           
	struct FGuid                                       AnimationGuid;                                            
	bool                                               bIsRootWidget;                                            
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FWidgetNavigationData
{
	EUINavigationRule                                  Rule;                                                     
	unsigned char                                      UnknownData00[0x7];                                       
	struct FName                                       WidgetToFocus;                                            
	TWeakObjectPtr<class UWidget>                      Widget;                                                   
};



struct FLazyLoadBinding
{
	struct FString                                     Name;                                                     
	TWeakObjectPtr<class UPanelSlot>                   PanelSlot;                                                
};



struct FMovieScene2DTransformSectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FRichCurve                                  Translation[0x2];                                         
	struct FRichCurve                                  Rotation;                                                 
	struct FRichCurve                                  Scale[0x2];                                               
	struct FRichCurve                                  Shear[0x2];                                               
	EMovieSceneBlendType                               BlendType;                                                
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FMovieSceneMarginSectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FRichCurve                                  TopCurve;                                                 
	struct FRichCurve                                  LeftCurve;                                                
	struct FRichCurve                                  RightCurve;                                               
	struct FRichCurve                                  BottomCurve;                                              
	EMovieSceneBlendType                               BlendType;                                                
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FMovieSceneWAnimTimeSectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FRichCurve                                  PlayTimeCurve_2;                                          
	struct FRichCurve                                  PlayTimeCurve_3;                                          
	struct FRichCurve                                  PlayTimeCurve_4;                                          
	struct FRichCurve                                  PlayTimeCurve_5;                                          
	EMovieSceneBlendType                               BlendType;                                                
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FMovieSceneWidgetMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
	TArray<struct FName>                               BrushPropertyNamePath;                                    
};

}

