#pragma once


 
namespace SDK
{






class APhotonDestructibleMeshActor : public AActor
{
public:
	class UPhotonDestructibleMeshComponent*            PhotonDestructibleMeshComponent;                          
	unsigned char                                      DestructibleMeshActorReplication : 1;                     
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonDestructibleMeshActor");
		return pStaticClass;
	}

};




class UPhotonReplicationStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	int                                                ClusterUniqueID;                                          
	bool                                               bCanMove;                                                 
	EAOIEntityType                                     AOIEntityType;                                            
	EClusterEntityState                                AOIEntityState;                                           
	unsigned char                                      ClusterReplicationOpen : 1;                               
	class UDestructionSubsystem*                       SubsystemPtr;                                             
	unsigned char                                      UnknownData01[0x8];                                       
	struct FLuaNetSerialization                        LuaNetSerialization;                                      
	struct FString                                     LuaFilePath;                                              
	unsigned char                                      UnknownData02[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonReplicationStaticMeshComponent");
		return pStaticClass;
	}


	void UnRegistLuaTick();
	void UnRegisterFromCluster();
	void SetMoveable(bool Value);
	void SetClusterUniqueID(int InClusterID);
	void SetClusterEntityState(EClusterEntityState EntityState);
	void RegistLuaTick(float TickInterval);
	void RegisterToCluster();
	void MarkPropDirty(int PropIndex);
};




class UPhotonDestructibleMeshComponent : public UPhotonReplicationStaticMeshComponent
{
public:
	unsigned char                                      EnableImpactDamage : 1;                                   
	unsigned char                                      UnknownData00[0x3];                                       
	struct FPhotonDestructibleImpactParam              ImpactParam;                                              
	unsigned char                                      SynchronizeChunkData : 1;                                 
	unsigned char                                      UnknownData01[0x3];                                       
	class UPhotonDestructibleMesh*                     PhotonDestructibleMesh;                                   
	TEnumAsByte<ECollisionEnabled>                     FragmentsCollisionEnabled;                                
	unsigned char                                      UnknownData02[0x7];                                       
	struct FName                                       FragmentsCollisionProfileName;                            
	unsigned char                                      InitialVisible : 1;                                       
	unsigned char                                      UnknownData03[0x7];                                       
	struct FPhotonHideReplicationData                  HideReplicationData;                                      
	struct FPhotonDetachReplicationData                DetachReplicationData;                                    
	struct FPhotonSlideReplicationData                 SlideReplicationData;                                     
	float                                              FragmentsMaxHp;                                           
	unsigned char                                      EnableCheckedSupportedFloor : 1;                          
	unsigned char                                      EnableSeverImpactPoint : 1;                               
	unsigned char                                      UnknownData04[0x1D3];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonDestructibleMeshComponent");
		return pStaticClass;
	}


	void SetupFragmentsMaxHp(float Hp);
	void SetServerDamagedDelegate(const struct FScriptDelegate& InDelegate);
	void SetFracturedMesh(class UPhotonDestructibleMesh* InFracturedMesh, bool Force);
	void Server_OnComponentHitAction(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	bool Server_DamageFragmentsByRadius(const struct FVector4& WorldImpactVelocityAndRotateStrength, const struct FVector4& WorldImpactPointAndSpreadStrength, float Hp, float Radius, bool Attenuation);
	bool Server_DamageFragmentsByHp(TArray<int> FragmentsIndex, TArray<float> Hp, const struct FVector4& WorldImpactPointAndSpreadStrength, const struct FVector4& WorldImpactVelocityAndRotateSpeed);
	void OnRep_SlideData();
	void OnRep_ImpactData();
	void OnRep_FragmentsState();
	bool IsFragmentCanDestroy(int FragmentItemIndex);
	bool IsFragmentCanBeDamaged(int FragmentItemIndex);
	class UPhotonDestructibleMesh* GetPhotonDestructibleMesh();
	bool GetFragmentTransform(int FragmentIndex, bool WorldSpace, struct FTransform* OutTransform);
	bool GetFragmentsWorldPosition(int FragmentIndex, struct FVector* FragmentPosition);
	bool GetFragmentsNotDamaged(bool IsReturnNotDestroyedFragments, TArray<int>* Fragments);
	bool GetFragmentsDamaged(TArray<int>* Fragments);
	bool GetFragmentsByRadius(const struct FVector& HitPoint, float Radius, int DamageType, TArray<int>* FragmentsIndex, TArray<float>* ImpactDistance);
	int GetFragmentItemCount();
	bool GetFragmentBounds(int FragmentIndex, bool WorldSpace, struct FBox* OutBox);
	class UPhotonFracturedMesh* GetFracturedMesh();
	bool ClientGetFragmentsNotDamaged(bool IsReturnNotDestroyedFragments, TArray<int>* Fragments);
	bool ClientGetFragmentsDamaged(TArray<int>* Fragments);
	void ClientDamageAndInitalFragments(TArray<int> DamagedFragmentItemIndex, TArray<int> InitialFragmentItemIndex);
};




class UPhotonReplicationInstancedStaticMeshComponent : public UInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	int                                                ClusterUniqueID;                                          
	bool                                               bCanMove;                                                 
	EAOIEntityType                                     AOIEntityType;                                            
	EClusterEntityState                                AOIEntityState;                                           
	unsigned char                                      ClusterReplicationOpen : 1;                               
	class UDestructionSubsystem*                       SubsystemPtr;                                             
	unsigned char                                      UnknownData01[0x8];                                       
	struct FLuaNetSerialization                        LuaNetSerialization;                                      
	struct FString                                     LuaFilePath;                                              
	unsigned char                                      UnknownData02[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonReplicationInstancedStaticMeshComponent");
		return pStaticClass;
	}


	void UnRegistLuaTick();
	void UnRegisterFromCluster();
	void SetMoveable(bool Value);
	void SetClusterUniqueID(int InClusterID);
	void SetClusterEntityState(EClusterEntityState EntityState);
	void RegistLuaTick(float TickInterval);
	void RegisterToCluster();
	void MarkPropDirty(int PropIndex);
};




class UPhotonInstancedDestructibleMeshComponent : public UPhotonReplicationInstancedStaticMeshComponent
{
public:
	unsigned char                                      EnableImpactDamage : 1;                                   
	unsigned char                                      UnknownData00[0x3];                                       
	struct FPhotonDestructibleImpactParam              ImpactParam;                                              
	unsigned char                                      UnknownData01[0x4];                                       
	class UPhotonDestructibleMesh*                     PhotonDestructibleMesh;                                   
	TEnumAsByte<ECollisionEnabled>                     FragmentsCollisionEnabled;                                
	unsigned char                                      UnknownData02[0x7];                                       
	struct FName                                       FragmentsCollisionProfileName;                            
	TArray<struct FPhotonDestructibleFragmentStateData> HideInstanceReplicationData;                              
	TArray<struct FPhotonDestructibleImpactData>       DetachInstanceReplicationData;                            
	float                                              FragmentsMaxHp;                                           
	unsigned char                                      EnableCheckedSupportedFloor : 1;                          
	unsigned char                                      EnableSeverImpactPoint : 1;                               
	unsigned char                                      UnknownData03[0x183];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonInstancedDestructibleMeshComponent");
		return pStaticClass;
	}


	void SetupFragmentsMaxHp(float Hp);
	void SetServerDamagedDelegate(const struct FScriptDelegate& InDelegate);
	void SetPhysMaterialOverride(class UPhysicalMaterial* NewPhysMaterial);
	void SetFracturedMesh(class UPhotonDestructibleMesh* InFracturedMesh, bool Force);
	void Server_OnComponentHitAction(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	bool Server_DamageFragmentsByRadius(const struct FVector4& WorldImpactVelocity, const struct FVector4& WorldHitPointAndSpreadSpeed, float Hp, float Radius, bool Attenuation);
	TArray<int> ReplaceAllInstances(TArray<struct FTransform> InstanceTransforms, bool bShouldReturnIndices);
	void OnRep_ImpactData();
	void OnRep_FragmentsState();
	bool IsFragmentCanDestroy(int InstanceIndex, int FragmentItemIndex);
	class UPhotonDestructibleMesh* GetPhotonDestructibleMesh();
	TArray<int> GetInstancesOverlappingSphere(const struct FVector& Center, float Radius, bool bSphereInWorldSpace);
	int GetInstanceItemCount();
	bool GetFragmentTransform(int InstanceIndex, int FragmentIndex, bool WorldSpace, struct FTransform* OutTransform);
	bool GetFragmentsWorldPosition(int InstanceIndex, int FragmentIndex, struct FVector* FragmentPosition);
	bool GetFragmentsNotDamaged(int InstanceIndex, bool IsReturnNotDestroyedFragments, TArray<int>* FragmentsNoDamaged);
	bool GetFragmentsDamaged(int InstanceIndex, TArray<int>* FragmentsDamaged);
	int GetFragmentItemCount();
	bool GetFragmentBounds(int InstanceIndex, int FragmentIndex, bool WorldSpace, struct FBox* OutBox);
	class UPhotonFracturedMesh* GetFracturedMesh();
	int AddInstanceWorldSpace(const struct FTransform& WorldTransform);
	TArray<int> AddInstances(TArray<struct FTransform> InstanceTransforms, bool bShouldReturnIndices, bool bMarkRenderStateDirty);
	int AddInstance(const struct FTransform& InstanceTransform);
};




class UPhotonHierarchicalInstancedDestructibleMeshComponent : public UPhotonInstancedDestructibleMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      
	TArray<int>                                        SortedInstances;                                          
	int                                                NumBuiltInstances;                                        
	unsigned char                                      UnknownData01[0x4];                                       
	struct FBox                                        BuiltInstanceBounds;                                      
	struct FBox                                        UnbuiltInstanceBounds;                                    
	TArray<struct FBox>                                UnbuiltInstanceBoundsList;                                
	TArray<int>                                        UnbuiltInstanceIndexList;                                 
	unsigned char                                      bEnableDensityScaling : 1;                                
	unsigned char                                      UnknownData02[0x27];                                      
	int                                                OcclusionLayerNumNodes;                                   
	struct FBoxSphereBounds                            CacheMeshExtendedBounds;                                  
	unsigned char                                      UnknownData03[0x8];                                       
	int                                                MinInstancesToSplitNode;                                  
	unsigned char                                      UnknownData04[0xC];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonHierarchicalInstancedDestructibleMeshComponent");
		return pStaticClass;
	}


	bool ShowInstances(TArray<int> InstanceIndices, TArray<struct FTransform> InstanceTransforms);
	bool RemoveInstances(TArray<int> InstancesToRemove);
};




class AClusterReplicationVolume : public AVolume
{
public:
	bool                                               bForReplication;                                          
	bool                                               bForClusterDivide;                                        
	unsigned char                                      UnknownData00[0x6];                                       
	struct FClusterAOIConfig                           ClusterConfig;                                            
	struct FClusterReplicationProxy                    ClusterReplication;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.ClusterReplicationVolume");
		return pStaticClass;
	}

};




class AClusterReplicationSelectVolume : public AVolume
{
public:
	int16_t                                            LevelGroup;                                               
	unsigned char                                      UnknownData00[0x6];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.ClusterReplicationSelectVolume");
		return pStaticClass;
	}

};




class UMovieScenePhotonDestructibleSection : public UMovieSceneSection
{
public:
	struct FIntegralCurve                              PhotonDestructibleKeys;                                   
	struct FRichCurve                                  TimeSpeedCurve;                                           
	struct FRichCurve                                  SpreadSpeedCurve;                                         
	struct FRichCurve                                  VelocitySpeedCurve;                                       
	struct FRichCurve                                  RotationSpeedCurve;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.MovieScenePhotonDestructibleSection");
		return pStaticClass;
	}

};




class UMovieScenePhotonDestructibleTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  PhotonDestructibleSections;                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.MovieScenePhotonDestructibleTrack");
		return pStaticClass;
	}

};




class UPhotonDestructibleMesh : public UStaticMesh
{
public:
	class UPhotonFracturedMesh*                        FracturedMesh;                                            
	TEnumAsByte<EPhotonDestructibleAction>             DestructibleAction;                                       
	unsigned char                                      UseDefaultParameter : 1;                                  
	TEnumAsByte<EPhotonCollisionType>                  FragmentCollisonType;                                     
	unsigned char                                      UnknownData00[0x5];                                       
	struct FPhotonDestructibleMeshPhysicsDetachData    PhysicsDetachData;                                        
	unsigned char                                      UnknownData01[0xB0];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonDestructibleMesh");
		return pStaticClass;
	}

};




class UDestructionSubsystem : public UClusterReplicationSubsystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.DestructionSubsystem");
		return pStaticClass;
	}

};




class UPhotonFracturedMesh : public UObject
{
public:
	TArray<class UPhotonFracturedFragmentInfo*>        FracturedFragmentInfo;                                    
	TArray<int>                                        InsideMaterialIndex;                                      
	TMap<int, class UPhotonFracturedFragmentInfo*>     FragmentIndex2FragmentInfo;                               
	TMap<struct FName, class UPhotonFracturedFragmentInfo*> FragmentName2FragmentInfo;                                
	struct FSupportGraph                               SupportGraph;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonFracturedMesh");
		return pStaticClass;
	}

};




class UPhotonFracturedMeshSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonFracturedMeshSettings");
		return pStaticClass;
	}

};




class UPhotonFEdgeData : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonFEdgeData");
		return pStaticClass;
	}

};




class UPhotonFracturedFragmentInfo : public UObject
{
public:
	int                                                FragmentItemIndex;                                        
	float                                              MassOverride;                                             
	struct FFragmentConvexElem                         ConvexElemForCollision;                                   
	struct FVector                                     CenterPoint;                                              
	struct FBox                                        LocalBoundBox;                                            
	unsigned char                                      CanDestroy : 1;                                           
	unsigned char                                      ConnectFloor : 1;                                         
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                ChunkIndex;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonFracturedFragmentInfo");
		return pStaticClass;
	}

};




class UPhotonHierarchicalInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	class UStaticMesh*                                 EffectStaticMesh;                                         
	class USkeletalMesh*                               EffectSkeleMesh;                                          
	class UClass*                                      AnimClass;                                                
	class UClass*                                      EffectActorClass;                                         
	TArray<struct FPhotonInstanceImpactData>           InstanceImpactData;                                       
	float                                              InstanceMaxHp;                                            
	TEnumAsByte<EEffectType>                           EffectType;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              EffectDurationTime;                                       
	unsigned char                                      UnknownData01[0x4];                                       
	struct FName                                       EffectCollisionProfileName;                               
	unsigned char                                      bCullEffect : 1;                                          
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              CullDistance;                                             
	unsigned char                                      bUseExactVelocity : 1;                                    
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              VelocityLength;                                           
	float                                              MinVelocityExplosion;                                     
	float                                              MaxVelocityExplosion;                                     
	class UAkAudioEvent*                               HitSound;                                                 
	unsigned char                                      UnknownData04[0x50];                                      
	bool                                               bVehicleHitUseClientPreShow;                              
	unsigned char                                      UnknownData05[0x3];                                       
	float                                              bVehicleHitScale;                                         
	bool                                               bUpdateSurrendActorPosition;                              
	bool                                               bForceNetUpdate;                                          
	unsigned char                                      UnknownData06[0x4E];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent");
		return pStaticClass;
	}


	void UpdatePickupAndDeadBoxInRange(const struct FVector& Location);
	void SetFracturedMesh(class UPhotonDestructibleMesh* InPhotonDestructibleMesh);
	bool ServerGetInstanceIndexsNotDamaged(TArray<int>* InstancesNoDamaged);
	bool ServerGetInstanceIndexsDamaged(TArray<int>* InstancesDamaged);
	bool Server_InstanceByHp(TArray<int> InstancedIndex, TArray<float> DamagesHp, const struct FVector& WorldImpactVelocity, EDestructionDamageType DamageType);
	bool Server_InstanceAndWorldVelocityByHp(TArray<int> InstancedIndex, TArray<float> DamagesHp, const struct FVector& WorldImpactPoint, EDestructionDamageType DamageType, float Strength);
	bool Server_DamageFragmentsByRadius(const struct FVector& WorldImpactVelocity, const struct FVector& WorldHitPointAndSpreadSpeed, float Hp, float Radius);
	void OnTriggerServerEvent__DelegateSignature(class ASTExtraVehicleBase* VehicleActor, class UPrimitiveComponent* HitComp, class UPhotonHierarchicalInstancedStaticMeshComponent* MeshComponent, const struct FVector& DesPos, int TriggerIndex);
	void OnTriggeredByComp(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FTriggerEvent& TriggerEvent);
	void OnTriggerClientEvent__DelegateSignature(class ASTExtraVehicleBase* VehicleActor, class UPrimitiveComponent* HitComp, class UPhotonHierarchicalInstancedStaticMeshComponent* MeshComponent, const struct FVector& DesPos, int TriggerIndex);
	void OnRep_ImpactData();
	void OnLocalVehicleHit(TArray<int> InstanceIndex, const struct FVector4& WorldImpactPointAndSpreadSpeed, const struct FVector4& WorldImpactVelocityAndRotateSpeed);
	class UPhotonDestructibleMesh* GetPhotonDestructibleMesh();
	bool GetInstanceByRadius(const struct FVector& HitPoint, float Radius, EDestructionDamageType DamageType, TArray<int>* InstancedIndex);
	class UPhotonFracturedMesh* GetFracturedMesh();
	void GenerateEffectInstanceWorldSpace(TArray<int> InstanceIndex, TArray<struct FVector> WorldImpactVelocityAndRotateSpeed);
	void GenerateEffectInstanceLocalSpace(TArray<int> InstanceIndex, TArray<struct FVector> LocalImpactVelocityAndRotateSpeed);
	void ClientCorrectVehicleHit(TArray<int> InstanceIndex);
};




class UPhotonParticleModuleTypeDataMesh : public UParticleModuleTypeDataMesh
{
public:
	float                                              TriggerDelay;                                             
	float                                              ImpactSpreadStrength;                                     
	float                                              ImpactVelocityMagnitude;                                  
	struct FVector                                     ImpactVelocityDirection;                                  
	float                                              ImpactRotationStrength;                                   
	bool                                               bOverrideDetachGravity;                                   
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     DetachGravity;                                            
	bool                                               bOverrideDetachTimeSpeed;                                 
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              DetachTimeSpeed;                                          
	unsigned char                                      UnknownData02[0x64];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonParticleModuleTypeDataMesh");
		return pStaticClass;
	}

};




class UPhotonReplicationSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	int                                                ClusterUniqueID;                                          
	bool                                               bCanMove;                                                 
	EAOIEntityType                                     AOIEntityType;                                            
	EClusterEntityState                                AOIEntityState;                                           
	unsigned char                                      ClusterReplicationOpen : 1;                               
	class UDestructionSubsystem*                       SubsystemPtr;                                             
	unsigned char                                      UnknownData01[0x8];                                       
	struct FLuaNetSerialization                        LuaNetSerialization;                                      
	struct FString                                     LuaFilePath;                                              
	unsigned char                                      UnknownData02[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonReplicationSkeletalMeshComponent");
		return pStaticClass;
	}


	void UnRegistLuaTick();
	void UnRegisterFromCluster();
	void SetMoveable(bool Value);
	void SetClusterUniqueID(int InClusterID);
	void SetClusterEntityState(EClusterEntityState EntityState);
	void RegistLuaTick(float TickInterval);
	void RegisterToCluster();
	void MarkPropDirty(int PropIndex);
};




class APhotonStaticeMeshActor : public ADecoratorActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonStaticeMeshActor");
		return pStaticClass;
	}

};




class AReusableStaticMeshActor : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.ReusableStaticMeshActor");
		return pStaticClass;
	}


	void OnSpawn();
	void OnRecycle();
};




class AReusableSkeletalMeshActor : public ASkeletalMeshActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.ReusableSkeletalMeshActor");
		return pStaticClass;
	}


	void OnSpawn();
	void OnRecycle();
};




class AReusableDestructibleMeshActor : public APhotonDestructibleMeshActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.ReusableDestructibleMeshActor");
		return pStaticClass;
	}


	void OnSpawn();
	void OnRecycle();
};




class UPhotonStaticMeshComponent : public UStaticMeshComponent
{
public:
	class UStaticMesh*                                 EffectStaticMesh;                                         
	float                                              InstanceMaxHp;                                            
	TEnumAsByte<EEffectType>                           EffectType;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              EffectDurationTime;                                       
	unsigned char                                      UnknownData01[0x4];                                       
	struct FName                                       EffectCollisionProfileName;                               
	bool                                               bVehicleHitUseClientPreShow;                              
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              bVehicleHitScale;                                         
	unsigned char                                      UnknownData03[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonStaticMeshComponent");
		return pStaticClass;
	}


	void SetFracturedMesh(class UPhotonDestructibleMesh* InPhotonDestructibleMesh);
	class UPhotonDestructibleMesh* GetPhotonDestructibleMesh();
	class UPhotonFracturedMesh* GetFracturedMesh();
};


}

