#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UKismetAnimationLibrary_K2_TwoBoneIK_Params
{
	struct FVector                                     RootPos;                                                  
	struct FVector                                     JointPos;                                                 
	struct FVector                                     EndPos;                                                   
	struct FVector                                     JointTarget;                                              
	struct FVector                                     Effector;                                                 
	struct FVector                                     OutJointPos;                                              
	struct FVector                                     OutEndPos;                                                
	bool                                               bAllowStretching;                                         
	float                                              StartStretchRatio;                                        
	float                                              MaxStretchScale;                                          
};


struct UKismetAnimationLibrary_K2_LookAt_Params
{
	struct FTransform                                  CurrentTransform;                                         
	struct FVector                                     TargetPosition;                                           
	struct FVector                                     LookAtVector;                                             
	bool                                               bUseUpVector;                                             
	struct FVector                                     UpVector;                                                 
	float                                              ClampConeInDegree;                                        
	struct FTransform                                  ReturnValue;                                              
};


struct UPlayMontageCallbackProxy_OnNotifyEndReceived_Params
{
	struct FName                                       NotifyName;                                               
	struct FBranchingPointNotifyPayload                BranchingPointNotifyPayload;                              
};


struct UPlayMontageCallbackProxy_OnNotifyBeginReceived_Params
{
	struct FName                                       NotifyName;                                               
	struct FBranchingPointNotifyPayload                BranchingPointNotifyPayload;                              
};


struct UPlayMontageCallbackProxy_OnMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  
	bool                                               bInterrupted;                                             
};


struct UPlayMontageCallbackProxy_OnMontageBlendingOut_Params
{
	class UAnimMontage*                                Montage;                                                  
	bool                                               bInterrupted;                                             
};


struct UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Params
{
	class USkeletalMeshComponent*                      InSkeletalMeshComponent;                                  
	class UAnimMontage*                                MontageToPlay;                                            
	float                                              PlayRate;                                                 
	float                                              StartingPosition;                                         
	struct FName                                       StartingSection;                                          
	class UPlayMontageCallbackProxy*                   ReturnValue;                                              
};

}

