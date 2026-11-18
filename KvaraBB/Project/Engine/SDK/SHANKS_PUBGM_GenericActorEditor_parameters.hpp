#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct AActorEditorActor_SetLargeDataContent_Params
{
	TArray<unsigned char>                              NewContent;                                               
};


struct AActorEditorActor_OnRep_LargeDataContent_Params
{
};


struct AActorEditorActor_GetLargeDataContent_Params
{
	TArray<unsigned char>                              ReturnValue;                                              
};


struct AActorEditorActor_BPTakeDamage_Params
{
	float                                              DamageAmount;                                             
	struct FDamageEvent                                DamageEvent;                                              
	class AController*                                 EventInstigator;                                          
	class AActor*                                      DamageCauser;                                             
	struct FHitResult                                  HitResult;                                                
	class ULuaDamageInfo*                              LuaDamageInfo;                                            
	float                                              ReturnValue;                                              
};


struct AActorEditorAIController_SetupAIPerception_Params
{
	struct FActorEditorAIPerceptionSetup               Setup;                                                    
	class UAIPerceptionComponent*                      ReturnValue;                                              
};


struct AActorEditorAIController_SetPerceptionEnabled_Params
{
	bool                                               bEnabled;                                                 
	bool                                               ReturnValue;                                              
};


struct AActorEditorAIController_SetPerceptionConfig_Params
{
	struct FActorEditorAISightConfig                   InConfig;                                                 
	bool                                               ReturnValue;                                              
};


struct AActorEditorAIController_SetLargeDataContent_Params
{
	TArray<unsigned char>                              NewContent;                                               
};


struct AActorEditorAIController_OnRep_LargeDataContent_Params
{
};


struct AActorEditorAIController_OnReceiveHandleAITargetPerceptionUpdated_Params
{
	class AActor*                                      Actor;                                                    
	struct FAIStimulus                                 Stimulus;                                                 
};


struct AActorEditorAIController_OnReceiveHandleAIPerceptionUpdated_Params
{
	TArray<class AActor*>                              UpdatedActors;                                            
};


struct AActorEditorAIController_HasReachedLocation_Params
{
	struct FVector                                     Location;                                                 
	float                                              Radius;                                                   
	bool                                               IsNavigationDistance;                                     
	bool                                               ReturnValue;                                              
};


struct AActorEditorAIController_HasReachedActor_Params
{
	class AActor*                                      Target;                                                   
	float                                              Radius;                                                   
	bool                                               IsNavigationDistance;                                     
	bool                                               ReturnValue;                                              
};


struct AActorEditorAIController_HasActiveStimulus_Params
{
	class AActor*                                      Target;                                                   
	bool                                               ReturnValue;                                              
};


struct AActorEditorAIController_HandleAITargetPerceptionUpdated_Params
{
	class AActor*                                      Actor;                                                    
	struct FAIStimulus                                 Stimulus;                                                 
};


struct AActorEditorAIController_HandleAIPerceptionUpdated_Params
{
	TArray<class AActor*>                              UpdatedActors;                                            
};


struct AActorEditorAIController_GetPerceptionConfig_Params
{
	struct FActorEditorAISightConfig                   OutConfig;                                                
	bool                                               ReturnValue;                                              
};


struct AActorEditorAIController_GetLargeDataContent_Params
{
	TArray<unsigned char>                              ReturnValue;                                              
};


struct AActorEditorAIController_GetIsMoving_Params
{
	bool                                               ReturnValue;                                              
};


struct AActorEditorAIController_GetCurrentlyPerceivedActors_Params
{
	class UClass*                                      SenseClass;                                               
	TArray<class AActor*>                              ReturnValue;                                              
};


struct UActorEditorAnimInstanceBase_ClearAnimReferences_Params
{
};


struct AActorEditorCharacter_SetLargeDataContent_Params
{
	TArray<unsigned char>                              NewContent;                                               
};


struct AActorEditorCharacter_OnRep_LargeDataContent_Params
{
};


struct AActorEditorCharacter_GetLargeDataContent_Params
{
	TArray<unsigned char>                              ReturnValue;                                              
};


struct AActorEditorCharacter_BPTakeDamage_Params
{
	float                                              DamageAmount;                                             
	struct FDamageEvent                                DamageEvent;                                              
	class AController*                                 EventInstigator;                                          
	class AActor*                                      DamageCauser;                                             
	struct FHitResult                                  HitResult;                                                
	class ULuaDamageInfo*                              LuaDamageInfo;                                            
	float                                              ReturnValue;                                              
};


struct UActorEditorCharacterMovementComponent_OnRep_CharacterMovementSyncData_Params
{
};


struct UActorEditorComponentBlueprintLibrary_UnregisterComponent_Params
{
	class UActorComponent*                             InComponent;                                              
};


struct UActorEditorComponentBlueprintLibrary_UnRegisterActorPerceivable_Params
{
	class AActor*                                      Actor;                                                    
	bool                                               ReturnValue;                                              
};


struct UActorEditorComponentBlueprintLibrary_SetWidgetOpacityFromTexture_Params
{
	class UWidgetComponent*                            InComp;                                                   
	float                                              Opacity;                                                  
};


struct UActorEditorComponentBlueprintLibrary_SetWidgetDrawAtDesiredSize_Params
{
	class UWidgetComponent*                            InComp;                                                   
	bool                                               bDrawAtDesiredSize;                                       
};


struct UActorEditorComponentBlueprintLibrary_SetParticleSystemAutoDestroy_Params
{
	class UParticleSystemComponent*                    InComp;                                                   
	bool                                               bAutoDestroy;                                             
};


struct UActorEditorComponentBlueprintLibrary_SetNetAddressable_Params
{
	class UActorComponent*                             InComponent;                                              
};


struct UActorEditorComponentBlueprintLibrary_SetMobility_Params
{
	class USceneComponent*                             InSceneComp;                                              
	TEnumAsByte<EComponentMobility>                    NewMobility;                                              
};


struct UActorEditorComponentBlueprintLibrary_SetComponentAutoActivate_Params
{
	class UActorComponent*                             InComponent;                                              
	bool                                               bAutoActivate;                                            
};


struct UActorEditorComponentBlueprintLibrary_SetActorRootComponent_Params
{
	class AActor*                                      InActor;                                                  
	class USceneComponent*                             NewRootComponent;                                         
	bool                                               ReturnValue;                                              
};


struct UActorEditorComponentBlueprintLibrary_ReregisterComponent_Params
{
	class UActorComponent*                             InComponent;                                              
};


struct UActorEditorComponentBlueprintLibrary_RegisterComponent_Params
{
	class UActorComponent*                             InComponent;                                              
};


struct UActorEditorComponentBlueprintLibrary_RegisterActorPerceivable_Params
{
	class AActor*                                      Actor;                                                    
	bool                                               ReturnValue;                                              
};


struct UActorEditorComponentBlueprintLibrary_IsSimulatingPhysics_Params
{
	class UPrimitiveComponent*                         InComp;                                                   
	bool                                               ReturnValue;                                              
};


struct UActorEditorComponentBlueprintLibrary_IsComponentRegistered_Params
{
	class UActorComponent*                             InComponent;                                              
	bool                                               ReturnValue;                                              
};


struct UActorEditorComponentBlueprintLibrary_GetParticleSystemAutoDestroy_Params
{
	class UParticleSystemComponent*                    InComp;                                                   
	bool                                               ReturnValue;                                              
};


struct UActorEditorComponentBlueprintLibrary_GetFloatParameter_Params
{
	class UParticleSystemComponent*                    InComp;                                                   
	struct FName                                       InName;                                                   
	float                                              ReturnValue;                                              
};


struct UActorEditorComponentBlueprintLibrary_GetComponentBounds_Params
{
	class USceneComponent*                             InSceneComp;                                              
	struct FVector                                     Origin;                                                   
	struct FVector                                     BoxExtent;                                                
	float                                              SphereRadius;                                             
};


struct UActorEditorComponentBlueprintLibrary_GetCollisionTraceFlag_Params
{
	class UPrimitiveComponent*                         InComp;                                                   
	TEnumAsByte<ECollisionTraceFlag>                   ReturnValue;                                              
};


struct UActorEditorComponentBlueprintLibrary_GetBoneTransform_Params
{
	class USkinnedMeshComponent*                       InComp;                                                   
	int                                                BoneIdx;                                                  
	struct FTransform                                  LocalToWorld;                                             
	struct FTransform                                  ReturnValue;                                              
};


struct UActorEditorComponentBlueprintLibrary_GetBoneLocation_Params
{
	class USkinnedMeshComponent*                       InComp;                                                   
	struct FName                                       BoneName;                                                 
	TEnumAsByte<EBoneSpaces>                           Space;                                                    
	struct FVector                                     ReturnValue;                                              
};


struct UActorEditorComponentBlueprintLibrary_GetActorRootComponent_Params
{
	class AActor*                                      InActor;                                                  
	class USceneComponent*                             ReturnValue;                                              
};


struct UActorEditorComponentBlueprintLibrary_ChangeRootComponent_Params
{
	class AActor*                                      InActor;                                                  
	class USceneComponent*                             NewRootComponent;                                         
	bool                                               ReturnValue;                                              
};


struct AActorEditorDecoratorActor_SetLargeDataContent_Params
{
	TArray<unsigned char>                              NewContent;                                               
};


struct AActorEditorDecoratorActor_OnRep_LargeDataContent_Params
{
};


struct AActorEditorDecoratorActor_GetLargeDataContent_Params
{
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UActorEditorDisableTransformReplicationInterface_SetDisableTransformReplication_Params
{
	bool                                               bInDisable;                                               
};


struct UActorEditorParticleSystemComponent_GetEmitterInstanceNum_Params
{
	int                                                ReturnValue;                                              
};


struct AActorEditorPawn_SetLargeDataContent_Params
{
	TArray<unsigned char>                              NewContent;                                               
};


struct AActorEditorPawn_OnRep_LargeDataContent_Params
{
};


struct AActorEditorPawn_GetLargeDataContent_Params
{
	TArray<unsigned char>                              ReturnValue;                                              
};


struct AActorEditorPawn_BPTakeDamage_Params
{
	float                                              DamageAmount;                                             
	struct FDamageEvent                                DamageEvent;                                              
	class AController*                                 EventInstigator;                                          
	class AActor*                                      DamageCauser;                                             
	struct FHitResult                                  HitResult;                                                
	class ULuaDamageInfo*                              LuaDamageInfo;                                            
	float                                              ReturnValue;                                              
};


struct UActorEditorSimpleCharacterMovementComponent_OnRep_CharacterMovementSyncData_Params
{
};


struct UActorEditorSkeletalMeshComponent_SetSkeletalModelPreset_Params
{
	struct FString                                     ModePresetIDStr;                                          
};


struct UActorEditorSkeletalMeshComponent_PlaySkeletalAnimationPreset_Params
{
	struct FString                                     AnimationPresetIDStr;                                     
};


struct UActorEditorStaticMeshComponent_SetStaticMeshPath_Params
{
	struct FString                                     InMeshPath;                                               
	bool                                               ReturnValue;                                              
};


struct UActorEditorStaticMeshComponent_OnRep_StaticMeshPath_Params
{
	struct FString                                     OldPath;                                                  
};

}

