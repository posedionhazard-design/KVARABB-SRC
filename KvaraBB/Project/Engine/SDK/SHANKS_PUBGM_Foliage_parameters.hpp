#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UFoliageStatistics_FoliageOverlappingSphereCount_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UStaticMesh*                                 StaticMesh;                                               
	struct FVector                                     CenterPosition;                                           
	float                                              Radius;                                                   
	int                                                ReturnValue;                                              
};


struct UFoliageStatistics_FoliageOverlappingBoxCount_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UStaticMesh*                                 StaticMesh;                                               
	struct FBox                                        Box;                                                      
	int                                                ReturnValue;                                              
};


struct AInteractiveFoliageActor_CapsuleTouched_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           
	class AActor*                                      Other;                                                    
	class UPrimitiveComponent*                         OtherComp;                                                
	int                                                OtherBodyIndex;                                           
	bool                                               bFromSweep;                                               
	struct FHitResult                                  OverlapInfo;                                              
};


struct UProceduralFoliageSpawner_Simulate_Params
{
	int                                                NumSteps;                                                 
};

}

