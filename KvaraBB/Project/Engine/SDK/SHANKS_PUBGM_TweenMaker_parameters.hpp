#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UBaseTween_TogglePauseTween_Params
{
	bool                                               SkipTween;                                                
};


struct UBaseTween_SetTweenName_Params
{
	struct FName                                       TweenName;                                                
};


struct UBaseTween_SetTimeScale_Params
{
	float                                              NewTimeScale;                                             
};


struct UBaseTween_SetDelay_Params
{
	float                                              NewDelay;                                                 
};


struct UBaseTween_ResumeTween_Params
{
};


struct UBaseTween_PauseTween_Params
{
	bool                                               SkipTween;                                                
};


struct UBaseTween_JoinTweenWidgetOpacityTo_Params
{
	class UWidget*                                     TweenTarget;                                              
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UBaseTween_JoinTweenWidgetAngleTo_Params
{
	class UWidget*                                     TweenTarget;                                              
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UBaseTween_JoinTweenShearWidgetTo_Params
{
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2D*                              ReturnValue;                                              
};


struct UBaseTween_JoinTweenSceneComponentFollowSpline_Params
{
	class USceneComponent*                             TweenTarget;                                              
	class USplineComponent*                            Spline;                                                   
	float                                              Duration;                                                 
	bool                                               ApplyRotation;                                            
	bool                                               ApplyScale;                                               
	bool                                               UseConstantSpeed;                                         
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UBaseTween_JoinTweenScaleWidgetTo_Params
{
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2D*                              ReturnValue;                                              
};


struct UBaseTween_JoinTweenScaleWidgetBy_Params
{
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2D*                              ReturnValue;                                              
};


struct UBaseTween_JoinTweenScaleSceneComponentTo_Params
{
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector*                                ReturnValue;                                              
};


struct UBaseTween_JoinTweenScaleSceneComponentBy_Params
{
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector*                                ReturnValue;                                              
};


struct UBaseTween_JoinTweenScaleActorTo_Params
{
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector*                                ReturnValue;                                              
};


struct UBaseTween_JoinTweenScaleActorBy_Params
{
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector*                                ReturnValue;                                              
};


struct UBaseTween_JoinTweenRotateSceneComponentTo_Params
{
	class USceneComponent*                             TweenTarget;                                              
	struct FRotator                                    To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenRotator*                               ReturnValue;                                              
};


struct UBaseTween_JoinTweenRotateSceneComponentBy_Params
{
	class USceneComponent*                             TweenTarget;                                              
	struct FRotator                                    bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenRotator*                               ReturnValue;                                              
};


struct UBaseTween_JoinTweenRotateSceneComponentAroundPointByOffset_Params
{
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     PivotPoint;                                               
	float                                              OffsetAngle;                                              
	ETweenReferenceAxis                                ReferenceAxis;                                            
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UBaseTween_JoinTweenRotateSceneComponentAroundPoint_Params
{
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     PivotPoint;                                               
	float                                              StartingAngle;                                            
	float                                              EndingAngle;                                              
	float                                              Radius;                                                   
	struct FVector                                     Axis;                                                     
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UBaseTween_JoinTweenRotateActorTo_Params
{
	class AActor*                                      TweenTarget;                                              
	struct FRotator                                    To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenRotator*                               ReturnValue;                                              
};


struct UBaseTween_JoinTweenRotateActorBy_Params
{
	class AActor*                                      TweenTarget;                                              
	struct FRotator                                    bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenRotator*                               ReturnValue;                                              
};


struct UBaseTween_JoinTweenRotateActorAroundPointByOffset_Params
{
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     PivotPoint;                                               
	float                                              OffsetAngle;                                              
	ETweenReferenceAxis                                ReferenceAxis;                                            
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UBaseTween_JoinTweenRotateActorAroundPoint_Params
{
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     PivotPoint;                                               
	float                                              StartingAngle;                                            
	float                                              EndingAngle;                                              
	float                                              Radius;                                                   
	struct FVector                                     Axis;                                                     
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UBaseTween_JoinTweenMoveWidgetTo_Params
{
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2D*                              ReturnValue;                                              
};


struct UBaseTween_JoinTweenMoveWidgetBy_Params
{
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2D*                              ReturnValue;                                              
};


struct UBaseTween_JoinTweenMoveSceneComponentTo_Params
{
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector*                                ReturnValue;                                              
};


struct UBaseTween_JoinTweenMoveSceneComponentBy_Params
{
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector*                                ReturnValue;                                              
};


struct UBaseTween_JoinTweenMoveActorTo_Params
{
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector*                                ReturnValue;                                              
};


struct UBaseTween_JoinTweenMoveActorBy_Params
{
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector*                                ReturnValue;                                              
};


struct UBaseTween_JoinTweenMaterialVectorTo_Params
{
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	struct FName                                       ParameterName;                                            
	struct FLinearColor                                To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenLinearColor*                           ReturnValue;                                              
};


struct UBaseTween_JoinTweenMaterialVectorFromTo_Params
{
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	struct FName                                       ParameterName;                                            
	struct FLinearColor                                From;                                                     
	struct FLinearColor                                To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenLinearColor*                           ReturnValue;                                              
};


struct UBaseTween_JoinTweenMaterialFloatTo_Params
{
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	struct FName                                       ParameterName;                                            
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UBaseTween_JoinTweenMaterialFloatFromTo_Params
{
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	struct FName                                       ParameterName;                                            
	float                                              From;                                                     
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UBaseTween_JoinTweenCustomVector2D_Params
{
	class UObject*                                     TweenTarget;                                              
	struct FVector2D                                   From;                                                     
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2D*                              ReturnValue;                                              
};


struct UBaseTween_JoinTweenCustomVector_Params
{
	class UObject*                                     TweenTarget;                                              
	struct FVector                                     From;                                                     
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector*                                ReturnValue;                                              
};


struct UBaseTween_JoinTweenCustomFloat_Params
{
	class UObject*                                     TweenTarget;                                              
	float                                              From;                                                     
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UBaseTween_JoinTweenActorFollowSpline_Params
{
	class AActor*                                      TweenTarget;                                              
	class USplineComponent*                            Spline;                                                   
	float                                              Duration;                                                 
	bool                                               ApplyRotation;                                            
	bool                                               ApplyScale;                                               
	bool                                               UseConstantSpeed;                                         
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UBaseTween_IsTweenPaused_Params
{
	bool                                               ReturnValue;                                              
};


struct UBaseTween_IsTweening_Params
{
	bool                                               ReturnValue;                                              
};


struct UBaseTween_GetTweenTarget_Params
{
	class UObject*                                     ReturnValue;                                              
};


struct UBaseTween_GetTweenName_Params
{
	struct FName                                       ReturnValue;                                              
};


struct UBaseTween_GetTweenElapsedTime_Params
{
	float                                              ReturnValue;                                              
};


struct UBaseTween_GetTweenDuration_Params
{
	float                                              ReturnValue;                                              
};


struct UBaseTween_GetTweenContainer_Params
{
	class UTweenContainer*                             ReturnValue;                                              
};


struct UBaseTween_GetTimeScale_Params
{
	float                                              ReturnValue;                                              
};


struct UBaseTween_DeleteTween_Params
{
};


struct UBaseTween_AppendTweenWidgetOpacityTo_Params
{
	class UWidget*                                     TweenTarget;                                              
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                mNumLoops;                                                
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UBaseTween_AppendTweenWidgetAngleTo_Params
{
	class UWidget*                                     TweenTarget;                                              
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                mNumLoops;                                                
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UBaseTween_AppendTweenShearWidgetTo_Params
{
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                mNumLoops;                                                
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2D*                              ReturnValue;                                              
};


struct UBaseTween_AppendTweenSceneComponentFollowSpline_Params
{
	class USceneComponent*                             TweenTarget;                                              
	class USplineComponent*                            Spline;                                                   
	float                                              Duration;                                                 
	bool                                               ApplyRotation;                                            
	bool                                               ApplyScale;                                               
	bool                                               UseConstantSpeed;                                         
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     mLoopType;                                                
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UBaseTween_AppendTweenScaleWidgetTo_Params
{
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                mNumLoops;                                                
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2D*                              ReturnValue;                                              
};


struct UBaseTween_AppendTweenScaleWidgetBy_Params
{
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                mNumLoops;                                                
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2D*                              ReturnValue;                                              
};


struct UBaseTween_AppendTweenScaleSceneComponentTo_Params
{
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     mLoopType;                                                
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector*                                ReturnValue;                                              
};


struct UBaseTween_AppendTweenScaleSceneComponentBy_Params
{
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     mLoopType;                                                
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector*                                ReturnValue;                                              
};


struct UBaseTween_AppendTweenScaleActorTo_Params
{
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     mLoopType;                                                
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector*                                ReturnValue;                                              
};


struct UBaseTween_AppendTweenScaleActorBy_Params
{
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     mLoopType;                                                
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector*                                ReturnValue;                                              
};


struct UBaseTween_AppendTweenRotateSceneComponentTo_Params
{
	class USceneComponent*                             TweenTarget;                                              
	struct FRotator                                    To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     mLoopType;                                                
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenRotator*                               ReturnValue;                                              
};


struct UBaseTween_AppendTweenRotateSceneComponentBy_Params
{
	class USceneComponent*                             TweenTarget;                                              
	struct FRotator                                    bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     mLoopType;                                                
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenRotator*                               ReturnValue;                                              
};


struct UBaseTween_AppendTweenRotateSceneComponentAroundPointByOffset_Params
{
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     PivotPoint;                                               
	float                                              OffsetAngle;                                              
	ETweenReferenceAxis                                ReferenceAxis;                                            
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     mLoopType;                                                
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UBaseTween_AppendTweenRotateSceneComponentAroundPoint_Params
{
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     PivotPoint;                                               
	float                                              StartingAngle;                                            
	float                                              EndingAngle;                                              
	float                                              Radius;                                                   
	struct FVector                                     Axis;                                                     
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     mLoopType;                                                
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UBaseTween_AppendTweenRotateActorTo_Params
{
	class AActor*                                      TweenTarget;                                              
	struct FRotator                                    To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     mLoopType;                                                
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenRotator*                               ReturnValue;                                              
};


struct UBaseTween_AppendTweenRotateActorBy_Params
{
	class AActor*                                      TweenTarget;                                              
	struct FRotator                                    bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     mLoopType;                                                
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenRotator*                               ReturnValue;                                              
};


struct UBaseTween_AppendTweenRotateActorAroundPointByOffset_Params
{
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     PivotPoint;                                               
	float                                              OffsetAngle;                                              
	ETweenReferenceAxis                                ReferenceAxis;                                            
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     mLoopType;                                                
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UBaseTween_AppendTweenRotateActorAroundPoint_Params
{
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     PivotPoint;                                               
	float                                              StartingAngle;                                            
	float                                              EndingAngle;                                              
	float                                              Radius;                                                   
	struct FVector                                     Axis;                                                     
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     mLoopType;                                                
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UBaseTween_AppendTweenMoveWidgetTo_Params
{
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                mNumLoops;                                                
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2D*                              ReturnValue;                                              
};


struct UBaseTween_AppendTweenMoveWidgetBy_Params
{
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                mNumLoops;                                                
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2D*                              ReturnValue;                                              
};


struct UBaseTween_AppendTweenMoveSceneComponentTo_Params
{
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     mLoopType;                                                
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector*                                ReturnValue;                                              
};


struct UBaseTween_AppendTweenMoveSceneComponentBy_Params
{
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     mLoopType;                                                
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector*                                ReturnValue;                                              
};


struct UBaseTween_AppendTweenMoveActorTo_Params
{
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     mLoopType;                                                
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector*                                ReturnValue;                                              
};


struct UBaseTween_AppendTweenMoveActorBy_Params
{
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     mLoopType;                                                
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector*                                ReturnValue;                                              
};


struct UBaseTween_AppendTweenMaterialVectorTo_Params
{
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	struct FName                                       ParameterName;                                            
	struct FLinearColor                                To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                mNumLoops;                                                
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenLinearColor*                           ReturnValue;                                              
};


struct UBaseTween_AppendTweenMaterialVectorFromTo_Params
{
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	struct FName                                       ParameterName;                                            
	struct FLinearColor                                From;                                                     
	struct FLinearColor                                To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                mNumLoops;                                                
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenLinearColor*                           ReturnValue;                                              
};


struct UBaseTween_AppendTweenMaterialFloatTo_Params
{
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	struct FName                                       ParameterName;                                            
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                mNumLoops;                                                
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UBaseTween_AppendTweenMaterialFloatFromTo_Params
{
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	struct FName                                       ParameterName;                                            
	float                                              From;                                                     
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                mNumLoops;                                                
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UBaseTween_AppendTweenCustomVector2D_Params
{
	class UObject*                                     TweenTarget;                                              
	struct FVector2D                                   From;                                                     
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                mNumLoops;                                                
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2D*                              ReturnValue;                                              
};


struct UBaseTween_AppendTweenCustomVector_Params
{
	class UObject*                                     TweenTarget;                                              
	struct FVector                                     From;                                                     
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                mNumLoops;                                                
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector*                                ReturnValue;                                              
};


struct UBaseTween_AppendTweenCustomFloat_Params
{
	class UObject*                                     TweenTarget;                                              
	float                                              From;                                                     
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                mNumLoops;                                                
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UBaseTween_AppendTweenActorFollowSpline_Params
{
	class AActor*                                      TweenTarget;                                              
	class USplineComponent*                            Spline;                                                   
	float                                              Duration;                                                 
	bool                                               ApplyRotation;                                            
	bool                                               ApplyScale;                                               
	bool                                               UseConstantSpeed;                                         
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     mLoopType;                                                
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UTweenContainer_TogglePauseTweenContainer_Params
{
};


struct UTweenContainer_SetTimeScale_Params
{
	float                                              NewTimeScale;                                             
};


struct UTweenContainer_SetLoop_Params
{
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
};


struct UTweenContainer_ResumeTweenContainer_Params
{
};


struct UTweenContainer_PauseTweenContainer_Params
{
};


struct UTweenContainer_IsPaused_Params
{
	bool                                               ReturnValue;                                              
};


struct UTweenContainer_IsObjectTweeningInContainer_Params
{
	class UObject*                                     TweenTarget;                                              
	ETweenGenericType                                  TweensType;                                               
	class UBaseTween*                                  TweenFound;                                               
	bool                                               ReturnValue;                                              
};


struct UTweenContainer_DeleteTweensInContainerByObject_Params
{
	class UObject*                                     TweenTarget;                                              
	ETweenGenericType                                  TweensType;                                               
};


struct UTweenContainer_DeleteTweenContainer_Params
{
};


struct UTweenFloat_OnPrimitiveComponentHit_Params
{
	class UPrimitiveComponent*                         pThisComponent;                                           
	class AActor*                                      pOtherActor;                                              
	class UPrimitiveComponent*                         pOtherComp;                                               
	struct FVector                                     pNormalImpulse;                                           
	struct FHitResult                                  pHitResult;                                               
};


struct UTweenFloat_OnPrimitiveComponentBeginOverlap_Params
{
	class UPrimitiveComponent*                         pThisComponent;                                           
	class AActor*                                      pOtherActor;                                              
	class UPrimitiveComponent*                         pOtherComp;                                               
	int                                                pOtherBodyIndex;                                          
	bool                                               bFromSweep;                                               
	struct FHitResult                                  pSweepResult;                                             
};


struct UTweenFloat_OnActorHit_Params
{
	class AActor*                                      pThisActor;                                               
	class AActor*                                      pOtherActor;                                              
	struct FVector                                     pNormalImpulse;                                           
	struct FHitResult                                  pHit;                                                     
};


struct UTweenFloat_OnActorBeginOverlap_Params
{
	class AActor*                                      pThisActor;                                               
	class AActor*                                      pOtherActor;                                              
};


struct UTweenFloat_GetCurrentValue_Params
{
	float                                              ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetOpacityTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 OutTween;                                                 
	class UWidget*                                     TweenTarget;                                              
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_JoinLatentTweenWidgetAngleTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 OutTween;                                                 
	class UWidget*                                     TweenTarget;                                              
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_JoinLatentTweenSceneComponentFollowSpline_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 OutTween;                                                 
	class USceneComponent*                             TweenTarget;                                              
	class USplineComponent*                            Spline;                                                   
	float                                              Duration;                                                 
	bool                                               ApplyRotation;                                            
	bool                                               ApplyScale;                                               
	bool                                               UseConstantSpeed;                                         
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPointByOffset_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 OutTween;                                                 
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     PivotPoint;                                               
	float                                              OffsetAngle;                                              
	ETweenReferenceAxis                                ReferenceAxis;                                            
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_JoinLatentTweenRotateSceneComponentAroundPoint_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 OutTween;                                                 
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     PivotPoint;                                               
	float                                              StartingAngle;                                            
	float                                              EndingAngle;                                              
	float                                              Radius;                                                   
	struct FVector                                     Axis;                                                     
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPointByOffset_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 OutTween;                                                 
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     PivotPoint;                                               
	float                                              OffsetAngle;                                              
	ETweenReferenceAxis                                ReferenceAxis;                                            
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_JoinLatentTweenRotateActorAroundPoint_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 OutTween;                                                 
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     PivotPoint;                                               
	float                                              StartingAngle;                                            
	float                                              EndingAngle;                                              
	float                                              Radius;                                                   
	struct FVector                                     Axis;                                                     
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 OutTween;                                                 
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	struct FName                                       ParameterName;                                            
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_JoinLatentTweenMaterialFloatFromTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 OutTween;                                                 
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	struct FName                                       ParameterName;                                            
	float                                              From;                                                     
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_JoinLatentTweenCustomFloat_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 OutTween;                                                 
	class UObject*                                     TweenTarget;                                              
	float                                              From;                                                     
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_JoinLatentTweenActorFollowSpline_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 OutTween;                                                 
	class AActor*                                      TweenTarget;                                              
	class USplineComponent*                            Spline;                                                   
	float                                              Duration;                                                 
	bool                                               ApplyRotation;                                            
	bool                                               ApplyScale;                                               
	bool                                               UseConstantSpeed;                                         
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetOpacityTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class UWidget*                                     TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenFloat*                                 OutTween;                                                 
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_CreateLatentTweenWidgetAngleTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class UWidget*                                     TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenFloat*                                 OutTween;                                                 
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_CreateLatentTweenSceneComponentFollowSpline_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class USceneComponent*                             TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenFloat*                                 OutTween;                                                 
	class USplineComponent*                            Spline;                                                   
	float                                              Duration;                                                 
	bool                                               ApplyRotation;                                            
	bool                                               ApplyScale;                                               
	bool                                               UseConstantSpeed;                                         
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPointByOffset_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class USceneComponent*                             TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenFloat*                                 OutTween;                                                 
	struct FVector                                     PivotPoint;                                               
	float                                              OffsetAngle;                                              
	ETweenReferenceAxis                                ReferenceAxis;                                            
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_CreateLatentTweenRotateSceneComponentAroundPoint_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class USceneComponent*                             TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenFloat*                                 OutTween;                                                 
	struct FVector                                     PivotPoint;                                               
	float                                              StartingAngle;                                            
	float                                              EndingAngle;                                              
	float                                              Radius;                                                   
	struct FVector                                     Axis;                                                     
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPointByOffset_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class AActor*                                      TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenFloat*                                 OutTween;                                                 
	struct FVector                                     PivotPoint;                                               
	float                                              OffsetAngle;                                              
	ETweenReferenceAxis                                ReferenceAxis;                                            
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_CreateLatentTweenRotateActorAroundPoint_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class AActor*                                      TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenFloat*                                 OutTween;                                                 
	struct FVector                                     PivotPoint;                                               
	float                                              StartingAngle;                                            
	float                                              EndingAngle;                                              
	float                                              Radius;                                                   
	struct FVector                                     Axis;                                                     
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenFloat*                                 OutTween;                                                 
	struct FName                                       ParameterName;                                            
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_CreateLatentTweenMaterialFloatFromTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenFloat*                                 OutTween;                                                 
	struct FName                                       ParameterName;                                            
	float                                              From;                                                     
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_CreateLatentTweenCustomFloat_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class UObject*                                     TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenFloat*                                 OutTween;                                                 
	float                                              From;                                                     
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_CreateLatentTweenActorFollowSpline_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class AActor*                                      TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenFloat*                                 OutTween;                                                 
	class USplineComponent*                            Spline;                                                   
	float                                              Duration;                                                 
	bool                                               ApplyRotation;                                            
	bool                                               ApplyScale;                                               
	bool                                               UseConstantSpeed;                                         
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetOpacityTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 OutTween;                                                 
	class UWidget*                                     TweenTarget;                                              
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_AppendLatentTweenWidgetAngleTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 OutTween;                                                 
	class UWidget*                                     TweenTarget;                                              
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_AppendLatentTweenSceneComponentFollowSpline_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 OutTween;                                                 
	class USceneComponent*                             TweenTarget;                                              
	class USplineComponent*                            Spline;                                                   
	float                                              Duration;                                                 
	bool                                               ApplyRotation;                                            
	bool                                               ApplyScale;                                               
	bool                                               UseConstantSpeed;                                         
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPointByOffset_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 OutTween;                                                 
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     PivotPoint;                                               
	float                                              OffsetAngle;                                              
	ETweenReferenceAxis                                ReferenceAxis;                                            
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_AppendLatentTweenRotateSceneComponentAroundPoint_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 OutTween;                                                 
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     PivotPoint;                                               
	float                                              StartingAngle;                                            
	float                                              EndingAngle;                                              
	float                                              Radius;                                                   
	struct FVector                                     Axis;                                                     
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPointByOffset_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 OutTween;                                                 
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     PivotPoint;                                               
	float                                              OffsetAngle;                                              
	ETweenReferenceAxis                                ReferenceAxis;                                            
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_AppendLatentTweenRotateActorAroundPoint_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 OutTween;                                                 
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     PivotPoint;                                               
	float                                              StartingAngle;                                            
	float                                              EndingAngle;                                              
	float                                              Radius;                                                   
	struct FVector                                     Axis;                                                     
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 OutTween;                                                 
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	struct FName                                       ParameterName;                                            
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_AppendLatentTweenMaterialFloatFromTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 OutTween;                                                 
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	struct FName                                       ParameterName;                                            
	float                                              From;                                                     
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_AppendLatentTweenCustomFloat_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 OutTween;                                                 
	class UObject*                                     TweenTarget;                                              
	float                                              From;                                                     
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatLatentFactory_BP_AppendLatentTweenActorFollowSpline_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 OutTween;                                                 
	class AActor*                                      TweenTarget;                                              
	class USplineComponent*                            Spline;                                                   
	float                                              Duration;                                                 
	bool                                               ApplyRotation;                                            
	bool                                               ApplyScale;                                               
	bool                                               UseConstantSpeed;                                         
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenFloatLatentFactory*                    ReturnValue;                                              
};


struct UTweenFloatStandardFactory_BP_JoinTweenWidgetOpacityTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UWidget*                                     TweenTarget;                                              
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UTweenFloatStandardFactory_BP_JoinTweenWidgetAngleTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UWidget*                                     TweenTarget;                                              
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UTweenFloatStandardFactory_BP_JoinTweenSceneComponentFollowSpline_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class USceneComponent*                             TweenTarget;                                              
	class USplineComponent*                            Spline;                                                   
	float                                              Duration;                                                 
	bool                                               ApplyRotation;                                            
	bool                                               ApplyScale;                                               
	bool                                               UseConstantSpeed;                                         
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPointByOffset_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     PivotPoint;                                               
	float                                              OffsetAngle;                                              
	ETweenReferenceAxis                                ReferenceAxis;                                            
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UTweenFloatStandardFactory_BP_JoinTweenRotateSceneComponentAroundPoint_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     PivotPoint;                                               
	float                                              StartingAngle;                                            
	float                                              EndingAngle;                                              
	float                                              Radius;                                                   
	struct FVector                                     Axis;                                                     
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPointByOffset_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     PivotPoint;                                               
	float                                              OffsetAngle;                                              
	ETweenReferenceAxis                                ReferenceAxis;                                            
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UTweenFloatStandardFactory_BP_JoinTweenRotateActorAroundPoint_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     PivotPoint;                                               
	float                                              StartingAngle;                                            
	float                                              EndingAngle;                                              
	float                                              Radius;                                                   
	struct FVector                                     Axis;                                                     
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	struct FName                                       ParameterName;                                            
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UTweenFloatStandardFactory_BP_JoinTweenMaterialFloatFromTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	struct FName                                       ParameterName;                                            
	float                                              From;                                                     
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UTweenFloatStandardFactory_BP_JoinTweenCustomFloat_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UObject*                                     TweenTarget;                                              
	float                                              From;                                                     
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UTweenFloatStandardFactory_BP_JoinTweenActorFollowSpline_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class AActor*                                      TweenTarget;                                              
	class USplineComponent*                            Spline;                                                   
	float                                              Duration;                                                 
	bool                                               ApplyRotation;                                            
	bool                                               ApplyScale;                                               
	bool                                               UseConstantSpeed;                                         
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UTweenFloatStandardFactory_BP_CreateTweenWidgetOpacityTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class UWidget*                                     TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 Tween;                                                    
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
};


struct UTweenFloatStandardFactory_BP_CreateTweenWidgetAngleTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class UWidget*                                     TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 Tween;                                                    
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
};


struct UTweenFloatStandardFactory_BP_CreateTweenSceneComponentFollowSpline_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class USceneComponent*                             TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 Tween;                                                    
	class USplineComponent*                            Spline;                                                   
	float                                              Duration;                                                 
	bool                                               ApplyRotation;                                            
	bool                                               ApplyScale;                                               
	bool                                               UseConstantSpeed;                                         
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	bool                                               EnableTickLOD;                                            
};


struct UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPointByOffset_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class USceneComponent*                             TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 Tween;                                                    
	struct FVector                                     PivotPoint;                                               
	float                                              OffsetAngle;                                              
	ETweenReferenceAxis                                ReferenceAxis;                                            
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	bool                                               EnableTickLOD;                                            
};


struct UTweenFloatStandardFactory_BP_CreateTweenRotateSceneComponentAroundPoint_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class USceneComponent*                             TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 Tween;                                                    
	struct FVector                                     PivotPoint;                                               
	float                                              StartingAngle;                                            
	float                                              EndingAngle;                                              
	float                                              Radius;                                                   
	struct FVector                                     Axis;                                                     
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	bool                                               EnableTickLOD;                                            
};


struct UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPointByOffset_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class AActor*                                      TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 Tween;                                                    
	struct FVector                                     PivotPoint;                                               
	float                                              OffsetAngle;                                              
	ETweenReferenceAxis                                ReferenceAxis;                                            
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	bool                                               EnableTickLOD;                                            
};


struct UTweenFloatStandardFactory_BP_CreateTweenRotateActorAroundPoint_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class AActor*                                      TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 Tween;                                                    
	struct FVector                                     PivotPoint;                                               
	float                                              StartingAngle;                                            
	float                                              EndingAngle;                                              
	float                                              Radius;                                                   
	struct FVector                                     Axis;                                                     
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	bool                                               EnableTickLOD;                                            
};


struct UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 Tween;                                                    
	struct FName                                       ParameterName;                                            
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
};


struct UTweenFloatStandardFactory_BP_CreateTweenMaterialFloatFromTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 Tween;                                                    
	struct FName                                       ParameterName;                                            
	float                                              From;                                                     
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
};


struct UTweenFloatStandardFactory_BP_CreateTweenCustomFloat_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class UObject*                                     TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 Tween;                                                    
	float                                              From;                                                     
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
};


struct UTweenFloatStandardFactory_BP_CreateTweenActorFollowSpline_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class AActor*                                      TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenFloat*                                 Tween;                                                    
	class USplineComponent*                            Spline;                                                   
	float                                              Duration;                                                 
	bool                                               ApplyRotation;                                            
	bool                                               ApplyScale;                                               
	bool                                               UseConstantSpeed;                                         
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	bool                                               EnableTickLOD;                                            
};


struct UTweenFloatStandardFactory_BP_AppendTweenWidgetOpacityTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UWidget*                                     TweenTarget;                                              
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UTweenFloatStandardFactory_BP_AppendTweenWidgetAngleTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UWidget*                                     TweenTarget;                                              
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UTweenFloatStandardFactory_BP_AppendTweenSceneComponentFollowSpline_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class USceneComponent*                             TweenTarget;                                              
	class USplineComponent*                            Spline;                                                   
	float                                              Duration;                                                 
	bool                                               ApplyRotation;                                            
	bool                                               ApplyScale;                                               
	bool                                               UseConstantSpeed;                                         
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPointByOffset_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     PivotPoint;                                               
	float                                              OffsetAngle;                                              
	ETweenReferenceAxis                                ReferenceAxis;                                            
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UTweenFloatStandardFactory_BP_AppendTweenRotateSceneComponentAroundPoint_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     PivotPoint;                                               
	float                                              StartingAngle;                                            
	float                                              EndingAngle;                                              
	float                                              Radius;                                                   
	struct FVector                                     Axis;                                                     
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPointByOffset_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     PivotPoint;                                               
	float                                              OffsetAngle;                                              
	ETweenReferenceAxis                                ReferenceAxis;                                            
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UTweenFloatStandardFactory_BP_AppendTweenRotateActorAroundPoint_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     PivotPoint;                                               
	float                                              StartingAngle;                                            
	float                                              EndingAngle;                                              
	float                                              Radius;                                                   
	struct FVector                                     Axis;                                                     
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	struct FName                                       ParameterName;                                            
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UTweenFloatStandardFactory_BP_AppendTweenMaterialFloatFromTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	struct FName                                       ParameterName;                                            
	float                                              From;                                                     
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UTweenFloatStandardFactory_BP_AppendTweenCustomFloat_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UObject*                                     TweenTarget;                                              
	float                                              From;                                                     
	float                                              To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UTweenFloatStandardFactory_BP_AppendTweenActorFollowSpline_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class AActor*                                      TweenTarget;                                              
	class USplineComponent*                            Spline;                                                   
	float                                              Duration;                                                 
	bool                                               ApplyRotation;                                            
	bool                                               ApplyScale;                                               
	bool                                               UseConstantSpeed;                                         
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenFloat*                                 ReturnValue;                                              
};


struct UTweenLinearColor_GetCurrentValue_Params
{
	struct FLinearColor                                ReturnValue;                                              
};


struct UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenLinearColor*                           OutTween;                                                 
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	struct FName                                       ParameterName;                                            
	struct FLinearColor                                To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenLinearColorLatentFactory*              ReturnValue;                                              
};


struct UTweenLinearColorLatentFactory_BP_JoinLatentTweenMaterialVectorFromTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenLinearColor*                           OutTween;                                                 
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	struct FName                                       ParameterName;                                            
	struct FLinearColor                                From;                                                     
	struct FLinearColor                                To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenLinearColorLatentFactory*              ReturnValue;                                              
};


struct UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenLinearColor*                           OutTween;                                                 
	struct FName                                       ParameterName;                                            
	struct FLinearColor                                To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenLinearColorLatentFactory*              ReturnValue;                                              
};


struct UTweenLinearColorLatentFactory_BP_CreateLatentTweenMaterialVectorFromTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenLinearColor*                           OutTween;                                                 
	struct FName                                       ParameterName;                                            
	struct FLinearColor                                From;                                                     
	struct FLinearColor                                To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenLinearColorLatentFactory*              ReturnValue;                                              
};


struct UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenLinearColor*                           OutTween;                                                 
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	struct FName                                       ParameterName;                                            
	struct FLinearColor                                To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenLinearColorLatentFactory*              ReturnValue;                                              
};


struct UTweenLinearColorLatentFactory_BP_AppendLatentTweenMaterialVectorFromTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenLinearColor*                           OutTween;                                                 
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	struct FName                                       ParameterName;                                            
	struct FLinearColor                                From;                                                     
	struct FLinearColor                                To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenLinearColorLatentFactory*              ReturnValue;                                              
};


struct UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	struct FName                                       ParameterName;                                            
	struct FLinearColor                                To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenLinearColor*                           ReturnValue;                                              
};


struct UTweenLinearColorStandardFactory_BP_JoinTweenMaterialVectorFromTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	struct FName                                       ParameterName;                                            
	struct FLinearColor                                From;                                                     
	struct FLinearColor                                To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenLinearColor*                           ReturnValue;                                              
};


struct UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenLinearColor*                           Tween;                                                    
	struct FName                                       ParameterName;                                            
	struct FLinearColor                                To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
};


struct UTweenLinearColorStandardFactory_BP_CreateTweenMaterialVectorFromTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenLinearColor*                           Tween;                                                    
	struct FName                                       ParameterName;                                            
	struct FLinearColor                                From;                                                     
	struct FLinearColor                                To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
};


struct UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	struct FName                                       ParameterName;                                            
	struct FLinearColor                                To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenLinearColor*                           ReturnValue;                                              
};


struct UTweenLinearColorStandardFactory_BP_AppendTweenMaterialVectorFromTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UMaterialInstanceDynamic*                    TweenTarget;                                              
	struct FName                                       ParameterName;                                            
	struct FLinearColor                                From;                                                     
	struct FLinearColor                                To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenLinearColor*                           ReturnValue;                                              
};


struct ATweenManagerActor_IsObjectTweening_Params
{
	class UObject*                                     TweenTarget;                                              
	ETweenGenericType                                  TweensType;                                               
	class UBaseTween*                                  TweenFound;                                               
	bool                                               ReturnValue;                                              
};


struct ATweenManagerActor_FindTweenByName_Params
{
	struct FName                                       TweenName;                                                
	ETweenGenericType                                  TweenType;                                                
	class UBaseTween*                                  TweenFound;                                               
	bool                                               ReturnValue;                                              
};


struct ATweenManagerActor_DeleteAllTweensByObject_Params
{
	class UObject*                                     TweenTarget;                                              
	ETweenGenericType                                  TweensType;                                               
	bool                                               ReturnValue;                                              
};


struct ATweenManagerActor_DeleteAllTweens_Params
{
	int                                                ReturnValue;                                              
};


struct ATweenManagerActor_BP_CreateTweenContainerStatic_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              TimeScale;                                                
};


struct UTweenManagerComponent_UpdateNameMap_Params
{
	class UBaseTween*                                  pTween;                                                   
	struct FName                                       pPreviousName;                                            
	struct FName                                       pNewName;                                                 
};


struct UTweenManagerComponent_TweenDestroyed_Params
{
	class UBaseTween*                                  pTween;                                                   
};


struct UTweenManagerComponent_IsObjectTweening_Params
{
	class UObject*                                     TweenTarget;                                              
	ETweenGenericType                                  TweensType;                                               
	class UBaseTween*                                  TweenFound;                                               
	bool                                               ReturnValue;                                              
};


struct UTweenManagerComponent_FindTweenByName_Params
{
	struct FName                                       TweenName;                                                
	ETweenGenericType                                  TweenType;                                                
	class UBaseTween*                                  TweenFound;                                               
	bool                                               ReturnValue;                                              
};


struct UTweenManagerComponent_DeleteAllTweensByObject_Params
{
	class UObject*                                     TweenTarget;                                              
	ETweenGenericType                                  TweensType;                                               
	bool                                               ReturnValue;                                              
};


struct UTweenManagerComponent_DeleteAllTweens_Params
{
	int                                                ReturnValue;                                              
};


struct UTweenManagerComponent_BP_CreateTweenContainer_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              TimeScale;                                                
};


struct UTweenRotator_OnPrimitiveComponentHit_Params
{
	class UPrimitiveComponent*                         pThisComponent;                                           
	class AActor*                                      pOtherActor;                                              
	class UPrimitiveComponent*                         pOtherComp;                                               
	struct FVector                                     pNormalImpulse;                                           
	struct FHitResult                                  pHitResult;                                               
};


struct UTweenRotator_OnPrimitiveComponentBeginOverlap_Params
{
	class UPrimitiveComponent*                         pThisComponent;                                           
	class AActor*                                      pOtherActor;                                              
	class UPrimitiveComponent*                         pOtherComp;                                               
	int                                                pOtherBodyIndex;                                          
	bool                                               bFromSweep;                                               
	struct FHitResult                                  pSweepResult;                                             
};


struct UTweenRotator_OnActorHit_Params
{
	class AActor*                                      pThisActor;                                               
	class AActor*                                      pOtherActor;                                              
	struct FVector                                     pNormalImpulse;                                           
	struct FHitResult                                  pHit;                                                     
};


struct UTweenRotator_OnActorBeginOverlap_Params
{
	class AActor*                                      pThisActor;                                               
	class AActor*                                      pOtherActor;                                              
};


struct UTweenRotator_GetCurrentValue_Params
{
	struct FRotator                                    ReturnValue;                                              
};


struct UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenRotator*                               OutTween;                                                 
	class USceneComponent*                             TweenTarget;                                              
	struct FRotator                                    To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenRotatorLatentFactory*                  ReturnValue;                                              
};


struct UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateSceneComponentBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenRotator*                               OutTween;                                                 
	class USceneComponent*                             TweenTarget;                                              
	struct FRotator                                    bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenRotatorLatentFactory*                  ReturnValue;                                              
};


struct UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenRotator*                               OutTween;                                                 
	class AActor*                                      TweenTarget;                                              
	struct FRotator                                    To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenRotatorLatentFactory*                  ReturnValue;                                              
};


struct UTweenRotatorLatentFactory_BP_JoinLatentTweenRotateActorBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenRotator*                               OutTween;                                                 
	class AActor*                                      TweenTarget;                                              
	struct FRotator                                    bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenRotatorLatentFactory*                  ReturnValue;                                              
};


struct UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class USceneComponent*                             TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenRotator*                               OutTween;                                                 
	struct FRotator                                    To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenRotatorLatentFactory*                  ReturnValue;                                              
};


struct UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateSceneComponentBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class USceneComponent*                             TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenRotator*                               OutTween;                                                 
	struct FRotator                                    bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenRotatorLatentFactory*                  ReturnValue;                                              
};


struct UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class AActor*                                      TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenRotator*                               OutTween;                                                 
	struct FRotator                                    To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenRotatorLatentFactory*                  ReturnValue;                                              
};


struct UTweenRotatorLatentFactory_BP_CreateLatentTweenRotateActorBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class AActor*                                      TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenRotator*                               OutTween;                                                 
	struct FRotator                                    bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenRotatorLatentFactory*                  ReturnValue;                                              
};


struct UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenRotator*                               OutTween;                                                 
	class USceneComponent*                             TweenTarget;                                              
	struct FRotator                                    To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenRotatorLatentFactory*                  ReturnValue;                                              
};


struct UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateSceneComponentBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenRotator*                               OutTween;                                                 
	class USceneComponent*                             TweenTarget;                                              
	struct FRotator                                    bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenRotatorLatentFactory*                  ReturnValue;                                              
};


struct UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenRotator*                               OutTween;                                                 
	class AActor*                                      TweenTarget;                                              
	struct FRotator                                    To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenRotatorLatentFactory*                  ReturnValue;                                              
};


struct UTweenRotatorLatentFactory_BP_AppendLatentTweenRotateActorBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenRotator*                               OutTween;                                                 
	class AActor*                                      TweenTarget;                                              
	struct FRotator                                    bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenRotatorLatentFactory*                  ReturnValue;                                              
};


struct UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class USceneComponent*                             TweenTarget;                                              
	struct FRotator                                    To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenRotator*                               ReturnValue;                                              
};


struct UTweenRotatorStandardFactory_BP_JoinTweenRotateSceneComponentBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class USceneComponent*                             TweenTarget;                                              
	struct FRotator                                    bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenRotator*                               ReturnValue;                                              
};


struct UTweenRotatorStandardFactory_BP_JoinTweenRotateActorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class AActor*                                      TweenTarget;                                              
	struct FRotator                                    To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenRotator*                               ReturnValue;                                              
};


struct UTweenRotatorStandardFactory_BP_JoinTweenRotateActorBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class AActor*                                      TweenTarget;                                              
	struct FRotator                                    bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenRotator*                               ReturnValue;                                              
};


struct UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class USceneComponent*                             TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenRotator*                               Tween;                                                    
	struct FRotator                                    To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	bool                                               EnableTickLOD;                                            
};


struct UTweenRotatorStandardFactory_BP_CreateTweenRotateSceneComponentBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class USceneComponent*                             TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenRotator*                               Tween;                                                    
	struct FRotator                                    bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	bool                                               EnableTickLOD;                                            
};


struct UTweenRotatorStandardFactory_BP_CreateTweenRotateActorTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class AActor*                                      TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenRotator*                               Tween;                                                    
	struct FRotator                                    To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	bool                                               EnableTickLOD;                                            
};


struct UTweenRotatorStandardFactory_BP_CreateTweenRotateActorBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class AActor*                                      TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenRotator*                               Tween;                                                    
	struct FRotator                                    bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	bool                                               EnableTickLOD;                                            
};


struct UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class USceneComponent*                             TweenTarget;                                              
	struct FRotator                                    To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenRotator*                               ReturnValue;                                              
};


struct UTweenRotatorStandardFactory_BP_AppendTweenRotateSceneComponentBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class USceneComponent*                             TweenTarget;                                              
	struct FRotator                                    bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenRotator*                               ReturnValue;                                              
};


struct UTweenRotatorStandardFactory_BP_AppendTweenRotateActorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class AActor*                                      TweenTarget;                                              
	struct FRotator                                    To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenRotator*                               ReturnValue;                                              
};


struct UTweenRotatorStandardFactory_BP_AppendTweenRotateActorBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class AActor*                                      TweenTarget;                                              
	struct FRotator                                    bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenRotator*                               ReturnValue;                                              
};


struct UTweenVector_OnPrimitiveComponentHit_Params
{
	class UPrimitiveComponent*                         pThisComponent;                                           
	class AActor*                                      pOtherActor;                                              
	class UPrimitiveComponent*                         pOtherComp;                                               
	struct FVector                                     pNormalImpulse;                                           
	struct FHitResult                                  pHitResult;                                               
};


struct UTweenVector_OnPrimitiveComponentBeginOverlap_Params
{
	class UPrimitiveComponent*                         pThisComponent;                                           
	class AActor*                                      pOtherActor;                                              
	class UPrimitiveComponent*                         pOtherComp;                                               
	int                                                pOtherBodyIndex;                                          
	bool                                               bFromSweep;                                               
	struct FHitResult                                  pSweepResult;                                             
};


struct UTweenVector_OnActorHit_Params
{
	class AActor*                                      pThisActor;                                               
	class AActor*                                      pOtherActor;                                              
	struct FVector                                     pNormalImpulse;                                           
	struct FHitResult                                  pHit;                                                     
};


struct UTweenVector_OnActorBeginOverlap_Params
{
	class AActor*                                      pThisActor;                                               
	class AActor*                                      pOtherActor;                                              
};


struct UTweenVector_GetCurrentValue_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UTweenVector2D_GetCurrentValue_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct UTweenVector2DLatentFactory_BP_JoinLatentTweenShearWidgetTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector2D*                              OutTween;                                                 
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              
};


struct UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector2D*                              OutTween;                                                 
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              
};


struct UTweenVector2DLatentFactory_BP_JoinLatentTweenScaleWidgetBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector2D*                              OutTween;                                                 
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              
};


struct UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector2D*                              OutTween;                                                 
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              
};


struct UTweenVector2DLatentFactory_BP_JoinLatentTweenMoveWidgetBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector2D*                              OutTween;                                                 
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              
};


struct UTweenVector2DLatentFactory_BP_JoinLatentTweenCustomVector2D_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector2D*                              OutTween;                                                 
	class UObject*                                     TweenTarget;                                              
	struct FVector2D                                   From;                                                     
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              
};


struct UTweenVector2DLatentFactory_BP_CreateLatentTweenShearWidgetTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class UWidget*                                     TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenVector2D*                              OutTween;                                                 
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              
};


struct UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class UWidget*                                     TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenVector2D*                              OutTween;                                                 
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              
};


struct UTweenVector2DLatentFactory_BP_CreateLatentTweenScaleWidgetBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class UWidget*                                     TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenVector2D*                              OutTween;                                                 
	struct FVector2D                                   bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              
};


struct UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class UWidget*                                     TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenVector2D*                              OutTween;                                                 
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              
};


struct UTweenVector2DLatentFactory_BP_CreateLatentTweenMoveWidgetBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class UWidget*                                     TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenVector2D*                              OutTween;                                                 
	struct FVector2D                                   bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              
};


struct UTweenVector2DLatentFactory_BP_CreateLatentTweenCustomVector2D_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class UObject*                                     TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenVector2D*                              OutTween;                                                 
	struct FVector2D                                   From;                                                     
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              
};


struct UTweenVector2DLatentFactory_BP_AppendLatentTweenShearWidgetTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector2D*                              OutTween;                                                 
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              
};


struct UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector2D*                              OutTween;                                                 
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              
};


struct UTweenVector2DLatentFactory_BP_AppendLatentTweenScaleWidgetBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector2D*                              OutTween;                                                 
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              
};


struct UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector2D*                              OutTween;                                                 
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              
};


struct UTweenVector2DLatentFactory_BP_AppendLatentTweenMoveWidgetBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector2D*                              OutTween;                                                 
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              
};


struct UTweenVector2DLatentFactory_BP_AppendLatentTweenCustomVector2D_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector2D*                              OutTween;                                                 
	class UObject*                                     TweenTarget;                                              
	struct FVector2D                                   From;                                                     
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVector2DLatentFactory*                 ReturnValue;                                              
};


struct UTweenVector2DStandardFactory_BP_JoinTweenShearWidgetTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector2D*                              ReturnValue;                                              
};


struct UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector2D*                              ReturnValue;                                              
};


struct UTweenVector2DStandardFactory_BP_JoinTweenScaleWidgetBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector2D*                              ReturnValue;                                              
};


struct UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector2D*                              ReturnValue;                                              
};


struct UTweenVector2DStandardFactory_BP_JoinTweenMoveWidgetBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector2D*                              ReturnValue;                                              
};


struct UTweenVector2DStandardFactory_BP_JoinTweenCustomVector2D_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UObject*                                     TweenTarget;                                              
	struct FVector2D                                   From;                                                     
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector2D*                              ReturnValue;                                              
};


struct UTweenVector2DStandardFactory_BP_CreateTweenShearWidgetTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class UWidget*                                     TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector2D*                              Tween;                                                    
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
};


struct UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class UWidget*                                     TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector2D*                              Tween;                                                    
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
};


struct UTweenVector2DStandardFactory_BP_CreateTweenScaleWidgetBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class UWidget*                                     TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector2D*                              Tween;                                                    
	struct FVector2D                                   bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
};


struct UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class UWidget*                                     TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector2D*                              Tween;                                                    
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
};


struct UTweenVector2DStandardFactory_BP_CreateTweenMoveWidgetBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class UWidget*                                     TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector2D*                              Tween;                                                    
	struct FVector2D                                   bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
};


struct UTweenVector2DStandardFactory_BP_CreateTweenCustomVector2D_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class UObject*                                     TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector2D*                              Tween;                                                    
	struct FVector2D                                   From;                                                     
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
};


struct UTweenVector2DStandardFactory_BP_AppendTweenShearWidgetTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector2D*                              ReturnValue;                                              
};


struct UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector2D*                              ReturnValue;                                              
};


struct UTweenVector2DStandardFactory_BP_AppendTweenScaleWidgetBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector2D*                              ReturnValue;                                              
};


struct UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector2D*                              ReturnValue;                                              
};


struct UTweenVector2DStandardFactory_BP_AppendTweenMoveWidgetBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UWidget*                                     TweenTarget;                                              
	struct FVector2D                                   bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector2D*                              ReturnValue;                                              
};


struct UTweenVector2DStandardFactory_BP_AppendTweenCustomVector2D_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UObject*                                     TweenTarget;                                              
	struct FVector2D                                   From;                                                     
	struct FVector2D                                   To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector2D*                              ReturnValue;                                              
};


struct UTweenVectorLatentFactory_BP_JoinLatentTweenScaleSceneComponentTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector*                                OutTween;                                                 
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVectorLatentFactory*                   ReturnValue;                                              
};


struct UTweenVectorLatentFactory_BP_JoinLatentTweenScaleSceneComponentBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector*                                OutTween;                                                 
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVectorLatentFactory*                   ReturnValue;                                              
};


struct UTweenVectorLatentFactory_BP_JoinLatentTweenScaleActorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector*                                OutTween;                                                 
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVectorLatentFactory*                   ReturnValue;                                              
};


struct UTweenVectorLatentFactory_BP_JoinLatentTweenScaleActorBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector*                                OutTween;                                                 
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVectorLatentFactory*                   ReturnValue;                                              
};


struct UTweenVectorLatentFactory_BP_JoinLatentTweenMoveSceneComponentTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector*                                OutTween;                                                 
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVectorLatentFactory*                   ReturnValue;                                              
};


struct UTweenVectorLatentFactory_BP_JoinLatentTweenMoveSceneComponentBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector*                                OutTween;                                                 
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVectorLatentFactory*                   ReturnValue;                                              
};


struct UTweenVectorLatentFactory_BP_JoinLatentTweenMoveActorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector*                                OutTween;                                                 
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVectorLatentFactory*                   ReturnValue;                                              
};


struct UTweenVectorLatentFactory_BP_JoinLatentTweenMoveActorBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector*                                OutTween;                                                 
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVectorLatentFactory*                   ReturnValue;                                              
};


struct UTweenVectorLatentFactory_BP_JoinLatentTweenCustomVector_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector*                                OutTween;                                                 
	class UObject*                                     TweenTarget;                                              
	struct FVector                                     From;                                                     
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVectorLatentFactory*                   ReturnValue;                                              
};


struct UTweenVectorLatentFactory_BP_CreateLatentTweenScaleSceneComponentTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class USceneComponent*                             TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenVector*                                OutTween;                                                 
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVectorLatentFactory*                   ReturnValue;                                              
};


struct UTweenVectorLatentFactory_BP_CreateLatentTweenScaleSceneComponentBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class USceneComponent*                             TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenVector*                                OutTween;                                                 
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVectorLatentFactory*                   ReturnValue;                                              
};


struct UTweenVectorLatentFactory_BP_CreateLatentTweenScaleActorTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class AActor*                                      TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenVector*                                OutTween;                                                 
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVectorLatentFactory*                   ReturnValue;                                              
};


struct UTweenVectorLatentFactory_BP_CreateLatentTweenScaleActorBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class AActor*                                      TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenVector*                                OutTween;                                                 
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVectorLatentFactory*                   ReturnValue;                                              
};


struct UTweenVectorLatentFactory_BP_CreateLatentTweenMoveSceneComponentTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class USceneComponent*                             TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenVector*                                OutTween;                                                 
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVectorLatentFactory*                   ReturnValue;                                              
};


struct UTweenVectorLatentFactory_BP_CreateLatentTweenMoveSceneComponentBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class USceneComponent*                             TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenVector*                                OutTween;                                                 
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVectorLatentFactory*                   ReturnValue;                                              
};


struct UTweenVectorLatentFactory_BP_CreateLatentTweenMoveActorTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class AActor*                                      TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenVector*                                OutTween;                                                 
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVectorLatentFactory*                   ReturnValue;                                              
};


struct UTweenVectorLatentFactory_BP_CreateLatentTweenMoveActorBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class AActor*                                      TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenVector*                                OutTween;                                                 
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVectorLatentFactory*                   ReturnValue;                                              
};


struct UTweenVectorLatentFactory_BP_CreateLatentTweenCustomVector_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class UObject*                                     TweenTarget;                                              
	class UTweenContainer*                             OutTweenContainer;                                        
	class UTweenVector*                                OutTween;                                                 
	struct FVector                                     From;                                                     
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVectorLatentFactory*                   ReturnValue;                                              
};


struct UTweenVectorLatentFactory_BP_AppendLatentTweenScaleSceneComponentTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector*                                OutTween;                                                 
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVectorLatentFactory*                   ReturnValue;                                              
};


struct UTweenVectorLatentFactory_BP_AppendLatentTweenScaleSceneComponentBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector*                                OutTween;                                                 
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVectorLatentFactory*                   ReturnValue;                                              
};


struct UTweenVectorLatentFactory_BP_AppendLatentTweenScaleActorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector*                                OutTween;                                                 
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVectorLatentFactory*                   ReturnValue;                                              
};


struct UTweenVectorLatentFactory_BP_AppendLatentTweenScaleActorBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector*                                OutTween;                                                 
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVectorLatentFactory*                   ReturnValue;                                              
};


struct UTweenVectorLatentFactory_BP_AppendLatentTweenMoveSceneComponentTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector*                                OutTween;                                                 
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVectorLatentFactory*                   ReturnValue;                                              
};


struct UTweenVectorLatentFactory_BP_AppendLatentTweenMoveSceneComponentBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector*                                OutTween;                                                 
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVectorLatentFactory*                   ReturnValue;                                              
};


struct UTweenVectorLatentFactory_BP_AppendLatentTweenMoveActorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector*                                OutTween;                                                 
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVectorLatentFactory*                   ReturnValue;                                              
};


struct UTweenVectorLatentFactory_BP_AppendLatentTweenMoveActorBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector*                                OutTween;                                                 
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVectorLatentFactory*                   ReturnValue;                                              
};


struct UTweenVectorLatentFactory_BP_AppendLatentTweenCustomVector_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector*                                OutTween;                                                 
	class UObject*                                     TweenTarget;                                              
	struct FVector                                     From;                                                     
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	class UTweenVectorLatentFactory*                   ReturnValue;                                              
};


struct UTweenVectorStandardFactory_BP_JoinTweenScaleSceneComponentTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector*                                ReturnValue;                                              
};


struct UTweenVectorStandardFactory_BP_JoinTweenScaleSceneComponentBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector*                                ReturnValue;                                              
};


struct UTweenVectorStandardFactory_BP_JoinTweenScaleActorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector*                                ReturnValue;                                              
};


struct UTweenVectorStandardFactory_BP_JoinTweenScaleActorBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector*                                ReturnValue;                                              
};


struct UTweenVectorStandardFactory_BP_JoinTweenMoveSceneComponentTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector*                                ReturnValue;                                              
};


struct UTweenVectorStandardFactory_BP_JoinTweenMoveSceneComponentBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector*                                ReturnValue;                                              
};


struct UTweenVectorStandardFactory_BP_JoinTweenMoveActorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector*                                ReturnValue;                                              
};


struct UTweenVectorStandardFactory_BP_JoinTweenMoveActorBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector*                                ReturnValue;                                              
};


struct UTweenVectorStandardFactory_BP_JoinTweenCustomVector_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UObject*                                     TweenTarget;                                              
	struct FVector                                     From;                                                     
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector*                                ReturnValue;                                              
};


struct UTweenVectorStandardFactory_BP_CreateTweenScaleSceneComponentTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class USceneComponent*                             TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector*                                Tween;                                                    
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	bool                                               EnableTickLOD;                                            
};


struct UTweenVectorStandardFactory_BP_CreateTweenScaleSceneComponentBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class USceneComponent*                             TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector*                                Tween;                                                    
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	bool                                               EnableTickLOD;                                            
};


struct UTweenVectorStandardFactory_BP_CreateTweenScaleActorTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class AActor*                                      TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector*                                Tween;                                                    
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	bool                                               EnableTickLOD;                                            
};


struct UTweenVectorStandardFactory_BP_CreateTweenScaleActorBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class AActor*                                      TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector*                                Tween;                                                    
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	bool                                               EnableTickLOD;                                            
};


struct UTweenVectorStandardFactory_BP_CreateTweenMoveSceneComponentTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class USceneComponent*                             TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector*                                Tween;                                                    
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	bool                                               EnableTickLOD;                                            
};


struct UTweenVectorStandardFactory_BP_CreateTweenMoveSceneComponentBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class USceneComponent*                             TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector*                                Tween;                                                    
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	bool                                               EnableTickLOD;                                            
};


struct UTweenVectorStandardFactory_BP_CreateTweenMoveActorTo_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class AActor*                                      TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector*                                Tween;                                                    
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	bool                                               EnableTickLOD;                                            
};


struct UTweenVectorStandardFactory_BP_CreateTweenMoveActorBy_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class AActor*                                      TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector*                                Tween;                                                    
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	bool                                               EnableTickLOD;                                            
};


struct UTweenVectorStandardFactory_BP_CreateTweenCustomVector_Params
{
	class UTweenManagerComponent*                      TweenManager;                                             
	class UObject*                                     TweenTarget;                                              
	class UTweenContainer*                             TweenContainer;                                           
	class UTweenVector*                                Tween;                                                    
	struct FVector                                     From;                                                     
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
};


struct UTweenVectorStandardFactory_BP_AppendTweenScaleSceneComponentTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector*                                ReturnValue;                                              
};


struct UTweenVectorStandardFactory_BP_AppendTweenScaleSceneComponentBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector*                                ReturnValue;                                              
};


struct UTweenVectorStandardFactory_BP_AppendTweenScaleActorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector*                                ReturnValue;                                              
};


struct UTweenVectorStandardFactory_BP_AppendTweenScaleActorBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector*                                ReturnValue;                                              
};


struct UTweenVectorStandardFactory_BP_AppendTweenMoveSceneComponentTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector*                                ReturnValue;                                              
};


struct UTweenVectorStandardFactory_BP_AppendTweenMoveSceneComponentBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class USceneComponent*                             TweenTarget;                                              
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector*                                ReturnValue;                                              
};


struct UTweenVectorStandardFactory_BP_AppendTweenMoveActorTo_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector*                                ReturnValue;                                              
};


struct UTweenVectorStandardFactory_BP_AppendTweenMoveActorBy_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class AActor*                                      TweenTarget;                                              
	struct FVector                                     bY;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	bool                                               DeleteTweenOnHit;                                         
	bool                                               DeleteTweenOnOverlap;                                     
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector*                                ReturnValue;                                              
};


struct UTweenVectorStandardFactory_BP_AppendTweenCustomVector_Params
{
	class UTweenContainer*                             TweenContainer;                                           
	class UObject*                                     TweenTarget;                                              
	struct FVector                                     From;                                                     
	struct FVector                                     To;                                                       
	float                                              Duration;                                                 
	ETweenEaseType                                     EaseType;                                                 
	int                                                NumLoops;                                                 
	ETweenLoopType                                     LoopType;                                                 
	float                                              Delay;                                                    
	float                                              TimeScale;                                                
	int                                                SequenceIndex;                                            
	class UTweenVector*                                ReturnValue;                                              
};

}

