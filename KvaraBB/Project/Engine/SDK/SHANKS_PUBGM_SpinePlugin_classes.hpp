#pragma once


 
namespace SDK
{






class USpineAtlasAsset : public UObject
{
public:
	TArray<class UTexture2D*>                          atlasPages;                                               
	unsigned char                                      UnknownData00[0x8];                                       
	struct FString                                     rawData;                                                  
	struct FName                                       atlasFileName;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpinePlugin.SpineAtlasAsset");
		return pStaticClass;
	}

};




class USpineBoneDriverComponent : public USceneComponent
{
public:
	class AActor*                                      Target;                                                   
	struct FString                                     BoneName;                                                 
	bool                                               UseComponentTransform;                                    
	bool                                               UsePosition;                                              
	bool                                               UseRotation;                                              
	bool                                               UseScale;                                                 
	unsigned char                                      UnknownData00[0x14];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpinePlugin.SpineBoneDriverComponent");
		return pStaticClass;
	}


	void BeforeUpdateWorldTransform(class USpineSkeletonComponent* Skeleton);
};




class USpineBoneFollowerComponent : public USceneComponent
{
public:
	class AActor*                                      Target;                                                   
	struct FString                                     BoneName;                                                 
	bool                                               UseComponentTransform;                                    
	bool                                               UsePosition;                                              
	bool                                               UseRotation;                                              
	bool                                               UseScale;                                                 
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpinePlugin.SpineBoneFollowerComponent");
		return pStaticClass;
	}

};




class UTrackEntry : public UObject
{
public:
	struct FScriptMulticastDelegate                    animationStart;                                           
	struct FScriptMulticastDelegate                    AnimationInterrupt;                                       
	struct FScriptMulticastDelegate                    AnimationEvent;                                           
	struct FScriptMulticastDelegate                    AnimationComplete;                                        
	struct FScriptMulticastDelegate                    animationEnd;                                             
	struct FScriptMulticastDelegate                    AnimationDispose;                                         
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpinePlugin.TrackEntry");
		return pStaticClass;
	}


	void SetTrackTime(float trackTime);
	void SetTrackEnd(float trackEnd);
	void SetTimeScale(float TimeScale);
	void SetMixTime(float mixTime);
	void SetMixDuration(float mixDuration);
	void SetLoop(bool Loop);
	void SetEventThreshold(float eventThreshold);
	void SetDrawOrderThreshold(float drawOrderThreshold);
	void SetDelay(float Delay);
	void SetAttachmentThreshold(float attachmentThreshold);
	void SetAnimationStart(float animationStart);
	void SetAnimationLast(float animationLast);
	void SetAnimationEnd(float animationEnd);
	void SetAlpha(float Alpha);
	bool isValidAnimation();
	float GetTrackTime();
	int GetTrackIndex();
	float GetTrackEnd();
	float GetTimeScale();
	float GetMixTime();
	float GetMixDuration();
	bool GetLoop();
	float GetEventThreshold();
	float GetDrawOrderThreshold();
	float GetDelay();
	float GetAttachmentThreshold();
	float GetAnimationStart();
	struct FString getAnimationName();
	float GetAnimationLast();
	float GetAnimationEnd();
	float getAnimationDuration();
	float GetAlpha();
};




class USpineSkeletonComponent : public UActorComponent
{
public:
	class USpineAtlasAsset*                            Atlas;                                                    
	class USpineSkeletonDataAsset*                     SkeletonData;                                             
	struct FScriptMulticastDelegate                    BeforeUpdateWorldTransform;                               
	struct FScriptMulticastDelegate                    AfterUpdateWorldTransform;                                
	unsigned char                                      UnknownData00[0x28];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpinePlugin.SpineSkeletonComponent");
		return pStaticClass;
	}


	void UpdateWorldTransform();
	void SetToSetupPose();
	void SetSlotsToSetupPose();
	void SetSlotColor(const struct FString& SlotName, const struct FColor& Color);
	bool SetSkins(TArray<struct FString>* SkinNames);
	bool SetSkin(const struct FString& SkinName);
	void SetScaleY(float ScaleY);
	void SetScaleX(float ScaleX);
	void SetBoneWorldPosition(const struct FString& BoneName, const struct FVector& Position);
	void SetBonesToSetupPose();
	bool SetAttachment(const struct FString& SlotName, const struct FString& AttachmentName);
	bool HasSlot(const struct FString& SlotName);
	bool HasSkin(const struct FString& SkinName);
	bool HasBone(const struct FString& BoneName);
	bool HasAnimation(const struct FString& AnimationName);
	void GetSlots(TArray<struct FString>* Slots);
	void GetSkins(TArray<struct FString>* Skins);
	float GetScaleY();
	float GetScaleX();
	struct FTransform GetBoneWorldTransform(const struct FString& BoneName);
	void GetBones(TArray<struct FString>* Bones);
	void GetAnimations(TArray<struct FString>* Animations);
	float getAnimationDuration(const struct FString& AnimationName);
};




class USpineSkeletonAnimationComponent : public USpineSkeletonComponent
{
public:
	struct FScriptMulticastDelegate                    animationStart;                                           
	struct FScriptMulticastDelegate                    AnimationInterrupt;                                       
	struct FScriptMulticastDelegate                    AnimationEvent;                                           
	struct FScriptMulticastDelegate                    AnimationComplete;                                        
	struct FScriptMulticastDelegate                    animationEnd;                                             
	struct FScriptMulticastDelegate                    AnimationDispose;                                         
	struct FString                                     PreviewAnimation;                                         
	struct FString                                     PreviewSkin;                                              
	unsigned char                                      UnknownData00[0x8];                                       
	unsigned char                                      UnknownData01[0x50];                                      
	bool                                               bAutoPlaying;                                             
	unsigned char                                      UnknownData02[0x27];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpinePlugin.SpineSkeletonAnimationComponent");
		return pStaticClass;
	}


	void SetTimeScale(float TimeScale);
	void SetPlaybackTime(float InPlaybackTime, bool bCallDelegates);
	class UTrackEntry* SetEmptyAnimation(int TrackIndex, float mixDuration);
	void SetAutoPlay(bool bInAutoPlays);
	class UTrackEntry* SetAnimation(int TrackIndex, const struct FString& AnimationName, bool Loop);
	float GetTimeScale();
	class UTrackEntry* GetCurrent(int TrackIndex);
	void ClearTracks();
	void ClearTrack(int TrackIndex);
	class UTrackEntry* AddEmptyAnimation(int TrackIndex, float mixDuration, float Delay);
	class UTrackEntry* AddAnimation(int TrackIndex, const struct FString& AnimationName, bool Loop, float Delay);
};




class USpineSkeletonDataAsset : public UObject
{
public:
	float                                              DefaultMix;                                               
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FSpineAnimationStateMixData>         MixData;                                                  
	TArray<struct FString>                             Bones;                                                    
	TArray<struct FString>                             Slots;                                                    
	TArray<struct FString>                             Skins;                                                    
	TArray<struct FString>                             Animations;                                               
	TArray<struct FString>                             Events;                                                   
	TArray<unsigned char>                              rawData;                                                  
	struct FName                                       skeletonDataFileName;                                     
	unsigned char                                      UnknownData01[0x50];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpinePlugin.SpineSkeletonDataAsset");
		return pStaticClass;
	}

};




class USpineSkeletonRendererComponent : public UProceduralMeshComponent
{
public:
	class UMaterialInterface*                          AdditiveBlendMaterial;                                    
	class UMaterialInterface*                          MultiplyBlendMaterial;                                    
	class UMaterialInterface*                          ScreenBlendMaterial;                                      
	TArray<class UMaterialInstanceDynamic*>            atlasNormalBlendMaterials;                                
	unsigned char                                      UnknownData00[0x50];                                      
	TArray<class UMaterialInstanceDynamic*>            atlasAdditiveBlendMaterials;                              
	unsigned char                                      UnknownData01[0x50];                                      
	TArray<class UMaterialInstanceDynamic*>            atlasMultiplyBlendMaterials;                              
	unsigned char                                      UnknownData02[0x50];                                      
	TArray<class UMaterialInstanceDynamic*>            atlasScreenBlendMaterials;                                
	unsigned char                                      UnknownData03[0x50];                                      
	float                                              DepthOffset;                                              
	unsigned char                                      UnknownData04[0x4];                                       
	struct FName                                       TextureParameterName;                                     
	struct FLinearColor                                Color;                                                    
	bool                                               bCreateCollision;                                         
	unsigned char                                      UnknownData05[0x1F7];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpinePlugin.SpineSkeletonRendererComponent");
		return pStaticClass;
	}

};




class USpineWidget : public UWidget
{
public:
	float                                              Scale;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     InitialSkin;                                              
	class USpineAtlasAsset*                            Atlas;                                                    
	class USpineSkeletonDataAsset*                     SkeletonData;                                             
	class UMaterialInterface*                          NormalBlendMaterial;                                      
	class UMaterialInterface*                          AdditiveBlendMaterial;                                    
	class UMaterialInterface*                          MultiplyBlendMaterial;                                    
	class UMaterialInterface*                          ScreenBlendMaterial;                                      
	TMap<struct FName, class UMaterialInterface*>      CustomMaterials;                                          
	TMap<struct FName, struct FName>                   Sockets;                                                  
	unsigned char                                      UnknownData01[0x50];                                      
	struct FName                                       TextureParameterName;                                     
	float                                              DepthOffset;                                              
	struct FLinearColor                                Color;                                                    
	unsigned char                                      UnknownData02[0x4];                                       
	struct FSlateBrush                                 Brush;                                                    
	struct FScriptMulticastDelegate                    BeforeUpdateWorldTransform;                               
	struct FScriptMulticastDelegate                    AfterUpdateWorldTransform;                                
	struct FScriptMulticastDelegate                    animationStart;                                           
	struct FScriptMulticastDelegate                    AnimationInterrupt;                                       
	struct FScriptMulticastDelegate                    AnimationEvent;                                           
	struct FScriptMulticastDelegate                    AnimationComplete;                                        
	struct FScriptMulticastDelegate                    animationEnd;                                             
	struct FScriptMulticastDelegate                    AnimationDispose;                                         
	unsigned char                                      UnknownData03[0x40];                                      
	TArray<class UMaterialInstanceDynamic*>            atlasNormalBlendMaterials;                                
	unsigned char                                      UnknownData04[0x50];                                      
	TArray<class UMaterialInstanceDynamic*>            atlasAdditiveBlendMaterials;                              
	unsigned char                                      UnknownData05[0x50];                                      
	TArray<class UMaterialInstanceDynamic*>            atlasMultiplyBlendMaterials;                              
	unsigned char                                      UnknownData06[0x50];                                      
	TArray<class UMaterialInstanceDynamic*>            atlasScreenBlendMaterials;                                
	unsigned char                                      UnknownData07[0x240];                                     
	unsigned char                                      UnknownData08[0x50];                                      
	unsigned char                                      UnknownData09[0x50];                                      
	bool                                               bAutoPlaying;                                             
	unsigned char                                      UnknownData10[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SpinePlugin.SpineWidget");
		return pStaticClass;
	}


	void UpdateWorldTransform();
	void Tick(float DeltaTime, bool CallDelegates);
	void SetToSetupPose();
	void SetTimeScale(float TimeScale);
	void SetSlotsToSetupPose();
	bool SetSkins(TArray<struct FString>* SkinNames);
	bool SetSkin(const struct FString& SkinName);
	void SetScaleY(float ScaleY);
	void SetScaleX(float ScaleX);
	void SetScale(float InScale);
	void SetPlaybackTime(float InPlaybackTime, bool bCallDelegates);
	class UTrackEntry* SetEmptyAnimation(int TrackIndex, float mixDuration);
	void SetColor(const struct FLinearColor& InColor);
	void SetBonesToSetupPose();
	void SetAutoPlay(bool bInAutoPlays);
	bool SetAttachment(const struct FString& SlotName, const struct FString& AttachmentName);
	class UTrackEntry* SetAnimation(int TrackIndex, const struct FString& AnimationName, bool Loop);
	bool HasSlot(const struct FString& SlotName);
	bool HasSkin(const struct FString& SkinName);
	bool HasBone(const struct FString& BoneName);
	bool HasAnimation(const struct FString& AnimationName);
	float GetTimeScale();
	void GetSlots(TArray<struct FString>* Slots);
	void GetSkins(TArray<struct FString>* Skins);
	float GetScaleY();
	float GetScaleX();
	float GetScale();
	class UTrackEntry* GetCurrent(int TrackIndex);
	struct FLinearColor GetColor();
	void GetBones(TArray<struct FString>* Bones);
	void GetAnimations(TArray<struct FString>* Animations);
	float getAnimationDuration(const struct FString& AnimationName);
	void ClearTracks();
	void ClearTrack(int TrackIndex);
	class UTrackEntry* AddEmptyAnimation(int TrackIndex, float mixDuration, float Delay);
	class UTrackEntry* AddAnimation(int TrackIndex, const struct FString& AnimationName, bool Loop, float Delay);
};


}

