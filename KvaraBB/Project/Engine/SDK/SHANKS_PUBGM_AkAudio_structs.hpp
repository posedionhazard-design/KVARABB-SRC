#pragma once


 
namespace SDK
{





enum class EAkAcousticPortalState : uint8_t
{
	AkAcousticPortalState__Closed  = 0,
	AkAcousticPortalState__Open    = 1,
	AkAcousticPortalState__AkAcousticPortalState_MAX = 2
};



enum class ECustomAKAreaType : uint8_t
{
	ECustomAKAreaType__EAT_NormalArea = 0,
	ECustomAKAreaType__EAT_ApartArea = 1,
	ECustomAKAreaType__EAT_ApartArea2 = 2,
	ECustomAKAreaType__EAT_TransitionArea = 3,
	ECustomAKAreaType__EAT_MAX     = 4
};



enum class EReflectionFilterBits : uint8_t
{
	EReflectionFilterBits__Wall    = 0,
	EReflectionFilterBits__Ceiling = 1,
	EReflectionFilterBits__Floor   = 2,
	EReflectionFilterBits__EReflectionFilterBits_MAX = 3
};



enum class EPanningRule : uint8_t
{
	PanningRule__PanningRule_Speakers = 0,
	PanningRule__PanningRule_Headphones = 1,
	PanningRule__PanningRule_MAX   = 2
};



enum class EAkChannelConfiguration : uint8_t
{
	AkChannelConfiguration__Ak_Parent = 0,
	AkChannelConfiguration__Ak_1   = 1,
	AkChannelConfiguration__Ak_2   = 2,
	AkChannelConfiguration__Ak_3   = 3,
	AkChannelConfiguration__Ak_4   = 4,
	AkChannelConfiguration__Ak_5   = 5,
	AkChannelConfiguration__Ak_7   = 6,
	AkChannelConfiguration__Ak_5_1 = 7,
	AkChannelConfiguration__Ak_7_1 = 8,
	AkChannelConfiguration__Ak_7_101 = 9,
	AkChannelConfiguration__Ak_Auro_9 = 10,
	AkChannelConfiguration__Ak_Auro_10 = 11,
	AkChannelConfiguration__Ak_Auro_11 = 12,
	AkChannelConfiguration__Ak_Auro_13 = 13,
	AkChannelConfiguration__Ak_Ambisonics_1st_order = 14,
	AkChannelConfiguration__Ak_Ambisonics_2nd_order = 15,
	AkChannelConfiguration__Ak_Ambisonics_3rd_order = 16,
	AkChannelConfiguration__Ak_MAX = 17
};



enum class EFrequencyRange : uint8_t
{
	EFrequencyRange__SubBass       = 0,
	EFrequencyRange__Bass          = 1,
	EFrequencyRange__LowMid        = 2,
	EFrequencyRange__Mid           = 3,
	EFrequencyRange__UpperMid      = 4,
	EFrequencyRange__High          = 5,
	EFrequencyRange__VeryHigh      = 6,
	EFrequencyRange__Decibal       = 7,
	EFrequencyRange__EFrequencyRange_MAX = 8
};









struct FAKAreaVolumeArray
{
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FAkCombinedInfo
{
	struct FVector                                     Location;                                                 
	bool                                               bActive;                                                  
	bool                                               bIsUpdateEmmiterTransform;                                
	unsigned char                                      UnknownData00[0x2];                                       
	TArray<struct FString>                             EventList;                                                
	TMap<struct FString, float>                        RTPCList;                                                 
	TMap<struct FString, struct FString>               SwitchList;                                               
};



struct FAKErrorInfo
{
	unsigned char                                      AKRESULT_ID;                                              
	unsigned char                                      UnknownData00[0x7];                                       
	unsigned char                                      UnknownData01[0x50];                                      
};



struct FAudioOfflineVisualBeatData
{
	float                                              BeatTime;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<float>                                      Intensity;                                                
};



struct FAkRangedEmitterInfo
{
	float                                              RangeSquare;                                              
	uint32_t                                           PlayingID;                                                
	struct FString                                     EventName;                                                
};



struct FAkPoly
{
	class UAkAcousticTexture*                          Texture;                                                  
	bool                                               EnableSurface;                                            
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FAkAudioEventTrackKey
{
	float                                              Time;                                                     
	unsigned char                                      UnknownData00[0x4];                                       
	class UAkAudioEvent*                               AkAudioEvent;                                             
	struct FString                                     EventName;                                                
};



struct FAkAmbSoundCheckpointRecord
{
	bool                                               bCurrentlyPlaying;                                        
};



struct FAKFunctionInfo
{
	struct FString                                     FunctionName;                                             
	struct FString                                     StrParam;                                                 
	int                                                NumParam;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FMovieSceneAkAudioEventTemplate : public FMovieSceneEvalTemplate
{
	class UMovieSceneAkAudioEventSection*              Section;                                                  
};



struct FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate
{
	class UMovieSceneAkAudioRTPCSection*               Section;                                                  
};



struct FMovieSceneAkAudioRTPCSectionData
{
	struct FString                                     RTPCName;                                                 
	struct FRichCurve                                  RTPCCurve;                                                
};

}

