#pragma once


 
namespace SDK
{






class UKantanCartesianDatasourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsDatasource.KantanCartesianDatasourceInterface");
		return pStaticClass;
	}


	struct FText GetSeriesName(int SeriesIdx);
	struct FName GetSeriesId(int CatIdx);
	TArray<struct FKantanCartesianDatapoint> GetSeriesDatapoints(int SeriesIdx);
	int GetNumSeries();
};




class UKantanCategoryDatasourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsDatasource.KantanCategoryDatasourceInterface");
		return pStaticClass;
	}


	int GetNumCategories();
	float GetCategoryValue(int CatIdx);
	struct FText GetCategoryName(int CatIdx);
	struct FName GetCategoryId(int CatIdx);
};




class UKantanSimpleCartesianDatasource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsDatasource.KantanSimpleCartesianDatasource");
		return pStaticClass;
	}


	static class UKantanSimpleCartesianDatasource* NewSimpleCartesianDatasource();
	void BP_RemoveSeries(const struct FName& ID, bool* bSuccess);
	void BP_RemoveAllSeries();
	void BP_AddSeriesWithId(const struct FName& ID, const struct FText& Name, bool* bSuccess);
	void BP_AddSeries(const struct FText& Name, struct FName* SeriesId);
	void BP_AddDatapoint(const struct FName& SeriesId, const struct FVector2D& Point, bool* bSuccess);
};




class UKantanSimpleCategoryDatasource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class KantanChartsDatasource.KantanSimpleCategoryDatasource");
		return pStaticClass;
	}


	static class UKantanSimpleCategoryDatasource* NewSimpleCategoryDatasource();
	void BP_UpdateCategoryValue(const struct FName& ID, float Value, bool* bSuccess);
	void BP_RemoveCategory(const struct FName& ID, bool* bSuccess);
	void BP_RemoveAllCategories();
	void BP_AddCategoryWithId(const struct FName& ID, const struct FText& Name, bool* bSuccess);
	void BP_AddCategory(const struct FText& Name, struct FName* CatId);
};


}

