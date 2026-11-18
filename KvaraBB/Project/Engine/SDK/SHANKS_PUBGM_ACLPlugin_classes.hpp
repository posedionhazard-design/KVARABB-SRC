#pragma once


 
namespace SDK
{






class UACLStatsDumpCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ACLPlugin.ACLStatsDumpCommandlet");
		return pStaticClass;
	}

};




class UAnimCompress_ACLBase : public UAnimCompress
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ACLPlugin.AnimCompress_ACLBase");
		return pStaticClass;
	}

};




class UAnimCompress_ACL : public UAnimCompress_ACLBase
{
public:
	TEnumAsByte<EACLCompressionLevel>                  CompressionLevel;                                         
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              DefaultVirtualVertexDistance;                             
	float                                              SafeVirtualVertexDistance;                                
	float                                              SafetyFallbackThreshold;                                  
	float                                              ErrorThreshold;                                           
	unsigned char                                      UnknownData01[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ACLPlugin.AnimCompress_ACL");
		return pStaticClass;
	}

};




class UAnimCompress_ACLCustom : public UAnimCompress_ACLBase
{
public:
	float                                              DefaultVirtualVertexDistance;                             
	float                                              SafeVirtualVertexDistance;                                
	TEnumAsByte<EACLCompressionLevel>                  CompressionLevel;                                         
	TEnumAsByte<EACLRotationFormat>                    RotationFormat;                                           
	TEnumAsByte<EACLVectorFormat>                      TranslationFormat;                                        
	TEnumAsByte<EACLVectorFormat>                      ScaleFormat;                                              
	float                                              ErrorThreshold;                                           
	float                                              ConstantRotationThresholdAngle;                           
	float                                              ConstantTranslationThreshold;                             
	float                                              ConstantScaleThreshold;                                   
	unsigned char                                      bClipRangeReduceRotations : 1;                            
	unsigned char                                      bClipRangeReduceTranslations : 1;                         
	unsigned char                                      bClipRangeReduceScales : 1;                               
	unsigned char                                      bEnableSegmenting : 1;                                    
	unsigned char                                      bSegmentRangeReduceRotations : 1;                         
	unsigned char                                      bSegmentRangeReduceTranslations : 1;                      
	unsigned char                                      bSegmentRangeReduceScales : 1;                            
	unsigned char                                      UnknownData00[0x1];                                       
	uint16_t                                           IdealNumKeyFramesPerSegment;                              
	uint16_t                                           MaxNumKeyFramesPerSegment;                                
	unsigned char                                      UnknownData01[0x6];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ACLPlugin.AnimCompress_ACLCustom");
		return pStaticClass;
	}

};


}

