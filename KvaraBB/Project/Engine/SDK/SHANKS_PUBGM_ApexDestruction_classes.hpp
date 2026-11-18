#pragma once


 
namespace SDK
{






class ADestructibleActor : public AActor
{
public:
	class UDestructibleComponent*                      DestructibleComponent;                                    
	unsigned char                                      bAffectNavigation : 1;                                    
	unsigned char                                      UnknownData00[0x7];                                       
	struct FScriptMulticastDelegate                    OnActorFracture;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ApexDestruction.DestructibleActor");
		return pStaticClass;
	}

};




class UDestructibleComponent : public USkinnedMeshComponent
{
public:
	unsigned char                                      bFractureEffectOverride : 1;                              
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<struct FFractureEffect>                     FractureEffects;                                          
	bool                                               bEnableHardSleeping;                                      
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              LargeChunkThreshold;                                      
	unsigned char                                      UnknownData02[0x10];                                      
	struct FScriptMulticastDelegate                    OnComponentFracture;                                      
	unsigned char                                      UnknownData03[0x90];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ApexDestruction.DestructibleComponent");
		return pStaticClass;
	}


	void SetDestructibleMesh(class UDestructibleMesh* NewMesh);
	class UDestructibleMesh* GetDestructibleMesh();
	void ApplyRadiusDamage(float BaseDamage, const struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
	void ApplyDamage(float DamageAmount, const struct FVector& HitLocation, const struct FVector& ImpulseDir, float ImpulseStrength);
};




class UDestructibleFractureSettings : public UObject
{
public:
	int                                                CellSiteCount;                                            
	struct FFractureMaterial                           FractureMaterialDesc;                                     
	int                                                RandomSeed;                                               
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FVector>                             VoronoiSites;                                             
	int                                                OriginalSubmeshCount;                                     
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<class UMaterialInterface*>                  Materials;                                                
	TArray<struct FDestructibleChunkParameters>        ChunkParameters;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ApexDestruction.DestructibleFractureSettings");
		return pStaticClass;
	}

};




class UDestructibleMesh : public USkeletalMesh
{
public:
	struct FDestructibleParameters                     DefaultDestructibleParameters;                            
	TArray<struct FFractureEffect>                     FractureEffects;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ApexDestruction.DestructibleMesh");
		return pStaticClass;
	}

};


}

