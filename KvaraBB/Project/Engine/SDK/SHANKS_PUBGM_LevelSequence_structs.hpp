#pragma once


 
namespace SDK
{






struct FLevelSequenceObjectReferenceMap
{
	unsigned char                                      UnknownData00[0x50];                                      
};



struct FLevelSequenceBindingReference
{
	struct FString                                     PackageName;                                              
	struct FSoftObjectPath                             ExternalObjectPath;                                       
	struct FString                                     ObjectPath;                                               
};



struct FLevelSequenceBindingReferenceArray
{
	TArray<struct FLevelSequenceBindingReference>      References;                                               
};



struct FLevelSequenceBindingReferences
{
	TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences;                                    
};



struct FLevelSequenceObject
{
	TLazyObjectPtr<class UObject>                      ObjectOrOwner;                                            
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     ComponentName;                                            
	TWeakObjectPtr<class UObject>                      CachedComponent;                                          
};



struct FLevelSequenceSnapshotSettings
{
	unsigned char                                      ZeroPadAmount;                                            
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              FrameRate;                                                
};



struct FLevelSequencePlayerSnapshot
{
	struct FText                                       MasterName;                                               
	float                                              MasterTime;                                               
	unsigned char                                      UnknownData00[0x4];                                       
	struct FText                                       CurrentShotName;                                          
	float                                              CurrentShotLocalTime;                                     
	unsigned char                                      UnknownData01[0x4];                                       
	class UCameraComponent*                            CameraComponent;                                          
	struct FLevelSequenceSnapshotSettings              Settings;                                                 
	struct FMovieSceneSequenceID                       ShotID;                                                   
	unsigned char                                      UnknownData02[0x4];                                       
};



struct FBoundActorProxy
{
	unsigned char                                      UnknownData00[0x1];                                       
};



struct FLevelSequenceLegacyObjectReference
{
	unsigned char                                      UnknownData00[0x20];                                      
};

}

