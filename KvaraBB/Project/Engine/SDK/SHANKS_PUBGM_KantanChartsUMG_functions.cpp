
 
#include "../SDK.hpp"

namespace SDK
{









void UKantanChart::SetUpdateTickRate(float InRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanChart.SetUpdateTickRate");

	UKantanChart_SetUpdateTickRate_Params params;
	params.InRate = InRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UKantanChart::SetMargins(const struct FMargin& InMargins)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanChart.SetMargins");

	UKantanChart_SetMargins_Params params;
	params.InMargins = InMargins;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UKantanChart::SetChartTitlePadding(const struct FMargin& InPadding)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanChart.SetChartTitlePadding");

	UKantanChart_SetChartTitlePadding_Params params;
	params.InPadding = InPadding;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UKantanChart::SetChartTitle(const struct FText& InTitle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanChart.SetChartTitle");

	UKantanChart_SetChartTitle_Params params;
	params.InTitle = InTitle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UKantanCategoryChart::AddCategoryStyleOverride(const struct FName& CategoryId, const struct FLinearColor& Color)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanCategoryChart.AddCategoryStyleOverride");

	UKantanCategoryChart_AddCategoryStyleOverride_Params params;
	params.CategoryId = CategoryId;
	params.Color = Color;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UKantanBarChartBase::SetValueAxisConfig(const struct FCartesianAxisConfig& InCfg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanBarChartBase.SetValueAxisConfig");

	UKantanBarChartBase_SetValueAxisConfig_Params params;
	params.InCfg = InCfg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UKantanBarChartBase::SetOrientation(EKantanBarChartOrientation InOrientation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanBarChartBase.SetOrientation");

	UKantanBarChartBase_SetOrientation_Params params;
	params.InOrientation = InOrientation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UKantanBarChartBase::SetMaxBarValue(float InMaxValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanBarChartBase.SetMaxBarValue");

	UKantanBarChartBase_SetMaxBarValue_Params params;
	params.InMaxValue = InMaxValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UKantanBarChartBase::SetLabelPosition(EKantanBarLabelPosition InPosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanBarChartBase.SetLabelPosition");

	UKantanBarChartBase_SetLabelPosition_Params params;
	params.InPosition = InPosition;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UKantanBarChartBase::SetExtentsDisplay(EKantanBarValueExtents InExtents)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanBarChartBase.SetExtentsDisplay");

	UKantanBarChartBase_SetExtentsDisplay_Params params;
	params.InExtents = InExtents;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UKantanBarChartBase::SetBarToGapRatio(float InRatio)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanBarChartBase.SetBarToGapRatio");

	UKantanBarChartBase_SetBarToGapRatio_Params params;
	params.InRatio = InRatio;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UBarChart::SetDatasource(class UObject* InDatasource)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.BarChart.SetDatasource");

	UBarChart_SetDatasource_Params params;
	params.InDatasource = InDatasource;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UKantanCartesianChartBase::SetYAxisConfig(const struct FCartesianAxisConfig& InCfg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanCartesianChartBase.SetYAxisConfig");

	UKantanCartesianChartBase_SetYAxisConfig_Params params;
	params.InCfg = InCfg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UKantanCartesianChartBase::SetXAxisConfig(const struct FCartesianAxisConfig& InCfg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanCartesianChartBase.SetXAxisConfig");

	UKantanCartesianChartBase_SetXAxisConfig_Params params;
	params.InCfg = InCfg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UKantanCartesianChartBase::SetPlotScaleByRange(const struct FCartesianAxisRange& InRangeX, const struct FCartesianAxisRange& InRangeY)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanCartesianChartBase.SetPlotScaleByRange");

	UKantanCartesianChartBase_SetPlotScaleByRange_Params params;
	params.InRangeX = InRangeX;
	params.InRangeY = InRangeY;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UKantanCartesianChartBase::SetPlotScale(const struct FVector2D& InScale, const struct FVector2D& InFocalCoords)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanCartesianChartBase.SetPlotScale");

	UKantanCartesianChartBase_SetPlotScale_Params params;
	params.InScale = InScale;
	params.InFocalCoords = InFocalCoords;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UKantanCartesianChartBase::SetDataPointSize(TEnumAsByte<EKantanDataPointSize> InSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanCartesianChartBase.SetDataPointSize");

	UKantanCartesianChartBase_SetDataPointSize_Params params;
	params.InSize = InSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UKantanCartesianChartBase::SetAxisTitlePadding(const struct FMargin& InPadding)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanCartesianChartBase.SetAxisTitlePadding");

	UKantanCartesianChartBase_SetAxisTitlePadding_Params params;
	params.InPadding = InPadding;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UKantanCartesianChartBase::EnableSeries(const struct FName& ID, bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanCartesianChartBase.EnableSeries");

	UKantanCartesianChartBase_EnableSeries_Params params;
	params.ID = ID;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UKantanCartesianChartBase::ConfigureSeries(const struct FName& ID, bool bDrawPoints, bool bDrawLines)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanCartesianChartBase.ConfigureSeries");

	UKantanCartesianChartBase_ConfigureSeries_Params params;
	params.ID = ID;
	params.bDrawPoints = bDrawPoints;
	params.bDrawLines = bDrawLines;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UKantanCartesianChartBase::AddSeriesStyleOverride(const struct FName& SeriesId, class UKantanPointStyle* PointStyle, const struct FLinearColor& Color)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanCartesianChartBase.AddSeriesStyleOverride");

	UKantanCartesianChartBase_AddSeriesStyleOverride_Params params;
	params.SeriesId = SeriesId;
	params.PointStyle = PointStyle;
	params.Color = Color;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UCartesianPlot::SetDatasource(class UObject* InDatasource)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.CartesianPlot.SetDatasource");

	UCartesianPlot_SetDatasource_Params params;
	params.InDatasource = InDatasource;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UKantanChartLegend::SetSeriesPadding(const struct FMargin& InPadding)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanChartLegend.SetSeriesPadding");

	UKantanChartLegend_SetSeriesPadding_Params params;
	params.InPadding = InPadding;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UKantanChartLegend::SetMargins(const struct FMargin& InMargins)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanChartLegend.SetMargins");

	UKantanChartLegend_SetMargins_Params params;
	params.InMargins = InMargins;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UKantanChartLegend::SetFontSize(int InFontSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanChartLegend.SetFontSize");

	UKantanChartLegend_SetFontSize_Params params;
	params.InFontSize = InFontSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UKantanChartLegend::SetChart(class UKantanCartesianChartBase* InChart)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanChartLegend.SetChart");

	UKantanChartLegend_SetChart_Params params;
	params.InChart = InChart;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UKantanChartLegend::SetBackground(const struct FSlateBrush& InBrush)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.KantanChartLegend.SetBackground");

	UKantanChartLegend_SetBackground_Params params;
	params.InBrush = InBrush;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void USimpleBarChart::BP_UpdateCategoryValue(const struct FName& ID, float Value, bool* bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleBarChart.BP_UpdateCategoryValue");

	USimpleBarChart_BP_UpdateCategoryValue_Params params;
	params.ID = ID;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}








void USimpleBarChart::BP_RemoveCategory(const struct FName& ID, bool* bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleBarChart.BP_RemoveCategory");

	USimpleBarChart_BP_RemoveCategory_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}





void USimpleBarChart::BP_RemoveAllCategories()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleBarChart.BP_RemoveAllCategories");

	USimpleBarChart_BP_RemoveAllCategories_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void USimpleBarChart::BP_AddCategoryWithId(const struct FName& ID, const struct FText& Name, bool* bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleBarChart.BP_AddCategoryWithId");

	USimpleBarChart_BP_AddCategoryWithId_Params params;
	params.ID = ID;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}








void USimpleBarChart::BP_AddCategory(const struct FText& Name, struct FName* CatId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleBarChart.BP_AddCategory");

	USimpleBarChart_BP_AddCategory_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (CatId != nullptr)
		*CatId = params.CatId;
}








void USimpleCartesianPlot::BP_RemoveSeries(const struct FName& ID, bool* bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleCartesianPlot.BP_RemoveSeries");

	USimpleCartesianPlot_BP_RemoveSeries_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}





void USimpleCartesianPlot::BP_RemoveAllSeries()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleCartesianPlot.BP_RemoveAllSeries");

	USimpleCartesianPlot_BP_RemoveAllSeries_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}












void USimpleCartesianPlot::BP_AddSeriesWithId(const struct FName& ID, const struct FText& Name, bool bEnabled, bool bShowPoints, bool bShowLines, bool* bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleCartesianPlot.BP_AddSeriesWithId");

	USimpleCartesianPlot_BP_AddSeriesWithId_Params params;
	params.ID = ID;
	params.Name = Name;
	params.bEnabled = bEnabled;
	params.bShowPoints = bShowPoints;
	params.bShowLines = bShowLines;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}











void USimpleCartesianPlot::BP_AddSeries(const struct FText& Name, bool bEnabled, bool bShowPoints, bool bShowLines, struct FName* SeriesId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleCartesianPlot.BP_AddSeries");

	USimpleCartesianPlot_BP_AddSeries_Params params;
	params.Name = Name;
	params.bEnabled = bEnabled;
	params.bShowPoints = bShowPoints;
	params.bShowLines = bShowLines;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SeriesId != nullptr)
		*SeriesId = params.SeriesId;
}









void USimpleCartesianPlot::BP_AddDatapoint(const struct FName& SeriesId, const struct FVector2D& Point, bool* bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleCartesianPlot.BP_AddDatapoint");

	USimpleCartesianPlot_BP_AddDatapoint_Params params;
	params.SeriesId = SeriesId;
	params.Point = Point;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}








void USimpleTimeSeriesPlot::BP_RemoveSeries(const struct FName& ID, bool* bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_RemoveSeries");

	USimpleTimeSeriesPlot_BP_RemoveSeries_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}





void USimpleTimeSeriesPlot::BP_RemoveAllSeries()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_RemoveAllSeries");

	USimpleTimeSeriesPlot_BP_RemoveAllSeries_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}












void USimpleTimeSeriesPlot::BP_AddSeriesWithId(const struct FName& ID, const struct FText& Name, bool bEnabled, bool bShowPoints, bool bShowLines, bool* bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_AddSeriesWithId");

	USimpleTimeSeriesPlot_BP_AddSeriesWithId_Params params;
	params.ID = ID;
	params.Name = Name;
	params.bEnabled = bEnabled;
	params.bShowPoints = bShowPoints;
	params.bShowLines = bShowLines;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}











void USimpleTimeSeriesPlot::BP_AddSeries(const struct FText& Name, bool bEnabled, bool bShowPoints, bool bShowLines, struct FName* SeriesId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_AddSeries");

	USimpleTimeSeriesPlot_BP_AddSeries_Params params;
	params.Name = Name;
	params.bEnabled = bEnabled;
	params.bShowPoints = bShowPoints;
	params.bShowLines = bShowLines;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SeriesId != nullptr)
		*SeriesId = params.SeriesId;
}









void USimpleTimeSeriesPlot::BP_AddDatapointNow(const struct FName& SeriesId, float Value, bool* bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_AddDatapointNow");

	USimpleTimeSeriesPlot_BP_AddDatapointNow_Params params;
	params.SeriesId = SeriesId;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}









void USimpleTimeSeriesPlot::BP_AddDatapoint(const struct FName& SeriesId, const struct FVector2D& Point, bool* bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_AddDatapoint");

	USimpleTimeSeriesPlot_BP_AddDatapoint_Params params;
	params.SeriesId = SeriesId;
	params.Point = Point;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}








bool UTimeSeriesPlot::SetDatasource(class UObject* InDatasource)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function KantanChartsUMG.TimeSeriesPlot.SetDatasource");

	UTimeSeriesPlot_SetDatasource_Params params;
	params.InDatasource = InDatasource;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

