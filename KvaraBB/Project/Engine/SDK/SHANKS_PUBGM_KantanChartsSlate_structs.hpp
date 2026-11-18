#pragma once


 
namespace SDK
{





enum class EChartAxisPosition : uint8_t
{
	EChartAxisPosition__LeftBottom = 0,
	EChartAxisPosition__RightTop   = 1,
	EChartAxisPosition__Floating   = 2,
	EChartAxisPosition__EChartAxisPosition_MAX = 3
};



enum class EKantanDataPointSize : uint8_t
{
	EKantanDataPointSize__Small    = 0,
	EKantanDataPointSize__Medium   = 1,
	EKantanDataPointSize__Large    = 2,
	EKantanDataPointSize__EKantanDataPointSize_MAX = 3
};



enum class ECartesianRangeBoundType : uint8_t
{
	ECartesianRangeBoundType__FixedValue = 0,
	ECartesianRangeBoundType__FitToData = 1,
	ECartesianRangeBoundType__FitToDataRounded = 2,
	ECartesianRangeBoundType__ECartesianRangeBoundType_MAX = 3
};



enum class ECartesianScalingType : uint8_t
{
	ECartesianScalingType__FixedScale = 0,
	ECartesianScalingType__FixedRange = 1,
	ECartesianScalingType__ECartesianScalingType_MAX = 2
};



enum class EKantanBarValueExtents : uint8_t
{
	EKantanBarValueExtents__NoValueLines = 0,
	EKantanBarValueExtents__ZeroLineOnly = 1,
	EKantanBarValueExtents__ZeroAndMaxLines = 2,
	EKantanBarValueExtents__EKantanBarValueExtents_MAX = 3
};



enum class EKantanBarLabelPosition : uint8_t
{
	EKantanBarLabelPosition__NoLabels = 0,
	EKantanBarLabelPosition__Standard = 1,
	EKantanBarLabelPosition__Overlaid = 2,
	EKantanBarLabelPosition__EKantanBarLabelPosition_MAX = 3
};



enum class EKantanBarChartOrientation : uint8_t
{
	EKantanBarChartOrientation__Vertical = 0,
	EKantanBarChartOrientation__Horizontal = 1,
	EKantanBarChartOrientation__EKantanBarChartOrientation_MAX = 2
};









struct FKantanChartStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Background;                                               
	struct FLinearColor                                ChartLineColor;                                           
	float                                              ChartLineThickness;                                       
	unsigned char                                      UnknownData00[0x4];                                       
	struct FSlateFontInfo                              BaseFont;                                                 
	int                                                TitleFontSize;                                            
	int                                                AxisDescriptionFontSize;                                  
	int                                                AxisValueFontSize;                                        
	struct FLinearColor                                FontColor;                                                
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FKantanBarChartStyle : public FKantanChartStyle
{
	float                                              BarOpacity;                                               
	float                                              BarOutlineOpacity;                                        
	float                                              BarOutlineThickness;                                      
};



struct FKantanCartesianChartStyle : public FKantanChartStyle
{
	float                                              DataOpacity;                                              
	float                                              DataLineThickness;                                        
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FKantanCategoryStyle
{
	struct FName                                       CategoryStyleId;                                          
	struct FLinearColor                                Color;                                                    
};



struct FKantanSeriesStyle
{
	struct FName                                       StyleID;                                                  
	class UKantanPointStyle*                           PointStyle;                                               
	struct FLinearColor                                Color;                                                    
};



struct FCartesianAxisInstanceConfig
{
	bool                                               bEnabled;                                                 
	bool                                               bShowTitle;                                               
	bool                                               bShowMarkers;                                             
	bool                                               bShowLabels;                                              
};



struct FCartesianAxisConfig
{
	struct FText                                       Title;                                                    
	struct FText                                       Unit;                                                     
	float                                              MarkerSpacing;                                            
	int                                                MaxValueDigits;                                           
	struct FCartesianAxisInstanceConfig                LeftBottomAxis;                                           
	struct FCartesianAxisInstanceConfig                RightTopAxis;                                             
	struct FCartesianAxisInstanceConfig                FloatingAxis;                                             
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FCartesianRangeBound
{
	ECartesianRangeBoundType                           Type;                                                     
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              FixedBoundValue;                                          
};



struct FCartesianAxisRange
{
	float                                              Min;                                                      
	float                                              Max;                                                      
};



struct FKantanCartesianPlotScale
{
	ECartesianScalingType                              Type;                                                     
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector2D                                   Scale;                                                    
	struct FVector2D                                   FocalCoordinates;                                         
	struct FCartesianAxisRange                         RangeX;                                                   
	struct FCartesianAxisRange                         RangeY;                                                   
};

}

