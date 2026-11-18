#pragma once


 
namespace SDK
{






class UNiagaraComponent : public UFXSystemComponent
{
public:
	struct FNiagaraUserRedirectionParameterStore       OverrideParameters;                                       
	unsigned char                                      bForceSolo : 1;                                           
	unsigned char                                      UnknownData00[0x24];                                      
	unsigned char                                      bAutoDestroy : 1;                                         
	unsigned char                                      bRenderingEnabled : 1;                                    
	unsigned char                                      bAutoManageAttachment : 1;                                
	unsigned char                                      UnknownData01[0x2];                                       
	struct FScriptMulticastDelegate                    OnSystemFinished;                                         
	TWeakObjectPtr<class USceneComponent>              AutoAttachParent;                                         
	struct FName                                       AutoAttachSocketName;                                     
	EAttachmentRule                                    AutoAttachLocationRule;                                   
	EAttachmentRule                                    AutoAttachRotationRule;                                   
	EAttachmentRule                                    AutoAttachScaleRule;                                      
	unsigned char                                      UnknownData02[0x1];                                       
	int                                                PreviewDetailLevel;                                       
	float                                              PreviewLODDistance;                                       
	unsigned char                                      bEnablePreviewDetailLevel : 1;                            
	unsigned char                                      bEnablePreviewLODDistance : 1;                            
	unsigned char                                      UnknownData03[0x33];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraComponent");
		return pStaticClass;
	}


	void SetSeekDelta(float InSeekDelta);
	void SetRenderingEnabled(bool bInRenderingEnabled);
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);
	void SetPreviewDetailLevel(bool bEnablePreviewDetailLevel, int PreviewDetailLevel);
	void SetPaused(bool bInPaused);
	void SetNiagaraVariableVec4(const struct FString& InVariableName, const struct FVector4& InValue);
	void SetNiagaraVariableVec3(const struct FString& InVariableName, const struct FVector& InValue);
	void SetNiagaraVariableVec2(const struct FString& InVariableName, const struct FVector2D& InValue);
	void SetNiagaraVariableQuat(const struct FString& InVariableName, const struct FQuat& InValue);
	void SetNiagaraVariableLinearColor(const struct FString& InVariableName, const struct FLinearColor& InValue);
	void SetNiagaraVariableInt(const struct FString& InVariableName, int InValue);
	void SetNiagaraVariableFloat(const struct FString& InVariableName, float InValue);
	void SetNiagaraVariableBool(const struct FString& InVariableName, bool InValue);
	void SetNiagaraVariableActor(const struct FString& InVariableName, class AActor* Actor);
	void SetMaxSimTime(float InMaxTime);
	void SetForceSolo(bool bInForceSolo);
	void SetDesiredAge(float InDesiredAge);
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);
	void SetAutoDestroy(bool bInAutoDestroy);
	void SetAutoAttachmentParameters(class USceneComponent* Parent, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule);
	void SetAsset(class UNiagaraSystem* InAsset);
	void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);
	void SeekToDesiredAge(float InDesiredAge);
	void ResetSystem();
	void ReinitializeSystem();
	bool IsPaused();
	float GetSeekDelta();
	TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(const struct FString& InEmitterName, const struct FString& InValueName);
	TArray<float> GetNiagaraParticleValues_DebugOnly(const struct FString& InEmitterName, const struct FString& InValueName);
	TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(const struct FString& InEmitterName);
	float GetMaxSimTime();
	bool GetForceSolo();
	float GetDesiredAge();
	class UNiagaraSystem* GetAsset();
	ENiagaraAgeUpdateMode GetAgeUpdateMode();
	void DeactivateImmediate();
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
	void AdvanceSimulation(int TickCount, float TickDeltaSeconds);
};




class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.MovieSceneNiagaraTrack");
		return pStaticClass;
	}

};




class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{
public:
	struct FNiagaraVariable                            Parameter;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.MovieSceneNiagaraParameterTrack");
		return pStaticClass;
	}

};




class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.MovieSceneNiagaraBoolParameterTrack");
		return pStaticClass;
	}

};




class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.MovieSceneNiagaraColorParameterTrack");
		return pStaticClass;
	}

};




class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.MovieSceneNiagaraFloatParameterTrack");
		return pStaticClass;
	}

};




class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.MovieSceneNiagaraIntegerParameterTrack");
		return pStaticClass;
	}

};




class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.MovieSceneNiagaraSystemSpawnSection");
		return pStaticClass;
	}

};




class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.MovieSceneNiagaraSystemTrack");
		return pStaticClass;
	}

};




class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	int                                                ChannelsUsed;                                             
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.MovieSceneNiagaraVectorParameterTrack");
		return pStaticClass;
	}

};




class ANiagaraActor : public AActor
{
public:
	class UNiagaraComponent*                           NiagaraComponent;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraActor");
		return pStaticClass;
	}

};




class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterface");
		return pStaticClass;
	}

};




class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{
public:
	TArray<float>                                      ShaderLUT;                                                
	float                                              LUTMinTime;                                               
	float                                              LUTMaxTime;                                               
	float                                              LUTInvTimeRange;                                          
	unsigned char                                      bUseLUT : 1;                                              
	unsigned char                                      UnknownData00[0x3];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurveBase");
		return pStaticClass;
	}

};




class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCollisionQuery");
		return pStaticClass;
	}

};




class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  RedCurve;                                                 
	struct FRichCurve                                  GreenCurve;                                               
	struct FRichCurve                                  BlueCurve;                                                
	struct FRichCurve                                  AlphaCurve;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceColorCurve");
		return pStaticClass;
	}

};




class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{
public:
	uint32_t                                           Seed;                                                     
	unsigned char                                      UnknownData00[0xC];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurlNoise");
		return pStaticClass;
	}

};




class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  Curve;                                                    

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurve");
		return pStaticClass;
	}

};




class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterface
{
public:
	struct FString                                     EmitterName;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceParticleRead");
		return pStaticClass;
	}

};




class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x50];                                      
	unsigned char                                      UnknownData01[0x50];                                      
	unsigned char                                      UnknownData02[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceRWBase");
		return pStaticClass;
	}

};




class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSimpleCounter");
		return pStaticClass;
	}

};




class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{
public:
	class USkeletalMesh*                               DefaultMesh;                                              
	class AActor*                                      Source;                                                   
	class USkeletalMeshComponent*                      SourceComponent;                                          
	ENDISkeletalMesh_SkinningMode                      SkinningMode;                                             
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<struct FName>                               SamplingRegions;                                          
	int                                                WholeMeshLOD;                                             
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<struct FName>                               SpecificBones;                                            
	TArray<struct FName>                               SpecificSockets;                                          
	bool                                               bUseTriangleSampling;                                     
	bool                                               bUseVertexSampling;                                       
	bool                                               bUseSkeletonSampling;                                     
	unsigned char                                      UnknownData02[0x5];                                       
	struct FString                                     SourceComponentKeyWord;                                   
	bool                                               bForceUseDefaultMesh;                                     
	unsigned char                                      UnknownData03[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSkeletalMesh");
		return pStaticClass;
	}

};




class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
public:
	class AActor*                                      Source;                                                   
	TArray<struct FVector>                             SplineKeyframePoints;                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSpline");
		return pStaticClass;
	}

};




class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
public:
	class UStaticMesh*                                 DefaultMesh;                                              
	class AActor*                                      Source;                                                   
	class UStaticMeshComponent*                        SourceComponent;                                          
	struct FNDIStaticMeshSectionFilter                 SectionFilter;                                            
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceStaticMesh");
		return pStaticClass;
	}

};




class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{
public:
	class UTexture*                                    Texture;                                                  

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceTexture");
		return pStaticClass;
	}

};




class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                   
	struct FRichCurve                                  YCurve;                                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVector2DCurve");
		return pStaticClass;
	}

};




class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                   
	struct FRichCurve                                  YCurve;                                                   
	struct FRichCurve                                  ZCurve;                                                   
	struct FRichCurve                                  WCurve;                                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVector4Curve");
		return pStaticClass;
	}

};




class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                   
	struct FRichCurve                                  YCurve;                                                   
	struct FRichCurve                                  ZCurve;                                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVectorCurve");
		return pStaticClass;
	}

};




class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{
public:
	class UVectorField*                                Field;                                                    
	bool                                               bTileX;                                                   
	bool                                               bTileY;                                                   
	bool                                               bTileZ;                                                   
	unsigned char                                      UnknownData00[0x5];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVectorField");
		return pStaticClass;
	}

};




class UNiagaraRendererProperties : public UNiagaraMergeable
{
public:
	int                                                SortOrderHint;                                            
	bool                                               bIsEnabled;                                               
	unsigned char                                      UnknownData00[0x3];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraRendererProperties");
		return pStaticClass;
	}

};




class UNiagaraDecalRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                          Material;                                                 
	float                                              DecalScreenSizeFade;                                      
	unsigned char                                      UnknownData00[0x4];                                       
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          
	struct FNiagaraVariableAttributeBinding            DecalOrientationBinding;                                  
	struct FNiagaraVariableAttributeBinding            DecalSizeBinding;                                         
	struct FNiagaraVariableAttributeBinding            DecalFadeBinding;                                         
	struct FNiagaraVariableAttributeBinding            DecalSortOrderBinding;                                    
	struct FNiagaraVariableAttributeBinding            DecalVisibleBinding;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraDecalRendererProperties");
		return pStaticClass;
	}

};




class UNiagaraEditorDataBase : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraEditorDataBase");
		return pStaticClass;
	}

};




class UNiagaraEmitter : public UObject
{
public:
	bool                                               bLocalSpace;                                              
	bool                                               bBoneSpace;                                               
	bool                                               bDeterminism;                                             
	unsigned char                                      UnknownData00[0x1];                                       
	int                                                RandomSeed;                                               
	struct FNiagaraEmitterScriptProperties             UpdateScriptProps;                                        
	struct FNiagaraEmitterScriptProperties             SpawnScriptProps;                                         
	struct FNiagaraEmitterScriptProperties             EmitterSpawnScriptProps;                                  
	struct FNiagaraEmitterScriptProperties             EmitterUpdateScriptProps;                                 
	unsigned char                                      bHasPendingFallbackEmitterChange : 1;                     
	unsigned char                                      bIsFallbackEmitter : 1;                                   
	unsigned char                                      UnknownData01[0x7];                                       
	class UNiagaraEmitter*                             CPUFallbackEmitter;                                       
	ENiagaraSimTarget                                  SimTarget;                                                
	unsigned char                                      bUseFallbackEmitter : 1;                                  
	unsigned char                                      UnknownData02[0x2];                                       
	struct FBox                                        FixedBounds;                                              
	int                                                MinDetailLevel;                                           
	int                                                MaxDetailLevel;                                           
	unsigned char                                      bInterpolatedSpawning : 1;                                
	unsigned char                                      bFixedBounds : 1;                                         
	unsigned char                                      bUseMinDetailLevel : 1;                                   
	unsigned char                                      bUseMaxDetailLevel : 1;                                   
	unsigned char                                      bRequiresPersistentIDs : 1;                               
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              MaxDeltaTimePerTick;                                      
	unsigned char                                      bLimitDeltaTime : 1;                                      
	unsigned char                                      UnknownData04[0x7];                                       
	struct FString                                     UniqueEmitterName;                                        
	TArray<class UNiagaraRendererProperties*>          RendererProperties;                                       
	TArray<struct FNiagaraEventScriptProperties>       EventHandlerScriptProps;                                  
	class UNiagaraScript*                              GPUComputeScript;                                         
	TArray<struct FName>                               SharedEventGeneratorIds;                                  
	class UNiagaraEmitter*                             Parent;                                                   
	class UNiagaraEmitter*                             ParentAtLastMerge;                                        

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraEmitter");
		return pStaticClass;
	}

};




class UNiagaraEventReceiverEmitterAction : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction");
		return pStaticClass;
	}

};




class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
public:
	uint32_t                                           NumParticles;                                             
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles");
		return pStaticClass;
	}

};




class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraFunctionLibrary");
		return pStaticClass;
	}


	static class UNiagaraComponent* SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy);
	static class UNiagaraComponent* SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, const struct FVector& Location, const struct FRotator& Rotation, bool bAutoDestroy);
	static void OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UStaticMeshComponent* StaticMeshComponent);
	static void OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UStaticMesh* StaticMesh);
	static void OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent);
	static bool IsAllowNiagaraGPUParticles(class UObject* WorldContextObject);
	static int GetReadbackParticleCount();
	static class UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection);
	static int GetGPUReadbackDelay();
	static int GetGPUParticleCount();
	static int GetDeadParticleCount();
	static int GetCPUParticleCount();
};




class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{
public:
	float                                              RadiusScale;                                              
	struct FVector                                     ColorAdd;                                                 
	struct FNiagaraVariableAttributeBinding            LightRenderingEnabledBinding;                             
	struct FNiagaraVariableAttributeBinding            LightExponentBinding;                                     
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             
	struct FNiagaraVariableAttributeBinding            RadiusBinding;                                            
	struct FNiagaraVariableAttributeBinding            VolumetricScatteringBinding;                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraLightRendererProperties");
		return pStaticClass;
	}

};




class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{
public:
	class UStaticMesh*                                 ParticleMesh;                                             
	ENiagaraSortMode                                   SortMode;                                                 
	unsigned char                                      bOverrideMaterials : 1;                                   
	unsigned char                                      bSortOnlyWhenTranslucent : 1;                             
	unsigned char                                      UnknownData00[0x6];                                       
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                        
	ENiagaraMeshFacingMode                             FacingMode;                                               
	unsigned char                                      UnknownData01[0x7];                                       
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                          
	struct FNiagaraVariableAttributeBinding            MeshOrientationBinding;                                   
	struct FNiagaraVariableAttributeBinding            ScaleBinding;                                             
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                   
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                  
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                  
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                  
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                    
	struct FNiagaraVariableAttributeBinding            CustomSortingBinding;                                     
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraMeshRendererProperties");
		return pStaticClass;
	}

};




class UNiagaraParameterCollectionInstance : public UObject
{
public:
	class UNiagaraParameterCollection*                 Collection;                                               
	TArray<struct FNiagaraVariable>                    OverridenParameters;                                      
	struct FNiagaraParameterStore                      ParameterStorage;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraParameterCollectionInstance");
		return pStaticClass;
	}


	void SetVectorParameter(const struct FString& InVariableName, const struct FVector& InValue);
	void SetVector4Parameter(const struct FString& InVariableName, const struct FVector4& InValue);
	void SetVector2DParameter(const struct FString& InVariableName, const struct FVector2D& InValue);
	void SetQuatParameter(const struct FString& InVariableName, const struct FQuat& InValue);
	void SetIntParameter(const struct FString& InVariableName, int InValue);
	void SetFloatParameter(const struct FString& InVariableName, float InValue);
	void SetColorParameter(const struct FString& InVariableName, const struct FLinearColor& InValue);
	void SetBoolParameter(const struct FString& InVariableName, bool InValue);
	struct FVector GetVectorParameter(const struct FString& InVariableName);
	struct FVector4 GetVector4Parameter(const struct FString& InVariableName);
	struct FVector2D GetVector2DParameter(const struct FString& InVariableName);
	struct FQuat GetQuatParameter(const struct FString& InVariableName);
	int GetIntParameter(const struct FString& InVariableName);
	float GetFloatParameter(const struct FString& InVariableName);
	struct FLinearColor GetColorParameter(const struct FString& InVariableName);
	bool GetBoolParameter(const struct FString& InVariableName);
};




class UNiagaraParameterCollection : public UObject
{
public:
	struct FName                                       Namespace;                                                
	TArray<struct FNiagaraVariable>                    Parameters;                                               
	class UNiagaraParameterCollectionInstance*         DefaultInstance;                                          
	struct FGuid                                       CompileId;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraParameterCollection");
		return pStaticClass;
	}

};




class ANiagaraPreviewBase : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraPreviewBase");
		return pStaticClass;
	}


	void SetSystem(class UNiagaraSystem* InSystem);
	void SetLabelText(const struct FText& InXAxisText, const struct FText& InYAxisText);
};




class UNiagaraPreviewAxis : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraPreviewAxis");
		return pStaticClass;
	}


	int Num();
	void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int PreviewIndex, bool bIsXAxis, struct FString* OutLabelText);
};




class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{
public:
	struct FString                                     Param;                                                    
	int                                                Count;                                                    
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamBase");
		return pStaticClass;
	}

};




class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	int                                                Max;                                                      
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamInt32");
		return pStaticClass;
	}

};




class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	float                                              Max;                                                      
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamFloat");
		return pStaticClass;
	}

};




class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       
	struct FVector2D                                   Max;                                                      
	unsigned char                                      UnknownData01[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector2D");
		return pStaticClass;
	}

};




class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FVector                                     Max;                                                      
	unsigned char                                      UnknownData01[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector");
		return pStaticClass;
	}

};




class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector4                                    Min;                                                      
	struct FVector4                                    Max;                                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector4");
		return pStaticClass;
	}

};




class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	unsigned char                                      UnknownData00[0xC];                                       
	struct FLinearColor                                Max;                                                      
	unsigned char                                      UnknownData01[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor");
		return pStaticClass;
	}

};




class ANiagaraPreviewGrid : public AActor
{
public:
	class UNiagaraSystem*                              System;                                                   
	ENiagaraPreviewGridResetMode                       ResetMode;                                                
	unsigned char                                      UnknownData00[0x7];                                       
	class UNiagaraPreviewAxis*                         PreviewAxisX;                                             
	class UNiagaraPreviewAxis*                         PreviewAxisY;                                             
	class UClass*                                      PreviewClass;                                             
	float                                              SpacingX;                                                 
	float                                              SpacingY;                                                 
	int                                                NumX;                                                     
	int                                                NumY;                                                     
	TArray<class UChildActorComponent*>                PreviewComponents;                                        
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraPreviewGrid");
		return pStaticClass;
	}


	void DeactivatePreviews();
	void ActivatePreviews(bool bReset);
};




class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                          Material;                                                 
	ENiagaraRibbonFacingMode                           FacingMode;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              UV0TilingDistance;                                        
	struct FVector2D                                   UV0Scale;                                                 
	struct FVector2D                                   UV0Offset;                                                
	ENiagaraRibbonAgeOffsetMode                        UV0AgeOffsetMode;                                         
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              UV1TilingDistance;                                        
	struct FVector2D                                   UV1Scale;                                                 
	struct FVector2D                                   UV1Offset;                                                
	ENiagaraRibbonAgeOffsetMode                        UV1AgeOffsetMode;                                         
	ENiagaraRibbonDrawDirection                        DrawDirection;                                            
	unsigned char                                      UnknownData02[0x2];                                       
	float                                              CurveTension;                                             
	ENiagaraRibbonTessellationMode                     TessellationMode;                                         
	unsigned char                                      UnknownData03[0x3];                                       
	int                                                TessellationFactor;                                       
	bool                                               bUseConstantFactor;                                       
	unsigned char                                      UnknownData04[0x3];                                       
	float                                              TessellationAngle;                                        
	bool                                               bScreenSpaceTessellation;                                 
	unsigned char                                      UnknownData05[0x7];                                       
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                          
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                     
	struct FNiagaraVariableAttributeBinding            RibbonTwistBinding;                                       
	struct FNiagaraVariableAttributeBinding            RibbonWidthBinding;                                       
	struct FNiagaraVariableAttributeBinding            RibbonFacingBinding;                                      
	struct FNiagaraVariableAttributeBinding            RibbonIdBinding;                                          
	struct FNiagaraVariableAttributeBinding            RibbonLinkOrderBinding;                                   
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                    
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                   
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                  
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                  
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                  

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraRibbonRendererProperties");
		return pStaticClass;
	}

};




class UNiagaraScript : public UObject
{
public:
	ENiagaraScriptUsage                                Usage;                                                    
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                UsageIndex;                                               
	struct FGuid                                       UsageId;                                                  
	struct FNiagaraParameterStore                      RapidIterationParameters;                                 
	struct FNiagaraScriptExecutionParameterStore       ScriptExecutionParamStoreCPU;                             
	struct FNiagaraScriptExecutionParameterStore       ScriptExecutionParamStoreGPU;                             
	struct FNiagaraVMExecutableDataId                  CachedScriptVMId;                                         
	struct FNiagaraVMExecutableDataId                  LastGeneratedVMId;                                        
	unsigned char                                      UnknownData01[0x180];                                     
	struct FNiagaraVMExecutableData                    CachedScriptVM;                                           
	TArray<class UNiagaraParameterCollection*>         CachedParameterCollectionReferences;                      
	TArray<struct FNiagaraScriptDataInterfaceInfo>     CachedDefaultDataInterfaces;                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraScript");
		return pStaticClass;
	}


	void OnCompilationComplete();
};




class UNiagaraScriptSourceBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraScriptSourceBase");
		return pStaticClass;
	}

};




class UNiagaraSettings : public UDeveloperSettings
{
public:
	TArray<struct FSoftObjectPath>                     AdditionalParameterTypes;                                 
	TArray<struct FSoftObjectPath>                     AdditionalPayloadTypes;                                   
	TArray<struct FSoftObjectPath>                     AdditionalParameterEnums;                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraSettings");
		return pStaticClass;
	}

};




class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                          Material;                                                 
	ENiagaraSpriteAlignment                            Alignment;                                                
	ENiagaraSpriteFacingMode                           FacingMode;                                               
	unsigned char                                      UnknownData00[0x2];                                       
	struct FVector                                     CustomFacingVectorMask;                                   
	struct FVector2D                                   PivotInUVSpace;                                           
	ENiagaraSortMode                                   SortMode;                                                 
	unsigned char                                      UnknownData01[0x3];                                       
	struct FVector2D                                   SubImageSize;                                             
	unsigned char                                      bSubImageBlend : 1;                                       
	unsigned char                                      bRemoveHMDRollInVR : 1;                                   
	unsigned char                                      bSortOnlyWhenTranslucent : 1;                             
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              MinFacingCameraBlendDistance;                             
	float                                              MaxFacingCameraBlendDistance;                             
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                          
	struct FNiagaraVariableAttributeBinding            SpriteRotationBinding;                                    
	struct FNiagaraVariableAttributeBinding            SpriteSizeBinding;                                        
	struct FNiagaraVariableAttributeBinding            SpriteFacingBinding;                                      
	struct FNiagaraVariableAttributeBinding            SpriteAlignmentBinding;                                   
	struct FNiagaraVariableAttributeBinding            SubImageIndexBinding;                                     
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                   
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                  
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                  
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                  
	struct FNiagaraVariableAttributeBinding            CameraOffsetBinding;                                      
	struct FNiagaraVariableAttributeBinding            UVScaleBinding;                                           
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                    
	struct FNiagaraVariableAttributeBinding            CustomSortingBinding;                                     
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                     
	unsigned char                                      UnknownData03[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraSpriteRendererProperties");
		return pStaticClass;
	}

};




class UNiagaraSystem : public UFXSystemAsset
{
public:
	bool                                               bDumpDebugSystemInfo;                                     
	bool                                               bDumpDebugEmitterInfo;                                    
	unsigned char                                      bFixedBounds : 1;                                         
	unsigned char                                      UnknownData00[0x5];                                       
	TArray<struct FNiagaraEmitterHandle>               EmitterHandles;                                           
	TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;                             
	class UNiagaraScript*                              SystemSpawnScript;                                        
	class UNiagaraScript*                              SystemUpdateScript;                                       
	TArray<struct FNiagaraEmitterSpawnAttributes>      EmitterSpawnAttributes;                                   
	struct FNiagaraUserRedirectionParameterStore       ExposedParameters;                                        
	struct FBox                                        FixedBounds;                                              
	bool                                               bAutoDeactivate;                                          
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              WarmupTime;                                               
	int                                                WarmupTickCount;                                          
	float                                              WarmupTickDelta;                                          
	bool                                               bHasSystemScriptDIsWithPerInstanceData;                   
	unsigned char                                      UnknownData02[0x3];                                       
	TArray<struct FName>                               UserDINamesReadInSystemScripts;                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Niagara.NiagaraSystem");
		return pStaticClass;
	}

};


}

