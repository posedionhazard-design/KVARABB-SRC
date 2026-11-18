#pragma once


 
namespace SDK
{






class AMediaPlane : public AActor
{
public:
	class UMediaPlaneComponent*                        MediaPlane;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaCompositing.MediaPlane");
		return pStaticClass;
	}

};




class UMediaPlaneComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaCompositing.MediaPlaneComponent");
		return pStaticClass;
	}


	void SetMediaPlane(const struct FMediaPlaneParameters& Plane);
	void OnRenderTextureChanged();
	struct FMediaPlaneParameters GetPlane();
};




class UMediaPlaneFrustumComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaCompositing.MediaPlaneFrustumComponent");
		return pStaticClass;
	}

};




class UMovieSceneMediaSection : public UMovieSceneSection
{
public:
	class UMediaSource*                                MediaSource;                                              
	bool                                               bLooping;                                                 
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              StartTimeOffset;                                          
	class UMediaTexture*                               MediaTexture;                                             
	class UMediaSoundComponent*                        MediaSoundComponent;                                      
	bool                                               bUseExternalMediaPlayer;                                  
	unsigned char                                      UnknownData01[0x7];                                       
	class UMediaPlayer*                                ExternalMediaPlayer;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaCompositing.MovieSceneMediaSection");
		return pStaticClass;
	}

};




class UMovieSceneMediaTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaCompositing.MovieSceneMediaTrack");
		return pStaticClass;
	}

};


}

