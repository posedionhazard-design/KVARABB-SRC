#pragma once


 
namespace SDK
{






class UKantanBarChartWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FKantanBarChartStyle                        ChartStyle;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsSlate.KantanBarChartWidgetStyle");
		return pStaticClass;
	}

};




class UKantanCartesianChartWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FKantanCartesianChartStyle                  ChartStyle;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsSlate.KantanCartesianChartWidgetStyle");
		return pStaticClass;
	}

};




class UKantanCategoryStyleSet : public UDataAsset
{
public:
	TArray<struct FKantanCategoryStyle>                Styles;                                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsSlate.KantanCategoryStyleSet");
		return pStaticClass;
	}

};




class UKantanPointStyle : public UDataAsset
{
public:
	class UTexture2D*                                  DataPointTexture;                                         
	struct FIntPoint                                   PointSizeTextureOffsets[0x3];                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsSlate.KantanPointStyle");
		return pStaticClass;
	}

};




class UKantanSeriesStyleSet : public UDataAsset
{
public:
	TArray<struct FKantanSeriesStyle>                  Styles;                                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsSlate.KantanSeriesStyleSet");
		return pStaticClass;
	}

};


}

