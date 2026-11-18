#pragma once


 
namespace SDK
{






class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
public:
	struct FName                                       PropertyName;                                             
	struct FString                                     PropertyPath;                                             
	TArray<class UMovieSceneSection*>                  Sections;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieScenePropertyTrack");
		return pStaticClass;
	}

};




class UMovieSceneTransformOrigin : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneTransformOrigin");
		return pStaticClass;
	}


	struct FTransform BP_GetTransformOrigin();
};




class UMovieScene3DConstraintSection : public UMovieSceneSection
{
public:
	struct FGuid                                       ConstraintId;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieScene3DConstraintSection");
		return pStaticClass;
	}

};




class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
public:
	struct FName                                       AttachSocketName;                                         
	struct FName                                       AttachComponentName;                                      
	EAttachmentRule                                    AttachmentLocationRule;                                   
	EAttachmentRule                                    AttachmentRotationRule;                                   
	EAttachmentRule                                    AttachmentScaleRule;                                      
	EDetachmentRule                                    DetachmentLocationRule;                                   
	EDetachmentRule                                    DetachmentRotationRule;                                   
	EDetachmentRule                                    DetachmentScaleRule;                                      
	unsigned char                                      UnknownData00[0x2];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieScene3DAttachSection");
		return pStaticClass;
	}

};




class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  ConstraintSections;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieScene3DConstraintTrack");
		return pStaticClass;
	}

};




class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieScene3DAttachTrack");
		return pStaticClass;
	}

};




class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
public:
	struct FRichCurve                                  TimingCurve;                                              
	EMovieScene3DPathSection_Axis                      FrontAxisEnum;                                            
	EMovieScene3DPathSection_Axis                      UpAxisEnum;                                               
	unsigned char                                      bFollow : 1;                                              
	unsigned char                                      bReverse : 1;                                             
	unsigned char                                      bForceUpright : 1;                                        
	bool                                               bUseConstantVelocity;                                     
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieScene3DPathSection");
		return pStaticClass;
	}

};




class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieScene3DPathTrack");
		return pStaticClass;
	}

};




class UMovieScene3DTransformSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FMovieSceneTransformMask                    TransformMask;                                            
	unsigned char                                      UnknownData01[0x4];                                       
	struct FRichCurve                                  Translation[0x3];                                         
	struct FRichCurve                                  Rotation[0x3];                                            
	struct FRichCurve                                  Scale[0x3];                                               
	struct FRichCurve                                  ManualWeight;                                             
	bool                                               bIgnoreGlobalTransform;                                   
	unsigned char                                      UnknownData02[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformSection");
		return pStaticClass;
	}

};




class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformTrack");
		return pStaticClass;
	}

};




class UMovieSceneActorReferenceSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FIntegralCurve                              ActorGuidIndexCurve;                                      
	unsigned char                                      UnknownData01[0x10];                                      
	TArray<struct FString>                             ActorGuidStrings;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneActorReferenceSection");
		return pStaticClass;
	}

};




class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneActorReferenceTrack");
		return pStaticClass;
	}

};




class UMovieSceneAudioSection : public UMovieSceneSection
{
public:
	class USoundBase*                                  Sound;                                                    
	float                                              StartOffset;                                              
	float                                              AudioStartTime;                                           
	float                                              AudioDilationFactor;                                      
	float                                              AudioVolume;                                              
	struct FRichCurve                                  SoundVolume;                                              
	struct FRichCurve                                  PitchMultiplier;                                          
	bool                                               bSuppressSubtitles;                                       
	bool                                               bOverrideAttenuation;                                     
	unsigned char                                      UnknownData00[0x6];                                       
	class USoundAttenuation*                           AttenuationSettings;                                      
	struct FScriptDelegate                             OnQueueSubtitles;                                         
	struct FScriptMulticastDelegate                    OnAudioFinished;                                          
	struct FScriptMulticastDelegate                    OnAudioPlaybackPercent;                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneAudioSection");
		return pStaticClass;
	}

};




class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  AudioSections;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneAudioTrack");
		return pStaticClass;
	}

};




class UMovieSceneBoolSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	bool                                               DefaultValue;                                             
	unsigned char                                      UnknownData01[0x7];                                       
	struct FIntegralCurve                              BoolCurve;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneBoolSection");
		return pStaticClass;
	}

};




class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneBoolTrack");
		return pStaticClass;
	}

};




class UMovieSceneByteSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FIntegralCurve                              ByteCurve;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneByteSection");
		return pStaticClass;
	}

};




class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                       Enum;                                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneByteTrack");
		return pStaticClass;
	}

};




class UMovieSceneCameraAnimSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraAnimSectionData            AnimData;                                                 
	class UCameraAnim*                                 CameraAnim;                                               
	float                                              PlayRate;                                                 
	float                                              PlayScale;                                                
	float                                              BlendInTime;                                              
	float                                              BlendOutTime;                                             
	bool                                               bLooping;                                                 
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraAnimSection");
		return pStaticClass;
	}

};




class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  CameraAnimSections;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraAnimTrack");
		return pStaticClass;
	}

};




class UMovieSceneCameraCutSection : public UMovieSceneSection
{
public:
	struct FGuid                                       CameraGuid;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraCutSection");
		return pStaticClass;
	}

};




class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraCutTrack");
		return pStaticClass;
	}

};




class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraShakeSectionData           ShakeData;                                                
	class UClass*                                      ShakeClass;                                               
	float                                              PlayScale;                                                
	TEnumAsByte<ECameraAnimPlaySpace>                  PlaySpace;                                                
	unsigned char                                      UnknownData00[0x3];                                       
	struct FRotator                                    UserDefinedPlaySpace;                                     
	unsigned char                                      UnknownData01[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeSection");
		return pStaticClass;
	}

};




class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  CameraShakeSections;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeTrack");
		return pStaticClass;
	}

};




class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSectionParameters                Parameters;                                               
	float                                              StartOffset;                                              
	float                                              TimeScale;                                                
	float                                              PrerollTime;                                              
	class UMovieSceneSequence*                         SubSequence;                                              
	TLazyObjectPtr<class AActor>                       ActorToRecord;                                            
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     TargetSequenceName;                                       
	struct FDirectoryPath                              TargetPathToRecordTo;                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneSubSection");
		return pStaticClass;
	}

};




class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
public:
	struct FText                                       DisplayName;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneCinematicShotSection");
		return pStaticClass;
	}

};




class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneSubTrack");
		return pStaticClass;
	}

};




class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneCinematicShotTrack");
		return pStaticClass;
	}

};




class UMovieSceneColorSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FRichCurve                                  RedCurve;                                                 
	struct FRichCurve                                  GreenCurve;                                               
	struct FRichCurve                                  BlueCurve;                                                
	struct FRichCurve                                  AlphaCurve;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneColorSection");
		return pStaticClass;
	}

};




class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
public:
	bool                                               bIsSlateColor;                                            
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneColorTrack");
		return pStaticClass;
	}

};




class UMovieSceneEnumSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FIntegralCurve                              EnumCurve;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneEnumSection");
		return pStaticClass;
	}

};




class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                       Enum;                                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneEnumTrack");
		return pStaticClass;
	}

};




class UMovieSceneEventSection : public UMovieSceneSection
{
public:
	struct FNameCurve                                  Events;                                                   
	struct FMovieSceneEventSectionData                 EventData;                                                
	unsigned char                                      UnknownData00[0x88];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventSection");
		return pStaticClass;
	}

};




class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
public:
	TArray<struct FMovieSceneObjectBindingID>          EventReceivers;                                           
	TArray<class UMovieSceneSection*>                  Sections;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventTrack");
		return pStaticClass;
	}

};




class UMovieSceneFloatSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FRichCurve                                  FloatCurve;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneFloatSection");
		return pStaticClass;
	}

};




class UMovieSceneFadeSection : public UMovieSceneFloatSection
{
public:
	struct FLinearColor                                FadeColor;                                                
	unsigned char                                      bFadeAudio : 1;                                           
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneFadeSection");
		return pStaticClass;
	}

};




class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneFloatTrack");
		return pStaticClass;
	}

};




class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneFadeTrack");
		return pStaticClass;
	}

};




class UMovieSceneIntegerSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FIntegralCurve                              IntegerCurve;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneIntegerSection");
		return pStaticClass;
	}

};




class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneIntegerTrack");
		return pStaticClass;
	}

};




class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{
public:
	TArray<struct FName>                               LevelNames;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneLevelVisibilitySection");
		return pStaticClass;
	}

};




class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneLevelVisibilityTrack");
		return pStaticClass;
	}

};




class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneMaterialTrack");
		return pStaticClass;
	}

};




class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{
public:
	class UMaterialParameterCollection*                MPC;                                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack");
		return pStaticClass;
	}

};




class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	int                                                MaterialIndex;                                            
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneComponentMaterialTrack");
		return pStaticClass;
	}

};




class UMovieSceneParameterSection : public UMovieSceneSection
{
public:
	TArray<struct FScalarParameterNameAndCurve>        ScalarParameterNamesAndCurves;                            
	TArray<struct FVectorParameterNameAndCurves>       VectorParameterNamesAndCurves;                            
	TArray<struct FColorParameterNameAndCurves>        ColorParameterNamesAndCurves;                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneParameterSection");
		return pStaticClass;
	}

};




class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleParameterTrack");
		return pStaticClass;
	}

};




class UMovieSceneParticleSection : public UMovieSceneSection
{
public:
	struct FIntegralCurve                              ParticleKeys;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleSection");
		return pStaticClass;
	}

};




class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  ParticleSections;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleTrack");
		return pStaticClass;
	}

};




class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack
{
public:
	int                                                MaterialIndex;                                            
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack");
		return pStaticClass;
	}

};




class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSkeletalAnimationParams          Params;                                                   
	class UAnimSequence*                               AnimSequence;                                             
	class UAnimSequenceBase*                           Animation;                                                
	float                                              StartOffset;                                              
	float                                              EndOffset;                                                
	float                                              PlayRate;                                                 
	unsigned char                                      bReverse : 1;                                             
	unsigned char                                      UnknownData00[0x3];                                       
	struct FName                                       SlotName;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneSkeletalAnimationSection");
		return pStaticClass;
	}

};




class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  AnimationSections;                                        
	bool                                               bUseLegacySectionIndexBlend;                              
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack");
		return pStaticClass;
	}

};




class UMovieSceneSlomoSection : public UMovieSceneFloatSection
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneSlomoSection");
		return pStaticClass;
	}

};




class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneSlomoTrack");
		return pStaticClass;
	}

};




class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneSpawnSection");
		return pStaticClass;
	}

};




class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 
	struct FGuid                                       ObjectGuid;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneSpawnTrack");
		return pStaticClass;
	}

};




class UMovieSceneStringSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FStringCurve                                StringCurve;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneStringSection");
		return pStaticClass;
	}

};




class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneStringTrack");
		return pStaticClass;
	}

};




class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneTransformTrack");
		return pStaticClass;
	}

};




class UMovieSceneVectorSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FRichCurve                                  Curves[0x4];                                              
	int                                                ChannelsUsed;                                             
	unsigned char                                      UnknownData01[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneVectorSection");
		return pStaticClass;
	}

};




class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{
public:
	int                                                NumChannelsUsed;                                          
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneVectorTrack");
		return pStaticClass;
	}

};




class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneVisibilityTrack");
		return pStaticClass;
	}

};


}

