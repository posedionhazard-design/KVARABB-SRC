#pragma once


 
namespace SDK
{






class UGameFeatureAction : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameFeatures.GameFeatureAction");
		return pStaticClass;
	}

};




class UGameFeatureAction_AddComponents : public UGameFeatureAction
{
public:
	TArray<struct FGameFeatureComponentEntry>          ComponentList;                                            
	unsigned char                                      UnknownData00[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameFeatures.GameFeatureAction_AddComponents");
		return pStaticClass;
	}

};




class UGameFeatureData : public UPrimaryDataAsset
{
public:
	TArray<class UGameFeatureAction*>                  Actions;                                                  
	TArray<struct FPrimaryAssetTypeInfo>               PrimaryAssetTypesToScan;                                  

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameFeatures.GameFeatureData");
		return pStaticClass;
	}

};




class UGameFeaturePluginStateMachine : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      
	struct FGameFeaturePluginStateMachineProperties    StateProperties;                                          
	unsigned char                                      UnknownData01[0xA0];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameFeatures.GameFeaturePluginStateMachine");
		return pStaticClass;
	}

};




class UGameFeaturesProjectPolicies : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameFeatures.GameFeaturesProjectPolicies");
		return pStaticClass;
	}

};




class UDefaultGameFeaturesProjectPolicies : public UGameFeaturesProjectPolicies
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameFeatures.DefaultGameFeaturesProjectPolicies");
		return pStaticClass;
	}

};




class UGameFeaturesSubsystem : public UEngineSubsystem
{
public:
	TMap<struct FString, class UGameFeaturePluginStateMachine*> GameFeaturePluginStateMachines;                           
	unsigned char                                      UnknownData00[0x50];                                      
	TArray<class UGameFeatureStateChangeObserver*>     Observers;                                                
	class UGameFeaturesProjectPolicies*                GameSpecificPolicies;                                     
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameFeatures.GameFeaturesSubsystem");
		return pStaticClass;
	}

};




class UGameFeaturesSubsystemSettings : public UDeveloperSettings
{
public:
	struct FSoftClassPath                              GameFeaturesManagerClassName;                             
	TArray<struct FString>                             DisabledPlugins;                                          
	TArray<struct FString>                             AdditionalPluginMetadataKeys;                             
	struct FString                                     BuiltInGameFeaturePluginsFolder;                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameFeatures.GameFeaturesSubsystemSettings");
		return pStaticClass;
	}

};




class UGameFeatureStateChangeObserver : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameFeatures.GameFeatureStateChangeObserver");
		return pStaticClass;
	}

};


}

