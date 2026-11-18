#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UGameplayTasksComponent_OnRep_SimulatedTasks_Params
{
};


struct UGameplayTasksComponent_K2_RunGameplayTask_Params
{
	TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner;                                                
	class UGameplayTask*                               Task;                                                     
	unsigned char                                      Priority;                                                 
	TArray<class UClass*>                              AdditionalRequiredResources;                              
	TArray<class UClass*>                              AdditionalClaimedResources;                               
	EGameplayTaskRunResult                             ReturnValue;                                              
};


struct UGameplayTask_ReadyForActivation_Params
{
};


struct UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature_Params
{
};


struct UGameplayTask_EndTask_Params
{
};


struct UGameplayTask_ClaimResource_ClaimResources_Params
{
	TScriptInterface<class UGameplayTaskOwnerInterface> InTaskOwner;                                              
	TArray<class UClass*>                              ResourceClasses;                                          
	unsigned char                                      Priority;                                                 
	struct FName                                       TaskInstanceName;                                         
	class UGameplayTask_ClaimResource*                 ReturnValue;                                              
};


struct UGameplayTask_ClaimResource_ClaimResource_Params
{
	TScriptInterface<class UGameplayTaskOwnerInterface> InTaskOwner;                                              
	class UClass*                                      ResourceClass;                                            
	unsigned char                                      Priority;                                                 
	struct FName                                       TaskInstanceName;                                         
	class UGameplayTask_ClaimResource*                 ReturnValue;                                              
};


struct UGameplayTask_SpawnActor_SpawnActor_Params
{
	TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner;                                                
	struct FVector                                     SpawnLocation;                                            
	struct FRotator                                    SpawnRotation;                                            
	class UClass*                                      Class;                                                    
	bool                                               bSpawnOnlyOnAuthority;                                    
	class UGameplayTask_SpawnActor*                    ReturnValue;                                              
};


struct UGameplayTask_SpawnActor_FinishSpawningActor_Params
{
	class UObject*                                     WorldContextObject;                                       
	class AActor*                                      SpawnedActor;                                             
};


struct UGameplayTask_SpawnActor_BeginSpawningActor_Params
{
	class UObject*                                     WorldContextObject;                                       
	class AActor*                                      SpawnedActor;                                             
	bool                                               ReturnValue;                                              
};


struct UGameplayTask_WaitDelay_TaskWaitDelay_Params
{
	TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner;                                                
	float                                              Time;                                                     
	unsigned char                                      Priority;                                                 
	class UGameplayTask_WaitDelay*                     ReturnValue;                                              
};


struct UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature_Params
{
};

}

