#pragma once


 
namespace SDK
{





enum class ENiagaraCollisionMode : uint8_t
{
	ENiagaraCollisionMode__None    = 0,
	ENiagaraCollisionMode__SceneGeometry = 1,
	ENiagaraCollisionMode__DepthBuffer = 2,
	ENiagaraCollisionMode__DistanceField = 3,
	ENiagaraCollisionMode__ENiagaraCollisionMode_MAX = 4
};



enum class ENiagaraScriptGroup : uint8_t
{
	ENiagaraScriptGroup__Particle  = 0,
	ENiagaraScriptGroup__Emitter   = 1,
	ENiagaraScriptGroup__System    = 2,
	ENiagaraScriptGroup__Max       = 3
};



enum class ENiagaraScriptUsage : uint8_t
{
	ENiagaraScriptUsage__Function  = 0,
	ENiagaraScriptUsage__Module    = 1,
	ENiagaraScriptUsage__DynamicInput = 2,
	ENiagaraScriptUsage__ParticleSpawnScript = 3,
	ENiagaraScriptUsage__ParticleSpawnScriptInterpolated = 4,
	ENiagaraScriptUsage__ParticleUpdateScript = 5,
	ENiagaraScriptUsage__ParticleEventScript = 6,
	ENiagaraScriptUsage__ParticleGPUComputeScript = 7,
	ENiagaraScriptUsage__EmitterSpawnScript = 8,
	ENiagaraScriptUsage__EmitterUpdateScript = 9,
	ENiagaraScriptUsage__SystemSpawnScript = 10,
	ENiagaraScriptUsage__SystemUpdateScript = 11,
	ENiagaraScriptUsage__ENiagaraScriptUsage_MAX = 12
};



enum class ENiagaraScriptCompileStatus : uint8_t
{
	ENiagaraScriptCompileStatus__NCS_Unknown = 0,
	ENiagaraScriptCompileStatus__NCS_Dirty = 1,
	ENiagaraScriptCompileStatus__NCS_Error = 2,
	ENiagaraScriptCompileStatus__NCS_UpToDate = 3,
	ENiagaraScriptCompileStatus__NCS_BeingCreated = 4,
	ENiagaraScriptCompileStatus__NCS_UpToDateWithWarnings = 5,
	ENiagaraScriptCompileStatus__NCS_ComputeUpToDateWithWarnings = 6,
	ENiagaraScriptCompileStatus__NCS_MAX = 7
};



enum class ENiagaraInputNodeUsage : uint8_t
{
	ENiagaraInputNodeUsage__Undefined = 0,
	ENiagaraInputNodeUsage__Parameter = 1,
	ENiagaraInputNodeUsage__Attribute = 2,
	ENiagaraInputNodeUsage__SystemConstant = 3,
	ENiagaraInputNodeUsage__TranslatorConstant = 4,
	ENiagaraInputNodeUsage__RapidIterationParameter = 5,
	ENiagaraInputNodeUsage__ENiagaraInputNodeUsage_MAX = 6
};



enum class ENiagaraDataSetType : uint8_t
{
	ENiagaraDataSetType__ParticleData = 0,
	ENiagaraDataSetType__Shared    = 1,
	ENiagaraDataSetType__Event     = 2,
	ENiagaraDataSetType__ENiagaraDataSetType_MAX = 3
};



enum class ENiagaraAgeUpdateMode : uint8_t
{
	ENiagaraAgeUpdateMode__TickDeltaTime = 0,
	ENiagaraAgeUpdateMode__DesiredAge = 1,
	ENiagaraAgeUpdateMode__ENiagaraAgeUpdateMode_MAX = 2
};



enum class ENiagaraSimTarget : uint8_t
{
	ENiagaraSimTarget__CPUSim      = 0,
	ENiagaraSimTarget__GPUComputeSim = 1,
	ENiagaraSimTarget__ENiagaraSimTarget_MAX = 2
};



enum class ENDISkeletalMesh_SkinningMode : uint8_t
{
	ENDISkeletalMesh_SkinningMode__None = 0,
	ENDISkeletalMesh_SkinningMode__SkinOnTheFly = 1,
	ENDISkeletalMesh_SkinningMode__PreSkin = 2,
	ENDISkeletalMesh_SkinningMode__ENDISkeletalMesh_MAX = 3
};



enum class EScriptExecutionMode : uint8_t
{
	EScriptExecutionMode__EveryParticle = 0,
	EScriptExecutionMode__SpawnedParticles = 1,
	EScriptExecutionMode__SingleParticle = 2,
	EScriptExecutionMode__EScriptExecutionMode_MAX = 3
};



enum class ENiagaraSortMode : uint8_t
{
	ENiagaraSortMode__None         = 0,
	ENiagaraSortMode__ViewDepth    = 1,
	ENiagaraSortMode__ViewDistance = 2,
	ENiagaraSortMode__CustomAscending = 3,
	ENiagaraSortMode__CustomDecending = 4,
	ENiagaraSortMode__ENiagaraSortMode_MAX = 5
};



enum class ENiagaraMeshFacingMode : uint8_t
{
	ENiagaraMeshFacingMode__Default = 0,
	ENiagaraMeshFacingMode__Velocity = 1,
	ENiagaraMeshFacingMode__CameraPosition = 2,
	ENiagaraMeshFacingMode__CameraPlane = 3,
	ENiagaraMeshFacingMode__ENiagaraMeshFacingMode_MAX = 4
};



enum class ENiagaraPreviewGridResetMode : uint8_t
{
	ENiagaraPreviewGridResetMode__Never = 0,
	ENiagaraPreviewGridResetMode__Individual = 1,
	ENiagaraPreviewGridResetMode__All = 2,
	ENiagaraPreviewGridResetMode__ENiagaraPreviewGridResetMode_MAX = 3
};



enum class ENiagaraRibbonTessellationMode : uint8_t
{
	ENiagaraRibbonTessellationMode__Automatic = 0,
	ENiagaraRibbonTessellationMode__Custom = 1,
	ENiagaraRibbonTessellationMode__Disabled = 2,
	ENiagaraRibbonTessellationMode__ENiagaraRibbonTessellationMode_MAX = 3
};



enum class ENiagaraRibbonDrawDirection : uint8_t
{
	ENiagaraRibbonDrawDirection__FrontToBack = 0,
	ENiagaraRibbonDrawDirection__BackToFront = 1,
	ENiagaraRibbonDrawDirection__ENiagaraRibbonDrawDirection_MAX = 2
};



enum class ENiagaraRibbonAgeOffsetMode : uint8_t
{
	ENiagaraRibbonAgeOffsetMode__Scale = 0,
	ENiagaraRibbonAgeOffsetMode__Clip = 1,
	ENiagaraRibbonAgeOffsetMode__ENiagaraRibbonAgeOffsetMode_MAX = 2
};



enum class ENiagaraRibbonFacingMode : uint8_t
{
	ENiagaraRibbonFacingMode__Screen = 0,
	ENiagaraRibbonFacingMode__Custom = 1,
	ENiagaraRibbonFacingMode__CustomSideVector = 2,
	ENiagaraRibbonFacingMode__ENiagaraRibbonFacingMode_MAX = 3
};



enum class ENiagaraModuleDependencyScriptConstraint : uint8_t
{
	ENiagaraModuleDependencyScriptConstraint__SameScript = 0,
	ENiagaraModuleDependencyScriptConstraint__AllScripts = 1,
	ENiagaraModuleDependencyScriptConstraint__ENiagaraModuleDependencyScriptConstraint_MAX = 2
};



enum class ENiagaraModuleDependencyType : uint8_t
{
	ENiagaraModuleDependencyType__PreDependency = 0,
	ENiagaraModuleDependencyType__PostDependency = 1,
	ENiagaraModuleDependencyType__ENiagaraModuleDependencyType_MAX = 2
};



enum class EUnusedAttributeBehaviour : uint8_t
{
	EUnusedAttributeBehaviour__Copy = 0,
	EUnusedAttributeBehaviour__Zero = 1,
	EUnusedAttributeBehaviour__None = 2,
	EUnusedAttributeBehaviour__MarkInvalid = 3,
	EUnusedAttributeBehaviour__PassThrough = 4,
	EUnusedAttributeBehaviour__EUnusedAttributeBehaviour_MAX = 5
};



enum class ENiagaraSpriteFacingMode : uint8_t
{
	ENiagaraSpriteFacingMode__FaceCamera = 0,
	ENiagaraSpriteFacingMode__FaceCameraPlane = 1,
	ENiagaraSpriteFacingMode__CustomFacingVector = 2,
	ENiagaraSpriteFacingMode__FaceCameraPosition = 3,
	ENiagaraSpriteFacingMode__FaceCameraDistanceBlend = 4,
	ENiagaraSpriteFacingMode__ENiagaraSpriteFacingMode_MAX = 5
};



enum class ENiagaraSpriteAlignment : uint8_t
{
	ENiagaraSpriteAlignment__Unaligned = 0,
	ENiagaraSpriteAlignment__VelocityAligned = 1,
	ENiagaraSpriteAlignment__CustomAlignment = 2,
	ENiagaraSpriteAlignment__ENiagaraSpriteAlignment_MAX = 3
};



enum class ENiagaraExecutionState : uint8_t
{
	ENiagaraExecutionState__Active = 0,
	ENiagaraExecutionState__Inactive = 1,
	ENiagaraExecutionState__InactiveClear = 2,
	ENiagaraExecutionState__Complete = 3,
	ENiagaraExecutionState__Disabled = 4,
	ENiagaraExecutionState__Num    = 5,
	ENiagaraExecutionState__ENiagaraExecutionState_MAX = 6
};



enum class ENiagaraExecutionStateSource : uint8_t
{
	ENiagaraExecutionStateSource__Scalability = 0,
	ENiagaraExecutionStateSource__Internal = 1,
	ENiagaraExecutionStateSource__Owner = 2,
	ENiagaraExecutionStateSource__InternalCompletion = 3,
	ENiagaraExecutionStateSource__ENiagaraExecutionStateSource_MAX = 4
};



enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	ENiagaraNumericOutputTypeSelectionMode__None = 0,
	ENiagaraNumericOutputTypeSelectionMode__Largest = 1,
	ENiagaraNumericOutputTypeSelectionMode__Smallest = 2,
	ENiagaraNumericOutputTypeSelectionMode__Scalar = 3,
	ENiagaraNumericOutputTypeSelectionMode__ENiagaraNumericOutputTypeSelectionMode_MAX = 4
};









struct FNiagaraTypeDefinition
{
	class UStruct*                                     Struct;                                                   
	class UEnum*                                       Enum;                                                     
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FNiagaraVariable
{
	struct FName                                       Name;                                                     
	struct FNiagaraTypeDefinition                      TypeDef;                                                  
	TArray<unsigned char>                              VarData;                                                  
};



struct FNiagaraParameterStore
{
	unsigned char                                      UnknownData00[0x8];                                       
	class UObject*                                     Owner;                                                    
	TMap<struct FNiagaraVariable, int>                 ParameterOffsets;                                         
	TArray<unsigned char>                              ParameterData;                                            
	TArray<class UNiagaraDataInterface*>               DataInterfaces;                                           
	unsigned char                                      UnknownData01[0x68];                                      
};



struct FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
{
	TMap<struct FNiagaraVariable, struct FNiagaraVariable> UserParameterRedirects;                                   
};



struct FNDIStaticMeshSectionFilter
{
	TArray<int>                                        AllowedMaterialSlots;                                     
};



struct FNiagaraVariableAttributeBinding
{
	struct FNiagaraVariable                            BoundVariable;                                            
	struct FNiagaraVariable                            DataSetVariable;                                          
	struct FNiagaraVariable                            DefaultValueIfNonExistent;                                
};



struct FNiagaraEventReceiverProperties
{
	struct FName                                       Name;                                                     
	struct FName                                       SourceEventGenerator;                                     
	struct FName                                       SourceEmitter;                                            
};



struct FNiagaraDataSetID
{
	struct FName                                       Name;                                                     
	ENiagaraDataSetType                                Type;                                                     
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FNiagaraDataSetProperties
{
	struct FNiagaraDataSetID                           ID;                                                       
	TArray<struct FNiagaraVariable>                    Variables;                                                
};



struct FNiagaraEventGeneratorProperties
{
	int                                                MaxEventsPerFrame;                                        
	unsigned char                                      UnknownData00[0x4];                                       
	struct FName                                       ID;                                                       
	struct FNiagaraDataSetProperties                   SetProps;                                                 
};



struct FNiagaraEmitterScriptProperties
{
	class UNiagaraScript*                              Script;                                                   
	TArray<struct FNiagaraEventReceiverProperties>     EventReceivers;                                           
	TArray<struct FNiagaraEventGeneratorProperties>    EventGenerators;                                          
};



struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
{
	EScriptExecutionMode                               ExecutionMode;                                            
	unsigned char                                      UnknownData00[0x3];                                       
	uint32_t                                           SpawnNumber;                                              
	uint32_t                                           MaxEventsPerFrame;                                        
	struct FGuid                                       SourceEmitterID;                                          
	unsigned char                                      UnknownData01[0x4];                                       
	struct FName                                       SourceEventName;                                          
	bool                                               bRandomSpawnNumber;                                       
	unsigned char                                      UnknownData02[0x3];                                       
	uint32_t                                           MinSpawnNumber;                                           
};



struct FNiagaraScriptExecutionPaddingInfo
{
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore
{
	int                                                ParameterSize;                                            
	uint32_t                                           PaddedParameterSize;                                      
	TArray<struct FNiagaraScriptExecutionPaddingInfo>  PaddingInfo;                                              
	unsigned char                                      bInitialized : 1;                                         
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FNiagaraVMExecutableDataId
{
	struct FGuid                                       CompilerVersionID;                                        
	ENiagaraScriptUsage                                ScriptUsageType;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	struct FGuid                                       ScriptUsageTypeID;                                        
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<struct FString>                             AdditionalDefines;                                        
	struct FGuid                                       BaseScriptID;                                             
	bool                                               bIsScriptOptimized;                                       
	unsigned char                                      UnknownData02[0x7];                                       
};



struct FNiagaraParameters
{
	TArray<struct FNiagaraVariable>                    Parameters;                                               
};



struct FNiagaraScriptDataUsageInfo
{
	bool                                               bReadsAttributeData;                                      
};



struct FNiagaraFunctionSignature
{
	struct FName                                       Name;                                                     
	TArray<struct FNiagaraVariable>                    Inputs;                                                   
	TArray<struct FNiagaraVariable>                    Outputs;                                                  
	struct FName                                       OwnerName;                                                
	bool                                               bRequiresContext;                                         
	bool                                               bMemberFunction;                                          
	unsigned char                                      UnknownData00[0x6];                                       
	TMap<struct FName, struct FName>                   FunctionSpecifiers;                                       
};



struct FNiagaraScriptDataInterfaceCompileInfo
{
	struct FName                                       Name;                                                     
	int                                                UserPtrIdx;                                               
	unsigned char                                      UnknownData00[0x4];                                       
	struct FNiagaraTypeDefinition                      Type;                                                     
	TArray<struct FNiagaraFunctionSignature>           RegisteredFunctions;                                      
	struct FName                                       RegisteredParameterMapRead;                               
	struct FName                                       RegisteredParameterMapWrite;                              
	bool                                               bIsPlaceholder;                                           
	unsigned char                                      UnknownData01[0x7];                                       
};



struct FVMExternalFunctionBindingInfo
{
	struct FName                                       Name;                                                     
	struct FName                                       OwnerName;                                                
	TArray<bool>                                       InputParamLocations;                                      
	int                                                NumOutputs;                                               
	unsigned char                                      UnknownData00[0x4];                                       
	TMap<struct FName, struct FName>                   Specifiers;                                               
};



struct FNiagaraStatScope
{
	struct FName                                       FullName;                                                 
	struct FName                                       FriendlyName;                                             
};



struct FNiagaraVMExecutableData
{
	TArray<unsigned char>                              ByteCode;                                                 
	int                                                NumUserPtrs;                                              
	unsigned char                                      UnknownData00[0x4];                                       
	struct FNiagaraParameters                          Parameters;                                               
	struct FNiagaraParameters                          InternalParameters;                                       
	TMap<struct FName, struct FNiagaraParameters>      DataSetToParameters;                                      
	TArray<struct FNiagaraVariable>                    Attributes;                                               
	struct FNiagaraScriptDataUsageInfo                 DataUsage;                                                
	unsigned char                                      UnknownData01[0x7];                                       
	TArray<struct FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo;                                        
	TArray<struct FVMExternalFunctionBindingInfo>      CalledVMExternalFunctions;                                
	TArray<struct FNiagaraDataSetID>                   ReadDataSets;                                             
	TArray<struct FNiagaraDataSetProperties>           WriteDataSets;                                            
	TArray<struct FNiagaraStatScope>                   StatScopes;                                               
	TArray<struct FNiagaraDataInterfaceGPUParamInfo>   DIParamInfo;                                              
	ENiagaraScriptCompileStatus                        LastCompileStatus;                                        
	unsigned char                                      UnknownData02[0x7];                                       
};



struct FNiagaraScriptDataInterfaceInfo
{
	class UNiagaraDataInterface*                       DataInterface;                                            
	struct FName                                       Name;                                                     
	int                                                UserPtrIdx;                                               
	unsigned char                                      UnknownData00[0x4];                                       
	struct FNiagaraTypeDefinition                      Type;                                                     
	struct FName                                       RegisteredParameterMapRead;                               
	struct FName                                       RegisteredParameterMapWrite;                              
};



struct FNiagaraEmitterHandle
{
	struct FGuid                                       ID;                                                       
	struct FName                                       IdName;                                                   
	bool                                               bIsEnabled;                                               
	unsigned char                                      UnknownData00[0x7];                                       
	struct FName                                       Name;                                                     
	class UNiagaraEmitter*                             Instance;                                                 
};



struct FNiagaraEmitterSpawnAttributes
{
	TArray<struct FName>                               SpawnAttributes;                                          
};



struct FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FNiagaraVariable                            Parameter;                                                
};



struct FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FIntegralCurve                              BoolCurve;                                                
};



struct FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FRichCurve                                  RedChannel;                                               
	struct FRichCurve                                  GreenChannel;                                             
	struct FRichCurve                                  BlueChannel;                                              
	struct FRichCurve                                  AlphaChannel;                                             
};



struct FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FRichCurve                                  FloatChannel;                                             
};



struct FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FIntegralCurve                              IntegerChannel;                                           
};



struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation
{
	float                                              SpawnSectionStartFrame;                                   
	float                                              SpawnSectionEndFrame;                                     
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate
{

};



struct FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FRichCurve                                  VectorChannels[0x4];                                      
	int                                                ChannelsUsed;                                             
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FNiagaraVariableDataInterfaceBinding
{
	struct FNiagaraVariable                            BoundVariable;                                            
};



struct FNiagaraVariableInfo
{
	struct FNiagaraVariable                            Variable;                                                 
	struct FText                                       Definition;                                               
	class UNiagaraDataInterface*                       DataInterface;                                            
};



struct FMeshTriCoordinate
{
	int                                                Tri;                                                      
	struct FVector                                     BaryCoord;                                                
};



struct FNiagaraCollisionEventPayload
{
	struct FVector                                     CollisionPos;                                             
	struct FVector                                     CollisionNormal;                                          
	struct FVector                                     CollisionVelocity;                                        
	int                                                ParticleIndex;                                            
	int                                                PhysicalMaterialIndex;                                    
};



struct FNiagaraModuleDependency
{
	struct FName                                       ID;                                                       
	ENiagaraModuleDependencyType                       Type;                                                     
	ENiagaraModuleDependencyScriptConstraint           ScriptConstraint;                                         
	unsigned char                                      UnknownData00[0x6];                                       
	struct FText                                       Description;                                              
};



struct FNiagaraSystemCompileRequest
{
	unsigned char                                      UnknownData00[0x8];                                       
	TArray<class UObject*>                             RootObjects;                                              
	unsigned char                                      UnknownData01[0x60];                                      
};



struct FEmitterCompiledScriptPair
{
	unsigned char                                      UnknownData00[0x80];                                      
};



struct FNiagaraInputConditionMetadata
{
	struct FName                                       InputName;                                                
	TArray<struct FString>                             TargetValues;                                             
};



struct FNiagaraVariableMetaData
{
	struct FText                                       Description;                                              
	struct FText                                       CategoryName;                                             
	bool                                               bAdvancedDisplay;                                         
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                EditorSortPriority;                                       
	bool                                               bInlineEditConditionToggle;                               
	unsigned char                                      UnknownData01[0x7];                                       
	struct FNiagaraInputConditionMetadata              EditCondition;                                            
	struct FNiagaraInputConditionMetadata              VisibleCondition;                                         
	TMap<struct FName, struct FString>                 PropertyMetaData;                                         
	bool                                               bIsStaticSwitch;                                          
	unsigned char                                      UnknownData02[0x3];                                       
	int                                                StaticSwitchDefaultValue;                                 
};



struct FNiagaraID
{
	int                                                Index;                                                    
	int                                                AcquireTag;                                               
};



struct FNiagaraSpawnInfo
{
	int                                                Count;                                                    
	float                                              LOD1Scale;                                                
	float                                              LOD2Scale;                                                
	float                                              InterpStartDt;                                            
	float                                              IntervalDt;                                               
	int                                                SpawnGroup;                                               
};



struct FNiagaraMatrix
{
	struct FVector4                                    Row0;                                                     
	struct FVector4                                    Row1;                                                     
	struct FVector4                                    Row2;                                                     
	struct FVector4                                    Row3;                                                     
};



struct FNiagaraTestStructInner
{
	struct FVector                                     InnerVector1;                                             
	struct FVector                                     InnerVector2;                                             
};



struct FNiagaraTestStruct
{
	struct FVector                                     Vector1;                                                  
	struct FVector                                     Vector2;                                                  
	struct FNiagaraTestStructInner                     InnerStruct1;                                             
	struct FNiagaraTestStructInner                     InnerStruct2;                                             
};



struct FNiagaraParameterMap
{
	unsigned char                                      UnknownData00[0x1];                                       
};



struct FNiagaraNumeric
{
	unsigned char                                      UnknownData00[0x1];                                       
};



struct FNiagaraBool
{
	int                                                Value;                                                    
};



struct FNiagaraInt32
{
	int                                                Value;                                                    
};



struct FNiagaraFloat
{
	float                                              Value;                                                    
};

}

