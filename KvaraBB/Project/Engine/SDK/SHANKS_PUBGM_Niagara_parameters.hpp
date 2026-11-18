#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UNiagaraComponent_SetSeekDelta_Params
{
	float                                              InSeekDelta;                                              
};


struct UNiagaraComponent_SetRenderingEnabled_Params
{
	bool                                               bInRenderingEnabled;                                      
};


struct UNiagaraComponent_SetPreviewLODDistance_Params
{
	bool                                               bEnablePreviewLODDistance;                                
	float                                              PreviewLODDistance;                                       
};


struct UNiagaraComponent_SetPreviewDetailLevel_Params
{
	bool                                               bEnablePreviewDetailLevel;                                
	int                                                PreviewDetailLevel;                                       
};


struct UNiagaraComponent_SetPaused_Params
{
	bool                                               bInPaused;                                                
};


struct UNiagaraComponent_SetNiagaraVariableVec4_Params
{
	struct FString                                     InVariableName;                                           
	struct FVector4                                    InValue;                                                  
};


struct UNiagaraComponent_SetNiagaraVariableVec3_Params
{
	struct FString                                     InVariableName;                                           
	struct FVector                                     InValue;                                                  
};


struct UNiagaraComponent_SetNiagaraVariableVec2_Params
{
	struct FString                                     InVariableName;                                           
	struct FVector2D                                   InValue;                                                  
};


struct UNiagaraComponent_SetNiagaraVariableQuat_Params
{
	struct FString                                     InVariableName;                                           
	struct FQuat                                       InValue;                                                  
};


struct UNiagaraComponent_SetNiagaraVariableLinearColor_Params
{
	struct FString                                     InVariableName;                                           
	struct FLinearColor                                InValue;                                                  
};


struct UNiagaraComponent_SetNiagaraVariableInt_Params
{
	struct FString                                     InVariableName;                                           
	int                                                InValue;                                                  
};


struct UNiagaraComponent_SetNiagaraVariableFloat_Params
{
	struct FString                                     InVariableName;                                           
	float                                              InValue;                                                  
};


struct UNiagaraComponent_SetNiagaraVariableBool_Params
{
	struct FString                                     InVariableName;                                           
	bool                                               InValue;                                                  
};


struct UNiagaraComponent_SetNiagaraVariableActor_Params
{
	struct FString                                     InVariableName;                                           
	class AActor*                                      Actor;                                                    
};


struct UNiagaraComponent_SetMaxSimTime_Params
{
	float                                              InMaxTime;                                                
};


struct UNiagaraComponent_SetForceSolo_Params
{
	bool                                               bInForceSolo;                                             
};


struct UNiagaraComponent_SetDesiredAge_Params
{
	float                                              InDesiredAge;                                             
};


struct UNiagaraComponent_SetCanRenderWhileSeeking_Params
{
	bool                                               bInCanRenderWhileSeeking;                                 
};


struct UNiagaraComponent_SetAutoDestroy_Params
{
	bool                                               bInAutoDestroy;                                           
};


struct UNiagaraComponent_SetAutoAttachmentParameters_Params
{
	class USceneComponent*                             Parent;                                                   
	struct FName                                       SocketName;                                               
	EAttachmentRule                                    LocationRule;                                             
	EAttachmentRule                                    RotationRule;                                             
	EAttachmentRule                                    ScaleRule;                                                
};


struct UNiagaraComponent_SetAsset_Params
{
	class UNiagaraSystem*                              InAsset;                                                  
};


struct UNiagaraComponent_SetAgeUpdateMode_Params
{
	ENiagaraAgeUpdateMode                              InAgeUpdateMode;                                          
};


struct UNiagaraComponent_SeekToDesiredAge_Params
{
	float                                              InDesiredAge;                                             
};


struct UNiagaraComponent_ResetSystem_Params
{
};


struct UNiagaraComponent_ReinitializeSystem_Params
{
};


struct UNiagaraComponent_IsPaused_Params
{
	bool                                               ReturnValue;                                              
};


struct UNiagaraComponent_GetSeekDelta_Params
{
	float                                              ReturnValue;                                              
};


struct UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Params
{
	struct FString                                     InEmitterName;                                            
	struct FString                                     InValueName;                                              
	TArray<struct FVector>                             ReturnValue;                                              
};


struct UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Params
{
	struct FString                                     InEmitterName;                                            
	struct FString                                     InValueName;                                              
	TArray<float>                                      ReturnValue;                                              
};


struct UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Params
{
	struct FString                                     InEmitterName;                                            
	TArray<struct FVector>                             ReturnValue;                                              
};


struct UNiagaraComponent_GetMaxSimTime_Params
{
	float                                              ReturnValue;                                              
};


struct UNiagaraComponent_GetForceSolo_Params
{
	bool                                               ReturnValue;                                              
};


struct UNiagaraComponent_GetDesiredAge_Params
{
	float                                              ReturnValue;                                              
};


struct UNiagaraComponent_GetAsset_Params
{
	class UNiagaraSystem*                              ReturnValue;                                              
};


struct UNiagaraComponent_GetAgeUpdateMode_Params
{
	ENiagaraAgeUpdateMode                              ReturnValue;                                              
};


struct UNiagaraComponent_DeactivateImmediate_Params
{
};


struct UNiagaraComponent_AdvanceSimulationByTime_Params
{
	float                                              SimulateTime;                                             
	float                                              TickDeltaSeconds;                                         
};


struct UNiagaraComponent_AdvanceSimulation_Params
{
	int                                                TickCount;                                                
	float                                              TickDeltaSeconds;                                         
};


struct UNiagaraFunctionLibrary_SpawnSystemAttached_Params
{
	class UNiagaraSystem*                              SystemTemplate;                                           
	class USceneComponent*                             AttachToComponent;                                        
	struct FName                                       AttachPointName;                                          
	struct FVector                                     Location;                                                 
	struct FRotator                                    Rotation;                                                 
	TEnumAsByte<EAttachLocation>                       LocationType;                                             
	bool                                               bAutoDestroy;                                             
	class UNiagaraComponent*                           ReturnValue;                                              
};


struct UNiagaraFunctionLibrary_SpawnSystemAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UNiagaraSystem*                              SystemTemplate;                                           
	struct FVector                                     Location;                                                 
	struct FRotator                                    Rotation;                                                 
	bool                                               bAutoDestroy;                                             
	class UNiagaraComponent*                           ReturnValue;                                              
};


struct UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            
	struct FString                                     OverrideName;                                             
	class UStaticMeshComponent*                        StaticMeshComponent;                                      
};


struct UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            
	struct FString                                     OverrideName;                                             
	class UStaticMesh*                                 StaticMesh;                                               
};


struct UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Params
{
	class UNiagaraComponent*                           NiagaraSystem;                                            
	struct FString                                     OverrideName;                                             
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    
};


struct UNiagaraFunctionLibrary_IsAllowNiagaraGPUParticles_Params
{
	class UObject*                                     WorldContextObject;                                       
	bool                                               ReturnValue;                                              
};


struct UNiagaraFunctionLibrary_GetReadbackParticleCount_Params
{
	int                                                ReturnValue;                                              
};


struct UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UNiagaraParameterCollection*                 Collection;                                               
	class UNiagaraParameterCollectionInstance*         ReturnValue;                                              
};


struct UNiagaraFunctionLibrary_GetGPUReadbackDelay_Params
{
	int                                                ReturnValue;                                              
};


struct UNiagaraFunctionLibrary_GetGPUParticleCount_Params
{
	int                                                ReturnValue;                                              
};


struct UNiagaraFunctionLibrary_GetDeadParticleCount_Params
{
	int                                                ReturnValue;                                              
};


struct UNiagaraFunctionLibrary_GetCPUParticleCount_Params
{
	int                                                ReturnValue;                                              
};


struct UNiagaraParameterCollectionInstance_SetVectorParameter_Params
{
	struct FString                                     InVariableName;                                           
	struct FVector                                     InValue;                                                  
};


struct UNiagaraParameterCollectionInstance_SetVector4Parameter_Params
{
	struct FString                                     InVariableName;                                           
	struct FVector4                                    InValue;                                                  
};


struct UNiagaraParameterCollectionInstance_SetVector2DParameter_Params
{
	struct FString                                     InVariableName;                                           
	struct FVector2D                                   InValue;                                                  
};


struct UNiagaraParameterCollectionInstance_SetQuatParameter_Params
{
	struct FString                                     InVariableName;                                           
	struct FQuat                                       InValue;                                                  
};


struct UNiagaraParameterCollectionInstance_SetIntParameter_Params
{
	struct FString                                     InVariableName;                                           
	int                                                InValue;                                                  
};


struct UNiagaraParameterCollectionInstance_SetFloatParameter_Params
{
	struct FString                                     InVariableName;                                           
	float                                              InValue;                                                  
};


struct UNiagaraParameterCollectionInstance_SetColorParameter_Params
{
	struct FString                                     InVariableName;                                           
	struct FLinearColor                                InValue;                                                  
};


struct UNiagaraParameterCollectionInstance_SetBoolParameter_Params
{
	struct FString                                     InVariableName;                                           
	bool                                               InValue;                                                  
};


struct UNiagaraParameterCollectionInstance_GetVectorParameter_Params
{
	struct FString                                     InVariableName;                                           
	struct FVector                                     ReturnValue;                                              
};


struct UNiagaraParameterCollectionInstance_GetVector4Parameter_Params
{
	struct FString                                     InVariableName;                                           
	struct FVector4                                    ReturnValue;                                              
};


struct UNiagaraParameterCollectionInstance_GetVector2DParameter_Params
{
	struct FString                                     InVariableName;                                           
	struct FVector2D                                   ReturnValue;                                              
};


struct UNiagaraParameterCollectionInstance_GetQuatParameter_Params
{
	struct FString                                     InVariableName;                                           
	struct FQuat                                       ReturnValue;                                              
};


struct UNiagaraParameterCollectionInstance_GetIntParameter_Params
{
	struct FString                                     InVariableName;                                           
	int                                                ReturnValue;                                              
};


struct UNiagaraParameterCollectionInstance_GetFloatParameter_Params
{
	struct FString                                     InVariableName;                                           
	float                                              ReturnValue;                                              
};


struct UNiagaraParameterCollectionInstance_GetColorParameter_Params
{
	struct FString                                     InVariableName;                                           
	struct FLinearColor                                ReturnValue;                                              
};


struct UNiagaraParameterCollectionInstance_GetBoolParameter_Params
{
	struct FString                                     InVariableName;                                           
	bool                                               ReturnValue;                                              
};


struct ANiagaraPreviewBase_SetSystem_Params
{
	class UNiagaraSystem*                              InSystem;                                                 
};


struct ANiagaraPreviewBase_SetLabelText_Params
{
	struct FText                                       InXAxisText;                                              
	struct FText                                       InYAxisText;                                              
};


struct UNiagaraPreviewAxis_Num_Params
{
	int                                                ReturnValue;                                              
};


struct UNiagaraPreviewAxis_ApplyToPreview_Params
{
	class UNiagaraComponent*                           PreviewComponent;                                         
	int                                                PreviewIndex;                                             
	bool                                               bIsXAxis;                                                 
	struct FString                                     OutLabelText;                                             
};


struct ANiagaraPreviewGrid_DeactivatePreviews_Params
{
};


struct ANiagaraPreviewGrid_ActivatePreviews_Params
{
	bool                                               bReset;                                                   
};


struct UNiagaraScript_OnCompilationComplete_Params
{
};

}

