#pragma once


 
namespace SDK
{






class UKantanChart : public UWidget
{
public:
	struct FMargin                                     Margins;                                                  
	struct FText                                       ChartTitle;                                               
	struct FMargin                                     TitlePadding;                                             
	float                                              UpdateTickRate;                                           
	unsigned char                                      UnknownData00[0x14];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsUMG.KantanChart");
		return pStaticClass;
	}


	void SetUpdateTickRate(float InRate);
	void SetMargins(const struct FMargin& InMargins);
	void SetChartTitlePadding(const struct FMargin& InPadding);
	void SetChartTitle(const struct FText& InTitle);
};




class UKantanCategoryChart : public UKantanChart
{
public:
	bool                                               bAutoPerCategoryStyles;                                   
	unsigned char                                      UnknownData00[0x7];                                       
	class UKantanCategoryStyleSet*                     CategoryStyleSet;                                         
	TArray<struct FCategoryStyleManualMapping>         ManualStyleMappings;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsUMG.KantanCategoryChart");
		return pStaticClass;
	}


	void AddCategoryStyleOverride(const struct FName& CategoryId, const struct FLinearColor& Color);
};




class UKantanBarChartBase : public UKantanCategoryChart
{
public:
	struct FKantanBarChartStyle                        WidgetStyle;                                              
	EKantanBarChartOrientation                         Orientation;                                              
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              MaxBarValue;                                              
	EKantanBarLabelPosition                            LabelPosition;                                            
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              BarToGapRatio;                                            
	EKantanBarValueExtents                             ValueExtentsDisplay;                                      
	unsigned char                                      UnknownData02[0x7];                                       
	struct FCartesianAxisConfig                        ValueAxisCfg;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsUMG.KantanBarChartBase");
		return pStaticClass;
	}


	void SetValueAxisConfig(const struct FCartesianAxisConfig& InCfg);
	void SetOrientation(EKantanBarChartOrientation InOrientation);
	void SetMaxBarValue(float InMaxValue);
	void SetLabelPosition(EKantanBarLabelPosition InPosition);
	void SetExtentsDisplay(EKantanBarValueExtents InExtents);
	void SetBarToGapRatio(float InRatio);
};




class UBarChart : public UKantanBarChartBase
{
public:
	class UObject*                                     DataSource;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsUMG.BarChart");
		return pStaticClass;
	}


	bool SetDatasource(class UObject* InDatasource);
};




class UKantanCartesianChartBase : public UKantanChart
{
public:
	struct FKantanCartesianChartStyle                  WidgetStyle;                                              
	struct FKantanCartesianPlotScale                   PlotScale;                                                
	TEnumAsByte<EKantanDataPointSize>                  DataPointSize;                                            
	unsigned char                                      UnknownData00[0x3];                                       
	struct FCartesianAxisConfig                        XAxisCfg;                                                 
	struct FCartesianAxisConfig                        YAxisCfg;                                                 
	struct FMargin                                     AxisTitlePadding;                                         
	class UKantanSeriesStyleSet*                       SeriesStyleSet;                                           
	TArray<struct FSeriesStyleManualMapping>           ManualStyleMappings;                                      
	bool                                               bAntiAlias;                                               
	unsigned char                                      UnknownData01[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsUMG.KantanCartesianChartBase");
		return pStaticClass;
	}


	void SetYAxisConfig(const struct FCartesianAxisConfig& InCfg);
	void SetXAxisConfig(const struct FCartesianAxisConfig& InCfg);
	void SetPlotScaleByRange(const struct FCartesianAxisRange& InRangeX, const struct FCartesianAxisRange& InRangeY);
	void SetPlotScale(const struct FVector2D& InScale, const struct FVector2D& InFocalCoords);
	void SetDataPointSize(TEnumAsByte<EKantanDataPointSize> InSize);
	void SetAxisTitlePadding(const struct FMargin& InPadding);
	void EnableSeries(const struct FName& ID, bool bEnable);
	void ConfigureSeries(const struct FName& ID, bool bDrawPoints, bool bDrawLines);
	void AddSeriesStyleOverride(const struct FName& SeriesId, class UKantanPointStyle* PointStyle, const struct FLinearColor& Color);
};




class UKantanCartesianPlotBase : public UKantanCartesianChartBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsUMG.KantanCartesianPlotBase");
		return pStaticClass;
	}

};




class UCartesianPlot : public UKantanCartesianPlotBase
{
public:
	class UObject*                                     DataSource;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsUMG.CartesianPlot");
		return pStaticClass;
	}


	bool SetDatasource(class UObject* InDatasource);
};




class UKantanChartLegend : public UWidget
{
public:
	struct FMargin                                     Margins;                                                  
	struct FMargin                                     SeriesPadding;                                            
	struct FSlateBrush                                 Background;                                               
	int                                                FontSize;                                                 
	TWeakObjectPtr<class UKantanCartesianChartBase>    Chart;                                                    
	unsigned char                                      UnknownData00[0x14];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsUMG.KantanChartLegend");
		return pStaticClass;
	}


	void SetSeriesPadding(const struct FMargin& InPadding);
	void SetMargins(const struct FMargin& InMargins);
	void SetFontSize(int InFontSize);
	void SetChart(class UKantanCartesianChartBase* InChart);
	void SetBackground(const struct FSlateBrush& InBrush);
};




class UKantanTimeSeriesPlotBase : public UKantanCartesianChartBase
{
public:
	struct FCartesianRangeBound                        LowerTimeBound;                                           
	struct FCartesianRangeBound                        UpperTimeBound;                                           
	struct FCartesianRangeBound                        LowerValueBound;                                          
	struct FCartesianRangeBound                        UpperValueBound;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsUMG.KantanTimeSeriesPlotBase");
		return pStaticClass;
	}

};




class USimpleBarChart : public UKantanBarChartBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsUMG.SimpleBarChart");
		return pStaticClass;
	}


	void BP_UpdateCategoryValue(const struct FName& ID, float Value, bool* bSuccess);
	void BP_RemoveCategory(const struct FName& ID, bool* bSuccess);
	void BP_RemoveAllCategories();
	void BP_AddCategoryWithId(const struct FName& ID, const struct FText& Name, bool* bSuccess);
	void BP_AddCategory(const struct FText& Name, struct FName* CatId);
};




class USimpleCartesianPlot : public UKantanCartesianPlotBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsUMG.SimpleCartesianPlot");
		return pStaticClass;
	}


	void BP_RemoveSeries(const struct FName& ID, bool* bSuccess);
	void BP_RemoveAllSeries();
	void BP_AddSeriesWithId(const struct FName& ID, const struct FText& Name, bool bEnabled, bool bShowPoints, bool bShowLines, bool* bSuccess);
	void BP_AddSeries(const struct FText& Name, bool bEnabled, bool bShowPoints, bool bShowLines, struct FName* SeriesId);
	void BP_AddDatapoint(const struct FName& SeriesId, const struct FVector2D& Point, bool* bSuccess);
};




class USimpleTimeSeriesPlot : public UKantanTimeSeriesPlotBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsUMG.SimpleTimeSeriesPlot");
		return pStaticClass;
	}


	void BP_RemoveSeries(const struct FName& ID, bool* bSuccess);
	void BP_RemoveAllSeries();
	void BP_AddSeriesWithId(const struct FName& ID, const struct FText& Name, bool bEnabled, bool bShowPoints, bool bShowLines, bool* bSuccess);
	void BP_AddSeries(const struct FText& Name, bool bEnabled, bool bShowPoints, bool bShowLines, struct FName* SeriesId);
	void BP_AddDatapointNow(const struct FName& SeriesId, float Value, bool* bSuccess);
	void BP_AddDatapoint(const struct FName& SeriesId, const struct FVector2D& Point, bool* bSuccess);
};




class UTimeSeriesPlot : public UKantanTimeSeriesPlotBase
{
public:
	class UObject*                                     DataSource;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsUMG.TimeSeriesPlot");
		return pStaticClass;
	}


	bool SetDatasource(class UObject* InDatasource);
};


}

