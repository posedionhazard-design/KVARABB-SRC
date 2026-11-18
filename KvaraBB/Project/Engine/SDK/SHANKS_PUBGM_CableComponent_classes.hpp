#pragma once


 
namespace SDK
{






class ACableActor : public AActor
{
public:
	class UCableComponent*                             CableComponent;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CableComponent.CableActor");
		return pStaticClass;
	}

};




class UCableComponent : public UMeshComponent
{
public:
	struct FComponentReference                         AttachEndTo;                                              
	struct FName                                       AttachEndToSocketName;                                    
	struct FVector                                     EndLocation;                                              
	float                                              CableLength;                                              
	int                                                NumSegments;                                              
	float                                              SubstepTime;                                              
	int                                                SolverIterations;                                         
	bool                                               bEnableStiffness;                                         
	bool                                               bEnableCollision;                                         
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              CollisionFriction;                                        
	struct FVector                                     CableForce;                                               
	float                                              CableGravityScale;                                        
	float                                              CableWidth;                                               
	int                                                NumSides;                                                 
	float                                              TileMaterial;                                             
	unsigned char                                      UnknownData01[0x20];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CableComponent.CableComponent");
		return pStaticClass;
	}


	void SetAttachEndTo(class AActor* Actor, const struct FName& ComponentProperty, const struct FName& SocketName);
	void GetCableParticleLocations(TArray<struct FVector>* Locations);
	class USceneComponent* GetAttachedComponent();
	class AActor* GetAttachedActor();
};


}

