#pragma once


 
namespace SDK
{






class UClothBoneDataAsset : public UObject
{
public:
	TArray<struct FClothVertBoneData>                  BoneData;                                                 
	TArray<struct FName>                               UsedBoneNames;                                            
	int                                                MaxBoneWeights;                                           
	unsigned char                                      UnknownData00[0x4];                                       
	struct FName                                       ReferenceBoneName;                                        
	int                                                NumVertices;                                              
	unsigned char                                      UnknownData01[0x4];                                       
	struct FSoftObjectPath                             SourceMeshPath;                                           
	int                                                SourceLod;                                                
	int                                                SourceSection;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClothingSystemRuntime.ClothBoneDataAsset");
		return pStaticClass;
	}

};




class UClothConfigAsset : public UDataAsset
{
public:
	struct FClothConfig                                ConfigData;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClothingSystemRuntime.ClothConfigAsset");
		return pStaticClass;
	}

};




class UClothingAssetCustomData : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClothingSystemRuntime.ClothingAssetCustomData");
		return pStaticClass;
	}

};




class UClothingAsset : public UClothingAssetBase
{
public:
	class UPhysicsAsset*                               PhysicsAsset;                                             
	EClothSkinningMode                                 DefaultSkinningMode;                                      
	unsigned char                                      UnknownData00[0x7];                                       
	unsigned char                                      UnknownData01[0x28];                                      
	struct FClothConfig                                ClothConfig;                                              
	TArray<struct FClothLODData>                       LODData;                                                  
	TArray<int>                                        LodMap;                                                   
	TArray<struct FName>                               UsedBoneNames;                                            
	TArray<int>                                        UsedBoneIndices;                                          
	int                                                ReferenceBoneIndex;                                       
	unsigned char                                      UnknownData02[0x4];                                       
	TArray<struct FClothVertBoneData>                  AlternateBoneData;                                        
	int                                                AlternateMaxBoneWeights;                                  
	unsigned char                                      UnknownData03[0x4];                                       
	TArray<struct FName>                               AlternateUsedBoneNames;                                   
	TArray<int>                                        AlternateUsedBoneIndices;                                 
	int                                                AlternateReferenceBoneIndex;                              
	unsigned char                                      UnknownData04[0x4];                                       
	class UClothingAssetCustomData*                    customData;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClothingSystemRuntime.ClothingAsset");
		return pStaticClass;
	}

};




class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClothingSystemRuntime.ClothingSimulationFactoryNv");
		return pStaticClass;
	}

};




class UClothMaskAsset : public UDataAsset
{
public:
	struct FClothParameterMask_PhysMesh                MaskData;                                                 
	struct FName                                       SourceAssetName;                                          
	int                                                SourceLodIndex;                                           
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClothingSystemRuntime.ClothMaskAsset");
		return pStaticClass;
	}

};


}

