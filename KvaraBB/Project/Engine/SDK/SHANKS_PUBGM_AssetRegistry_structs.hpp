#pragma once


 
namespace SDK
{






struct FAssetData
{
	struct FName                                       ObjectPath;                                               
	struct FName                                       PackageName;                                              
	struct FName                                       PackagePath;                                              
	struct FName                                       AssetName;                                                
	struct FName                                       AssetClass;                                               
	unsigned char                                      UnknownData00[0x28];                                      
};



struct FARFilter
{
	TArray<struct FName>                               PackageNames;                                             
	TArray<struct FName>                               PackagePaths;                                             
	TArray<struct FName>                               ObjectPaths;                                              
	TArray<struct FName>                               ClassNames;                                               
	unsigned char                                      UnknownData00[0x50];                                      
	unsigned char                                      UnknownData01[0x50];                                      
	bool                                               bRecursivePaths;                                          
	bool                                               bRecursiveClasses;                                        
	bool                                               bIncludeOnlyOnDiskAssets;                                 
	unsigned char                                      UnknownData02[0x5];                                       
};



struct FTagAndValue
{
	struct FName                                       Tag;                                                      
	struct FString                                     Value;                                                    
};



struct FAssetBundleEntry
{
	struct FPrimaryAssetId                             BundleScope;                                              
	struct FName                                       BundleName;                                               
	TArray<struct FSoftObjectPath>                     BundleAssets;                                             
};



struct FAssetBundleData
{
	TArray<struct FAssetBundleEntry>                   Bundles;                                                  
};

}

