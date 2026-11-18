#pragma once


 
namespace SDK
{





enum class EMovieSceneKeyInterpolation : uint8_t
{
	EMovieSceneKeyInterpolation__Auto = 0,
	EMovieSceneKeyInterpolation__User = 1,
	EMovieSceneKeyInterpolation__Break = 2,
	EMovieSceneKeyInterpolation__Linear = 3,
	EMovieSceneKeyInterpolation__Constant = 4,
	EMovieSceneKeyInterpolation__EMovieSceneKeyInterpolation_MAX = 5
};



enum class EMovieSceneBlendType : uint8_t
{
	EMovieSceneBlendType__Absolute = 0,
	EMovieSceneBlendType__Additive = 1,
	EMovieSceneBlendType__Relative = 2,
	EMovieSceneBlendType__EMovieSceneBlendType_MAX = 3
};



enum class EMovieSceneBuiltInEasing : uint8_t
{
	EMovieSceneBuiltInEasing__Linear = 0,
	EMovieSceneBuiltInEasing__SinIn = 1,
	EMovieSceneBuiltInEasing__SinOut = 2,
	EMovieSceneBuiltInEasing__SinInOut = 3,
	EMovieSceneBuiltInEasing__QuadIn = 4,
	EMovieSceneBuiltInEasing__QuadOut = 5,
	EMovieSceneBuiltInEasing__QuadInOut = 6,
	EMovieSceneBuiltInEasing__CubicIn = 7,
	EMovieSceneBuiltInEasing__CubicOut = 8,
	EMovieSceneBuiltInEasing__CubicInOut = 9,
	EMovieSceneBuiltInEasing__QuartIn = 10,
	EMovieSceneBuiltInEasing__QuartOut = 11,
	EMovieSceneBuiltInEasing__QuartInOut = 12,
	EMovieSceneBuiltInEasing__QuintIn = 13,
	EMovieSceneBuiltInEasing__QuintOut = 14,
	EMovieSceneBuiltInEasing__QuintInOut = 15,
	EMovieSceneBuiltInEasing__ExpoIn = 16,
	EMovieSceneBuiltInEasing__ExpoOut = 17,
	EMovieSceneBuiltInEasing__ExpoInOut = 18,
	EMovieSceneBuiltInEasing__CircIn = 19,
	EMovieSceneBuiltInEasing__CircOut = 20,
	EMovieSceneBuiltInEasing__CircInOut = 21,
	EMovieSceneBuiltInEasing__EMovieSceneBuiltInEasing_MAX = 22
};



enum class EEvaluationMethod : uint8_t
{
	EEvaluationMethod__Static      = 0,
	EEvaluationMethod__Swept       = 1,
	EEvaluationMethod__EEvaluationMethod_MAX = 2
};



enum class EMovieScenePlayerStatus : uint8_t
{
	EMovieScenePlayerStatus__Stopped = 0,
	EMovieScenePlayerStatus__Playing = 1,
	EMovieScenePlayerStatus__Recording = 2,
	EMovieScenePlayerStatus__Scrubbing = 3,
	EMovieScenePlayerStatus__Jumping = 4,
	EMovieScenePlayerStatus__Stepping = 5,
	EMovieScenePlayerStatus__Paused = 6,
	EMovieScenePlayerStatus__MAX   = 7
};



enum class EMovieSceneObjectBindingSpace : uint8_t
{
	EMovieSceneObjectBindingSpace__Local = 0,
	EMovieSceneObjectBindingSpace__Root = 1,
	EMovieSceneObjectBindingSpace__EMovieSceneObjectBindingSpace_MAX = 2
};



enum class EMovieSceneCompletionMode : uint8_t
{
	EMovieSceneCompletionMode__KeepState = 0,
	EMovieSceneCompletionMode__RestoreState = 1,
	EMovieSceneCompletionMode__EMovieSceneCompletionMode_MAX = 2
};



enum class ESectionEvaluationFlags : uint8_t
{
	ESectionEvaluationFlags__None  = 0,
	ESectionEvaluationFlags__PreRoll = 1,
	ESectionEvaluationFlags__PostRoll = 2,
	ESectionEvaluationFlags__ESectionEvaluationFlags_MAX = 3
};



enum class ESpawnUserQualitySettingLevel : uint8_t
{
	ESpawnUserQualitySettingLevel__UserQualitySettingLevel_Low = 0,
	ESpawnUserQualitySettingLevel__UserQualitySettingLevel_Middle = 1,
	ESpawnUserQualitySettingLevel__UserQualitySettingLevel_High = 2,
	ESpawnUserQualitySettingLevel__UserQualitySettingLevel_MAX = 3
};



enum class ESpawnDeviceLevel : uint8_t
{
	ESpawnDeviceLevel__DeviceLevel_Low = 0,
	ESpawnDeviceLevel__DeviceLevel_Middle = 1,
	ESpawnDeviceLevel__DeviceLevel_High = 2,
	ESpawnDeviceLevel__DeviceLevel_MAX = 3
};



enum class ESpawnOwnership : uint8_t
{
	ESpawnOwnership__InnerSequence = 0,
	ESpawnOwnership__MasterSequence = 1,
	ESpawnOwnership__External      = 2,
	ESpawnOwnership__ESpawnOwnership_MAX = 3
};









struct FMovieSceneSectionEvalOptions
{
	bool                                               bCanEditCompletionMode;                                   
	EMovieSceneCompletionMode                          CompletionMode;                                           
};



struct FMovieSceneEasingSettings
{
	float                                              AutoEaseInTime;                                           
	float                                              AutoEaseOutTime;                                          
	TScriptInterface<class UMovieSceneEasingFunction>  EaseIn;                                                   
	bool                                               bManualEaseIn;                                            
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              ManualEaseInTime;                                         
	TScriptInterface<class UMovieSceneEasingFunction>  EaseOut;                                                  
	bool                                               bManualEaseOut;                                           
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              ManualEaseOutTime;                                        
};



struct FOptionalMovieSceneBlendType
{
	EMovieSceneBlendType                               BlendType;                                                
	bool                                               bIsValid;                                                 
};



struct FMovieSceneTrackEvalOptions
{
	unsigned char                                      bCanEvaluateNearestSection : 1;                           
	unsigned char                                      bEvalNearestSection : 1;                                  
	unsigned char                                      bEvaluateInPreroll : 1;                                   
	unsigned char                                      bEvaluateInPostroll : 1;                                  
	unsigned char                                      bEvaluateNearestSection : 1;                              
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FMovieSceneSegment
{
	unsigned char                                      UnknownData00[0x50];                                      
};



struct FMovieSceneEvalTemplatePtr
{
	unsigned char                                      UnknownData00[0x38];                                      
};



struct FMovieSceneTrackImplementationPtr
{
	unsigned char                                      UnknownData00[0x38];                                      
};



struct FMovieSceneEvaluationTrack
{
	struct FGuid                                       ObjectBindingId;                                          
	uint16_t                                           EvaluationPriority;                                       
	EEvaluationMethod                                  EvaluationMethod;                                         
	unsigned char                                      UnknownData00[0x5];                                       
	TArray<struct FMovieSceneSegment>                  Segments;                                                 
	TArray<struct FMovieSceneEvalTemplatePtr>          ChildTemplates;                                           
	struct FMovieSceneTrackImplementationPtr           TrackTemplate;                                            
	struct FName                                       EvaluationGroup;                                          
	unsigned char                                      bEvaluateInPreroll : 1;                                   
	unsigned char                                      bEvaluateInPostroll : 1;                                  
	unsigned char                                      UnknownData01[0x7];                                       
};



struct FMovieSceneEvaluationGroupLUTIndex
{
	int                                                LUTOffset;                                                
	int                                                NumInitPtrs;                                              
	int                                                NumEvalPtrs;                                              
};



struct FMovieSceneSequenceID
{
	uint32_t                                           Value;                                                    
};



struct FMovieSceneTrackIdentifier
{
	uint32_t                                           Value;                                                    
};



struct FMovieSceneEvaluationFieldTrackPtr
{
	struct FMovieSceneSequenceID                       SequenceID;                                               
	struct FMovieSceneTrackIdentifier                  TrackIdentifier;                                          
};



struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr
{
	int                                                SegmentIndex;                                             
};



struct FMovieSceneEvaluationGroup
{
	TArray<struct FMovieSceneEvaluationGroupLUTIndex>  LUTIndices;                                               
	TArray<struct FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT;                                            
};



struct FMovieSceneEvaluationKey
{
	struct FMovieSceneSequenceID                       SequenceID;                                               
	struct FMovieSceneTrackIdentifier                  TrackIdentifier;                                          
	uint32_t                                           SectionIdentifier;                                        
};



struct FMovieSceneOrderedEvaluationKey
{
	struct FMovieSceneEvaluationKey                    Key;                                                      
	uint32_t                                           EvaluationIndex;                                          
};



struct FMovieSceneEvaluationMetaData
{
	TArray<struct FMovieSceneSequenceID>               ActiveSequences;                                          
	TArray<struct FMovieSceneOrderedEvaluationKey>     ActiveEntities;                                           
};



struct FMovieSceneEvaluationField
{
	TArray<struct FFloatRange>                         Ranges;                                                   
	TArray<struct FMovieSceneEvaluationGroup>          Groups;                                                   
	TArray<struct FMovieSceneEvaluationMetaData>       MetaData;                                                 
};



struct FMovieSceneSequenceTransform
{
	float                                              TimeScale;                                                
	float                                              Offset;                                                   
};



struct FMovieSceneSubSequenceData
{
	class UMovieSceneSequence*                         Sequence;                                                 
	class UObject*                                     SequenceKeyObject;                                        
	struct FMovieSceneSequenceTransform                RootToSequenceTransform;                                  
	struct FGuid                                       SourceSequenceSignature;                                  
	struct FMovieSceneSequenceID                       DeterministicSequenceID;                                  
	struct FFloatRange                                 PreRollRange;                                             
	struct FFloatRange                                 PostRollRange;                                            
	int                                                HierarchicalBias;                                         
};



struct FMovieSceneSequenceHierarchyNode
{
	struct FMovieSceneSequenceID                       ParentID;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FMovieSceneSequenceID>               Children;                                                 
};



struct FMovieSceneSequenceHierarchy
{
	TMap<uint32_t, struct FMovieSceneSubSequenceData>  SubSequences;                                             
	TMap<uint32_t, struct FMovieSceneSequenceHierarchyNode> Hierarchy;                                                
};



struct FMovieSceneTrackIdentifiers
{
	TArray<struct FMovieSceneTrackIdentifier>          Data;                                                     
};



struct FMovieSceneTemplateGenerationLedger
{
	struct FMovieSceneTrackIdentifier                  LastTrackIdentifier;                                      
	unsigned char                                      UnknownData00[0x4];                                       
	TMap<struct FMovieSceneTrackIdentifier, int>       TrackReferenceCounts;                                     
	TMap<struct FGuid, struct FMovieSceneTrackIdentifiers> TrackSignatureToTrackIdentifier;                          
};



struct FMovieSceneEvaluationTemplate
{
	TMap<uint32_t, struct FMovieSceneEvaluationTrack>  Tracks;                                                   
	unsigned char                                      UnknownData00[0x50];                                      
	struct FMovieSceneEvaluationField                  EvaluationField;                                          
	struct FMovieSceneSequenceHierarchy                Hierarchy;                                                
	struct FMovieSceneTemplateGenerationLedger         TemplateLedger;                                           
	unsigned char                                      bHasLegacyTrackInstances : 1;                             
	unsigned char                                      bKeepStaleTracks : 1;                                     
	unsigned char                                      UnknownData01[0x7];                                       
};



struct FCachedMovieSceneEvaluationTemplate : public FMovieSceneEvaluationTemplate
{

};



struct FMovieSceneTrackCompilationParams
{
	bool                                               bForEditorPreview;                                        
	bool                                               bDuringBlueprintCompile;                                  
};



struct FMovieSceneSequencePlaybackSettings
{
	int                                                LoopCount;                                                
	float                                              PlayRate;                                                 
	bool                                               bRandomStartTime;                                         
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              StartTime;                                                
	bool                                               bRestoreState;                                            
	bool                                               bDisableMovementInput;                                    
	bool                                               bDisableLookAtInput;                                      
	bool                                               bHidePlayer;                                              
	bool                                               bHideHud;                                                 
	unsigned char                                      UnknownData01[0x3];                                       
	TScriptInterface<class UMovieSceneBindingOverridesInterface> BindingOverrides;                                         
};



struct FMovieSceneObjectBindingID
{
	int                                                SequenceID;                                               
	EMovieSceneObjectBindingSpace                      Space;                                                    
	unsigned char                                      UnknownData00[0x3];                                       
	struct FGuid                                       Guid;                                                     
};



struct FMovieSceneSpawnable
{
	struct FGuid                                       Guid;                                                     
	struct FString                                     Name;                                                     
	class UObject*                                     ObjectTemplate;                                           
	TArray<struct FGuid>                               ChildPossessables;                                        
	ESpawnOwnership                                    Ownership;                                                
	ESpawnDeviceLevel                                  DeviceLevel;                                              
	ESpawnUserQualitySettingLevel                      UserQualitySettingLevel;                                  
	unsigned char                                      UnValidDeviceLevel;                                       
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FMovieScenePossessable
{
	struct FGuid                                       Guid;                                                     
	struct FString                                     Name;                                                     
	class UClass*                                      PossessedObjectClass;                                     
	struct FGuid                                       ParentGuid;                                               
};



struct FMovieSceneBinding
{
	struct FGuid                                       ObjectGuid;                                               
	struct FString                                     BindingName;                                              
	TArray<class UMovieSceneTrack*>                    Tracks;                                                   
};



struct FMovieSceneBindingOverrideData
{
	struct FMovieSceneObjectBindingID                  ObjectBindingId;                                          
	TWeakObjectPtr<class UObject>                      Object;                                                   
	bool                                               bOverridesDefault;                                        
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FMovieSceneEvalTemplateBase
{
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
{
	EMovieSceneCompletionMode                          CompletionMode;                                           
	unsigned char                                      UnknownData00[0x6];                                       
	class UMovieSceneSection*                          SourceSection;                                            
};



struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
{

};



struct FMovieSceneTrackLabels
{
	TArray<struct FString>                             Strings;                                                  
};



struct FMovieSceneExpansionState
{
	bool                                               bExpanded;                                                
};



struct FMovieSceneEditorData
{
	TMap<struct FString, struct FMovieSceneExpansionState> ExpansionStates;                                          
	struct FFloatRange                                 WorkingRange;                                             
	struct FFloatRange                                 ViewRange;                                                
};



struct FMovieSceneEmptyStruct
{
	unsigned char                                      UnknownData00[0x1];                                       
};



struct FMovieSceneSequenceCachedSignature
{
	TWeakObjectPtr<class UMovieSceneSequence>          Sequence;                                                 
	struct FGuid                                       CachedSignature;                                          
};



struct FMovieSceneKeyStruct
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FMovieSceneLegacyTrackInstanceTemplate : public FMovieSceneEvalTemplate
{
	class UMovieSceneTrack*                            Track;                                                    
};



struct FMovieScenePropertySectionData
{
	struct FName                                       PropertyName;                                             
	struct FString                                     PropertyPath;                                             
	struct FName                                       FunctionName;                                             
	struct FName                                       NotifyFunctionName;                                       
};



struct FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                             
};



struct FMovieSceneSectionParameters
{
	float                                              StartOffset;                                              
	float                                              TimeScale;                                                
	int                                                HierarchicalBias;                                         
	float                                              PrerollTime;                                              
	float                                              PostrollTime;                                             
};



struct FSectionEvaluationData
{
	int                                                ImplIndex;                                                
	float                                              ForcedTime;                                               
	ESectionEvaluationFlags                            Flags;                                                    
	unsigned char                                      UnknownData00[0x3];                                       
};

}

