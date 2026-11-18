#pragma once


 
namespace SDK
{






class UPCGSplineTubeMeshComponent : public UProceduralMeshComponent
{
public:
	EPCGCrossSectionType                               CrossSectionType;                                         
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              RoadWidth;                                                
	float                                              CrossSectionHeight;                                       
	int                                                TubeSides;                                                
	TArray<struct FVector2D>                           CustomProfilePoints;                                      
	bool                                               bCustomProfileClosed;                                     
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              SegmentLength;                                            
	bool                                               bWorldUp;                                                 
	bool                                               bCapEnds;                                                 
	unsigned char                                      UnknownData02[0x2];                                       
	float                                              UVTilingLength;                                           
	float                                              UVOffsetU;                                                
	bool                                               bFlipUVV;                                                 
	bool                                               bMirrorU;                                                 
	unsigned char                                      UnknownData03[0x2];                                       
	class UMaterialInterface*                          RoadMaterial;                                             
	bool                                               bGenerateCollision;                                       
	unsigned char                                      UnknownData04[0xF];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealAgentRuntime.PCGSplineTubeMeshComponent");
		return pStaticClass;
	}


	class USplineComponent* ResolveSpline();
	void RefreshTubePhysicsCollision();
	void RebuildTubeMesh();
};


}

