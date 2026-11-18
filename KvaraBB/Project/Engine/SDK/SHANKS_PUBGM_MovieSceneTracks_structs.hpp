#pragma once


 
namespace SDK
{





enum class EMovieScene3DPathSection_Axis : uint8_t
{
	MovieScene3DPathSection_Axis__X = 0,
	MovieScene3DPathSection_Axis__Y = 1,
	MovieScene3DPathSection_Axis__Z = 2,
	MovieScene3DPathSection_Axis__NEG_X = 3,
	MovieScene3DPathSection_Axis__NEG_Y = 4,
	MovieScene3DPathSection_Axis__NEG_Z = 5,
	MovieScene3DPathSection_Axis__MovieScene3DPathSection_MAX = 6
};



enum class EFireEventsAtPosition : uint8_t
{
	EFireEventsAtPosition__AtStartOfEvaluation = 0,
	EFireEventsAtPosition__AtEndOfEvaluation = 1,
	EFireEventsAtPosition__AfterSpawn = 2,
	EFireEventsAtPosition__EFireEventsAtPosition_MAX = 3
};



enum class ELevelVisibility : uint8_t
{
	ELevelVisibility__Visible      = 0,
	ELevelVisibility__Hidden       = 1,
	ELevelVisibility__ELevelVisibility_MAX = 2
};



enum class EParticleKey : uint8_t
{
	EParticleKey__Activate         = 0,
	EParticleKey__Deactivate       = 1,
	EParticleKey__Trigger          = 2,
	EParticleKey__EParticleKey_MAX = 3
};









struct FMovieSceneTransformMask
{
	uint32_t                                           Mask;                                                     
};



struct FMovieSceneCameraAnimSectionData
{
	class UCameraAnim*                                 CameraAnim;                                               
	float                                              PlayRate;                                                 
	float                                              PlayScale;                                                
	float                                              BlendInTime;                                              
	float                                              BlendOutTime;                                             
	bool                                               bLooping;                                                 
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FMovieSceneCameraShakeSectionData
{
	class UClass*                                      ShakeClass;                                               
	float                                              PlayScale;                                                
	TEnumAsByte<ECameraAnimPlaySpace>                  PlaySpace;                                                
	unsigned char                                      UnknownData00[0x3];                                       
	struct FRotator                                    UserDefinedPlaySpace;                                     
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FMovieSceneEventParameters
{
	unsigned char                                      UnknownData00[0x28];                                      
};



struct FEventPayload
{
	struct FName                                       EventName;                                                
	struct FMovieSceneEventParameters                  Parameters;                                               
};



struct FMovieSceneEventSectionData
{
	TArray<float>                                      KeyTimes;                                                 
	TArray<struct FEventPayload>                       KeyValues;                                                
};



struct FScalarParameterNameAndCurve
{
	struct FName                                       ParameterName;                                            
	int                                                Index;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	struct FRichCurve                                  ParameterCurve;                                           
};



struct FVectorParameterNameAndCurves
{
	struct FName                                       ParameterName;                                            
	int                                                Index;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	struct FRichCurve                                  XCurve;                                                   
	struct FRichCurve                                  YCurve;                                                   
	struct FRichCurve                                  ZCurve;                                                   
};



struct FColorParameterNameAndCurves
{
	struct FName                                       ParameterName;                                            
	int                                                Index;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	struct FRichCurve                                  RedCurve;                                                 
	struct FRichCurve                                  GreenCurve;                                               
	struct FRichCurve                                  BlueCurve;                                                
	struct FRichCurve                                  AlphaCurve;                                               
};



struct FMovieSceneSkeletalAnimationParams
{
	class UAnimSequenceBase*                           Animation;                                                
	float                                              StartOffset;                                              
	float                                              EndOffset;                                                
	float                                              PlayRate;                                                 
	unsigned char                                      bReverse : 1;                                             
	unsigned char                                      UnknownData00[0x3];                                       
	struct FName                                       SlotName;                                                 
	struct FRichCurve                                  Weight;                                                   
};



struct FMovieScene3DAttachSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FGuid                                       AttachGuid;                                               
	struct FName                                       AttachSocketName;                                         
	struct FName                                       AttachComponentName;                                      
	EAttachmentRule                                    AttachmentLocationRule;                                   
	EAttachmentRule                                    AttachmentRotationRule;                                   
	EAttachmentRule                                    AttachmentScaleRule;                                      
	EDetachmentRule                                    DetachmentLocationRule;                                   
	EDetachmentRule                                    DetachmentRotationRule;                                   
	EDetachmentRule                                    DetachmentScaleRule;                                      
	unsigned char                                      UnknownData00[0x2];                                       
};



struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FGuid                                       PathGuid;                                                 
	struct FRichCurve                                  TimingCurve;                                              
	EMovieScene3DPathSection_Axis                      FrontAxisEnum;                                            
	EMovieScene3DPathSection_Axis                      UpAxisEnum;                                               
	unsigned char                                      bFollow : 1;                                              
	unsigned char                                      bReverse : 1;                                             
	unsigned char                                      bForceUpright : 1;                                        
	unsigned char                                      bUseConstantVelocity : 1;                                 
	unsigned char                                      UnknownData00[0x5];                                       
};



struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
{
	struct FVector                                     Location;                                                 
	struct FRotator                                    Rotation;                                                 
	struct FVector                                     Scale;                                                    
	float                                              Time;                                                     
	unsigned char                                      UnknownData00[0x48];                                      
};



struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
{
	struct FVector                                     Scale;                                                    
	float                                              Time;                                                     
	unsigned char                                      UnknownData00[0x18];                                      
};



struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
{
	struct FRotator                                    Rotation;                                                 
	float                                              Time;                                                     
	unsigned char                                      UnknownData00[0x18];                                      
};



struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
{
	struct FVector                                     Location;                                                 
	float                                              Time;                                                     
	unsigned char                                      UnknownData00[0x18];                                      
};



struct FMovieScene3DTransformTemplateData
{
	struct FRichCurve                                  TranslationCurve[0x3];                                    
	struct FRichCurve                                  RotationCurve[0x3];                                       
	struct FRichCurve                                  ScaleCurve[0x3];                                          
	struct FRichCurve                                  ManualWeight;                                             
	EMovieSceneBlendType                               BlendType;                                                
	unsigned char                                      UnknownData00[0x3];                                       
	struct FMovieSceneTransformMask                    Mask;                                                     
	bool                                               bIgnoreGlobalTransform;                                   
	unsigned char                                      UnknownData01[0x7];                                       
};



struct FMovieSceneComponentTransformSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScene3DTransformTemplateData          TemplateData;                                             
};



struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                             
	struct FIntegralCurve                              ActorGuidIndexCurve;                                      
	TArray<struct FGuid>                               ActorGuids;                                               
};



struct FMovieSceneAudioSectionTemplateData
{
	class USoundBase*                                  Sound;                                                    
	float                                              AudioStartOffset;                                         
	struct FFloatRange                                 AudioRange;                                               
	unsigned char                                      UnknownData00[0x4];                                       
	struct FRichCurve                                  AudioPitchMultiplierCurve;                                
	struct FRichCurve                                  AudioVolumeCurve;                                         
	int                                                RowIndex;                                                 
	bool                                               bOverrideAttenuation;                                     
	unsigned char                                      UnknownData01[0x3];                                       
	class USoundAttenuation*                           AttenuationSettings;                                      
	struct FScriptDelegate                             OnQueueSubtitles;                                         
	struct FScriptMulticastDelegate                    OnAudioFinished;                                          
	struct FScriptMulticastDelegate                    OnAudioPlaybackPercent;                                   
};



struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneAudioSectionTemplateData         AudioData;                                                
};



struct FMovieSceneAdditiveCameraAnimationTrackTemplate : public FMovieSceneEvalTemplate
{

};



struct FMovieSceneAdditiveCameraAnimationTemplate : public FMovieSceneEvalTemplate
{

};



struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{
	struct FMovieSceneCameraShakeSectionData           SourceData;                                               
	float                                              SectionStartTime;                                         
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FMovieSceneCameraAnimSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{
	struct FMovieSceneCameraAnimSectionData            SourceData;                                               
	float                                              SectionStartTime;                                         
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FMovieSceneCameraCutSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FGuid                                       CameraGuid;                                               
	unsigned char                                      UnknownData00[0x8];                                       
	struct FTransform                                  CutTransform;                                             
	bool                                               bHasCutTransform;                                         
	unsigned char                                      UnknownData01[0xF];                                       
};



struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct
{
	struct FLinearColor                                Color;                                                    
	float                                              Time;                                                     
	unsigned char                                      UnknownData00[0x44];                                      
};



struct FMovieSceneColorSectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FRichCurve                                  Curves[0x4];                                              
	EMovieSceneBlendType                               BlendType;                                                
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FMovieSceneEventSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneEventSectionData                 EventData;                                                
	TArray<struct FMovieSceneObjectBindingID>          EventReceivers;                                           
	unsigned char                                      bFireEventsWhenForwards : 1;                              
	unsigned char                                      bFireEventsWhenBackwards : 1;                             
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FRichCurve                                  FadeCurve;                                                
	struct FLinearColor                                FadeColor;                                                
	unsigned char                                      bFadeAudio : 1;                                           
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FMovieSceneLevelVisibilitySectionTemplate : public FMovieSceneEvalTemplate
{
	ELevelVisibility                                   Visibility;                                               
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<struct FName>                               LevelNames;                                               
};



struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
{
	TArray<struct FScalarParameterNameAndCurve>        Scalars;                                                  
	TArray<struct FVectorParameterNameAndCurves>       Vectors;                                                  
	TArray<struct FColorParameterNameAndCurves>        Colors;                                                   
};



struct FMovieSceneMaterialParameterCollectionTemplate : public FMovieSceneParameterSectionTemplate
{
	class UMaterialParameterCollection*                MPC;                                                      
};



struct FMovieSceneComponentMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
	int                                                MaterialIndex;                                            
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{

};



struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FIntegralCurve                              ParticleKeys;                                             
};



struct FMovieScenePrimitiveMaterialTemplate : public FMovieSceneEvalTemplate
{
	int                                                MaterialIndex;                                            
	unsigned char                                      UnknownData00[0x4];                                       
	struct FStringCurve                                BoolCurve;                                                
};



struct FMovieSceneTransformPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieScene3DTransformTemplateData          TemplateData;                                             
};



struct FMovieSceneVectorPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FRichCurve                                  ComponentCurves[0x4];                                     
	int                                                NumChannelsUsed;                                          
	EMovieSceneBlendType                               BlendType;                                                
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FMovieSceneStringPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FStringCurve                                StringCurve;                                              
};



struct FMovieSceneIntegerPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FIntegralCurve                              IntegerCurve;                                             
	EMovieSceneBlendType                               BlendType;                                                
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FMovieSceneEnumPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FIntegralCurve                              EnumCurve;                                                
};



struct FMovieSceneBytePropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FIntegralCurve                              ByteCurve;                                                
};



struct FMovieSceneFloatPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FRichCurve                                  FloatCurve;                                               
	EMovieSceneBlendType                               BlendType;                                                
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FIntegralCurve                              BoolCurve;                                                
};



struct FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams
{
	float                                              SectionStartTime;                                         
	float                                              SectionEndTime;                                           
};



struct FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneSkeletalAnimationSectionTemplateParameters Params;                                                   
};



struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FRichCurve                                  SlomoCurve;                                               
};



struct FMovieSceneSpawnSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FIntegralCurve                              Curve;                                                    
};



struct FMovieSceneVectorKeyStructBase : public FMovieSceneKeyStruct
{
	unsigned char                                      UnknownData00[0x40];                                      
	float                                              Time;                                                     
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FMovieSceneVector4KeyStruct : public FMovieSceneVectorKeyStructBase
{
	struct FVector4                                    Vector;                                                   
};



struct FMovieSceneVectorKeyStruct : public FMovieSceneVectorKeyStructBase
{
	struct FVector                                     Vector;                                                   
};



struct FMovieSceneVector2DKeyStruct : public FMovieSceneVectorKeyStructBase
{
	struct FVector2D                                   Vector;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate
{
	bool                                               bTemporarilyHiddenInGame;                                 
	unsigned char                                      UnknownData00[0x7];                                       
};

}

