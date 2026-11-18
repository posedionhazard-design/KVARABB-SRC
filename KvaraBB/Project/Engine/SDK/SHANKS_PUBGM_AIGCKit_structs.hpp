#pragma once


 
namespace SDK
{





enum class EAIGCAnimVersion : uint8_t
{
	EAIGCAnimVersion_InValid       = 0,
	EAIGCAnimVersion_UnCompress    = 1,
	EAIGCAnimVersion_Compress      = 2,
	EAIGCAnimVersion_MAX           = 3
};









struct FAIBonesTransfroms
{
	TArray<struct FName>                               BonesName;                                                
	TArray<struct FVector>                             BonesTranslation;                                         
	TArray<struct FVector>                             BonesScale;                                               
	TArray<struct FRotator>                            BonesRotation;                                            
	TMap<struct FName, int>                            BonesIdxs;                                                
};



struct FSkeletonModifyRule
{
	TEnumAsByte<EBoneModificationMode>                 TranslationMode;                                          
	TEnumAsByte<EBoneModificationMode>                 RotationMode;                                             
	TEnumAsByte<EBoneModificationMode>                 ScaleMode;                                                
	TEnumAsByte<EBoneControlSpace>                     TranslationSpace;                                         
	TEnumAsByte<EBoneControlSpace>                     RotationSpace;                                            
	TEnumAsByte<EBoneControlSpace>                     ScaleSpace;                                               
};



struct FSkeletonAnimCompressInfo
{
	TMap<struct FName, int>                            NodeToTrackMap;                                           
};



struct FSkeletonNodeInfo
{
	TArray<struct FName>                               SkeletonNodes;                                            
	struct FSkeletonAnimCompressInfo                   CompressInfo;                                             
};

}

