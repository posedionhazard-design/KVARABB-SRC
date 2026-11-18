#pragma once


 
namespace SDK
{






class UGeometryCache : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	TArray<class UMaterialInterface*>                  Materials;                                                
	TArray<class UGeometryCacheTrack*>                 Tracks;                                                   
	unsigned char                                      UnknownData01[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GeometryCache.GeometryCache");
		return pStaticClass;
	}

};




class AGeometryCacheActor : public AActor
{
public:
	class UGeometryCacheComponent*                     GeometryCacheComponent;                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GeometryCache.GeometryCacheActor");
		return pStaticClass;
	}


	class UGeometryCacheComponent* GetGeometryCacheComponent();
};




class UGeometryCacheComponent : public UMeshComponent
{
public:
	class UGeometryCache*                              GeometryCache;                                            
	bool                                               bRunning;                                                 
	bool                                               bLooping;                                                 
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              StartTimeOffset;                                          
	float                                              PlaybackSpeed;                                            
	int                                                NumTracks;                                                
	float                                              ElapsedTime;                                              
	unsigned char                                      UnknownData01[0x54];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GeometryCache.GeometryCacheComponent");
		return pStaticClass;
	}


	void Stop();
	void SetStartTimeOffset(float NewStartTimeOffset);
	void SetPlaybackSpeed(float NewPlaybackSpeed);
	void SetLooping(bool bNewLooping);
	bool SetGeometryCache(class UGeometryCache* NewGeomCache);
	void PlayReversedFromEnd();
	void PlayReversed();
	void PlayFromStart();
	void Play();
	void Pause();
	bool IsPlayingReversed();
	bool IsPlaying();
	bool IsLooping();
	float GetStartTimeOffset();
	float GetPlaybackSpeed();
};




class UGeometryCacheTrack : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GeometryCache.GeometryCacheTrack");
		return pStaticClass;
	}

};




class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
public:
	unsigned char                                      UnknownData00[0x20];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GeometryCache.GeometryCacheTrack_FlipbookAnimation");
		return pStaticClass;
	}


	void AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime);
};




class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{
public:
	unsigned char                                      UnknownData00[0x50];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GeometryCache.GeometryCacheTrack_TransformAnimation");
		return pStaticClass;
	}


	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
};




class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{
public:
	unsigned char                                      UnknownData00[0x50];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation");
		return pStaticClass;
	}


	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
};


}

