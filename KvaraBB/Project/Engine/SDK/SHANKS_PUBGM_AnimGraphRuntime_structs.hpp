#pragma once


 
namespace SDK
{





enum class ESphericalLimitType : uint8_t
{
	ESphericalLimitType__Inner     = 0,
	ESphericalLimitType__Outer     = 1,
	ESphericalLimitType__ESphericalLimitType_MAX = 2
};



enum class EAnimPhysSimSpaceType : uint8_t
{
	AnimPhysSimSpaceType__Component = 0,
	AnimPhysSimSpaceType__Actor    = 1,
	AnimPhysSimSpaceType__World    = 2,
	AnimPhysSimSpaceType__RootRelative = 3,
	AnimPhysSimSpaceType__BoneRelative = 4,
	AnimPhysSimSpaceType__AnimPhysSimSpaceType_MAX = 5
};



enum class EAnimPhysLinearConstraintType : uint8_t
{
	AnimPhysLinearConstraintType__Free = 0,
	AnimPhysLinearConstraintType__Limited = 1,
	AnimPhysLinearConstraintType__AnimPhysLinearConstraintType_MAX = 2
};



enum class EAnimPhysAngularConstraintType : uint8_t
{
	AnimPhysAngularConstraintType__Angular = 0,
	AnimPhysAngularConstraintType__Cone = 1,
	AnimPhysAngularConstraintType__AnimPhysAngularConstraintType_MAX = 2
};



enum class EDrivenDestinationMode : uint8_t
{
	EDrivenDestinationMode__Bone   = 0,
	EDrivenDestinationMode__MorphTarget = 1,
	EDrivenDestinationMode__MaterialParameter = 2,
	EDrivenDestinationMode__EDrivenDestinationMode_MAX = 3
};



enum class EDrivenBoneModificationMode : uint8_t
{
	EDrivenBoneModificationMode__AddToInput = 0,
	EDrivenBoneModificationMode__ReplaceComponent = 1,
	EDrivenBoneModificationMode__AddToRefPose = 2,
	EDrivenBoneModificationMode__EDrivenBoneModificationMode_MAX = 3
};



enum class EComponentType : uint8_t
{
	EComponentType__None           = 0,
	EComponentType__TranslationX   = 1,
	EComponentType__TranslationY   = 2,
	EComponentType__TranslationZ   = 3,
	EComponentType__RotationX      = 4,
	EComponentType__RotationY      = 5,
	EComponentType__RotationZ      = 6,
	EComponentType__Scale          = 7,
	EComponentType__ScaleX         = 8,
	EComponentType__ScaleY         = 9,
	EComponentType__ScaleZ         = 10,
	EComponentType__EComponentType_MAX = 11
};



enum class EConstraintOffsetOption : uint8_t
{
	EConstraintOffsetOption__None  = 0,
	EConstraintOffsetOption__Offset_RefPose = 1,
	EConstraintOffsetOption__EConstraintOffsetOption_MAX = 2
};



enum class ECopyBoneDeltaMode : uint8_t
{
	CopyBoneDeltaMode__Accumulate  = 0,
	CopyBoneDeltaMode__Copy        = 1,
	CopyBoneDeltaMode__CopyBoneDeltaMode_MAX = 2
};



enum class EInterpolationBlend : uint8_t
{
	EInterpolationBlend__Linear    = 0,
	EInterpolationBlend__Cubic     = 1,
	EInterpolationBlend__Sinusoidal = 2,
	EInterpolationBlend__EaseInOutExponent2 = 3,
	EInterpolationBlend__EaseInOutExponent3 = 4,
	EInterpolationBlend__EaseInOutExponent4 = 5,
	EInterpolationBlend__EaseInOutExponent5 = 6,
	EInterpolationBlend__MAX       = 7
};



enum class EBoneModificationMode : uint8_t
{
	BMM_Ignore                     = 0,
	BMM_Replace                    = 1,
	BMM_Additive                   = 2,
	BMM_MAX                        = 3
};



enum class EModifyCurveApplyMode : uint8_t
{
	EModifyCurveApplyMode__Add     = 0,
	EModifyCurveApplyMode__Scale   = 1,
	EModifyCurveApplyMode__Blend   = 2,
	EModifyCurveApplyMode__EModifyCurveApplyMode_MAX = 3
};



enum class EPoseDriverOutput : uint8_t
{
	EPoseDriverOutput__DrivePoses  = 0,
	EPoseDriverOutput__DriveCurves = 1,
	EPoseDriverOutput__EPoseDriverOutput_MAX = 2
};



enum class EPoseDriverSource : uint8_t
{
	EPoseDriverSource__Rotation    = 0,
	EPoseDriverSource__Translation = 1,
	EPoseDriverSource__EPoseDriverSource_MAX = 2
};



enum class EPoseDriverType : uint8_t
{
	EPoseDriverType__SwingAndTwist = 0,
	EPoseDriverType__SwingOnly     = 1,
	EPoseDriverType__Translation   = 2,
	EPoseDriverType__EPoseDriverType_MAX = 3
};



enum class ESnapshotSourceMode : uint8_t
{
	ESnapshotSourceMode__NamedSnapshot = 0,
	ESnapshotSourceMode__SnapshotPin = 1,
	ESnapshotSourceMode__ESnapshotSourceMode_MAX = 2
};



enum class ERefPoseType : uint8_t
{
	EIT_LocalSpace                 = 0,
	EIT_Additive                   = 1,
	EIT_MAX                        = 2
};



enum class EScaleChainInitialLength : uint8_t
{
	EScaleChainInitialLength__FixedDefaultLengthValue = 0,
	EScaleChainInitialLength__Distance = 1,
	EScaleChainInitialLength__ChainLength = 2,
	EScaleChainInitialLength__EScaleChainInitialLength_MAX = 3
};



enum class ESequenceEvalTimeType : uint8_t
{
	ESequenceEvalTimeType__ExplicitTime = 0,
	ESequenceEvalTimeType__RelativeTime = 1,
	ESequenceEvalTimeType__RemainderTime = 2,
	ESequenceEvalTimeType__ESequenceEvalTimeType_MAX = 3
};



enum class ESequenceEvalReinit : uint8_t
{
	ESequenceEvalReinit__NoReset   = 0,
	ESequenceEvalReinit__StartPosition = 1,
	ESequenceEvalReinit__ExplicitTime = 2,
	ESequenceEvalReinit__ESequenceEvalReinit_MAX = 3
};



enum class ESplineBoneAxis : uint8_t
{
	ESplineBoneAxis__X             = 0,
	ESplineBoneAxis__Y             = 1,
	ESplineBoneAxis__Z             = 2,
	ESplineBoneAxis__ESplineBoneAxis_MAX = 3
};



enum class ERBFDistanceMethod : uint8_t
{
	ERBFDistanceMethod__Euclidean  = 0,
	ERBFDistanceMethod__Quaternion = 1,
	ERBFDistanceMethod__SwingAngle = 2,
	ERBFDistanceMethod__ERBFDistanceMethod_MAX = 3
};



enum class ERBFFunctionType : uint8_t
{
	ERBFFunctionType__Gaussian     = 0,
	ERBFFunctionType__Exponential  = 1,
	ERBFFunctionType__Linear       = 2,
	ERBFFunctionType__Cubic        = 3,
	ERBFFunctionType__Quintic      = 4,
	ERBFFunctionType__ERBFFunctionType_MAX = 5
};









struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     ComponentPose;                                            
	float                                              Alpha;                                                    
	struct FInputScaleBias                             AlphaScaleBias;                                           
	int                                                LODThreshold;                                             
	float                                              ActualAlpha;                                              
	unsigned char                                      UnknownData00[0x14];                                      
};



struct FAnimPhysSphericalLimit
{
	struct FBoneReference                              DrivingBone;                                              
	struct FVector                                     SphereLocalOffset;                                        
	float                                              LimitRadius;                                              
	ESphericalLimitType                                LimitType;                                                
	bool                                               IsEnabled;                                                
	unsigned char                                      UnknownData00[0x6];                                       
};



struct FAnimPhysPlanarLimit
{
	struct FBoneReference                              DrivingBone;                                              
	unsigned char                                      UnknownData00[0x8];                                       
	struct FTransform                                  PlaneTransform;                                           
	bool                                               IsEnabled;                                                
	unsigned char                                      UnknownData01[0xF];                                       
};



struct FSocketReference
{
	struct FName                                       SocketName;                                               
	unsigned char                                      UnknownData00[0x38];                                      
};



struct FBoneSocketTarget
{
	bool                                               bUseSocket;                                               
	unsigned char                                      UnknownData00[0x7];                                       
	struct FBoneReference                              BoneReference;                                            
	struct FSocketReference                            SocketReference;                                          
};



struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              IKBone;                                                   
	unsigned char                                      bAllowStretching : 1;                                     
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              StartStretchRatio;                                        
	float                                              MaxStretchScale;                                          
	struct FVector2D                                   StretchLimits;                                            
	unsigned char                                      bTakeRotationFromEffectorSpace : 1;                       
	unsigned char                                      bMaintainEffectorRelRot : 1;                              
	TEnumAsByte<EBoneControlSpace>                     EffectorLocationSpace;                                    
	unsigned char                                      UnknownData01[0x2];                                       
	struct FName                                       EffectorSpaceBoneName;                                    
	struct FVector                                     EffectorLocation;                                         
	unsigned char                                      UnknownData02[0x4];                                       
	struct FBoneSocketTarget                           EffectorTarget;                                           
	TEnumAsByte<EBoneControlSpace>                     JointTargetLocationSpace;                                 
	unsigned char                                      UnknownData03[0x3];                                       
	struct FVector                                     JointTargetLocation;                                      
	struct FName                                       JointTargetSpaceBoneName;                                 
	unsigned char                                      UnknownData04[0x8];                                       
	struct FBoneSocketTarget                           JointTarget;                                              
	bool                                               bAllowTwist;                                              
	unsigned char                                      UnknownData05[0x3];                                       
	struct FAxis                                       TwistAxis;                                                
	bool                                               bNoTwist;                                                 
	unsigned char                                      UnknownData06[0xB];                                       
};



struct FAnimNode_BlendListBase : public FAnimNode_Base
{
	TArray<struct FPoseLink>                           BlendPose;                                                
	TArray<float>                                      BlendTime;                                                
	EAlphaBlendOption                                  BlendType;                                                
	unsigned char                                      UnknownData00[0x7];                                       
	class UCurveFloat*                                 CustomBlendCurve;                                         
	class UBlendProfile*                               BlendProfile;                                             
	TArray<struct FAlphaBlend>                         Blends;                                                   
	TArray<float>                                      BlendWeights;                                             
	TArray<float>                                      RemainingBlendTimes;                                      
	int                                                LastActiveChildIndex;                                     
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<struct FBlendSampleData>                    PerBoneSampleData;                                        
	unsigned char                                      UnknownData02[0x10];                                      
	bool                                               bResetChildOnActivation;                                  
	unsigned char                                      UnknownData03[0x7];                                       
};



struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x8];                                       
	struct FTransform                                  EffectorTransform;                                        
	TEnumAsByte<EBoneControlSpace>                     EffectorTransformSpace;                                   
	unsigned char                                      UnknownData01[0x7];                                       
	struct FBoneReference                              EffectorTransformBone;                                    
	bool                                               bUseIKFreeze;                                             
	unsigned char                                      UnknownData02[0x3];                                       
	struct FVector                                     PositionFreeze;                                           
	struct FVector                                     RotationFreeze;                                           
	struct FVector                                     ScaleFeeze;                                               
	unsigned char                                      UnknownData03[0x8];                                       
	struct FBoneSocketTarget                           EffectorTarget;                                           
	TEnumAsByte<EBoneRotationSource>                   EffectorRotationSource;                                   
	unsigned char                                      UnknownData04[0x7];                                       
	struct FBoneReference                              TipBone;                                                  
	struct FBoneReference                              RootBone;                                                 
	float                                              Precision;                                                
	int                                                MaxIterations;                                            
	bool                                               bEnableDebugDraw;                                         
	unsigned char                                      UnknownData05[0xF];                                       
};



struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
	float                                              PlayRate;                                                 
	bool                                               bLoop;                                                    
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              StartPosition;                                            
	class UBlendSpaceBase*                             BlendSpace;                                               
	bool                                               bResetPlayTimeWhenBlendSpaceChanges;                      
	unsigned char                                      UnknownData01[0x7];                                       
	struct FBlendFilter                                BlendFilter;                                              
	TArray<struct FBlendSampleData>                    BlendSampleDataCache;                                     
	class UBlendSpaceBase*                             PreviousBlendSpace;                                       
};



struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
{
	struct FPoseLink                                   BasePose;                                                 
	int                                                LODThreshold;                                             
	bool                                               bIsLODEnabled;                                            
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     LookAtLocation;                                           
	unsigned char                                      UnknownData01[0x4];                                       
	struct FName                                       SourceSocketName;                                         
	struct FName                                       PivotSocketName;                                          
	struct FVector                                     SocketAxis;                                               
	float                                              Alpha;                                                    
	struct FBoneReference                              SocketBoneReference;                                      
	struct FTransform                                  SocketLocalTransform;                                     
	struct FBoneReference                              PivotSocketBoneReference;                                 
	unsigned char                                      UnknownData02[0x8];                                       
	struct FTransform                                  PivotSocketLocalTransform;                                
};



struct FAnimPhysConstraintSetup
{
	EAnimPhysLinearConstraintType                      LinearXLimitType;                                         
	EAnimPhysLinearConstraintType                      LinearYLimitType;                                         
	EAnimPhysLinearConstraintType                      LinearZLimitType;                                         
	unsigned char                                      UnknownData00[0x1];                                       
	struct FVector                                     LinearAxesMin;                                            
	struct FVector                                     LinearAxesMax;                                            
	EAnimPhysAngularConstraintType                     AngularConstraintType;                                    
	EAnimPhysTwistAxis                                 TwistAxis;                                                
	unsigned char                                      UnknownData01[0x2];                                       
	float                                              ConeAngle;                                                
	float                                              AngularXAngle;                                            
	float                                              AngularYAngle;                                            
	float                                              AngularZAngle;                                            
	struct FVector                                     AngularLimitsMin;                                         
	struct FVector                                     AngularLimitsMax;                                         
	EAnimPhysTwistAxis                                 AngularTargetAxis;                                        
	unsigned char                                      UnknownData02[0x3];                                       
	struct FVector                                     AngularTarget;                                            
	bool                                               bLinearFullyLocked;                                       
	unsigned char                                      UnknownData03[0x3];                                       
};



struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{
	EAnimPhysSimSpaceType                              SimulationSpace;                                          
	unsigned char                                      UnknownData00[0x7];                                       
	struct FBoneReference                              RelativeSpaceBone;                                        
	bool                                               bChain;                                                   
	unsigned char                                      UnknownData01[0x7];                                       
	struct FBoneReference                              BoundBone;                                                
	struct FBoneReference                              ChainEnd;                                                 
	struct FVector                                     BoxExtents;                                               
	struct FVector                                     LocalJointOffset;                                         
	struct FVector                                     OldLocalJointOffset;                                      
	float                                              GravityScale;                                             
	bool                                               bLinearSpring;                                            
	bool                                               bAngularSpring;                                           
	unsigned char                                      UnknownData02[0x2];                                       
	float                                              LinearSpringConstant;                                     
	float                                              AngularSpringConstant;                                    
	bool                                               bEnableWind;                                              
	bool                                               bWindWasEnabled;                                          
	unsigned char                                      UnknownData03[0x2];                                       
	float                                              WindScale;                                                
	bool                                               bOverrideLinearDamping;                                   
	unsigned char                                      UnknownData04[0x3];                                       
	float                                              LinearDampingOverride;                                    
	bool                                               bOverrideAngularDamping;                                  
	unsigned char                                      UnknownData05[0x3];                                       
	float                                              AngularDampingOverride;                                   
	bool                                               bOverrideAngularBias;                                     
	unsigned char                                      UnknownData06[0x3];                                       
	float                                              AngularBiasOverride;                                      
	bool                                               bDoUpdate;                                                
	bool                                               bDoEval;                                                  
	unsigned char                                      UnknownData07[0x2];                                       
	int                                                NumSolverIterationsPreUpdate;                             
	int                                                NumSolverIterationsPostUpdate;                            
	struct FAnimPhysConstraintSetup                    ConstraintSetup;                                          
	bool                                               bUseDynamicAngularLimits;                                 
	unsigned char                                      UnknownData08[0x3];                                       
	struct FVector                                     Dynamic_AngularLimitsMin;                                 
	struct FVector                                     Dynamic_AngularLimitsMax;                                 
	bool                                               bUsePlanarLimit;                                          
	unsigned char                                      UnknownData09[0x7];                                       
	TArray<struct FAnimPhysPlanarLimit>                PlanarLimits;                                             
	bool                                               bUseSphericalLimits;                                      
	unsigned char                                      UnknownData10[0x7];                                       
	TArray<struct FAnimPhysSphericalLimit>             SphericalLimits;                                          
	EAnimPhysCollisionType                             CollisionType;                                            
	unsigned char                                      UnknownData11[0x3];                                       
	float                                              SphereCollisionRadius;                                    
	int                                                NonEvaluateFrameNum;                                      
	unsigned char                                      UnknownData12[0x4];                                       
	struct FVector                                     ExternalForce;                                            
	unsigned char                                      UnknownData13[0xCC];                                      
};



struct FAnimNode_ApplyAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     
	struct FPoseLink                                   Additive;                                                 
	float                                              Alpha;                                                    
	struct FInputScaleBias                             AlphaScaleBias;                                           
	int                                                LODThreshold;                                             
	float                                              ActualAlpha;                                              
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FBlendBoneByChannelEntry
{
	struct FBoneReference                              SourceBone;                                               
	struct FBoneReference                              TargetBone;                                               
	bool                                               bBlendTranslation;                                        
	bool                                               bBlendRotation;                                           
	bool                                               bBlendScale;                                              
	unsigned char                                      UnknownData00[0x5];                                       
};



struct FAnimNode_BlendBoneByChannel : public FAnimNode_Base
{
	struct FPoseLink                                   A;                                                        
	struct FPoseLink                                   B;                                                        
	float                                              Alpha;                                                    
	struct FInputScaleBias                             AlphaScaleBias;                                           
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FBlendBoneByChannelEntry>            BoneDefinitions;                                          
	TEnumAsByte<EBoneControlSpace>                     TransformsSpace;                                          
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              InternalBlendAlpha;                                       
	bool                                               bBIsRelevant;                                             
	unsigned char                                      UnknownData02[0x7];                                       
	TArray<struct FBlendBoneByChannelEntry>            ValidBoneEntries;                                         
};



struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{
	bool                                               bActiveValue;                                             
	unsigned char                                      UnknownData00[0x6];                                       
};



struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{
	TArray<int>                                        EnumToPoseIndex;                                          
	unsigned char                                      ActiveEnumValue;                                          
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FPoseBlendEnumData
{
	bool                                               bUseOptionBlendTime;                                      
	unsigned char                                      UnknownData00[0x7];                                       
	struct FName                                       BlendPoseName;                                            
	TArray<float>                                      OtherPosesBlendTime;                                      
};



struct FAnimNode_BlendListByEnumAdvance : public FAnimNode_BlendListBase
{
	TArray<int>                                        EnumToPoseIndex;                                          
	unsigned char                                      ActiveEnumValue;                                          
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<struct FPoseBlendEnumData>                  PosesBlendTimeSetup;                                      
};



struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{
	int                                                ActiveChildIndex;                                         
};



struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{
	float                                              NormalizedTime;                                           
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               
	TEnumAsByte<EComponentType>                        SourceComponent;                                          
	unsigned char                                      UnknownData00[0x7];                                       
	class UCurveFloat*                                 DrivingCurve;                                             
	float                                              Multiplier;                                               
	bool                                               bUseRange;                                                
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              RangeMin;                                                 
	float                                              RangeMax;                                                 
	float                                              RemappedMin;                                              
	float                                              RemappedMax;                                              
	EDrivenDestinationMode                             DestinationMode;                                          
	unsigned char                                      UnknownData02[0x7];                                       
	struct FName                                       ParameterName;                                            
	struct FBoneReference                              TargetBone;                                               
	TEnumAsByte<EComponentType>                        TargetComponent;                                          
	unsigned char                                      bAffectTargetTranslationX : 1;                            
	unsigned char                                      bAffectTargetTranslationY : 1;                            
	unsigned char                                      bAffectTargetTranslationZ : 1;                            
	unsigned char                                      bAffectTargetRotationX : 1;                               
	unsigned char                                      bAffectTargetRotationY : 1;                               
	unsigned char                                      bAffectTargetRotationZ : 1;                               
	unsigned char                                      bAffectTargetScaleX : 1;                                  
	unsigned char                                      bAffectTargetScaleY : 1;                                  
	unsigned char                                      bAffectTargetScaleZ : 1;                                  
	EDrivenBoneModificationMode                        ModificationMode;                                         
	unsigned char                                      UnknownData03[0x4];                                       
};



struct FAnimNode_BoneRetarget : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                 
	unsigned char                                      UnknownData00[0x50];                                      
	bool                                               bUseAsMasterNode;                                         
	bool                                               bUseRetargetFeature;                                      
	unsigned char                                      UnknownData01[0x6];                                       
};



struct FConstraint
{
	struct FBoneReference                              TargetBone;                                               
	EConstraintOffsetOption                            OffsetOption;                                             
	ETransformConstraintType                           TransformType;                                            
	struct FFilterOptionPerAxis                        PerAxis;                                                  
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FAnimNode_Constraint : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             
	TArray<struct FConstraint>                         ConstraintSetup;                                          
	TArray<float>                                      ConstraintWeights;                                        
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               
	struct FBoneReference                              TargetBone;                                               
	bool                                               bCopyTranslation;                                         
	bool                                               bCopyRotation;                                            
	bool                                               bCopyScale;                                               
	TEnumAsByte<EBoneControlSpace>                     ControlSpace;                                             
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               
	struct FBoneReference                              TargetBone;                                               
	bool                                               bCopyTranslation;                                         
	bool                                               bCopyRotation;                                            
	bool                                               bCopyScale;                                               
	ECopyBoneDeltaMode                                 CopyMode;                                                 
	float                                              TranslationMultiplier;                                    
	float                                              RotationMultiplier;                                       
	float                                              ScaleMultiplier;                                          
};



struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{
	TWeakObjectPtr<class USkeletalMeshComponent>       SourceMeshComponent;                                      
	bool                                               bUseAttachedParent;                                       
	unsigned char                                      UnknownData00[0x83];                                      
};



struct FAnimNode_CurveSource : public FAnimNode_Base
{
	struct FPoseLink                                   SourcePose;                                               
	struct FName                                       SourceBinding;                                            
	float                                              Alpha;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	TScriptInterface<class UCurveSourceInterface>      CurveSource;                                              
};



struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              RightHandFK;                                              
	struct FBoneReference                              LeftHandFK;                                               
	struct FBoneReference                              RightHandIK;                                              
	struct FBoneReference                              LeftHandIK;                                               
	TArray<struct FBoneReference>                      IKBonesToMove;                                            
	float                                              HandFKWeight;                                             
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                 
	TArray<struct FPoseLink>                           BlendPoses;                                               
	TArray<struct FInputBlendPose>                     LayerSetup;                                               
	TArray<float>                                      BlendWeights;                                             
	bool                                               bMeshSpaceRotationBlend;                                  
	TEnumAsByte<ECurveBlendOption>                     CurveBlendOption;                                         
	bool                                               bBlendRootMotionBasedOnRootBone;                          
	bool                                               bHasRelevantPoses;                                        
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FPerBoneBlendWeight>                 PerBoneBlendWeights;                                      
	struct FGuid                                       SkeletonGuid;                                             
	struct FGuid                                       VirtualBoneGuid;                                          
	unsigned char                                      UnknownData01[0x30];                                      
};



struct FAnimLegIKDefinition
{
	struct FBoneReference                              IKFootBone;                                               
	struct FBoneReference                              FKFootBone;                                               
	int                                                NumBonesInLimb;                                           
	TEnumAsByte<EAxis>                                 FootBoneForwardAxis;                                      
	bool                                               bEnableRotationLimit;                                     
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              MinRotationAngle;                                         
	bool                                               bEnableKneeTwistCorrection;                               
	unsigned char                                      UnknownData01[0x3];                                       
};



struct FAnimLegIKData
{
	unsigned char                                      UnknownData00[0x70];                                      
};



struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
{
	float                                              ReachPrecision;                                           
	int                                                MaxIterations;                                            
	TArray<struct FAnimLegIKDefinition>                LegsDefinition;                                           
	TArray<struct FAnimLegIKData>                      LegsData;                                                 
};



struct FIKChain
{
	unsigned char                                      UnknownData00[0x30];                                      
};



struct FIKChainLink
{
	unsigned char                                      UnknownData00[0x1C];                                      
};



struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             
	struct FBoneReference                              LookAtBone;                                               
	struct FName                                       LookAtSocket;                                             
	struct FBoneSocketTarget                           LookAtTarget;                                             
	struct FVector                                     LookAtLocation;                                           
	TEnumAsByte<EAxisOption>                           LookAtAxis;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     CustomLookAtAxis;                                         
	struct FAxis                                       LookAt_Axis;                                              
	bool                                               bUseLookUpAxis;                                           
	TEnumAsByte<EAxisOption>                           LookUpAxis;                                               
	unsigned char                                      UnknownData01[0x2];                                       
	struct FVector                                     CustomLookUpAxis;                                         
	struct FAxis                                       LookUp_Axis;                                              
	float                                              LookAtClamp;                                              
	TEnumAsByte<EInterpolationBlend>                   InterpolationType;                                        
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              InterpolationTime;                                        
	float                                              InterpolationTriggerThreashold;                           
	unsigned char                                      UnknownData03[0x34];                                      
};



struct FAnimNode_MakeDynamicAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     
	struct FPoseLink                                   Additive;                                                 
	bool                                               bMeshSpaceAdditive;                                       
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             
	struct FVector                                     Translation;                                              
	struct FRotator                                    Rotation;                                                 
	struct FVector                                     Scale;                                                    
	TEnumAsByte<EBoneModificationMode>                 TranslationMode;                                          
	TEnumAsByte<EBoneModificationMode>                 RotationMode;                                             
	TEnumAsByte<EBoneModificationMode>                 ScaleMode;                                                
	TEnumAsByte<EBoneControlSpace>                     TranslationSpace;                                         
	TEnumAsByte<EBoneControlSpace>                     RotationSpace;                                            
	TEnumAsByte<EBoneControlSpace>                     ScaleSpace;                                               
	unsigned char                                      UnknownData00[0x6];                                       
};



struct FBonesTransfroms
{
	TArray<struct FName>                               Names;                                                    
	TArray<struct FTransform>                          Transforms;                                               
};



struct FAnimNode_ModifyBoneTransforms : public FAnimNode_SkeletalControlBase
{
	struct FBonesTransfroms                            BoneTransforms;                                           
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FAnimNode_ModifyCurve : public FAnimNode_Base
{
	struct FPoseLink                                   SourcePose;                                               
	EModifyCurveApplyMode                              ApplyMode;                                                
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<float>                                      CurveValues;                                              
	TArray<struct FName>                               CurveNames;                                               
	float                                              Alpha;                                                    
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FAnimNode_MultiWayBlend : public FAnimNode_Base
{
	TArray<struct FPoseLink>                           Poses;                                                    
	TArray<float>                                      DesiredAlphas;                                            
	bool                                               bAdditiveNode;                                            
	bool                                               bNormalizeAlpha;                                          
	unsigned char                                      UnknownData00[0x2];                                       
	struct FInputScaleBias                             AlphaScaleBias;                                           
	unsigned char                                      UnknownData01[0x14];                                      
};



struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToObserve;                                            
	TEnumAsByte<EBoneControlSpace>                     DisplaySpace;                                             
	bool                                               bRelativeToRefPose;                                       
	unsigned char                                      UnknownData00[0x2];                                       
	struct FVector                                     Translation;                                              
	struct FRotator                                    Rotation;                                                 
	struct FVector                                     Scale;                                                    
};



struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{
	class UPoseAsset*                                  PoseAsset;                                                
	unsigned char                                      UnknownData00[0x40];                                      
};



struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{
	struct FPoseLink                                   SourcePose;                                               
	EAlphaBlendOption                                  BlendOption;                                              
	unsigned char                                      UnknownData00[0x7];                                       
	class UCurveFloat*                                 CustomCurve;                                              
};



struct FAnimNode_PoseByName : public FAnimNode_PoseHandler
{
	struct FName                                       PoseName;                                                 
	float                                              PoseWeight;                                               
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FRBFParams
{
	int                                                TargetDimensions;                                         
	float                                              Radius;                                                   
	ERBFFunctionType                                   Function;                                                 
	ERBFDistanceMethod                                 DistanceMethod;                                           
	TEnumAsByte<EBoneAxis>                             TwistAxis;                                                
	unsigned char                                      UnknownData00[0x1];                                       
	float                                              WeightThreshold;                                          
};



struct FPoseDriverTransform
{
	struct FVector                                     TargetTranslation;                                        
	struct FRotator                                    TargetRotation;                                           
};



struct FPoseDriverTarget
{
	TArray<struct FPoseDriverTransform>                BoneTransforms;                                           
	struct FRotator                                    TargetRotation;                                           
	float                                              TargetScale;                                              
	bool                                               bApplyCustomCurve;                                        
	unsigned char                                      UnknownData00[0x7];                                       
	struct FRichCurve                                  CustomCurve;                                              
	struct FName                                       DrivenName;                                               
	unsigned char                                      UnknownData01[0x8];                                       
};



struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler
{
	struct FPoseLink                                   SourcePose;                                               
	TArray<struct FBoneReference>                      SourceBones;                                              
	bool                                               bOnlyDriveSelectedBones;                                  
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<struct FBoneReference>                      OnlyDriveBones;                                           
	struct FBoneReference                              EvalSpaceBone;                                            
	struct FRBFParams                                  RBFParams;                                                
	EPoseDriverSource                                  DriveSource;                                              
	EPoseDriverOutput                                  DriveOutput;                                              
	unsigned char                                      UnknownData01[0x6];                                       
	TArray<struct FPoseDriverTarget>                   PoseTargets;                                              
	struct FBoneReference                              SourceBone;                                               
	TEnumAsByte<EBoneAxis>                             TwistAxis;                                                
	EPoseDriverType                                    Type;                                                     
	unsigned char                                      UnknownData02[0x2];                                       
	float                                              RadialScaling;                                            
	unsigned char                                      UnknownData03[0x38];                                      
};



struct FAnimNode_PoseSnapshot : public FAnimNode_Base
{
	ESnapshotSourceMode                                Mode;                                                     
	unsigned char                                      UnknownData00[0x5];                                       
	struct FName                                       SnapshotName;                                             
	struct FPoseSnapshot                               Snapshot;                                                 
	unsigned char                                      UnknownData01[0x38];                                      
};



struct FAnimNode_QuadrupedTerrainAdapting : public FAnimNode_SkeletalControlBase
{
	bool                                               bEnable;                                                  
	bool                                               bDrawDebug;                                               
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              RayTrace_SphereRadius;                                    
	struct FBoneSocketTarget                           RayTrace_LHandBottom;                                     
	struct FBoneSocketTarget                           RayTrace_RHandBottom;                                     
	struct FBoneSocketTarget                           RayTrace_LFootBottom;                                     
	struct FBoneSocketTarget                           RayTrace_RFootBottom;                                     
	bool                                               bEnableSlopeAdapting;                                     
	bool                                               bEnableLionDanceSlopeAdapting;                            
	unsigned char                                      UnknownData01[0x6];                                       
	struct FBoneReference                              SlopeAdapting_Pelvis;                                     
	struct FBoneReference                              SlopeAdapting_Pelvis1;                                    
	struct FBoneReference                              SlopeAdapting_Pelvis2;                                    
	struct FBoneReference                              SlopeAdapting_LClavicle;                                  
	struct FBoneReference                              SlopeAdapting_RClavicle;                                  
	struct FBoneReference                              SlopeAdapting_LThigh;                                     
	struct FBoneReference                              SlopeAdapting_RThigh;                                     
	struct FBoneReference                              SlopeAdapting_Root;                                       
	float                                              SlopeAdapting_PelvisLimitHeight;                          
	float                                              SlopeAdapting_LimitSlopeAngle;                            
	float                                              SlopeAdapting_PositionLerpSpeed;                          
	float                                              SlopeAdapting_RotationLerpSpeed;                          
	float                                              SlopeAdapting_BehindLegModifyFactor;                      
	bool                                               bEnableLegAdapting;                                       
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              LegAdapting_IKLerpSpeed;                                  
	float                                              LegAdapting_IKMaxHeight;                                  
	unsigned char                                      UnknownData03[0x8];                                       
	struct FAnimNode_TwoBoneIK                         LegAdapting_LHand;                                        
	struct FAnimNode_TwoBoneIK                         LegAdapting_RHand;                                        
	struct FAnimNode_TwoBoneIK                         LegAdapting_LFoot;                                        
	struct FAnimNode_TwoBoneIK                         LegAdapting_RFoot;                                        
	bool                                               bEnableLionDanceLegAdapting;                              
	bool                                               bEnableFootAdapting;                                      
	unsigned char                                      UnknownData04[0x6];                                       
	struct FBoneReference                              FootAdapting_LHand;                                       
	struct FBoneReference                              FootAdapting_RHand;                                       
	struct FBoneReference                              FootAdapting_LFoot;                                       
	struct FBoneReference                              FootAdapting_RFoot;                                       
	struct FRotator                                    FootAdapting_LimitRotation;                               
	float                                              FootAdapting_RotationLerpSpeed;                           
	unsigned char                                      UnknownData05[0x138];                                     
};



struct FRandomPlayerSequenceEntry
{
	class UAnimSequence*                               Sequence;                                                 
	float                                              ChanceToPlay;                                             
	int                                                MinLoopCount;                                             
	int                                                MaxLoopCount;                                             
	float                                              MinPlayRate;                                              
	float                                              MaxPlayRate;                                              
	unsigned char                                      UnknownData00[0x4];                                       
	struct FAlphaBlend                                 BlendIn;                                                  
};



struct FAnimNode_RandomPlayer : public FAnimNode_Base
{
	bool                                               bShuffleMode;                                             
	unsigned char                                      UnknownData00[0x5];                                       
	TArray<struct FRandomPlayerSequenceEntry>          Entries;                                                  
	unsigned char                                      UnknownData01[0x48];                                      
};



struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{

};



struct FAnimNode_RefPose : public FAnimNode_Base
{
	TEnumAsByte<ERefPoseType>                          RefPoseType;                                              
	unsigned char                                      UnknownData00[0x5];                                       
};



struct FAnimNode_Root : public FAnimNode_Base
{
	struct FPoseLink                                   Result;                                                   
};



struct FAnimNode_RotateRootBone : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                 
	float                                              Pitch;                                                    
	float                                              Yaw;                                                      
	struct FRotator                                    MeshToComponent;                                          
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FAnimNode_RotationLimit : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             
	struct FRotator                                    RotationLimitMin;                                         
	struct FRotator                                    RotationLimitMax;                                         
};



struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              TargetBone;                                               
	struct FBoneReference                              SourceBone;                                               
	float                                              Multiplier;                                               
	TEnumAsByte<EBoneAxis>                             RotationAxisToRefer;                                      
	bool                                               bIsAdditive;                                              
	unsigned char                                      UnknownData00[0x2];                                       
};



struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{
	struct FPoseLink                                   BasePose;                                                 
	int                                                LODThreshold;                                             
	bool                                               bIsLODEnabled;                                            
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              Alpha;                                                    
	struct FInputScaleBias                             AlphaScaleBias;                                           
	float                                              ActualAlpha;                                              
};



struct FAnimNode_ScaleChainLength : public FAnimNode_Base
{
	struct FPoseLink                                   InputPose;                                                
	float                                              DefaultChainLength;                                       
	unsigned char                                      UnknownData00[0x4];                                       
	struct FBoneReference                              ChainStartBone;                                           
	struct FBoneReference                              ChainEndBone;                                             
	EScaleChainInitialLength                           ChainInitialLength;                                       
	unsigned char                                      UnknownData01[0x3];                                       
	struct FVector                                     TargetLocation;                                           
	float                                              Alpha;                                                    
	float                                              ActualAlpha;                                              
	struct FInputScaleBias                             AlphaScaleBias;                                           
	bool                                               bBoneIndicesCached;                                       
	unsigned char                                      UnknownData02[0x17];                                      
};



struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
{
	class UAnimSequenceBase*                           Sequence;                                                 
	float                                              ExplicitTime;                                             
	TEnumAsByte<ESequenceEvalTimeType>                 ExplicitTimeType;                                         
	bool                                               bShouldLoop;                                              
	bool                                               bTeleportToExplicitTime;                                  
	unsigned char                                      UnknownData00[0x1];                                       
	float                                              StartPosition;                                            
	TEnumAsByte<ESequenceEvalReinit>                   ReinitializationBehavior;                                 
	bool                                               bReinitialized;                                           
	unsigned char                                      UnknownData01[0x2];                                       
};



struct FAnimNode_Slot : public FAnimNode_Base
{
	struct FPoseLink                                   Source;                                                   
	struct FName                                       SlotName;                                                 
	bool                                               bAlwaysUpdateSourcePose;                                  
	unsigned char                                      UnknownData00[0x17];                                      
};



struct FSplineIKCachedBoneData
{
	struct FBoneReference                              Bone;                                                     
	int                                                RefSkeletonIndex;                                         
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              StartBone;                                                
	struct FBoneReference                              EndBone;                                                  
	ESplineBoneAxis                                    BoneAxis;                                                 
	bool                                               bAutoCalculateSpline;                                     
	unsigned char                                      UnknownData00[0x2];                                       
	int                                                PointCount;                                               
	TArray<struct FTransform>                          ControlPoints;                                            
	float                                              Roll;                                                     
	float                                              TwistStart;                                               
	float                                              TwistEnd;                                                 
	unsigned char                                      UnknownData01[0x4];                                       
	struct FAlphaBlend                                 TwistBlend;                                               
	float                                              Stretch;                                                  
	float                                              Offset;                                                   
	unsigned char                                      UnknownData02[0x70];                                      
	struct FSplineCurves                               BoneSpline;                                               
	float                                              OriginalSplineLength;                                     
	unsigned char                                      UnknownData03[0x4];                                       
	TArray<struct FSplineIKCachedBoneData>             CachedBoneReferences;                                     
	TArray<float>                                      CachedBoneLengths;                                        
	TArray<struct FQuat>                               CachedOffsetRotations;                                    
};



struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SpringBone;                                               
	bool                                               bLimitDisplacement;                                       
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              MaxDisplacement;                                          
	float                                              SpringStiffness;                                          
	float                                              SpringDamping;                                            
	float                                              ErrorResetThresh;                                         
	bool                                               bNoZSpring;                                               
	bool                                               bTranslateX;                                              
	bool                                               bTranslateY;                                              
	bool                                               bTranslateZ;                                              
	bool                                               bRotateX;                                                 
	bool                                               bRotateY;                                                 
	bool                                               bRotateZ;                                                 
	unsigned char                                      UnknownData01[0x35];                                      
};



struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              TrailBone;                                                
	int                                                ChainLength;                                              
	TEnumAsByte<EAxis>                                 ChainBoneAxis;                                            
	bool                                               bInvertChainBoneAxis;                                     
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              TrailRelaxation;                                          
	unsigned char                                      UnknownData01[0x4];                                       
	struct FRuntimeFloatCurve                          TrailRelaxationSpeed;                                     
	bool                                               bLimitStretch;                                            
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              StretchLimit;                                             
	struct FVector                                     FakeVelocity;                                             
	bool                                               bActorSpaceFakeVel;                                       
	unsigned char                                      UnknownData03[0x3];                                       
	struct FBoneReference                              BaseJoint;                                                
	unsigned char                                      UnknownData04[0x68];                                      
};



struct FReferenceBoneFrame
{
	struct FBoneReference                              Bone;                                                     
	struct FAxis                                       Axis;                                                     
};



struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{
	struct FReferenceBoneFrame                         BaseFrame;                                                
	struct FReferenceBoneFrame                         TwistFrame;                                               
	struct FAxis                                       TwistPlaneNormalAxis;                                     
	float                                              RangeMax;                                                 
	float                                              RemappedMin;                                              
	float                                              RemappedMax;                                              
	unsigned char                                      UnknownData00[0x4];                                       
	struct FAnimCurveParam                             Curve;                                                    
	unsigned char                                      UnknownData01[0x8];                                       
};



struct FAnimNode_TwoWayBlend : public FAnimNode_Base
{
	struct FPoseLink                                   A;                                                        
	struct FPoseLink                                   B;                                                        
	float                                              Alpha;                                                    
	struct FInputScaleBias                             AlphaScaleBias;                                           
	float                                              InternalBlendAlpha;                                       
	bool                                               bAIsRelevant;                                             
	bool                                               bBIsRelevant;                                             
	bool                                               bResetChildOnActivation;                                  
	unsigned char                                      UnknownData00[0x5];                                       
};



struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x1C0];                                     
};



struct FRBFEntry
{
	TArray<float>                                      Values;                                                   
};



struct FRBFTarget : public FRBFEntry
{
	float                                              ScaleFactor;                                              
	bool                                               bApplyCustomCurve;                                        
	unsigned char                                      UnknownData00[0x3];                                       
	struct FRichCurve                                  CustomCurve;                                              
};

}

