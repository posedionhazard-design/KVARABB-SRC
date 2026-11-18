#pragma once


 
namespace SDK
{





enum class ECreativeLuaAnimNodeType : uint8_t
{
	ECreativeLuaAnimNodeType__None = 0,
	ECreativeLuaAnimNodeType__Output = 1,
	ECreativeLuaAnimNodeType__AnimationPlayer = 2,
	ECreativeLuaAnimNodeType__Blend = 3,
	ECreativeLuaAnimNodeType__Additive = 4,
	ECreativeLuaAnimNodeType__MakeDynamicAdditive = 5,
	ECreativeLuaAnimNodeType__BlendSpaceByPoints = 6,
	ECreativeLuaAnimNodeType__LayeredBoneBlend = 7,
	ECreativeLuaAnimNodeType__Select = 8,
	ECreativeLuaAnimNodeType__BlendSpace2D = 9,
	ECreativeLuaAnimNodeType__Mask = 10,
	ECreativeLuaAnimNodeType__Over = 11,
	ECreativeLuaAnimNodeType__GetCachedPose = 12,
	ECreativeLuaAnimNodeType__UseCachedPose = 13,
	ECreativeLuaAnimNodeType__BoneRotate = 14,
	ECreativeLuaAnimNodeType__SubGraph = 15,
	ECreativeLuaAnimNodeType__GraphInput = 16,
	ECreativeLuaAnimNodeType__ECreativeLuaAnimNodeType_MAX = 17
};



enum class ECreativeLuaAnimOverrideHook : uint8_t
{
	ECreativeLuaAnimOverrideHook__OnUpdateAnimation = 0,
	ECreativeLuaAnimOverrideHook__PostUpdateAnimation = 1,
	ECreativeLuaAnimOverrideHook__OnPreEvaluateGraph = 2,
	ECreativeLuaAnimOverrideHook__OnPreEvaluateNode = 3,
	ECreativeLuaAnimOverrideHook__OnPreEvaluateAnimationPlayer = 4,
	ECreativeLuaAnimOverrideHook__OnPreEvaluateBlendSpace = 5,
	ECreativeLuaAnimOverrideHook__OnPreEvaluateLayeredBoneBlend = 6,
	ECreativeLuaAnimOverrideHook__OnPreEvaluateSelect = 7,
	ECreativeLuaAnimOverrideHook__OnPreEvaluateBlendSpace2D = 8,
	ECreativeLuaAnimOverrideHook__OnPreEvaluateMask = 9,
	ECreativeLuaAnimOverrideHook__OnPreEvaluateBoneRotate = 10,
	ECreativeLuaAnimOverrideHook__OnPreEvaluateBlendAlpha = 11,
	ECreativeLuaAnimOverrideHook__ApplyEvaluateOverrides = 12,
	ECreativeLuaAnimOverrideHook__OnEvaluateFailed = 13,
	ECreativeLuaAnimOverrideHook__ECreativeLuaAnimOverrideHook_MAX = 14
};



enum class ECreativeUIEasingStyle : uint8_t
{
	ECreativeUIEasingStyle__None   = 0,
	ECreativeUIEasingStyle__Linear = 1,
	ECreativeUIEasingStyle__Sine   = 2,
	ECreativeUIEasingStyle__Quad   = 3,
	ECreativeUIEasingStyle__Cubic  = 4,
	ECreativeUIEasingStyle__Quart  = 5,
	ECreativeUIEasingStyle__Quint  = 6,
	ECreativeUIEasingStyle__Exponential = 7,
	ECreativeUIEasingStyle__Circular = 8,
	ECreativeUIEasingStyle__Back   = 9,
	ECreativeUIEasingStyle__Bounce = 10,
	ECreativeUIEasingStyle__ECreativeUIEasingStyle_MAX = 11
};



enum class ECreativeUIEasingDirection : uint8_t
{
	ECreativeUIEasingDirection__In = 0,
	ECreativeUIEasingDirection__Out = 1,
	ECreativeUIEasingDirection__InOut = 2,
	ECreativeUIEasingDirection__ECreativeUIEasingDirection_MAX = 3
};



enum class ECreativeModeActorState : uint8_t
{
	ECreativeModeActorState__CreativeModeActorState_Unknown = 0,
	ECreativeModeActorState__CreativeModeActorState_Prefab = 1,
	ECreativeModeActorState__CreativeModeActorState_Instance = 2,
	ECreativeModeActorState__CreativeModeActorState_MAX = 3
};



enum class ECreativeModePlayState : uint8_t
{
	ECreativeModePlayState__CreativeModePlayState_None = 0,
	ECreativeModePlayState__CreativeModePlayState_Ready = 1,
	ECreativeModePlayState__CreativeModePlayState_Fighting = 2,
	ECreativeModePlayState__CreativeModePlayState_Finish = 3,
	ECreativeModePlayState__CreativeModePlayState_Max = 4
};



enum class ECreativeLuaAnimPropertyType : uint8_t
{
	ECreativeLuaAnimPropertyType__Float = 0,
	ECreativeLuaAnimPropertyType__Bool = 1,
	ECreativeLuaAnimPropertyType__Int = 2,
	ECreativeLuaAnimPropertyType__String = 3,
	ECreativeLuaAnimPropertyType__ECreativeLuaAnimPropertyType_MAX = 4
};



enum class ECreativeLuaAnimSelectCurve : uint8_t
{
	ECreativeLuaAnimSelectCurve__Linear = 0,
	ECreativeLuaAnimSelectCurve__QuadraticIn = 1,
	ECreativeLuaAnimSelectCurve__QuadraticOut = 2,
	ECreativeLuaAnimSelectCurve__ECreativeLuaAnimSelectCurve_MAX = 3
};



enum class ECreativeTriggerSourceType : uint8_t
{
	ECreativeTriggerSourceType__None = 0,
	ECreativeTriggerSourceType__Player = 1,
	ECreativeTriggerSourceType__Robot = 2,
	ECreativeTriggerSourceType__Monster = 3,
	ECreativeTriggerSourceType__Vehicle = 4,
	ECreativeTriggerSourceType__BankProduct = 5,
	ECreativeTriggerSourceType__ECreativeTriggerSourceType_MAX = 6
};



enum class ETaskStatus : uint8_t
{
	ETaskStatus__None              = 0,
	ETaskStatus__Pending           = 1,
	ETaskStatus__InProgress        = 2,
	ETaskStatus__PendingAcclaim    = 3,
	ETaskStatus__Success           = 4,
	ETaskStatus__Fail              = 5,
	ETaskStatus__ETaskStatus_MAX   = 6
};



enum class ESpecType : uint8_t
{
	ESpecType__Invalid             = 0,
	ESpecType__HumanBot            = 1,
	ESpecType__AIPlayer            = 2,
	ESpecType__Monster             = 3,
	ESpecType__Tower               = 4,
	ESpecType__ESpecType_MAX       = 5
};



enum class ECreativeModeActorStreamingType : uint8_t
{
	ECreativeModeActorStreamingType__CreativeModeActorStreamingType_AlwaysLoad = 0,
	ECreativeModeActorStreamingType__CreativeModeActorStreamingType_Grid = 1,
	ECreativeModeActorStreamingType__CreativeModeActorStreamingType_MAX = 2
};



enum class ECreativeDestructibleState : uint8_t
{
	ECreativeDestructibleState__CreativeDestructibleState_NoParam = 0,
	ECreativeDestructibleState__CreativeDestructibleState_Enable = 1,
	ECreativeDestructibleState__CreativeDestructibleState_Disable = 2,
	ECreativeDestructibleState__CreativeDestructibleState_MAX = 3
};



enum class ECreativeModeLoadType : uint8_t
{
	ECreativeModeLoadType__CreativeModeLoadType_Auto = 0,
	ECreativeModeLoadType__CreativeModeLoadType_Manual = 1,
	ECreativeModeLoadType__CreativeModeLoadType_MAX = 2
};



enum class ECreativeModeGameType : uint8_t
{
	ECreativeModeGameType__CreativeModeGameType_None = 0,
	ECreativeModeGameType__CreativeModeGameType_Editor = 1,
	ECreativeModeGameType__CreativeModeGameType_Game = 2,
	ECreativeModeGameType__CreativeModeGameType_Max = 3
};



enum class ESCWOWActiveType : uint8_t
{
	ESCWOWActiveType__SAT_Active   = 0,
	ESCWOWActiveType__SAT_PandingKickOut = 1,
	ESCWOWActiveType__SAT_kickedOut = 2,
	ESCWOWActiveType__SAT_MAX      = 3
};



enum class EMountStatus : uint8_t
{
	EMountStatus__Mounting         = 0,
	EMountStatus__Mounted          = 1,
	EMountStatus__Unmounted        = 2,
	EMountStatus__MountFailed      = 3,
	EMountStatus__EMountStatus_MAX = 4
};



enum class ETransferStatus : uint8_t
{
	ETransferStatus__Pending       = 0,
	ETransferStatus__Transferring  = 1,
	ETransferStatus__Completed     = 2,
	ETransferStatus__Failed        = 3,
	ETransferStatus__ETransferStatus_MAX = 4
};



enum class EPaintOpType : uint8_t
{
	EPaintOpType__Add              = 0,
	EPaintOpType__Remove           = 1,
	EPaintOpType__Reset            = 2,
	EPaintOpType__EPaintOpType_MAX = 3
};









struct FCreativeInstanceDataContentSegment
{
	unsigned char                                      Index;                                                    
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<unsigned char>                              NodeSegmentContent;                                       
};



struct FCreativeInstanceDataContent
{
	unsigned char                                      Seq;                                                      
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<struct FCreativeInstanceDataContentSegment> NodeContentSegments;                                      
	TArray<unsigned char>                              OutContent;                                               
};



struct FCreativeActorDataNode
{
	uint32_t                                           DataHashKey;                                              
	unsigned char                                      UnknownData00[0x4];                                       
	struct FCreativeInstanceDataContent                DataContent;                                              
};



struct FCreativeActorReplicatNode : public FFastArraySerializerItem
{
	uint32_t                                           DataHashKey;                                              
	uint32_t                                           ID;                                                       
	unsigned char                                      Type;                                                     
	unsigned char                                      Seq;                                                      
	unsigned char                                      UnknownData00[0x2];                                       
	struct FCreativeActorDataNode                      DataNode;                                                 
};



struct FCreativeActorNodeContainer : public FFastArraySerializer
{
	TArray<struct FCreativeActorReplicatNode>          Nodes;                                                    
	class UCreativeActorDataManager*                   ActorDataManager;                                         
};



struct FCreativeNeedInitAbstractClassIDInfo
{
	TArray<int>                                        NeedInitAbstractClassIDList;                              
	struct FString                                     AuthorID;                                                 
};



struct FCreativeSignalEventInfo
{
	struct FString                                     EventType;                                                
	struct FString                                     EventID;                                                  
	struct FString                                     FunctionName;                                             
};



struct FCreativePlaceInfo
{
	int                                                LandGroundType;                                           
	bool                                               Scalable;                                                 
	bool                                               HasCollision;                                             
	unsigned char                                      UnknownData00[0x2];                                       
	struct FRotator                                    RotableAxis;                                              
};



struct FCreativeBoxInfo
{
	struct FVector                                     Center;                                                   
	struct FVector                                     Extent;                                                   
};



struct FCreativeStaticMeshConfigInfo
{
	struct FString                                     DestructionMeshPath;                                      
	struct FString                                     MeshPath;                                                 
	struct FTransform                                  Transform;                                                
	TArray<struct FString>                             MaterialPaths;                                            
	struct FName                                       CollisionProfileName;                                     
	bool                                               OnlyEdit;                                                 
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FCreativeCollisionConfigInfo
{
	struct FTransform                                  Transform;                                                
	struct FString                                     ClassName;                                                
	struct FName                                       CollisionProfileName;                                     
	struct FVector                                     Extent;                                                   
	float                                              Radius;                                                   
	float                                              HalfHeight;                                               
	bool                                               OnlyEdit;                                                 
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FCreativeAssetInfo
{
	struct FString                                     EditorPath;                                               
	struct FString                                     GamePath;                                                 
	struct FCreativePlaceInfo                          PlaceInfo;                                                
	bool                                               bRuntimeObjectBox;                                        
	bool                                               bIsGroup;                                                 
	int8_t                                             AssetCategory;                                            
	unsigned char                                      UnknownData00[0x1];                                       
	struct FCreativeBoxInfo                            BoxInfo;                                                  
	TArray<struct FCreativeStaticMeshConfigInfo>       StaticMeshes;                                             
	TArray<struct FCreativeCollisionConfigInfo>        Collisions;                                               
};



struct FCreativeAutoGenItemDataSegment
{
	TArray<unsigned char>                              NodeSegmentContent;                                       
};



struct FCreativeAutoGenDataSegment
{
	TArray<struct FCreativeAutoGenItemDataSegment>     DataSegments;                                             
	int                                                CurDataSize;                                              
	int                                                MaxDataSize;                                              
};



struct FCreativeUITweenParams
{
	ECreativeUIEasingStyle                             PositionEasingStyle;                                      
	ECreativeUIEasingStyle                             OpacityEasingStyle;                                       
	ECreativeUIEasingStyle                             RotationEasingStyle;                                      
	ECreativeUIEasingStyle                             ScaleEasingStyle;                                         
};



struct FCreativeUITweenInfo
{
	float                                              Time;                                                     
	ECreativeUIEasingStyle                             EasingStyle;                                              
	ECreativeUIEasingDirection                         EasingDirection;                                          
	unsigned char                                      UnknownData00[0x2];                                       
	int                                                RepeatCount;                                              
	bool                                               Reverses;                                                 
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              delayTime;                                                
	struct FCreativeUITweenParams                      Params;                                                   
};



struct FCreativeUIAnimationGoal
{
	float                                              PositionX;                                                
	float                                              PositionY;                                                
	float                                              Opacity;                                                  
	float                                              Rotation;                                                 
	float                                              Scale;                                                    
};



struct FMessageDataWrapper
{
	struct FString                                     BlockIdString;                                            
	struct FString                                     FormatString;                                             
};



struct FCreativeLuaReplicatedBytes2048
{
	TArray<uint64_t>                                   Data;                                                     
	int                                                Len;                                                      
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FCreativeLuaReplicatedBytes1024
{
	TArray<uint32_t>                                   Data;                                                     
};



struct FReplicateAddData
{
	int                                                AddNum;                                                   
	float                                              ServerTime;                                               
};



struct FReplicateAddDataArray
{
	TArray<struct FReplicateAddData>                   AddDatas;                                                 
};



struct FCreativeMovingAudio
{
	class AActor*                                      AttachRoot;                                               
	struct FVector                                     AttachPos;                                                
	int                                                Sequence;                                                 
	uint64_t                                           ConfigID;                                                 
	bool                                               bShowMark;                                                
	unsigned char                                      UnknownData00[0x7];                                       
	int64_t                                            EndTime;                                                  
	float                                              Volume;                                                   
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FBounceMovementSnapshot
{
	struct FVector                                     Location;                                                 
	struct FVector                                     Velocity;                                                 
	uint32_t                                           FrameNumber;                                              
	float                                              ServerTimeStamp;                                          
};



struct FCreativeCustomParameterDataNode : public FFastArraySerializerItem
{
	uint32_t                                           ParameterID;                                              
	TArray<unsigned char>                              DataContent;                                              
	uint32_t                                           PlayerKey;                                                
	int8_t                                             TeamID;                                                   
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FCreativeCustomParameterDataContainer : public FFastArraySerializer
{
	TArray<struct FCreativeCustomParameterDataNode>    CustomParameterDataNodes;                                 
	class UCreativeCustomParameterManager*             CustomParameterManager;                                   
};



struct FCreativePrefabDataSegmentSlice
{
	TArray<unsigned char>                              NodeSegmentContent;                                       
};



struct FCreativePrefabDataSegment
{
	TArray<struct FCreativePrefabDataSegmentSlice>     NodeSegmentContent;                                       
	int                                                MaxDataSize;                                              
	int                                                CurDataSize;                                              
};



struct FCreativeCustomPrefabDataSegment
{
	TArray<struct FCreativePrefabDataSegment>          DataSegments;                                             
	int                                                CurDataSize;                                              
	int                                                MaxDataSize;                                              
};



struct FCreativeCustomUIReplicateNode : public FFastArraySerializerItem
{
	uint32_t                                           ID;                                                       
	unsigned char                                      Seq;                                                      
	unsigned char                                      UnknownData00[0x7];                                       
	struct FCreativeInstanceDataContent                DataContent;                                              
};



struct FCreativeCustomUIContainer : public FFastArraySerializer
{
	TArray<struct FCreativeCustomUIReplicateNode>      Nodes;                                                    
	class UCreativeCustomUIDataComponent*              Component;                                                
};



struct FCreativeCustomUIDataTransferNode
{
	uint32_t                                           ID;                                                       
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<unsigned char>                              Content;                                                  
};



struct FCreativeVFXImageBlendConfig
{
	struct FName                                       ImageName;                                                
	class UMaterialInterface*                          TranslucentMaterial;                                      
	class UMaterialInterface*                          AdditiveMaterial;                                         
	float                                              DeltaV;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FCreativeDropAnimConfig
{
	unsigned char                                      bNotShowInPickupListWhenInDropAnim : 1;                   
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector2D                                   RangeHigh;                                                
	struct FVector                                     CustomStartOffset;                                        
	unsigned char                                      ClientDropOneByOne : 1;                                   
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              ClientDropOneByOneInterval;                               
	float                                              CustomGravity;                                            
	float                                              TrailParticleDelayTime;                                   
	float                                              LandDirectlyAfterTheReplicatedTime;                       
	unsigned char                                      UseTrailParticle : 1;                                     
	unsigned char                                      UnknownData02[0x3];                                       
	struct FSoftObjectPath                             DropTailsParticle;                                        
	struct FSoftObjectPath                             RareDropTailsParticle;                                    
	unsigned char                                      UnknownData03[0x50];                                      
	float                                              ParticleScale;                                            
	unsigned char                                      bUseDropGroundParticle : 1;                               
	unsigned char                                      UnknownData04[0x3];                                       
	float                                              DropGroundParticleLifeTime;                               
	unsigned char                                      UnknownData05[0x4];                                       
	struct FSoftObjectPath                             DropGroundParticle;                                       
	class UParticleSystem*                             DropGroundParticleSystem;                                 
	unsigned char                                      bUseAnimCurve : 1;                                        
	unsigned char                                      UnknownData06[0x7];                                       
	struct FSoftObjectPath                             AnimCurvePath;                                            
	class UCurveFloat*                                 AnimCurve;                                                
};



struct FCreativeDropGroupContainer
{
	float                                              GroupTime;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FItemCurveAnim>                      List;                                                     
	int                                                ConfigID;                                                 
	struct FVector                                     CenterPos;                                                
	int                                                DesireItemNum;                                            
	int                                                PendingKill;                                              
};



struct FCreativePoolObjectRecordInfo
{
	int                                                PoolId;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
	class UObject*                                     PoolObject;                                               
};



struct FEditorObjectLiteComponentTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FCreativePoolGetObjectParamInfo
{
	int                                                PoolId;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
	class UObject*                                     NewOuter;                                                 
	struct FString                                     InName;                                                   
};



struct FGameModeLiteComponentTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FCreativeGameParameter : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     ParameterKey;                                             
	struct FString                                     TemplateID;                                               
	struct FCreativeInstanceDataContent                DataContent;                                              
	uint32_t                                           ParameterHeadHash;                                        
	uint32_t                                           ParameterHeadSize;                                        
	uint32_t                                           DataContentSize;                                          
	bool                                               IsDiffContent;                                            
	unsigned char                                      UnknownData01[0x3];                                       
};



struct FCreativeGameParameterContainer : public FFastArraySerializer
{
	TArray<struct FCreativeGameParameter>              Nodes;                                                    
	class UCreativeGameParameterManager*               GameParameterManager;                                     
};



struct FCreativeGameParameterResume : public FFastArraySerializerItem
{
	uint32_t                                           ParameterHeadHash;                                        
	unsigned char                                      Seq;                                                      
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     ParameterKey;                                             
	struct FString                                     TemplateID;                                               
	struct FCreativeInstanceDataContent                DataContent;                                              
};



struct FCreativeGameParameterResumeContainer : public FFastArraySerializer
{
	TArray<struct FCreativeGameParameterResume>        Nodes;                                                    
	unsigned char                                      UnknownData00[0x50];                                      
	class UCreativeGameParameterManager*               GameParameterManager;                                     
};



struct FExtendedBlockySlotString
{
	struct FBlockySlotString                           BlockySlot;                                               
	int                                                SceneID;                                                  
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FGameStateLiteComponentTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FCreativeModeGridLevelConfig
{
	struct FVector2D                                   CellWidthHeight;                                          
	float                                              LoadingRange;                                             
};



struct FCreativeModeGridLevelInfo
{
	unsigned char                                      UnknownData00[0x50];                                      
};



struct FCreativeInstanceDataNode
{
	uint32_t                                           InstanceID;                                               
	unsigned char                                      UnknownData00[0x4];                                       
	struct FCreativeInstanceDataContent                DataContent;                                              
};



struct FCreativePullDataNode
{
	uint32_t                                           InstanceID;                                               
	unsigned char                                      Seq;                                                      
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FCreativeBatchPullDataNode
{
	float                                              ReqTimeStamp;                                             
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FCreativePullDataNode>               PullDataNodes;                                            
};



struct FCreativeReplicatNode : public FFastArraySerializerItem
{
	uint32_t                                           ID;                                                       
	unsigned char                                      Seq;                                                      
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FCreativeNodeContainerCacheInfo
{
	TArray<struct FCreativeReplicatNode>               Nodes;                                                    
};



struct FCreativeNodeContainer : public FFastArraySerializer
{
	TArray<struct FCreativeReplicatNode>               Nodes;                                                    
	class UCreativeInstanceManager*                    InstanceManager;                                          
	bool                                               bIsRPCReplicatedContainer;                                
	unsigned char                                      UnknownData00[0x3];                                       
	uint32_t                                           CurRPCReplicatedInstanceContainerSeq;                     
	TMap<uint32_t, struct FCreativeNodeContainerCacheInfo> HistoryContainerMap;                                      
};



struct FCreativeInstanceNode
{
	int                                                AssetId;                                                  
	bool                                               bIsPrefab;                                                
	unsigned char                                      UnknownData00[0xB];                                       
	struct FTransform                                  Transform;                                                
	int                                                MaterialID;                                               
	int                                                ObjectStateMatID;                                         
	ECreativeModeActorStreamingType                    StreamingType;                                            
	unsigned char                                      UnknownData01[0x7];                                       
	struct FString                                     RuntimeGrid;                                              
	int                                                ObbyBaseAssetId;                                          
	ECreativeDestructibleState                         DestructibleMeshState;                                    
	ECreativeModeLoadType                              LoadType;                                                 
	bool                                               bIsCustomUI;                                              
	unsigned char                                      CustomMatColorR;                                          
	unsigned char                                      CustomMatColorG;                                          
	unsigned char                                      CustomMatColorB;                                          
	bool                                               MatColorMarkDirty;                                        
	unsigned char                                      UnknownData02[0x1];                                       
	struct FColor                                      MatColor;                                                 
	int                                                SplicingCustomMatID;                                      
	bool                                               bDisableCollision;                                        
	unsigned char                                      UnknownData03[0xB];                                       
};



struct FCreativeInstanceRespondPullDataSegment
{
	unsigned char                                      TotalSegNum;                                              
	unsigned char                                      CurSegNum;                                                
	unsigned char                                      UnknownData00[0x6];                                       
	TArray<struct FCreativeInstanceDataContent>        InstanceDataContents;                                     
	int                                                CurDataSize;                                              
	int                                                MaxDataSize;                                              
};



struct FPlayerIntegralInfo
{
	int                                                nCurIntegral;                                             
	int                                                nCurFunctionalIntegral;                                   
	int                                                nCurStageIntegral;                                        
	int                                                nIntegralAddSeq;                                          
	struct FString                                     UID;                                                      
	int                                                TeamID;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FCreativeTriggerSource
{
	bool                                               bPlayer;                                                  
	bool                                               bRobot;                                                   
	bool                                               bMonster;                                                 
	bool                                               bVehicle;                                                 
	bool                                               bBankProduct;                                             
};



struct FCreativeTriggerActorType
{
	TWeakObjectPtr<class AActor>                       OverlapActor;                                             
	ECreativeTriggerSourceType                         Type;                                                     
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FCreativeBatchInstancedStaticMesh_MaterialId
{
	TMap<int, class UInstancedStaticMeshComponent*>    ISMMap;                                                   
	TMap<struct FString, int>                          CurLoadedInstances;                                       
	TArray<int>                                        RecoveryBufferIndex;                                      
	bool                                               bIsUseHISM;                                               
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FCreativeBatchInstancedStaticMesh_AssetID
{
	TMap<int, struct FCreativeBatchInstancedStaticMesh_MaterialId> AllISMMap;                                                
};



struct FCreativeBatchInstancedStaticMesh
{
	TMap<int, struct FCreativeBatchInstancedStaticMesh_AssetID> MaterialISMMap;                                           
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FCreativeFineBatchLoadedInstanceInfo
{
	TMap<int, int>                                     UseBufferIndexMap;                                        
};



struct FCreativeFineBatchDataInfo
{
	TMap<struct FString, struct FCreativeFineBatchLoadedInstanceInfo> CurLoadedInstanceInfoMap;                                 
};



struct FCreativeFineBatchInstancedStaticMesh_StaticMesh
{
	class UInstancedStaticMeshComponent*               ISMComponent;                                             
	TMap<int, struct FCreativeFineBatchDataInfo>       BatchDataInfoMap;                                         
	TArray<int>                                        RecoveryBufferIndex;                                      
	bool                                               bIsUseHISM;                                               
	bool                                               bIsUseColorISM;                                           
	unsigned char                                      UnknownData00[0x6];                                       
	TArray<struct FString>                             AllLoadedInstanceID;                                      
};



struct FCreativeFineBatchInstancedStaticMesh_MaterialId
{
	TMap<uint32_t, struct FCreativeFineBatchInstancedStaticMesh_StaticMesh> BatchISMInfoMap;                                          
};



struct FCreativeFineBatchInstancedStaticMesh
{
	TMap<int, struct FCreativeFineBatchInstancedStaticMesh_MaterialId> BatchISMInfoMap;                                          
};



struct FCreativeModeStreamingParameters
{
	ECreativeModeActorStreamingType                    StreamingType;                                            
	bool                                               bSpawnState;                                              
};



struct FOctreeNode
{
	struct FVector                                     Center;                                                   
	float                                              Size;                                                     
	unsigned char                                      UnknownData00[0x20];                                      
};



struct FOctreeData
{
	int                                                UID;                                                      
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     PlayerKey;                                                
	struct FVector                                     Forward;                                                  
	struct FLinearColor                                Color;                                                    
	struct FVector                                     Location;                                                 
	TWeakObjectPtr<class AActor>                       HitActor;                                                 
	bool                                               bIsValid;                                                 
	unsigned char                                      UnknownData01[0x7];                                       
};



struct FCreativePerfData
{
	int                                                AssetId;                                                  
	uint32_t                                           CallCount;                                                
	uint32_t                                           MaxTime;                                                  
	unsigned char                                      UnknownData00[0x4];                                       
	uint64_t                                           TotalTime;                                                
	uint64_t                                           FrameDuration;                                            
	uint64_t                                           LastFrameCounter;                                         
	struct FString                                     ObjName;                                                  
};



struct FCreaitvePerfDataMap
{
	TMap<struct FName, struct FCreativePerfData>       PerfData;                                                 
};



struct FCreativeNetData
{
	uint32_t                                           OutBytes;                                                 
	uint32_t                                           InBytes;                                                  
};



struct FCreativeMemoryData
{
	float                                              AvailablePhysical;                                        
	float                                              UsedPhysical;                                             
	float                                              TotalPhysical;                                            
};



struct FPhotonDestructionParam
{
	struct FString                                     UGCInstanceID;                                            
	bool                                               IsActive;                                                 
	bool                                               EnableDestructible;                                       
	bool                                               CanBeDamagedByMelee;                                      
	bool                                               CanBeDamagedByRocketLauncher;                             
	bool                                               CanBeDamagedByThrowable;                                  
	bool                                               CanBeDamagedByVehicle;                                    
	bool                                               OnlyHalfBroken;                                           
	unsigned char                                      UnknownData00[0x1];                                       
	float                                              Health;                                                   
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FPhysicsComponentData
{
	unsigned char                                      UnknownData00[0x60];                                      
};



struct FCreativeInstanceGridCellInfo
{
	struct FString                                     GridName;                                                 
	struct FIntVector                                  CellIndex;                                                
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FCreativeObjectPoolClassConfig
{
	struct FString                                     ObjectClassPath;                                          
	uint16_t                                           PoolMaxSize;                                              
	uint16_t                                           PoolMinSize;                                              
	uint16_t                                           PoolInitNum;                                              
	unsigned char                                      UnknownData00[0x2];                                       
	uint32_t                                           LifePeriodTime;                                           
	bool                                               bCreativeHandleIsExist;                                   
	bool                                               bDestroyHandleIsExist;                                    
	bool                                               bPickObjectHandleIsExist;                                 
	bool                                               bObjectReturnHandleIsExist;                               
};



struct FCreativeObjectPool
{
	bool                                               bPoolEnable;                                              
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                PoolId;                                                   
	class UCreativePoolManager*                        PoolManager;                                              
	TArray<class UObject*>                             Pool;                                                     
	struct FCreativeObjectPoolClassConfig              PoolConfig;                                               
	class UClass*                                      ObjectClass;                                              
	uint32_t                                           RecycledSeq;                                              
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FRuntimePlayerBattleDataInfo : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       
	uint64_t                                           UID;                                                      
	int                                                TeamID;                                                   
	unsigned char                                      Campid;                                                   
	unsigned char                                      UnknownData01[0x3];                                       
	uint32_t                                           PlayerKey;                                                
	int                                                WinningRoundNum;                                          
	int                                                AIKillCount;                                              
	int                                                KillCount;                                                
	int                                                MonsterKillCount;                                         
	int                                                AssistCount;                                              
	int                                                RescueCount;                                              
	int                                                KnockDownCount;                                           
	float                                              PlayerHealth;                                             
	float                                              CauseAITotalDamage;                                       
	float                                              TakeAITotalDamage;                                        
	ExtraPlayerLiveState                               PlayerLiveState;                                          
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              SurvivalTime;                                             
	int                                                DeadCount;                                                
	float                                              CauseTotalDamage;                                         
	float                                              CauseMonsterTotalDamage;                                  
	float                                              CauseRoleTotalDamage;                                     
	float                                              TakeTotalDamage;                                          
	float                                              TakeRoleTotalDamage;                                      
	float                                              TakeMonsterTotalDamage;                                   
};



struct FRuntimeTeamGameOutcomeConditionInfo : public FFastArraySerializerItem
{
	int                                                TeamID;                                                   
	int                                                IntegralVictoryTarget;                                    
	int                                                KillPlayerNumVictoryTarget;                               
	bool                                               UseCampOutcome;                                           
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FRuntimeCacheRoundBattleDataInfo : public FFastArraySerializerItem
{
	int                                                RoundIndex;                                               
	TArray<struct FRuntimePlayerBattleDataInfo>        PlayerBattleDataList;                                     
};



struct FRuntimeCacheRoundBattleDataInfoContainer : public FFastArraySerializer
{
	TArray<struct FRuntimeCacheRoundBattleDataInfo>    OldRoundCacheTeamRuntimeDataList;                         
	class ACreativeRuntimePlayerBattleDataObject*      BattleDataObject;                                         
};



struct FRuntimeBattleDataInfoContainer : public FFastArraySerializer
{
	TArray<struct FRuntimePlayerBattleDataInfo>        CurRuntimePlayerBattleDataList;                           
	class ACreativeRuntimePlayerBattleDataObject*      BattleDataObject;                                         
};



struct FRuntimeTeamGameOutcomeConditionContainer : public FFastArraySerializer
{
	TArray<struct FRuntimeTeamGameOutcomeConditionInfo> TeamGameOutcomeConditions;                                
	class ACreativeRuntimePlayerBattleDataObject*      BattleDataObject;                                         
};



struct FCreativeDetectSpaceOptions
{
	float                                              WallNormalZThreshold;                                     
	int                                                BinarySearchIterations;                                   
	bool                                               bDrawDebug;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              DebugDuration;                                            
	struct FColor                                      BoxColor;                                                 
	struct FColor                                      GroundColor;                                              
	struct FColor                                      WallColor;                                                
	struct FColor                                      TraceColor;                                               
};



struct FCreativeSpaceResult
{
	struct FVector                                     Center;                                                   
	struct FVector                                     BoxExtent;                                                
	float                                              GroundZ;                                                  
	bool                                               bHasGround;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              CeilingZ;                                                 
	bool                                               bHasCeiling;                                              
	unsigned char                                      UnknownData01[0x3];                                       
	TArray<struct FVector>                             WallPoints;                                               
	TArray<struct FVector>                             WallNormals;                                              
};



struct FCreativeReplicatedData : public FFastArraySerializerItem
{
	uint32_t                                           InstanceID;                                               
	TArray<class UObject*>                             ReplicatedObjects;                                        
};



struct FCreativeReplicatedDataContainer : public FFastArraySerializer
{
	TArray<struct FCreativeReplicatedData>             DataList;                                                 
	class UCreativeSceneQueryManager*                  SceneQueryManager;                                        
};



struct FCreativeReplicatedObjectsInfo
{
	TArray<class UObject*>                             ReplicatedObjects;                                        
};



struct FCreativeTaskProgressItem
{
	bool                                               bConditionMet;                                            
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                CurrentProgress;                                          
	int                                                MaxProgress;                                              
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     Reserved;                                                 
	unsigned char                                      UnknownData02[0x8];                                       
};



struct FCreativeTaskViewItem : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     TaskID;                                                   
	int                                                StageIdx;                                                 
	ETaskStatus                                        status;                                                   
	unsigned char                                      UnknownData01[0x3];                                       
	TArray<int>                                        FinishedStageIdices;                                      
	TArray<struct FCreativeTaskProgressItem>           ProgressStep;                                             
	struct FString                                     Reserved;                                                 
};



struct FCreativeTaskArray : public FFastArraySerializer
{
	TArray<struct FCreativeTaskViewItem>               Items;                                                    
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FCreativeTaskProgressParams
{
	int                                                MaxProgress;                                              
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     Reserved;                                                 
};



struct FCreativeUMGInfoDataNode
{
	uint32_t                                           DataHashKey;                                              
	unsigned char                                      UnknownData00[0x4];                                       
	struct FCreativeInstanceDataContent                DataContent;                                              
};



struct FCreativeUMGInfoReplicatNode : public FFastArraySerializerItem
{
	uint32_t                                           DataHashKey;                                              
	uint32_t                                           ID;                                                       
	unsigned char                                      Seq;                                                      
	unsigned char                                      UnknownData00[0x3];                                       
	struct FCreativeUMGInfoDataNode                    DataNode;                                                 
};



struct FCreativeUMGInfoNodeContainer : public FFastArraySerializer
{
	TArray<struct FCreativeUMGInfoReplicatNode>        Nodes;                                                    
	class UCreativeUMGInfoManager*                     UMGInfoManager;                                           
};



struct FCustomAssetRuntimeAnimBoneTranslations
{
	TArray<struct FVector>                             Translations;                                             
};



struct FCustomAssetRuntimeAnimBoneRotations
{
	TArray<struct FRotator>                            Rotations;                                                
};



struct FImageSummary
{
	int                                                Width;                                                    
	int                                                Height;                                                   
	int                                                ImageFormat;                                              
};



struct FTrackedCustomAsset
{
	struct FString                                     LoadStack;                                                
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FCustomAssetMountStatusInfo : public FFastArraySerializerItem
{
	uint32_t                                           ID;                                                       
	unsigned char                                      Seq;                                                      
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                LocalSeq;                                                 
	struct FString                                     AssetKey;                                                 
	EMountStatus                                       MountStatus;                                              
	unsigned char                                      UnknownData01[0x7];                                       
	TArray<uint32_t>                                   MountingPlayerKeys;                                       
	uint32_t                                           MountedByPlayerKey;                                       
	unsigned char                                      UnknownData02[0x4];                                       
	TArray<unsigned char>                              DefaultMappingInfoContent;                                
};



struct FCustomAssetMountStatusInfoContainer : public FFastArraySerializer
{
	TArray<struct FCustomAssetMountStatusInfo>         MountStatusInfos;                                         
	class UCustomAssetMountStateComponent*             MountStateComponent;                                      
};



struct FPlatformCustomAssetInfo
{
	struct FString                                     AssetSuffixType;                                          
	TArray<unsigned char>                              PlatformContent;                                          
};



struct FDTPacket
{
	uint16_t                                           TaskID;                                                   
	uint16_t                                           TotalPacketCount;                                         
	uint16_t                                           Seq;                                                      
	unsigned char                                      UnknownData00[0x2];                                       
	uint32_t                                           TaskHash;                                                 
	unsigned char                                      Payload[0x1E0];                                           
	uint16_t                                           PayloadLength;                                            
	unsigned char                                      Alignment[0x14];                                          
	unsigned char                                      UnknownData01[0x2];                                       
};



struct FDSLParserNode
{
	struct FString                                     Kind;                                                     
	struct FString                                     Name;                                                     
	struct FString                                     Value;                                                    
	TArray<int>                                        Children;                                                 
	TMap<struct FString, int>                          Properties;                                               
};



struct FPaintTriangleInfo
{
	struct FVector                                     V0;                                                       
	struct FVector                                     v1;                                                       
	struct FVector                                     v2;                                                       
	float                                              Area;                                                     
	unsigned char                                      CurrentOwner;                                             
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FPaintVoxelCoord
{
	int                                                X;                                                        
	int                                                Y;                                                        
	int                                                Z;                                                        
};



struct FPaintVoxelCell
{
	unsigned char                                      Owner;                                                    
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              ExactArea;                                                
};



struct FDeferredPaintOp
{
	unsigned char                                      UnknownData00[0x20];                                      
};



struct FPaintOctreeNode
{
	struct FVector                                     Center;                                                   
	struct FVector                                     HalfSize;                                                 
	TArray<int>                                        TriangleIndices;                                          
	unsigned char                                      UnknownData00[0x10];                                      
	int                                                Depth;                                                    
	bool                                               bIsLeaf;                                                  
	unsigned char                                      UnknownData01[0x3];                                       
};



struct FUGCLuaNetPropertyHead : public FFastArraySerializerItem
{
	unsigned char                                      Seq;                                                      
	unsigned char                                      UnknownData00[0x3];                                       
	uint32_t                                           OwnerNetGUID;                                             
	unsigned char                                      PropType;                                                 
	unsigned char                                      UnknownData01[0x3];                                       
	struct FString                                     PropName;                                                 
	TArray<unsigned char>                              Value;                                                    
};



struct FUGCLuaNetPropertyHeadContainer : public FFastArraySerializer
{
	TArray<struct FUGCLuaNetPropertyHead>              Items;                                                    
	class UUGCDynamicNetManager*                       NetManager;                                               
	unsigned char                                      UnknownData00[0x100];                                     
};



struct FInterpCurveKeyData
{
	int                                                CurveIndex;                                               
	int                                                KeyIndex;                                                 
	float                                              InVal;                                                    
	float                                              OutVal;                                                   
	float                                              ArriveTangent;                                            
	float                                              LeaveTangent;                                             
	unsigned char                                      InterpMode;                                               
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FCreativeDestructibleMeshInstanceInfo
{
	int                                                AssetId;                                                  
	int                                                MaterialID;                                               
	struct FString                                     InstanceID;                                               
	struct FIntVector                                  CellIndex;                                                
	bool                                               bManualLoad;                                              
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FCreativeDestructibleMeshBatchInfo
{
	TMap<int, class UPhotonInstancedDestructibleMeshComponent*> ISMMap;                                                   
	TMap<struct FString, int>                          CurInstances;                                             
	bool                                               bIsUseHISM;                                               
	bool                                               bIsDirty;                                                 
	unsigned char                                      UnknownData00[0x6];                                       
};



struct FCreativeEditorObjectEffectMesheInfo
{
	class UStaticMeshComponent*                        EffectMeshComponent;                                      
	class UStaticMeshComponent*                        OriginalMeshComponent;                                    
};



struct FCreativePlayerOperableInfo
{
	unsigned char                                      Seq;                                                      
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              EndOperationLimitTimestamp;                               
};



struct FCreativeUpdateBatchActorParameter
{
	struct FString                                     GridName;                                                 
	int                                                AssetId;                                                  
	int                                                MaterialID;                                               
	bool                                               ReplaceAll;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              ReqTimeStamp;                                             
};



struct FCreativeGridLevelsActivationInfo
{
	TMap<struct FIntVector, bool>                      LevelsActivationMap;                                      
};



struct FCreativeStaticMeshObjectBatchInfo_Material
{
	TArray<struct FString>                             InstanceIDs;                                              
};



struct FCreativeStaticMeshObjectBatchInfo_Asset
{
	TMap<int, struct FCreativeStaticMeshObjectBatchInfo_Material> MaterialDataMap;                                          
};



struct FCreativeStaticMeshObjectBatchInfo_Cell
{
	TMap<int, struct FCreativeStaticMeshObjectBatchInfo_Asset> AssetDataMap;                                             
};



struct FCreativeStaticMeshObjectBatchInfo_Grid
{
	TMap<struct FIntVector, struct FCreativeStaticMeshObjectBatchInfo_Cell> CellDataMap;                                              
};



struct FCreativeStaticMeshObjectBatchInfo
{
	TMap<struct FString, struct FCreativeStaticMeshObjectBatchInfo_Grid> GridDataMap;                                              
};



struct FCreativeObjectBatchSignInfo
{
	struct FIntVector                                  CellIndex;                                                
	int                                                CurMaterialId;                                            
	struct FTransform                                  Transform;                                                
	bool                                               bIsPrefab;                                                
	unsigned char                                      UnknownData00[0xF];                                       
};



struct FCreativeInstanceIDArray
{
	TArray<uint32_t>                                   InstanceIDs;                                              
};



struct FCreativeStringArray
{
	TArray<struct FString>                             Strings;                                                  
};



struct FCreativeLuaAnimGraphInstanceProxy : public FAnimInstanceProxy
{

};



struct FCreativeBatchStaticMeshInfo
{
	int                                                AssetId;                                                  
	int                                                MaterialID;                                               
};



struct FCreativeGameTaskGuidePoint
{
	int                                                Type;                                                     
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     InstanceID;                                               
	struct FVector                                     Coordinate;                                               
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     PresetID;                                                 
	int                                                StageIndex;                                               
	unsigned char                                      UnknownData02[0x4];                                       
};



struct FCreativeSpawnObjectInfo
{
	struct FString                                     InstanceID;                                               
	int                                                AssetId;                                                  
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     AssetPath;                                                
	unsigned char                                      UnknownData01[0x8];                                       
	struct FTransform                                  SpawnTransform;                                           
	bool                                               bIsLogicObj;                                              
	bool                                               bIsGroupObj;                                              
	bool                                               bCanBatch;                                                
	unsigned char                                      UnknownData02[0xD];                                       
};



struct FCreativeEventBindingChangeInfo
{
	uint32_t                                           InstanceID;                                               
	unsigned char                                      ChangeType;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	struct FString                                     EventName;                                                
	uint32_t                                           BranchKey;                                                
	uint32_t                                           BindingInstanceID;                                        
	uint16_t                                           FuncIndex;                                                
	unsigned char                                      UnknownData01[0x6];                                       
};



struct FCreativeModeGridCellChangeInfo
{
	struct FIntVector                                  CellIndex;                                                
	bool                                               LoadState;                                                
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FUGCTimerContext
{
	struct FTimerHandle                                TimerHandle;                                              
	int                                                UGCGameTimerIdx;                                          
	bool                                               bIsLoop;                                                  
	unsigned char                                      UnknownData00[0x3];                                       
	struct FString                                     BlockyId;                                                 
};



struct FCreativeGroupInstData
{
	uint32_t                                           PropID;                                                   
	int                                                BoughtCount;                                              
	unsigned char                                      State;                                                    
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FCreativePropInstData
{
	uint32_t                                           PropID;                                                   
	int                                                Count;                                                    
	int                                                BoughtCount;                                              
	uint32_t                                           ExpiredTimeStamp;                                         
	unsigned char                                      State;                                                    
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FBattleVoiceUserItem
{
	uint64_t                                           UID;                                                      
	int                                                VoiceMemberID;                                            
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FStorageItemInfo
{
	int                                                ItemId;                                                   
	int                                                ItemNum;                                                  
};



struct FCreativeTranslationEntry
{
	struct FString                                     Key;                                                      
	struct FString                                     Value;                                                    
};



struct FCreativeAudioActorInfo
{
	int                                                audioID;                                                  
	int                                                RangeType;                                                
	int                                                AudienceType;                                             
	int                                                CanShow;                                                  
};



struct FCreativeTimerActorInfo
{
	float                                              StartTime;                                                
	float                                              PassedTime;                                               
	float                                              Duration;                                                 
	int                                                TimerState;                                               
};



struct FDancerDeviceSyncPlayerAvatarDataInfo
{
	int                                                ItemId;                                                   
	struct FAvatarCustom                               customData;                                               
};



struct FDancerDeviceSyncPlayerInfo
{
	uint32_t                                           PlayerKey;                                                
	uint32_t                                           PlayerUID;                                                
	unsigned char                                      PlayerSex;                                                
	unsigned char                                      UnknownData00[0x3];                                       
	struct FDancerDeviceSyncPlayerAvatarDataInfo       HeadAvatarData;                                           
	TArray<struct FDancerDeviceSyncPlayerAvatarDataInfo> AvatarDataList;                                           
	int                                                PlayingActionID;                                          
	unsigned char                                      UnknownData01[0x4];                                       
	double                                             StartPlayActionServerTime;                                
};



struct FDancerDeviceActorConfigInfo
{
	int8_t                                             DancerType;                                               
	unsigned char                                      MaterialType;                                             
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              ScaleValue;                                               
	unsigned char                                      ActionPlayMode;                                           
	unsigned char                                      PlayInterval;                                             
	bool                                               ShowBaseMesh;                                             
	bool                                               ShowBaseLight;                                            
	bool                                               SyncPlayerBaseAction;                                     
	unsigned char                                      UnknownData01[0x3];                                       
	struct FLinearColor                                LightColor;                                               
	TArray<uint64_t>                                   ActionIDList;                                             
};



struct FPoolIndex
{
	int                                                PoolId;                                                   
	int16_t                                            LocalIndex;                                               
	unsigned char                                      UnknownData00[0x2];                                       
};



struct FTransferTask
{
	int16_t                                            TaskID;                                                   
	int16_t                                            TotalPacketCount;                                         
	int16_t                                            CompletedCount;                                           
	ETransferStatus                                    status;                                                   
	unsigned char                                      UnknownData00[0x1];                                       
	uint32_t                                           TaskHash;                                                 
	unsigned char                                      UnknownData01[0x4];                                       
	double                                             TransferTime;                                             
	TArray<bool>                                       Confirmed;                                                
	unsigned char                                      UnknownData02[0x20];                                      
};

}

