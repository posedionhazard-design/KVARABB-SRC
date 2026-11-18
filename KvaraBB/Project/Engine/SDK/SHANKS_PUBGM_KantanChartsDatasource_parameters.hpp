#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UKantanCartesianDatasourceInterface_GetSeriesName_Params
{
	int                                                SeriesIdx;                                                
	struct FText                                       ReturnValue;                                              
};


struct UKantanCartesianDatasourceInterface_GetSeriesId_Params
{
	int                                                CatIdx;                                                   
	struct FName                                       ReturnValue;                                              
};


struct UKantanCartesianDatasourceInterface_GetSeriesDatapoints_Params
{
	int                                                SeriesIdx;                                                
	TArray<struct FKantanCartesianDatapoint>           ReturnValue;                                              
};


struct UKantanCartesianDatasourceInterface_GetNumSeries_Params
{
	int                                                ReturnValue;                                              
};


struct UKantanCategoryDatasourceInterface_GetNumCategories_Params
{
	int                                                ReturnValue;                                              
};


struct UKantanCategoryDatasourceInterface_GetCategoryValue_Params
{
	int                                                CatIdx;                                                   
	float                                              ReturnValue;                                              
};


struct UKantanCategoryDatasourceInterface_GetCategoryName_Params
{
	int                                                CatIdx;                                                   
	struct FText                                       ReturnValue;                                              
};


struct UKantanCategoryDatasourceInterface_GetCategoryId_Params
{
	int                                                CatIdx;                                                   
	struct FName                                       ReturnValue;                                              
};


struct UKantanSimpleCartesianDatasource_NewSimpleCartesianDatasource_Params
{
	class UKantanSimpleCartesianDatasource*            ReturnValue;                                              
};


struct UKantanSimpleCartesianDatasource_BP_RemoveSeries_Params
{
	struct FName                                       ID;                                                       
	bool                                               bSuccess;                                                 
};


struct UKantanSimpleCartesianDatasource_BP_RemoveAllSeries_Params
{
};


struct UKantanSimpleCartesianDatasource_BP_AddSeriesWithId_Params
{
	struct FName                                       ID;                                                       
	struct FText                                       Name;                                                     
	bool                                               bSuccess;                                                 
};


struct UKantanSimpleCartesianDatasource_BP_AddSeries_Params
{
	struct FText                                       Name;                                                     
	struct FName                                       SeriesId;                                                 
};


struct UKantanSimpleCartesianDatasource_BP_AddDatapoint_Params
{
	struct FName                                       SeriesId;                                                 
	struct FVector2D                                   Point;                                                    
	bool                                               bSuccess;                                                 
};


struct UKantanSimpleCategoryDatasource_NewSimpleCategoryDatasource_Params
{
	class UKantanSimpleCategoryDatasource*             ReturnValue;                                              
};


struct UKantanSimpleCategoryDatasource_BP_UpdateCategoryValue_Params
{
	struct FName                                       ID;                                                       
	float                                              Value;                                                    
	bool                                               bSuccess;                                                 
};


struct UKantanSimpleCategoryDatasource_BP_RemoveCategory_Params
{
	struct FName                                       ID;                                                       
	bool                                               bSuccess;                                                 
};


struct UKantanSimpleCategoryDatasource_BP_RemoveAllCategories_Params
{
};


struct UKantanSimpleCategoryDatasource_BP_AddCategoryWithId_Params
{
	struct FName                                       ID;                                                       
	struct FText                                       Name;                                                     
	bool                                               bSuccess;                                                 
};


struct UKantanSimpleCategoryDatasource_BP_AddCategory_Params
{
	struct FText                                       Name;                                                     
	struct FName                                       CatId;                                                    
};

}

