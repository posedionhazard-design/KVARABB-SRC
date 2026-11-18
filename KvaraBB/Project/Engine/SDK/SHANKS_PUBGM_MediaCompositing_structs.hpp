#pragma once


 
namespace SDK
{






struct FMediaPlaneParameters
{
	class UMaterialInterface*                          Material;                                                 
	struct FName                                       TextureParameterName;                                     
	bool                                               bFillScreen;                                              
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector2D                                   FillScreenAmount;                                         
	struct FVector2D                                   FixedSize;                                                
	unsigned char                                      UnknownData01[0x4];                                       
	class UTexture*                                    RenderTexture;                                            
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          
};



struct FMovieSceneMediaSectionParams
{
	class UMediaSoundComponent*                        MediaSoundComponent;                                      
	class UMediaSource*                                MediaSource;                                              
	class UMediaTexture*                               MediaTexture;                                             
	class UMediaPlayer*                                MediaPlayer;                                              
	float                                              SectionStartTime;                                         
	float                                              SectionEndTime;                                           
	bool                                               bLooping;                                                 
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              StartTimeOffset;                                          
};



struct FMovieSceneMediaSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneMediaSectionParams               Params;                                                   
};

}

