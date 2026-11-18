#pragma once


 
namespace SDK
{






class UGameplayTasksComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	TArray<class UGameplayTask*>                       SimulatedTasks;                                           
	TArray<class UGameplayTask*>                       TaskPriorityQueue;                                        
	unsigned char                                      UnknownData01[0x10];                                      
	TArray<class UGameplayTask*>                       TickingTasks;                                             
	TArray<class UGameplayTask*>                       KnownTasks;                                               
	unsigned char                                      UnknownData02[0x8];                                       
	struct FScriptMulticastDelegate                    OnClaimedResourcesChange;                                 
	unsigned char                                      UnknownData03[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayTasks.GameplayTasksComponent");
		return pStaticClass;
	}


	void OnRep_SimulatedTasks();
	static EGameplayTaskRunResult K2_RunGameplayTask(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, class UGameplayTask* Task, unsigned char Priority, TArray<class UClass*> AdditionalRequiredResources, TArray<class UClass*> AdditionalClaimedResources);
};




class UGameplayTask : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FName                                       InstanceName;                                             
	unsigned char                                      UnknownData01[0x2];                                       
	ETaskResourceOverlapPolicy                         ResourceOverlapPolicy;                                    
	unsigned char                                      UnknownData02[0x1D];                                      
	class UGameplayTask*                               ChildTask;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayTasks.GameplayTask");
		return pStaticClass;
	}


	void ReadyForActivation();
	void GenericGameplayTaskDelegate__DelegateSignature();
	void EndTask();
};




class UGameplayTask_ClaimResource : public UGameplayTask
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayTasks.GameplayTask_ClaimResource");
		return pStaticClass;
	}


	static class UGameplayTask_ClaimResource* ClaimResources(const TScriptInterface<class UGameplayTaskOwnerInterface>& InTaskOwner, TArray<class UClass*> ResourceClasses, unsigned char Priority, const struct FName& TaskInstanceName);
	static class UGameplayTask_ClaimResource* ClaimResource(const TScriptInterface<class UGameplayTaskOwnerInterface>& InTaskOwner, class UClass* ResourceClass, unsigned char Priority, const struct FName& TaskInstanceName);
};




class UGameplayTask_SpawnActor : public UGameplayTask
{
public:
	struct FScriptMulticastDelegate                    Success;                                                  
	struct FScriptMulticastDelegate                    DidNotSpawn;                                              
	unsigned char                                      UnknownData00[0x18];                                      
	class UClass*                                      ClassToSpawn;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayTasks.GameplayTask_SpawnActor");
		return pStaticClass;
	}


	static class UGameplayTask_SpawnActor* SpawnActor(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority);
	void FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor);
	bool BeginSpawningActor(class UObject* WorldContextObject, class AActor** SpawnedActor);
};




class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{
public:
	struct FScriptMulticastDelegate                    OnFinished;                                               
	struct FScriptMulticastDelegate                    OnTimeExpired;                                            
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayTasks.GameplayTask_TimeLimitedExecution");
		return pStaticClass;
	}

};




class UGameplayTask_WaitDelay : public UGameplayTask
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                 
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayTasks.GameplayTask_WaitDelay");
		return pStaticClass;
	}


	static class UGameplayTask_WaitDelay* TaskWaitDelay(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, float Time, unsigned char Priority);
	void TaskDelayDelegate__DelegateSignature();
};




class UGameplayTaskOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayTasks.GameplayTaskOwnerInterface");
		return pStaticClass;
	}

};




class UGameplayTaskResource : public UObject
{
public:
	int                                                ManualResourceID;                                         
	int8_t                                             AutoResourceID;                                           
	unsigned char                                      bManuallySetID : 1;                                       
	unsigned char                                      UnknownData00[0x2];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameplayTasks.GameplayTaskResource");
		return pStaticClass;
	}

};


}

