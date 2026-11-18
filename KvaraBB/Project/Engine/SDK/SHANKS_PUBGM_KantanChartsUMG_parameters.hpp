#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UKantanChart_SetUpdateTickRate_Params
{
	float                                              InRate;                                                   
};


struct UKantanChart_SetMargins_Params
{
	struct FMargin                                     InMargins;                                                
};


struct UKantanChart_SetChartTitlePadding_Params
{
	struct FMargin                                     InPadding;                                                
};


struct UKantanChart_SetChartTitle_Params
{
	struct FText                                       InTitle;                                                  
};


struct UKantanCategoryChart_AddCategoryStyleOverride_Params
{
	struct FName                                       CategoryId;                                               
	struct FLinearColor                                Color;                                                    
};


struct UKantanBarChartBase_SetValueAxisConfig_Params
{
	struct FCartesianAxisConfig                        InCfg;                                                    
};


struct UKantanBarChartBase_SetOrientation_Params
{
	EKantanBarChartOrientation                         InOrientation;                                            
};


struct UKantanBarChartBase_SetMaxBarValue_Params
{
	float                                              InMaxValue;                                               
};


struct UKantanBarChartBase_SetLabelPosition_Params
{
	EKantanBarLabelPosition                            InPosition;                                               
};


struct UKantanBarChartBase_SetExtentsDisplay_Params
{
	EKantanBarValueExtents                             InExtents;                                                
};


struct UKantanBarChartBase_SetBarToGapRatio_Params
{
	float                                              InRatio;                                                  
};


struct UBarChart_SetDatasource_Params
{
	class UObject*                                     InDatasource;                                             
	bool                                               ReturnValue;                                              
};


struct UKantanCartesianChartBase_SetYAxisConfig_Params
{
	struct FCartesianAxisConfig                        InCfg;                                                    
};


struct UKantanCartesianChartBase_SetXAxisConfig_Params
{
	struct FCartesianAxisConfig                        InCfg;                                                    
};


struct UKantanCartesianChartBase_SetPlotScaleByRange_Params
{
	struct FCartesianAxisRange                         InRangeX;                                                 
	struct FCartesianAxisRange                         InRangeY;                                                 
};


struct UKantanCartesianChartBase_SetPlotScale_Params
{
	struct FVector2D                                   InScale;                                                  
	struct FVector2D                                   InFocalCoords;                                            
};


struct UKantanCartesianChartBase_SetDataPointSize_Params
{
	TEnumAsByte<EKantanDataPointSize>                  InSize;                                                   
};


struct UKantanCartesianChartBase_SetAxisTitlePadding_Params
{
	struct FMargin                                     InPadding;                                                
};


struct UKantanCartesianChartBase_EnableSeries_Params
{
	struct FName                                       ID;                                                       
	bool                                               bEnable;                                                  
};


struct UKantanCartesianChartBase_ConfigureSeries_Params
{
	struct FName                                       ID;                                                       
	bool                                               bDrawPoints;                                              
	bool                                               bDrawLines;                                               
};


struct UKantanCartesianChartBase_AddSeriesStyleOverride_Params
{
	struct FName                                       SeriesId;                                                 
	class UKantanPointStyle*                           PointStyle;                                               
	struct FLinearColor                                Color;                                                    
};


struct UCartesianPlot_SetDatasource_Params
{
	class UObject*                                     InDatasource;                                             
	bool                                               ReturnValue;                                              
};


struct UKantanChartLegend_SetSeriesPadding_Params
{
	struct FMargin                                     InPadding;                                                
};


struct UKantanChartLegend_SetMargins_Params
{
	struct FMargin                                     InMargins;                                                
};


struct UKantanChartLegend_SetFontSize_Params
{
	int                                                InFontSize;                                               
};


struct UKantanChartLegend_SetChart_Params
{
	class UKantanCartesianChartBase*                   InChart;                                                  
};


struct UKantanChartLegend_SetBackground_Params
{
	struct FSlateBrush                                 InBrush;                                                  
};


struct USimpleBarChart_BP_UpdateCategoryValue_Params
{
	struct FName                                       ID;                                                       
	float                                              Value;                                                    
	bool                                               bSuccess;                                                 
};


struct USimpleBarChart_BP_RemoveCategory_Params
{
	struct FName                                       ID;                                                       
	bool                                               bSuccess;                                                 
};


struct USimpleBarChart_BP_RemoveAllCategories_Params
{
};


struct USimpleBarChart_BP_AddCategoryWithId_Params
{
	struct FName                                       ID;                                                       
	struct FText                                       Name;                                                     
	bool                                               bSuccess;                                                 
};


struct USimpleBarChart_BP_AddCategory_Params
{
	struct FText                                       Name;                                                     
	struct FName                                       CatId;                                                    
};


struct USimpleCartesianPlot_BP_RemoveSeries_Params
{
	struct FName                                       ID;                                                       
	bool                                               bSuccess;                                                 
};


struct USimpleCartesianPlot_BP_RemoveAllSeries_Params
{
};


struct USimpleCartesianPlot_BP_AddSeriesWithId_Params
{
	bool                                               bSuccess;                                                 
	struct FName                                       ID;                                                       
	struct FText                                       Name;                                                     
	bool                                               bEnabled;                                                 
	bool                                               bShowPoints;                                              
	bool                                               bShowLines;                                               
};


struct USimpleCartesianPlot_BP_AddSeries_Params
{
	struct FName                                       SeriesId;                                                 
	struct FText                                       Name;                                                     
	bool                                               bEnabled;                                                 
	bool                                               bShowPoints;                                              
	bool                                               bShowLines;                                               
};


struct USimpleCartesianPlot_BP_AddDatapoint_Params
{
	struct FName                                       SeriesId;                                                 
	struct FVector2D                                   Point;                                                    
	bool                                               bSuccess;                                                 
};


struct USimpleTimeSeriesPlot_BP_RemoveSeries_Params
{
	struct FName                                       ID;                                                       
	bool                                               bSuccess;                                                 
};


struct USimpleTimeSeriesPlot_BP_RemoveAllSeries_Params
{
};


struct USimpleTimeSeriesPlot_BP_AddSeriesWithId_Params
{
	bool                                               bSuccess;                                                 
	struct FName                                       ID;                                                       
	struct FText                                       Name;                                                     
	bool                                               bEnabled;                                                 
	bool                                               bShowPoints;                                              
	bool                                               bShowLines;                                               
};


struct USimpleTimeSeriesPlot_BP_AddSeries_Params
{
	struct FName                                       SeriesId;                                                 
	struct FText                                       Name;                                                     
	bool                                               bEnabled;                                                 
	bool                                               bShowPoints;                                              
	bool                                               bShowLines;                                               
};


struct USimpleTimeSeriesPlot_BP_AddDatapointNow_Params
{
	struct FName                                       SeriesId;                                                 
	float                                              Value;                                                    
	bool                                               bSuccess;                                                 
};


struct USimpleTimeSeriesPlot_BP_AddDatapoint_Params
{
	struct FName                                       SeriesId;                                                 
	struct FVector2D                                   Point;                                                    
	bool                                               bSuccess;                                                 
};


struct UTimeSeriesPlot_SetDatasource_Params
{
	class UObject*                                     InDatasource;                                             
	bool                                               ReturnValue;                                              
};

}

