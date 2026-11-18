#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct ABuildingActorBase_SpawnDestroyParticle_Params
{
	bool                                               bSpawnParticle;                                           
	struct FTransform                                  Loc;                                                      
	struct FSoftObjectPath                             DestroyBuildingEffectPath;                                
	class UWorld*                                      World;                                                    
};


struct ABuildingActorBase_SetLastQuadTraceDeviation_Params
{
	float                                              InDeviation;                                              
};


struct ABuildingActorBase_PlayDestroyAnimation_Params
{
	bool                                               bUseParticle;                                             
};


struct ABuildingActorBase_OnTakeDamageFromVehicle_Params
{
	class UPrimitiveComponent*                         MyPrimitiveComp;                                          
	float                                              ForwardSpeed;                                             
	float                                              DamageAmount;                                             
	class AActor*                                      DamageCauser;                                             
	class AController*                                 EventInstigator;                                          
};


struct ABuildingActorBase_OnRep_Health_Params
{
};


struct ABuildingActorBase_OnPlayDestroyAnimation_Params
{
	bool                                               bUseParticle;                                             
};


struct ABuildingActorBase_OnBuildingActorDamaged_Params
{
	float                                              Health;                                                   
};


struct ABuildingActorBase_OnBornAnimationPlayEndInClient_Params
{
};


struct ABuildingActorBase_GetLastQuadTraceDeviation_Params
{
	float                                              ReturnValue;                                              
};


struct ABuildingActorBase_GetBuildID_Params
{
	int                                                ReturnValue;                                              
};


struct ABuildingActorBase_BPOnOwnerChanged_Params
{
};


struct UBuildingActorInterface_UseQuadTraceDeviationForSpawnOffset_Params
{
	struct FVector                                     BuildLocation;                                            
	float                                              QuadTraceDeviation;                                       
	struct FVector                                     OutLocation;                                              
	bool                                               ReturnValue;                                              
};


struct UBuildingActorInterface_UseFixedLocation_Params
{
	bool                                               ReturnValue;                                              
};


struct UBuildingActorInterface_UseCachedBuildLocation_Params
{
	bool                                               ReturnValue;                                              
};


struct UBuildingActorInterface_ShouldUseExtraRotation_Params
{
	bool                                               ReturnValue;                                              
};


struct UBuildingActorInterface_ShouldUseExtraOffset_Params
{
	bool                                               ReturnValue;                                              
};


struct UBuildingActorInterface_ShouldSnapToGrid_Params
{
	bool                                               ReturnValue;                                              
};


struct UBuildingActorInterface_ShouldSkipCheckOwnerCollision_Params
{
	bool                                               ReturnValue;                                              
};


struct UBuildingActorInterface_ShouldCustomBlockingChannels_Params
{
	bool                                               ReturnValue;                                              
};


struct UBuildingActorInterface_ShouldCheckVisibilityTypes_Params
{
	bool                                               ReturnValue;                                              
};


struct UBuildingActorInterface_ShouldAttachToMovementPlatform_Params
{
	bool                                               ReturnValue;                                              
};


struct UBuildingActorInterface_SetBuildingActorID_Params
{
	int                                                BuildID;                                                  
};


struct UBuildingActorInterface_PrebuildCDOBodyInstance_Params
{
	class UWorld*                                      World;                                                    
	struct FTransform                                  tranx;                                                    
};


struct UBuildingActorInterface_NonCullingBeginPlay_Params
{
};


struct UBuildingActorInterface_MaxUnderWaterBuildDepth_Params
{
	float                                              ReturnValue;                                              
};


struct UBuildingActorInterface_IsEnablePitchRotatePlace_Params
{
	bool                                               ReturnValue;                                              
};


struct UBuildingActorInterface_IsEnableOverlayPlace_Params
{
	bool                                               ReturnValue;                                              
};


struct UBuildingActorInterface_IsBuildOnlyOnLandscape_Params
{
	bool                                               ReturnValue;                                              
};


struct UBuildingActorInterface_IsBuildOnEdge_Params
{
	bool                                               ReturnValue;                                              
};


struct UBuildingActorInterface_IsAutoPickValidPlace_Params
{
	bool                                               ReturnValue;                                              
};


struct UBuildingActorInterface_HandleBuildingDestroyed_Params
{
	class AController*                                 InstigatedBy;                                             
};


struct UBuildingActorInterface_HandleBuildingConstructed_Params
{
	class AController*                                 InstigatedBy;                                             
};


struct UBuildingActorInterface_GetWorldSnapSetup_Params
{
	struct FBuildingActorWorldSnapSetup                ReturnValue;                                              
};


struct UBuildingActorInterface_GetVisibilitySkipTypes_Params
{
	TArray<class UClass*>                              ReturnValue;                                              
};


struct UBuildingActorInterface_GetViewLocationOffset_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UBuildingActorInterface_GetProhibitedActorTemplateList_Params
{
	TArray<class UClass*>                              ReturnValue;                                              
};


struct UBuildingActorInterface_GetPreBuildingEffectScale_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UBuildingActorInterface_GetPreBuildingEffectRotation_Params
{
	struct FRotator                                    ReturnValue;                                              
};


struct UBuildingActorInterface_GetPreBuildingEffectPath_Params
{
	struct FSoftObjectPath                             ReturnValue;                                              
};


struct UBuildingActorInterface_GetPreBuildingEffectOffset_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UBuildingActorInterface_GetOverlayPlaceHeight_Params
{
	float                                              ReturnValue;                                              
};


struct UBuildingActorInterface_GetOverlayMaxHeightFromGround_Params
{
	float                                              ReturnValue;                                              
};


struct UBuildingActorInterface_GetMaxTraceDepth_Params
{
	float                                              ReturnValue;                                              
};


struct UBuildingActorInterface_GetMaxOffectHight_Params
{
	float                                              ReturnValue;                                              
};


struct UBuildingActorInterface_GetMaxDeviation_Params
{
	float                                              ReturnValue;                                              
};


struct UBuildingActorInterface_GetDSBuildCheckConfig_Params
{
	struct FBuildingActorDSBuildCheck                  ReturnValue;                                              
};


struct UBuildingActorInterface_GetDetectDeath_Params
{
	float                                              ReturnValue;                                              
};


struct UBuildingActorInterface_GetDestroyedParticleTransformOffset_Params
{
	struct FTransform                                  ReturnValue;                                              
};


struct UBuildingActorInterface_GetDensityParams_Params
{
	struct FVector                                     Location;                                                 
	struct FBuildingActorDensityCheck                  ReturnValue;                                              
};


struct UBuildingActorInterface_GetCustomBlockingChannels_Params
{
	TArray<TEnumAsByte<ECollisionChannel>>             ReturnValue;                                              
};


struct UBuildingActorInterface_GetConstructingMode_Params
{
	TEnumAsByte<EBuildingActorConstructingMode>        ReturnValue;                                              
};


struct UBuildingActorInterface_GetBuildOnEdgeUpLength_Params
{
	float                                              ReturnValue;                                              
};


struct UBuildingActorInterface_GetBuildOnEdgeFrontLength_Params
{
	float                                              ReturnValue;                                              
};


struct UBuildingActorInterface_GetBuildingActorID_Params
{
	int                                                ReturnValue;                                              
};


struct UBuildingActorInterface_GetActorCollisionBoxRotator_Params
{
	struct FRotator                                    ReturnValue;                                              
};


struct UBuildingActorInterface_GetActorCollisionBoxExtern_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UBuildingActorInterface_GetActorCollisionBoxCenter_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UBuildingActorInterface_CustomizeLocationAndRotation_Params
{
	class AActor*                                      Builder;                                                  
	struct FVector                                     InLocation;                                               
	struct FRotator                                    InRotation;                                               
	struct FVector                                     OutLocation;                                              
	struct FRotator                                    OutRotation;                                              
};


struct UBuildingActorInterface_CanDoQuadTrace_Params
{
	bool                                               ReturnValue;                                              
};


struct UBuildingActorInterface_CanCustomizeLocationAndRotation_Params
{
	bool                                               ReturnValue;                                              
};


struct UBuildingActorInterface_CanBuildUnderWater_Params
{
	bool                                               ReturnValue;                                              
};


struct UBuildingActorInterface_BPCheckPlacement_Params
{
	class UWorld*                                      World;                                                    
	struct FTransform                                  tranx;                                                    
	int                                                checkType;                                                
	int                                                CurrentAvatarID;                                          
	class AActor*                                      Builder;                                                  
	bool                                               ReturnValue;                                              
};


struct UBuildingActorInterface_BP_DSFinalCheckPlacement_Params
{
	struct FTransform                                  Transform;                                                
	class AActor*                                      Builder;                                                  
	bool                                               ReturnValue;                                              
};


struct ABuildingActorMgr_OnBuildingActorSpawned_Params
{
	class AActor*                                      InOwnerActor;                                             
	class ABuildingActorBase*                          InBuildingActor;                                          
};


struct ABuildingActorMgr_OnBuildingActorDestroyed_Params
{
	class ABuildingActorBase*                          InBuildingActor;                                          
};


struct ABuildingActorMgr_GetInstance_Params
{
	class UObject*                                     WorldContextObject;                                       
	class ABuildingActorMgr*                           ReturnValue;                                              
};


struct UBuildSystemComponent_TryAttachToMoveablePlatform_Params
{
	class AActor*                                      SpawnedBuilding;                                          
	struct FVector                                     BuildLocation;                                            
};


struct UBuildSystemComponent_ToggleDebugDraw_Params
{
};


struct UBuildSystemComponent_StopPlaceBuilding_Params
{
};


struct UBuildSystemComponent_StartPrePlaceBuilding_Params
{
	int                                                InBuildID;                                                
	int                                                AvatarID;                                                 
	EBuildingViewType                                  viewType;                                                 
};


struct UBuildSystemComponent_SkipCDTimeByBuildID_Params
{
	int                                                InBuildID;                                                
	float                                              IncreaseRate;                                             
};


struct UBuildSystemComponent_ShouldEnableDoubleTouchMode_Params
{
	bool                                               ReturnValue;                                              
};


struct UBuildSystemComponent_SetPrebuildEnabled_Params
{
	bool                                               CanBePlaced;                                              
	bool                                               IsVisible;                                                
};


struct UBuildSystemComponent_SetBuildingDataModeID_Params
{
	int                                                ModeID;                                                   
};


struct UBuildSystemComponent_SetBuildingData_Params
{
	int                                                Index;                                                    
	struct FBuildingData                               InData;                                                   
};


struct UBuildSystemComponent_ServerLineTraceCheck_Params
{
	class UClass*                                      BuildingClass;                                            
	struct FVector                                     CheckLocation;                                            
	struct FRotator                                    CheckRotation;                                            
	bool                                               ReturnValue;                                              
};


struct UBuildSystemComponent_ResetBuildngCDByBuildID_Params
{
	int                                                InBuildID;                                                
	float                                              InNewCDTime;                                              
};


struct UBuildSystemComponent_ResetBuildList_Params
{
};


struct UBuildSystemComponent_ProccessNothingHitTraceOverlap_Params
{
	struct FVector                                     DestLocation;                                             
	struct FRotator                                    DestRotation;                                             
	float                                              MaxBuildDist;                                             
	struct FVector                                     OutLocation;                                              
	int                                                buildIndex;                                               
	struct FVector                                     ViewLocation;                                             
	bool                                               ReturnValue;                                              
};


struct UBuildSystemComponent_PlaceBuildingWithIndex_Params
{
	int                                                buildIndex;                                               
	int                                                AvatarID;                                                 
	bool                                               bRelative;                                                
};


struct UBuildSystemComponent_PlaceBuildingAtLocation_Params
{
	int                                                buildIndex;                                               
	struct FVector                                     Loc;                                                      
	struct FRotator                                    Rot;                                                      
};


struct UBuildSystemComponent_PlaceBuilding_Params
{
	int                                                AvatarID;                                                 
	bool                                               bRelative;                                                
};


struct UBuildSystemComponent_PickLocationByBuildID_Params
{
	int                                                InBuildID;                                                
	struct FVector                                     OutLocation;                                              
	struct FRotator                                    OutRotation;                                              
	bool                                               ReturnValue;                                              
};


struct UBuildSystemComponent_OverriveDeploymentTransform_Params
{
	struct FRotator                                    rotIn;                                                    
	struct FVector                                     locIn;                                                    
	struct FRotator                                    rotOut;                                                   
	struct FVector                                     locOut;                                                   
};


struct UBuildSystemComponent_OverrideBuildingMaxBuildDistance_Params
{
	float                                              BuildingMaxDistance;                                      
	bool                                               SetAll;                                                   
	int                                                BuildingID;                                               
};


struct UBuildSystemComponent_OnTouchedConstructableBoxEnded_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              
	class UPrimitiveComponent*                         TouchedComponent;                                         
};


struct UBuildSystemComponent_OnTouchedConstructableBox_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              
	class UPrimitiveComponent*                         TouchedComponent;                                         
};


struct UBuildSystemComponent_OnTouchActorBuild_Params
{
	struct FVector2D                                   ScreenPosition;                                           
	class APlayerController*                           Controller;                                               
};


struct UBuildSystemComponent_OnAsyncLoadingMeshFinished_Params
{
	int                                                buildIndex;                                               
};


struct UBuildSystemComponent_OnAsyncLoadingEffectFinished_Params
{
	int                                                buildIndex;                                               
};


struct UBuildSystemComponent_OnAsyncLoadingBuildingFinished_Params
{
	int                                                buildIndex;                                               
};


struct UBuildSystemComponent_IsValidAvatar_Params
{
	int                                                AvatarID;                                                 
	bool                                               ReturnValue;                                              
};


struct UBuildSystemComponent_IsParticlePreBuildingEffect_Params
{
	int                                                InBuildID;                                                
	bool                                               ReturnValue;                                              
};


struct UBuildSystemComponent_IsOverlayBuildHeightValid_Params
{
	struct FVector                                     BuildLocation;                                            
	float                                              OverlayMaxHeightFromGround;                               
	bool                                               ReturnValue;                                              
};


struct UBuildSystemComponent_IsInPreBuildingMode_Params
{
	bool                                               ReturnValue;                                              
};


struct UBuildSystemComponent_IsCanPlaceBuildingBP_Params
{
	int                                                InBuildID;                                                
	bool                                               ReturnValue;                                              
};


struct UBuildSystemComponent_IsCanPlaceBuilding_Params
{
	int                                                InBuildID;                                                
	TEnumAsByte<EBuildingActionType>                   _TYPE;                                                    
	bool                                               ReturnValue;                                              
};


struct UBuildSystemComponent_IsActorProhibited_Params
{
	class AActor*                                      Actor;                                                    
	bool                                               ReturnValue;                                              
};


struct UBuildSystemComponent_GetPreBuildingEffectRotation_Params
{
	int                                                InBuildID;                                                
	struct FRotator                                    ReturnValue;                                              
};


struct UBuildSystemComponent_GetPreBuildingEffectPath_Params
{
	int                                                InBuildID;                                                
	int                                                AvatarID;                                                 
	struct FSoftObjectPath                             ReturnValue;                                              
};


struct UBuildSystemComponent_GetPreBuildingEffectOffset_Params
{
	int                                                InBuildID;                                                
	struct FVector                                     ReturnValue;                                              
};


struct UBuildSystemComponent_GetOwnerPlayerController_Params
{
	class APlayerController*                           ReturnValue;                                              
};


struct UBuildSystemComponent_GetMaxDistance_Params
{
	float                                              ReturnValue;                                              
};


struct UBuildSystemComponent_GetLastQuadTraceDeviation_Params
{
	float                                              ReturnValue;                                              
};


struct UBuildSystemComponent_GetIsHasInitData_Params
{
	bool                                               ReturnValue;                                              
};


struct UBuildSystemComponent_GetIndexByBuildingID_Params
{
	int                                                BuildID;                                                  
	int                                                ReturnValue;                                              
};


struct UBuildSystemComponent_GetCurrentBuildType_Params
{
	TEnumAsByte<EBuildingType>                         ReturnValue;                                              
};


struct UBuildSystemComponent_GetCDOByIndex_Params
{
	int                                                Index;                                                    
	class AActor*                                      ReturnValue;                                              
};


struct UBuildSystemComponent_GetBuildingList_Params
{
	TArray<struct FBuildingData>                       ReturnValue;                                              
};


struct UBuildSystemComponent_GetBuildingDataModeID_Params
{
	int                                                ReturnValue;                                              
};


struct UBuildSystemComponent_EnableBuildingByID_Params
{
	int                                                BuildID;                                                  
	bool                                               bEnable;                                                  
};


struct UBuildSystemComponent_DoSceenTouchBuild_Params
{
	int                                                buildIndex;                                               
	struct FVector2D                                   ScreenPostion;                                            
	int                                                PointerIndex;                                             
	TEnumAsByte<EBuildingActionType>                   _TYPE;                                                    
	bool                                               IsBegin;                                                  
	TEnumAsByte<EBuildingActionType>                   CustomBuildEvent;                                         
};


struct UBuildSystemComponent_DensityCheck_Params
{
	struct FBuildingActorDensityCheck                  DensityCheckParmas;                                       
	bool                                               ReturnValue;                                              
};


struct UBuildSystemComponent_CheckShouldSkipByVisibility_Params
{
	class UPrimitiveComponent*                         _comp;                                                    
	int                                                buildIndex;                                               
	bool                                               ReturnValue;                                              
};


struct UBuildSystemComponent_CheckPlacementWithPitch_Params
{
	struct FHitResult                                  Hit;                                                      
	struct FVector                                     OutLocation;                                              
	struct FRotator                                    OutRotation;                                              
	struct FVector                                     BoxExtent;                                                
	struct FBuildingData                               CurBuildData;                                             
	bool                                               ReturnValue;                                              
};


struct UBuildSystemComponent_CheckPlacementOverlap_Params
{
	TArray<struct FHitResult>                          HitArray;                                                 
	struct FVector                                     OutLocation;                                              
	struct FVector                                     BoxExtent;                                                
	struct FBuildingData                               CurBuildData;                                             
	struct FRotator                                    BuildRotation;                                            
	struct FRotator                                    ControlRot;                                               
	struct FVector                                     ViewLocation;                                             
	bool                                               HasForbiddenObject;                                       
	bool                                               ReturnValue;                                              
};


struct UBuildSystemComponent_CheckPlaceBuildingWithIndex_Params
{
	int                                                buildIndex;                                               
	bool                                               ReturnValue;                                              
};


struct UBuildSystemComponent_CheckObjectIsOneOfTheTemplate_Params
{
	class UObject*                                     Obj;                                                      
	TArray<class UClass*>                              _ActorFilterTemplates;                                    
	bool                                               ReturnValue;                                              
};


struct UBuildSystemComponent_CheckCollisionNeedSkipOwner_Params
{
	int                                                buildIndex;                                               
	bool                                               ReturnValue;                                              
};


struct UBuildSystemComponent_BuildAtWorldLoc_Params
{
	int                                                buildIndex;                                               
	struct FTransform                                  tranx;                                                    
	struct FVector                                     EndLocation;                                              
	bool                                               bUseTrace;                                                
	TEnumAsByte<EBuildingActionType>                   BuildType;                                                
	bool                                               ReturnValue;                                              
};


struct UBuildSystemComponent_AddBuildingData_Params
{
	struct FBuildingData                               InData;                                                   
};


struct ASelectBuildActor_SetSelectActorTemplateScale_Params
{
	struct FVector                                     InScale;                                                  
};


struct ASelectBuildActor_SetSelectActorTemplateOffsetAndRotation_Params
{
	struct FVector                                     InOffset;                                                 
	struct FRotator                                    InRotation;                                               
};


struct ASelectBuildActor_SetSelectActorTemplate_Params
{
	class UParticleSystem*                             Template;                                                 
};


struct ASelectBuildActor_SetSelectActorPlacementEnable_Params
{
	bool                                               PlacementEnable;                                          
	bool                                               IsVisible;                                                
};


struct ASelectBuildActor_SetSelectActorMesh_Params
{
	class UStaticMesh*                                 InMesh;                                                   
};


struct ASelectBuildActor_SetIsPlacementEnable_Params
{
	bool                                               Val;                                                      
};


struct ASelectBuildActor_OnParticleLoaded_Params
{
};


struct ASelectBuildActor_IsCurrentPlacementEnable_Params
{
	bool                                               ReturnValue;                                              
};


struct ASelectBuildActor_GetIsPlacementEnable_Params
{
	bool                                               ReturnValue;                                              
};


struct ASelectBuildActor_GetIsParticleEffect_Params
{
	bool                                               ReturnValue;                                              
};

}

