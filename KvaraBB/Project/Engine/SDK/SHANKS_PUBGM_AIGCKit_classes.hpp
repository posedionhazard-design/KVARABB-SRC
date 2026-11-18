#pragma once


 
namespace SDK
{






class UAIGCAnimData : public UObject
{
public:
	TArray<struct FAIBonesTransfroms>                  BonesTransfroms;                                          
	int                                                FrameRate;                                                
	bool                                               bUseCustomSpace;                                          
	struct FSkeletonModifyRule                         CustomRule;                                               
	unsigned char                                      UnknownData00[0x5];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIGCKit.AIGCAnimData");
		return pStaticClass;
	}

};




class UAIGCAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	bool                                               bUseAIGCAnimation;                                        
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              CurrentAIGCAnimFrameIndex;                                
	TEnumAsByte<EBoneModificationMode>                 TranslationMode;                                          
	TEnumAsByte<EBoneModificationMode>                 RotationMode;                                             
	TEnumAsByte<EBoneModificationMode>                 ScaleMode;                                                
	TEnumAsByte<EBoneControlSpace>                     TranslationSpace;                                         
	TEnumAsByte<EBoneControlSpace>                     RotationSpace;                                            
	TEnumAsByte<EBoneControlSpace>                     ScaleSpace;                                               
	unsigned char                                      UnknownData02[0x2];                                       
	float                                              AIGCAnimFrameRate;                                        
	struct FSkeletonModifyRule                         DefaultSkeletonModifyRule;                                
	unsigned char                                      UnknownData03[0xE];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIGCKit.AIGCAnimInstance");
		return pStaticClass;
	}


	int GetCurrentFrameIndex();
};




class UAIGCKitFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIGCKit.AIGCKitFunctionLibrary");
		return pStaticClass;
	}


	static class UAIGCAnimData* GetAnimData(int FrameRate, int FrameNum, const struct FSkeletonNodeInfo& SkeletonNodeInfo, TArray<unsigned char>* CompressData);
	static bool DecompressBone(int TrackIndex, float Time, float RelativePos, struct FTransform* OutAtom, TArray<unsigned char>* RawAnimData);
	static bool DecompressAnimData(class UAIGCAnimData* OutAnimData, int FrameNum, float TargetFramerate, const struct FSkeletonNodeInfo& SkeletonNodeInfo, TArray<unsigned char>* RawAnimData);
};




class UAIGCKitSettings : public UObject
{
public:
	TMap<struct FString, struct FSkeletonNodeInfo>     FaceSkeletons;                                            
	TMap<struct FString, struct FSkeletonNodeInfo>     BodySkeletons;                                            
	struct FSkeletonModifyRule                         DefaultFaceRule;                                          
	struct FSkeletonModifyRule                         DefaultBodyRule;                                          
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AIGCKit.AIGCKitSettings");
		return pStaticClass;
	}

};


}

