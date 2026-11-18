#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UAssetRegistryHelpers_ToSoftObjectPath_Params
{
	struct FAssetData                                  InAssetData;                                              
	struct FSoftObjectPath                             ReturnValue;                                              
};


struct UAssetRegistryHelpers_SetFilterTagsAndValues_Params
{
	struct FARFilter                                   InFilter;                                                 
	TArray<struct FTagAndValue>                        InTagsAndValues;                                          
	struct FARFilter                                   ReturnValue;                                              
};


struct UAssetRegistryHelpers_IsValid_Params
{
	struct FAssetData                                  InAssetData;                                              
	bool                                               ReturnValue;                                              
};


struct UAssetRegistryHelpers_IsUAsset_Params
{
	struct FAssetData                                  InAssetData;                                              
	bool                                               ReturnValue;                                              
};


struct UAssetRegistryHelpers_IsRedirector_Params
{
	struct FAssetData                                  InAssetData;                                              
	bool                                               ReturnValue;                                              
};


struct UAssetRegistryHelpers_IsAssetLoaded_Params
{
	struct FAssetData                                  InAssetData;                                              
	bool                                               ReturnValue;                                              
};


struct UAssetRegistryHelpers_GetTagValue_Params
{
	struct FAssetData                                  InAssetData;                                              
	struct FName                                       InTagName;                                                
	struct FString                                     OutTagValue;                                              
	bool                                               ReturnValue;                                              
};


struct UAssetRegistryHelpers_GetFullName_Params
{
	struct FAssetData                                  InAssetData;                                              
	struct FString                                     ReturnValue;                                              
};


struct UAssetRegistryHelpers_GetExportTextName_Params
{
	struct FAssetData                                  InAssetData;                                              
	struct FString                                     ReturnValue;                                              
};


struct UAssetRegistryHelpers_GetClass_Params
{
	struct FAssetData                                  InAssetData;                                              
	class UClass*                                      ReturnValue;                                              
};


struct UAssetRegistryHelpers_GetAssetRegistry_Params
{
	TScriptInterface<class UAssetRegistry>             ReturnValue;                                              
};


struct UAssetRegistryHelpers_GetAsset_Params
{
	struct FAssetData                                  InAssetData;                                              
	class UObject*                                     ReturnValue;                                              
};


struct UAssetRegistryHelpers_CreateAssetData_Params
{
	class UObject*                                     InAsset;                                                  
	bool                                               bAllowBlueprintClass;                                     
	struct FAssetData                                  ReturnValue;                                              
};


struct UAssetRegistry_RunAssetsThroughFilter_Params
{
	TArray<struct FAssetData>                          AssetDataList;                                            
	struct FARFilter                                   filter;                                                   
};


struct UAssetRegistry_IsLoadingAssets_Params
{
	bool                                               ReturnValue;                                              
};


struct UAssetRegistry_HasAssets_Params
{
	struct FName                                       PackagePath;                                              
	bool                                               bRecursive;                                               
	bool                                               ReturnValue;                                              
};


struct UAssetRegistry_GetSubPaths_Params
{
	struct FString                                     InBasePath;                                               
	TArray<struct FString>                             OutPathList;                                              
	bool                                               bInRecurse;                                               
};


struct UAssetRegistry_GetAssetsByPath_Params
{
	struct FName                                       PackagePath;                                              
	TArray<struct FAssetData>                          OutAssetData;                                             
	bool                                               bRecursive;                                               
	bool                                               bIncludeOnlyOnDiskAssets;                                 
	bool                                               ReturnValue;                                              
};


struct UAssetRegistry_GetAssetsByPackageName_Params
{
	struct FName                                       PackageName;                                              
	TArray<struct FAssetData>                          OutAssetData;                                             
	bool                                               bIncludeOnlyOnDiskAssets;                                 
	bool                                               ReturnValue;                                              
};


struct UAssetRegistry_GetAssetsByClass_Params
{
	struct FName                                       ClassName;                                                
	TArray<struct FAssetData>                          OutAssetData;                                             
	bool                                               bSearchSubClasses;                                        
	bool                                               ReturnValue;                                              
};


struct UAssetRegistry_GetAssets_Params
{
	struct FARFilter                                   filter;                                                   
	TArray<struct FAssetData>                          OutAssetData;                                             
	bool                                               ReturnValue;                                              
};


struct UAssetRegistry_GetAssetByObjectPath_Params
{
	struct FName                                       ObjectPath;                                               
	bool                                               bIncludeOnlyOnDiskAssets;                                 
	struct FAssetData                                  ReturnValue;                                              
};


struct UAssetRegistry_GetAllCachedPaths_Params
{
	TArray<struct FString>                             OutPathList;                                              
};


struct UAssetRegistry_GetAllAssets_Params
{
	TArray<struct FAssetData>                          OutAssetData;                                             
	bool                                               bIncludeOnlyOnDiskAssets;                                 
	bool                                               ReturnValue;                                              
};

}

