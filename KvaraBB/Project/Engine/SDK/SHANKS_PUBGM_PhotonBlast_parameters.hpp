#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UPhotonReplicationStaticMeshComponent_UnRegistLuaTick_Params
{
};


struct UPhotonReplicationStaticMeshComponent_UnRegisterFromCluster_Params
{
};


struct UPhotonReplicationStaticMeshComponent_SetMoveable_Params
{
	bool                                               Value;                                                    
};


struct UPhotonReplicationStaticMeshComponent_SetClusterUniqueID_Params
{
	int                                                InClusterID;                                              
};


struct UPhotonReplicationStaticMeshComponent_SetClusterEntityState_Params
{
	EClusterEntityState                                EntityState;                                              
};


struct UPhotonReplicationStaticMeshComponent_RegistLuaTick_Params
{
	float                                              TickInterval;                                             
};


struct UPhotonReplicationStaticMeshComponent_RegisterToCluster_Params
{
};


struct UPhotonReplicationStaticMeshComponent_MarkPropDirty_Params
{
	int                                                PropIndex;                                                
};


struct UPhotonDestructibleMeshComponent_SetupFragmentsMaxHp_Params
{
	float                                              Hp;                                                       
};


struct UPhotonDestructibleMeshComponent_SetServerDamagedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               
};


struct UPhotonDestructibleMeshComponent_SetFracturedMesh_Params
{
	class UPhotonDestructibleMesh*                     InFracturedMesh;                                          
	bool                                               Force;                                                    
};


struct UPhotonDestructibleMeshComponent_Server_OnComponentHitAction_Params
{
	class UPrimitiveComponent*                         HitComp;                                                  
	class AActor*                                      OtherActor;                                               
	class UPrimitiveComponent*                         OtherComp;                                                
	struct FVector                                     NormalImpulse;                                            
	struct FHitResult                                  Hit;                                                      
};


struct UPhotonDestructibleMeshComponent_Server_DamageFragmentsByRadius_Params
{
	struct FVector4                                    WorldImpactVelocityAndRotateStrength;                     
	struct FVector4                                    WorldImpactPointAndSpreadStrength;                        
	float                                              Hp;                                                       
	float                                              Radius;                                                   
	bool                                               Attenuation;                                              
	bool                                               ReturnValue;                                              
};


struct UPhotonDestructibleMeshComponent_Server_DamageFragmentsByHp_Params
{
	TArray<int>                                        FragmentsIndex;                                           
	TArray<float>                                      Hp;                                                       
	struct FVector4                                    WorldImpactPointAndSpreadStrength;                        
	struct FVector4                                    WorldImpactVelocityAndRotateSpeed;                        
	bool                                               ReturnValue;                                              
};


struct UPhotonDestructibleMeshComponent_OnRep_SlideData_Params
{
};


struct UPhotonDestructibleMeshComponent_OnRep_ImpactData_Params
{
};


struct UPhotonDestructibleMeshComponent_OnRep_FragmentsState_Params
{
};


struct UPhotonDestructibleMeshComponent_IsFragmentCanDestroy_Params
{
	int                                                FragmentItemIndex;                                        
	bool                                               ReturnValue;                                              
};


struct UPhotonDestructibleMeshComponent_IsFragmentCanBeDamaged_Params
{
	int                                                FragmentItemIndex;                                        
	bool                                               ReturnValue;                                              
};


struct UPhotonDestructibleMeshComponent_GetPhotonDestructibleMesh_Params
{
	class UPhotonDestructibleMesh*                     ReturnValue;                                              
};


struct UPhotonDestructibleMeshComponent_GetFragmentTransform_Params
{
	int                                                FragmentIndex;                                            
	struct FTransform                                  OutTransform;                                             
	bool                                               WorldSpace;                                               
	bool                                               ReturnValue;                                              
};


struct UPhotonDestructibleMeshComponent_GetFragmentsWorldPosition_Params
{
	int                                                FragmentIndex;                                            
	struct FVector                                     FragmentPosition;                                         
	bool                                               ReturnValue;                                              
};


struct UPhotonDestructibleMeshComponent_GetFragmentsNotDamaged_Params
{
	TArray<int>                                        Fragments;                                                
	bool                                               IsReturnNotDestroyedFragments;                            
	bool                                               ReturnValue;                                              
};


struct UPhotonDestructibleMeshComponent_GetFragmentsDamaged_Params
{
	TArray<int>                                        Fragments;                                                
	bool                                               ReturnValue;                                              
};


struct UPhotonDestructibleMeshComponent_GetFragmentsByRadius_Params
{
	struct FVector                                     HitPoint;                                                 
	float                                              Radius;                                                   
	TArray<int>                                        FragmentsIndex;                                           
	TArray<float>                                      ImpactDistance;                                           
	int                                                DamageType;                                               
	bool                                               ReturnValue;                                              
};


struct UPhotonDestructibleMeshComponent_GetFragmentItemCount_Params
{
	int                                                ReturnValue;                                              
};


struct UPhotonDestructibleMeshComponent_GetFragmentBounds_Params
{
	int                                                FragmentIndex;                                            
	struct FBox                                        OutBox;                                                   
	bool                                               WorldSpace;                                               
	bool                                               ReturnValue;                                              
};


struct UPhotonDestructibleMeshComponent_GetFracturedMesh_Params
{
	class UPhotonFracturedMesh*                        ReturnValue;                                              
};


struct UPhotonDestructibleMeshComponent_ClientGetFragmentsNotDamaged_Params
{
	TArray<int>                                        Fragments;                                                
	bool                                               IsReturnNotDestroyedFragments;                            
	bool                                               ReturnValue;                                              
};


struct UPhotonDestructibleMeshComponent_ClientGetFragmentsDamaged_Params
{
	TArray<int>                                        Fragments;                                                
	bool                                               ReturnValue;                                              
};


struct UPhotonDestructibleMeshComponent_ClientDamageAndInitalFragments_Params
{
	TArray<int>                                        DamagedFragmentItemIndex;                                 
	TArray<int>                                        InitialFragmentItemIndex;                                 
};


struct UPhotonReplicationInstancedStaticMeshComponent_UnRegistLuaTick_Params
{
};


struct UPhotonReplicationInstancedStaticMeshComponent_UnRegisterFromCluster_Params
{
};


struct UPhotonReplicationInstancedStaticMeshComponent_SetMoveable_Params
{
	bool                                               Value;                                                    
};


struct UPhotonReplicationInstancedStaticMeshComponent_SetClusterUniqueID_Params
{
	int                                                InClusterID;                                              
};


struct UPhotonReplicationInstancedStaticMeshComponent_SetClusterEntityState_Params
{
	EClusterEntityState                                EntityState;                                              
};


struct UPhotonReplicationInstancedStaticMeshComponent_RegistLuaTick_Params
{
	float                                              TickInterval;                                             
};


struct UPhotonReplicationInstancedStaticMeshComponent_RegisterToCluster_Params
{
};


struct UPhotonReplicationInstancedStaticMeshComponent_MarkPropDirty_Params
{
	int                                                PropIndex;                                                
};


struct UPhotonInstancedDestructibleMeshComponent_SetupFragmentsMaxHp_Params
{
	float                                              Hp;                                                       
};


struct UPhotonInstancedDestructibleMeshComponent_SetServerDamagedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               
};


struct UPhotonInstancedDestructibleMeshComponent_SetPhysMaterialOverride_Params
{
	class UPhysicalMaterial*                           NewPhysMaterial;                                          
};


struct UPhotonInstancedDestructibleMeshComponent_SetFracturedMesh_Params
{
	class UPhotonDestructibleMesh*                     InFracturedMesh;                                          
	bool                                               Force;                                                    
};


struct UPhotonInstancedDestructibleMeshComponent_Server_OnComponentHitAction_Params
{
	class UPrimitiveComponent*                         HitComp;                                                  
	class AActor*                                      OtherActor;                                               
	class UPrimitiveComponent*                         OtherComp;                                                
	struct FVector                                     NormalImpulse;                                            
	struct FHitResult                                  Hit;                                                      
};


struct UPhotonInstancedDestructibleMeshComponent_Server_DamageFragmentsByRadius_Params
{
	struct FVector4                                    WorldImpactVelocity;                                      
	struct FVector4                                    WorldHitPointAndSpreadSpeed;                              
	float                                              Hp;                                                       
	float                                              Radius;                                                   
	bool                                               Attenuation;                                              
	bool                                               ReturnValue;                                              
};


struct UPhotonInstancedDestructibleMeshComponent_ReplaceAllInstances_Params
{
	TArray<struct FTransform>                          InstanceTransforms;                                       
	bool                                               bShouldReturnIndices;                                     
	TArray<int>                                        ReturnValue;                                              
};


struct UPhotonInstancedDestructibleMeshComponent_OnRep_ImpactData_Params
{
};


struct UPhotonInstancedDestructibleMeshComponent_OnRep_FragmentsState_Params
{
};


struct UPhotonInstancedDestructibleMeshComponent_IsFragmentCanDestroy_Params
{
	int                                                InstanceIndex;                                            
	int                                                FragmentItemIndex;                                        
	bool                                               ReturnValue;                                              
};


struct UPhotonInstancedDestructibleMeshComponent_GetPhotonDestructibleMesh_Params
{
	class UPhotonDestructibleMesh*                     ReturnValue;                                              
};


struct UPhotonInstancedDestructibleMeshComponent_GetInstancesOverlappingSphere_Params
{
	struct FVector                                     Center;                                                   
	float                                              Radius;                                                   
	bool                                               bSphereInWorldSpace;                                      
	TArray<int>                                        ReturnValue;                                              
};


struct UPhotonInstancedDestructibleMeshComponent_GetInstanceItemCount_Params
{
	int                                                ReturnValue;                                              
};


struct UPhotonInstancedDestructibleMeshComponent_GetFragmentTransform_Params
{
	int                                                InstanceIndex;                                            
	int                                                FragmentIndex;                                            
	struct FTransform                                  OutTransform;                                             
	bool                                               WorldSpace;                                               
	bool                                               ReturnValue;                                              
};


struct UPhotonInstancedDestructibleMeshComponent_GetFragmentsWorldPosition_Params
{
	int                                                InstanceIndex;                                            
	int                                                FragmentIndex;                                            
	struct FVector                                     FragmentPosition;                                         
	bool                                               ReturnValue;                                              
};


struct UPhotonInstancedDestructibleMeshComponent_GetFragmentsNotDamaged_Params
{
	int                                                InstanceIndex;                                            
	TArray<int>                                        FragmentsNoDamaged;                                       
	bool                                               IsReturnNotDestroyedFragments;                            
	bool                                               ReturnValue;                                              
};


struct UPhotonInstancedDestructibleMeshComponent_GetFragmentsDamaged_Params
{
	int                                                InstanceIndex;                                            
	TArray<int>                                        FragmentsDamaged;                                         
	bool                                               ReturnValue;                                              
};


struct UPhotonInstancedDestructibleMeshComponent_GetFragmentItemCount_Params
{
	int                                                ReturnValue;                                              
};


struct UPhotonInstancedDestructibleMeshComponent_GetFragmentBounds_Params
{
	int                                                InstanceIndex;                                            
	int                                                FragmentIndex;                                            
	struct FBox                                        OutBox;                                                   
	bool                                               WorldSpace;                                               
	bool                                               ReturnValue;                                              
};


struct UPhotonInstancedDestructibleMeshComponent_GetFracturedMesh_Params
{
	class UPhotonFracturedMesh*                        ReturnValue;                                              
};


struct UPhotonInstancedDestructibleMeshComponent_AddInstanceWorldSpace_Params
{
	struct FTransform                                  WorldTransform;                                           
	int                                                ReturnValue;                                              
};


struct UPhotonInstancedDestructibleMeshComponent_AddInstances_Params
{
	TArray<struct FTransform>                          InstanceTransforms;                                       
	bool                                               bShouldReturnIndices;                                     
	bool                                               bMarkRenderStateDirty;                                    
	TArray<int>                                        ReturnValue;                                              
};


struct UPhotonInstancedDestructibleMeshComponent_AddInstance_Params
{
	struct FTransform                                  InstanceTransform;                                        
	int                                                ReturnValue;                                              
};


struct UPhotonHierarchicalInstancedDestructibleMeshComponent_ShowInstances_Params
{
	TArray<int>                                        InstanceIndices;                                          
	TArray<struct FTransform>                          InstanceTransforms;                                       
	bool                                               ReturnValue;                                              
};


struct UPhotonHierarchicalInstancedDestructibleMeshComponent_RemoveInstances_Params
{
	TArray<int>                                        InstancesToRemove;                                        
	bool                                               ReturnValue;                                              
};


struct UPhotonHierarchicalInstancedStaticMeshComponent_UpdatePickupAndDeadBoxInRange_Params
{
	struct FVector                                     Location;                                                 
};


struct UPhotonHierarchicalInstancedStaticMeshComponent_SetFracturedMesh_Params
{
	class UPhotonDestructibleMesh*                     InPhotonDestructibleMesh;                                 
};


struct UPhotonHierarchicalInstancedStaticMeshComponent_ServerGetInstanceIndexsNotDamaged_Params
{
	TArray<int>                                        InstancesNoDamaged;                                       
	bool                                               ReturnValue;                                              
};


struct UPhotonHierarchicalInstancedStaticMeshComponent_ServerGetInstanceIndexsDamaged_Params
{
	TArray<int>                                        InstancesDamaged;                                         
	bool                                               ReturnValue;                                              
};


struct UPhotonHierarchicalInstancedStaticMeshComponent_Server_InstanceByHp_Params
{
	TArray<int>                                        InstancedIndex;                                           
	TArray<float>                                      DamagesHp;                                                
	struct FVector                                     WorldImpactVelocity;                                      
	EDestructionDamageType                             DamageType;                                               
	bool                                               ReturnValue;                                              
};


struct UPhotonHierarchicalInstancedStaticMeshComponent_Server_InstanceAndWorldVelocityByHp_Params
{
	TArray<int>                                        InstancedIndex;                                           
	TArray<float>                                      DamagesHp;                                                
	struct FVector                                     WorldImpactPoint;                                         
	EDestructionDamageType                             DamageType;                                               
	float                                              Strength;                                                 
	bool                                               ReturnValue;                                              
};


struct UPhotonHierarchicalInstancedStaticMeshComponent_Server_DamageFragmentsByRadius_Params
{
	struct FVector                                     WorldImpactVelocity;                                      
	struct FVector                                     WorldHitPointAndSpreadSpeed;                              
	float                                              Hp;                                                       
	float                                              Radius;                                                   
	bool                                               ReturnValue;                                              
};


struct UPhotonHierarchicalInstancedStaticMeshComponent_OnTriggerServerEvent__DelegateSignature_Params
{
	class ASTExtraVehicleBase*                         VehicleActor;                                             
	class UPrimitiveComponent*                         HitComp;                                                  
	class UPhotonHierarchicalInstancedStaticMeshComponent* MeshComponent;                                            
	struct FVector                                     DesPos;                                                   
	int                                                TriggerIndex;                                             
};


struct UPhotonHierarchicalInstancedStaticMeshComponent_OnTriggeredByComp_Params
{
	class AActor*                                      OtherActor;                                               
	class UPrimitiveComponent*                         OtherComp;                                                
	struct FTriggerEvent                               TriggerEvent;                                             
};


struct UPhotonHierarchicalInstancedStaticMeshComponent_OnTriggerClientEvent__DelegateSignature_Params
{
	class ASTExtraVehicleBase*                         VehicleActor;                                             
	class UPrimitiveComponent*                         HitComp;                                                  
	class UPhotonHierarchicalInstancedStaticMeshComponent* MeshComponent;                                            
	struct FVector                                     DesPos;                                                   
	int                                                TriggerIndex;                                             
};


struct UPhotonHierarchicalInstancedStaticMeshComponent_OnRep_ImpactData_Params
{
};


struct UPhotonHierarchicalInstancedStaticMeshComponent_OnLocalVehicleHit_Params
{
	TArray<int>                                        InstanceIndex;                                            
	struct FVector4                                    WorldImpactPointAndSpreadSpeed;                           
	struct FVector4                                    WorldImpactVelocityAndRotateSpeed;                        
};


struct UPhotonHierarchicalInstancedStaticMeshComponent_GetPhotonDestructibleMesh_Params
{
	class UPhotonDestructibleMesh*                     ReturnValue;                                              
};


struct UPhotonHierarchicalInstancedStaticMeshComponent_GetInstanceByRadius_Params
{
	struct FVector                                     HitPoint;                                                 
	float                                              Radius;                                                   
	TArray<int>                                        InstancedIndex;                                           
	EDestructionDamageType                             DamageType;                                               
	bool                                               ReturnValue;                                              
};


struct UPhotonHierarchicalInstancedStaticMeshComponent_GetFracturedMesh_Params
{
	class UPhotonFracturedMesh*                        ReturnValue;                                              
};


struct UPhotonHierarchicalInstancedStaticMeshComponent_GenerateEffectInstanceWorldSpace_Params
{
	TArray<int>                                        InstanceIndex;                                            
	TArray<struct FVector>                             WorldImpactVelocityAndRotateSpeed;                        
};


struct UPhotonHierarchicalInstancedStaticMeshComponent_GenerateEffectInstanceLocalSpace_Params
{
	TArray<int>                                        InstanceIndex;                                            
	TArray<struct FVector>                             LocalImpactVelocityAndRotateSpeed;                        
};


struct UPhotonHierarchicalInstancedStaticMeshComponent_ClientCorrectVehicleHit_Params
{
	TArray<int>                                        InstanceIndex;                                            
};


struct UPhotonReplicationSkeletalMeshComponent_UnRegistLuaTick_Params
{
};


struct UPhotonReplicationSkeletalMeshComponent_UnRegisterFromCluster_Params
{
};


struct UPhotonReplicationSkeletalMeshComponent_SetMoveable_Params
{
	bool                                               Value;                                                    
};


struct UPhotonReplicationSkeletalMeshComponent_SetClusterUniqueID_Params
{
	int                                                InClusterID;                                              
};


struct UPhotonReplicationSkeletalMeshComponent_SetClusterEntityState_Params
{
	EClusterEntityState                                EntityState;                                              
};


struct UPhotonReplicationSkeletalMeshComponent_RegistLuaTick_Params
{
	float                                              TickInterval;                                             
};


struct UPhotonReplicationSkeletalMeshComponent_RegisterToCluster_Params
{
};


struct UPhotonReplicationSkeletalMeshComponent_MarkPropDirty_Params
{
	int                                                PropIndex;                                                
};


struct AReusableStaticMeshActor_OnSpawn_Params
{
};


struct AReusableStaticMeshActor_OnRecycle_Params
{
};


struct AReusableSkeletalMeshActor_OnSpawn_Params
{
};


struct AReusableSkeletalMeshActor_OnRecycle_Params
{
};


struct AReusableDestructibleMeshActor_OnSpawn_Params
{
};


struct AReusableDestructibleMeshActor_OnRecycle_Params
{
};


struct UPhotonStaticMeshComponent_SetFracturedMesh_Params
{
	class UPhotonDestructibleMesh*                     InPhotonDestructibleMesh;                                 
};


struct UPhotonStaticMeshComponent_GetPhotonDestructibleMesh_Params
{
	class UPhotonDestructibleMesh*                     ReturnValue;                                              
};


struct UPhotonStaticMeshComponent_GetFracturedMesh_Params
{
	class UPhotonFracturedMesh*                        ReturnValue;                                              
};

}

