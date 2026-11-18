#pragma once


 
namespace SDK
{






class UCreativeLuaVM : public UObject
{
public:
	uint64_t                                           SuspendFrameCounter;                                      
	uint64_t                                           RunFrameCounter;                                          
	int                                                CostCheckInterval;                                        
	unsigned char                                      UnknownData00[0x4];                                       
	double                                             FrameExecuteTime;                                         
	float                                              FrameSuspendMaxDelay;                                     
	unsigned char                                      UnknownData01[0x4];                                       
	double                                             SuspendFrameExecuteTime;                                  
	int                                                CrossVMAPICost;                                           
	unsigned char                                      UnknownData02[0x4];                                       
	class UWorld*                                      World;                                                    
	class AWorldSettings*                              WorldSettings;                                            
	unsigned char                                      UnknownData03[0x8];                                       
	bool                                               bExitWhenFatalOccurs;                                     
	bool                                               bExecuting;                                               
	bool                                               bAbort;                                                   
	unsigned char                                      UnknownData04[0x1];                                       
	int                                                MaxLoopRunCount;                                          
	int                                                MaxExecuteAPICount;                                       
	unsigned char                                      UnknownData05[0x4];                                       
	struct FString                                     LuaReturnFunctionName;                                    
	struct FString                                     RedirectorName;                                           
	TMap<struct FString, double>                       ElapsedTimeMap;                                           
	TMap<struct FString, double>                       MaxElapsedTimeMap;                                        
	TMap<struct FString, int>                          CountBlockMap;                                            
	unsigned char                                      UnknownData06[0xD0];                                      
	bool                                               bCanFreeze;                                               
	unsigned char                                      UnknownData07[0x7];                                       
	struct FScriptDelegate                             AtPanicDelegate;                                          
	struct FScriptMulticastDelegate                    OnLineCommentDelegate;                                    
	unsigned char                                      UnknownData08[0x10];                                      
	struct FScriptDelegate                             CodeFinishDelegate;                                       
	struct FScriptDelegate                             CodeOutputDelegate;                                       
	struct FScriptDelegate                             HasEventToRunDelegate;                                    
	struct FScriptDelegate                             PrepareEventDelegate;                                     
	struct FScriptDelegate                             ExecuteDelayedDelegate;                                   
	struct FScriptDelegate                             CodePreExecuteDelegate;                                   
	unsigned char                                      UnknownData09[0x20];                                      
	struct FString                                     MainModule;                                               
	struct FString                                     EventHandlerName;                                         
	TScriptInterface<class UCreativeEntityInterface>   EntityInterface;                                          
	unsigned char                                      UnknownData10[0xF0];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UgcLua.CreativeLuaVM");
		return pStaticClass;
	}


	void Step();
	void SetUGCLuaMemoryProfile(bool bEnable);
	void SetUGCLuaMemoryAllocDebugPrint(bool bEnable);
	void SetPerformanceLog(bool bEnable);
	void SetNowRC(int idx);
	void SetCodeOutputDelegate(const struct FScriptDelegate& InDelegate);
	void SetCodeFinishDelegate(const struct FScriptDelegate& InDelegate);
	void ResetUGCLuaMemoryProfile();
	void Reset();
	void RequireMain();
	void RegisterLuaFunctions(const struct FString& ModuleName, TArray<struct FString> OpenFunctions);
	void RegisterLuaAPIStringValue(const struct FString& ModuleName, const struct FString& Name, const struct FString& Value);
	void RegisterLuaAPINumberValue(const struct FString& ModuleName, const struct FString& Name, float Value);
	void RegisterLuaAPIBoolValue(const struct FString& ModuleName, const struct FString& Name, bool Value);
	void RefreshLastCommentInfo();
	void PostInit();
	void LogBlockExecuteTime(const struct FString& blockId);
	void KillJob(int JobId, bool bReset);
	void InitEditMods(TArray<struct FString>* mods);
	void Init(int MemLimit);
	int GetUGCLuaBlockMemoryLiveBytes(const struct FString& blockId);
	int GetNowRC();
	int GetMemoryUsed();
	struct FString GetLastCommentInfo();
	void FreezeGameTime(bool bCond);
	void ExtractCurrentCode(int* CodeIdx, struct FString* code);
	bool ExportUGCLuaMemoryProfileAsSluaStat(const struct FString& FilePath, struct FString* outFilePath);
	void ExeCodeUntilSuspended();
	int EnqueueCode(struct FString* RuntimeCode, int* CodeUID);
	struct FString DumpUGCLuaBlockMemoryProfile(int TopN);
	struct FString DescribeLuaThread();
	void Close();
	void AllowRequire(bool bAllow);
};




class UCreativeEntityInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UgcLua.CreativeEntityInterface");
		return pStaticClass;
	}


	class UObject* UUID2UObject(int64_t* UUID);
	bool UUID2Type(int64_t* UUID, EEntityType* Type, unsigned char* SubType);
	uint32_t UUID2Key(int64_t* UUID);
	void RemoveUUID(int64_t* UUID);
	int64_t GetInstanceObjectUUID(int64_t* UUID);
	int64_t CreateEntityIfNotExistsFromUObject(class UObject* Object, EEntityType* Type, unsigned char* SubType);
	int64_t CreateEntityIfNotExistsFromKey(uint32_t* Key, EEntityType* Type, unsigned char* SubType);
};


}

