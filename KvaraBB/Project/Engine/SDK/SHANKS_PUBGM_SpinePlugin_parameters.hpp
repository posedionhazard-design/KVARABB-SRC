#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct USpineBoneDriverComponent_BeforeUpdateWorldTransform_Params
{
	class USpineSkeletonComponent*                     Skeleton;                                                 
};


struct UTrackEntry_SetTrackTime_Params
{
	float                                              trackTime;                                                
};


struct UTrackEntry_SetTrackEnd_Params
{
	float                                              trackEnd;                                                 
};


struct UTrackEntry_SetTimeScale_Params
{
	float                                              TimeScale;                                                
};


struct UTrackEntry_SetMixTime_Params
{
	float                                              mixTime;                                                  
};


struct UTrackEntry_SetMixDuration_Params
{
	float                                              mixDuration;                                              
};


struct UTrackEntry_SetLoop_Params
{
	bool                                               Loop;                                                     
};


struct UTrackEntry_SetEventThreshold_Params
{
	float                                              eventThreshold;                                           
};


struct UTrackEntry_SetDrawOrderThreshold_Params
{
	float                                              drawOrderThreshold;                                       
};


struct UTrackEntry_SetDelay_Params
{
	float                                              Delay;                                                    
};


struct UTrackEntry_SetAttachmentThreshold_Params
{
	float                                              attachmentThreshold;                                      
};


struct UTrackEntry_SetAnimationStart_Params
{
	float                                              animationStart;                                           
};


struct UTrackEntry_SetAnimationLast_Params
{
	float                                              animationLast;                                            
};


struct UTrackEntry_SetAnimationEnd_Params
{
	float                                              animationEnd;                                             
};


struct UTrackEntry_SetAlpha_Params
{
	float                                              Alpha;                                                    
};


struct UTrackEntry_isValidAnimation_Params
{
	bool                                               ReturnValue;                                              
};


struct UTrackEntry_GetTrackTime_Params
{
	float                                              ReturnValue;                                              
};


struct UTrackEntry_GetTrackIndex_Params
{
	int                                                ReturnValue;                                              
};


struct UTrackEntry_GetTrackEnd_Params
{
	float                                              ReturnValue;                                              
};


struct UTrackEntry_GetTimeScale_Params
{
	float                                              ReturnValue;                                              
};


struct UTrackEntry_GetMixTime_Params
{
	float                                              ReturnValue;                                              
};


struct UTrackEntry_GetMixDuration_Params
{
	float                                              ReturnValue;                                              
};


struct UTrackEntry_GetLoop_Params
{
	bool                                               ReturnValue;                                              
};


struct UTrackEntry_GetEventThreshold_Params
{
	float                                              ReturnValue;                                              
};


struct UTrackEntry_GetDrawOrderThreshold_Params
{
	float                                              ReturnValue;                                              
};


struct UTrackEntry_GetDelay_Params
{
	float                                              ReturnValue;                                              
};


struct UTrackEntry_GetAttachmentThreshold_Params
{
	float                                              ReturnValue;                                              
};


struct UTrackEntry_GetAnimationStart_Params
{
	float                                              ReturnValue;                                              
};


struct UTrackEntry_getAnimationName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UTrackEntry_GetAnimationLast_Params
{
	float                                              ReturnValue;                                              
};


struct UTrackEntry_GetAnimationEnd_Params
{
	float                                              ReturnValue;                                              
};


struct UTrackEntry_getAnimationDuration_Params
{
	float                                              ReturnValue;                                              
};


struct UTrackEntry_GetAlpha_Params
{
	float                                              ReturnValue;                                              
};


struct USpineSkeletonComponent_UpdateWorldTransform_Params
{
};


struct USpineSkeletonComponent_SetToSetupPose_Params
{
};


struct USpineSkeletonComponent_SetSlotsToSetupPose_Params
{
};


struct USpineSkeletonComponent_SetSlotColor_Params
{
	struct FString                                     SlotName;                                                 
	struct FColor                                      Color;                                                    
};


struct USpineSkeletonComponent_SetSkins_Params
{
	TArray<struct FString>                             SkinNames;                                                
	bool                                               ReturnValue;                                              
};


struct USpineSkeletonComponent_SetSkin_Params
{
	struct FString                                     SkinName;                                                 
	bool                                               ReturnValue;                                              
};


struct USpineSkeletonComponent_SetScaleY_Params
{
	float                                              ScaleY;                                                   
};


struct USpineSkeletonComponent_SetScaleX_Params
{
	float                                              ScaleX;                                                   
};


struct USpineSkeletonComponent_SetBoneWorldPosition_Params
{
	struct FString                                     BoneName;                                                 
	struct FVector                                     Position;                                                 
};


struct USpineSkeletonComponent_SetBonesToSetupPose_Params
{
};


struct USpineSkeletonComponent_SetAttachment_Params
{
	struct FString                                     SlotName;                                                 
	struct FString                                     AttachmentName;                                           
	bool                                               ReturnValue;                                              
};


struct USpineSkeletonComponent_HasSlot_Params
{
	struct FString                                     SlotName;                                                 
	bool                                               ReturnValue;                                              
};


struct USpineSkeletonComponent_HasSkin_Params
{
	struct FString                                     SkinName;                                                 
	bool                                               ReturnValue;                                              
};


struct USpineSkeletonComponent_HasBone_Params
{
	struct FString                                     BoneName;                                                 
	bool                                               ReturnValue;                                              
};


struct USpineSkeletonComponent_HasAnimation_Params
{
	struct FString                                     AnimationName;                                            
	bool                                               ReturnValue;                                              
};


struct USpineSkeletonComponent_GetSlots_Params
{
	TArray<struct FString>                             Slots;                                                    
};


struct USpineSkeletonComponent_GetSkins_Params
{
	TArray<struct FString>                             Skins;                                                    
};


struct USpineSkeletonComponent_GetScaleY_Params
{
	float                                              ReturnValue;                                              
};


struct USpineSkeletonComponent_GetScaleX_Params
{
	float                                              ReturnValue;                                              
};


struct USpineSkeletonComponent_GetBoneWorldTransform_Params
{
	struct FString                                     BoneName;                                                 
	struct FTransform                                  ReturnValue;                                              
};


struct USpineSkeletonComponent_GetBones_Params
{
	TArray<struct FString>                             Bones;                                                    
};


struct USpineSkeletonComponent_GetAnimations_Params
{
	TArray<struct FString>                             Animations;                                               
};


struct USpineSkeletonComponent_getAnimationDuration_Params
{
	struct FString                                     AnimationName;                                            
	float                                              ReturnValue;                                              
};


struct USpineSkeletonAnimationComponent_SetTimeScale_Params
{
	float                                              TimeScale;                                                
};


struct USpineSkeletonAnimationComponent_SetPlaybackTime_Params
{
	float                                              InPlaybackTime;                                           
	bool                                               bCallDelegates;                                           
};


struct USpineSkeletonAnimationComponent_SetEmptyAnimation_Params
{
	int                                                TrackIndex;                                               
	float                                              mixDuration;                                              
	class UTrackEntry*                                 ReturnValue;                                              
};


struct USpineSkeletonAnimationComponent_SetAutoPlay_Params
{
	bool                                               bInAutoPlays;                                             
};


struct USpineSkeletonAnimationComponent_SetAnimation_Params
{
	int                                                TrackIndex;                                               
	struct FString                                     AnimationName;                                            
	bool                                               Loop;                                                     
	class UTrackEntry*                                 ReturnValue;                                              
};


struct USpineSkeletonAnimationComponent_GetTimeScale_Params
{
	float                                              ReturnValue;                                              
};


struct USpineSkeletonAnimationComponent_GetCurrent_Params
{
	int                                                TrackIndex;                                               
	class UTrackEntry*                                 ReturnValue;                                              
};


struct USpineSkeletonAnimationComponent_ClearTracks_Params
{
};


struct USpineSkeletonAnimationComponent_ClearTrack_Params
{
	int                                                TrackIndex;                                               
};


struct USpineSkeletonAnimationComponent_AddEmptyAnimation_Params
{
	int                                                TrackIndex;                                               
	float                                              mixDuration;                                              
	float                                              Delay;                                                    
	class UTrackEntry*                                 ReturnValue;                                              
};


struct USpineSkeletonAnimationComponent_AddAnimation_Params
{
	int                                                TrackIndex;                                               
	struct FString                                     AnimationName;                                            
	bool                                               Loop;                                                     
	float                                              Delay;                                                    
	class UTrackEntry*                                 ReturnValue;                                              
};


struct USpineWidget_UpdateWorldTransform_Params
{
};


struct USpineWidget_Tick_Params
{
	float                                              DeltaTime;                                                
	bool                                               CallDelegates;                                            
};


struct USpineWidget_SetToSetupPose_Params
{
};


struct USpineWidget_SetTimeScale_Params
{
	float                                              TimeScale;                                                
};


struct USpineWidget_SetSlotsToSetupPose_Params
{
};


struct USpineWidget_SetSkins_Params
{
	TArray<struct FString>                             SkinNames;                                                
	bool                                               ReturnValue;                                              
};


struct USpineWidget_SetSkin_Params
{
	struct FString                                     SkinName;                                                 
	bool                                               ReturnValue;                                              
};


struct USpineWidget_SetScaleY_Params
{
	float                                              ScaleY;                                                   
};


struct USpineWidget_SetScaleX_Params
{
	float                                              ScaleX;                                                   
};


struct USpineWidget_SetScale_Params
{
	float                                              InScale;                                                  
};


struct USpineWidget_SetPlaybackTime_Params
{
	float                                              InPlaybackTime;                                           
	bool                                               bCallDelegates;                                           
};


struct USpineWidget_SetEmptyAnimation_Params
{
	int                                                TrackIndex;                                               
	float                                              mixDuration;                                              
	class UTrackEntry*                                 ReturnValue;                                              
};


struct USpineWidget_SetColor_Params
{
	struct FLinearColor                                InColor;                                                  
};


struct USpineWidget_SetBonesToSetupPose_Params
{
};


struct USpineWidget_SetAutoPlay_Params
{
	bool                                               bInAutoPlays;                                             
};


struct USpineWidget_SetAttachment_Params
{
	struct FString                                     SlotName;                                                 
	struct FString                                     AttachmentName;                                           
	bool                                               ReturnValue;                                              
};


struct USpineWidget_SetAnimation_Params
{
	int                                                TrackIndex;                                               
	struct FString                                     AnimationName;                                            
	bool                                               Loop;                                                     
	class UTrackEntry*                                 ReturnValue;                                              
};


struct USpineWidget_HasSlot_Params
{
	struct FString                                     SlotName;                                                 
	bool                                               ReturnValue;                                              
};


struct USpineWidget_HasSkin_Params
{
	struct FString                                     SkinName;                                                 
	bool                                               ReturnValue;                                              
};


struct USpineWidget_HasBone_Params
{
	struct FString                                     BoneName;                                                 
	bool                                               ReturnValue;                                              
};


struct USpineWidget_HasAnimation_Params
{
	struct FString                                     AnimationName;                                            
	bool                                               ReturnValue;                                              
};


struct USpineWidget_GetTimeScale_Params
{
	float                                              ReturnValue;                                              
};


struct USpineWidget_GetSlots_Params
{
	TArray<struct FString>                             Slots;                                                    
};


struct USpineWidget_GetSkins_Params
{
	TArray<struct FString>                             Skins;                                                    
};


struct USpineWidget_GetScaleY_Params
{
	float                                              ReturnValue;                                              
};


struct USpineWidget_GetScaleX_Params
{
	float                                              ReturnValue;                                              
};


struct USpineWidget_GetScale_Params
{
	float                                              ReturnValue;                                              
};


struct USpineWidget_GetCurrent_Params
{
	int                                                TrackIndex;                                               
	class UTrackEntry*                                 ReturnValue;                                              
};


struct USpineWidget_GetColor_Params
{
	struct FLinearColor                                ReturnValue;                                              
};


struct USpineWidget_GetBones_Params
{
	TArray<struct FString>                             Bones;                                                    
};


struct USpineWidget_GetAnimations_Params
{
	TArray<struct FString>                             Animations;                                               
};


struct USpineWidget_getAnimationDuration_Params
{
	struct FString                                     AnimationName;                                            
	float                                              ReturnValue;                                              
};


struct USpineWidget_ClearTracks_Params
{
};


struct USpineWidget_ClearTrack_Params
{
	int                                                TrackIndex;                                               
};


struct USpineWidget_AddEmptyAnimation_Params
{
	int                                                TrackIndex;                                               
	float                                              mixDuration;                                              
	float                                              Delay;                                                    
	class UTrackEntry*                                 ReturnValue;                                              
};


struct USpineWidget_AddAnimation_Params
{
	int                                                TrackIndex;                                               
	struct FString                                     AnimationName;                                            
	bool                                               Loop;                                                     
	float                                              Delay;                                                    
	class UTrackEntry*                                 ReturnValue;                                              
};

}

