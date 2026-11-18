#pragma once


 
namespace SDK
{






struct FCollectSwitchs
{
	struct FName                                       PlatformName;                                             
	bool                                               LevelStaticMeshMobile;                                    
	bool                                               LevelStaticMeshShadowDepth;                               
	bool                                               LevelStaticMeshDepth;                                     
	bool                                               SkeletalMeshMobile;                                       
	bool                                               SkeletalMeshShadowDepth;                                  
	bool                                               SkeletalMeshDepth;                                        
	bool                                               ParticleSpriteMobile;                                     
	bool                                               MeshParticleMobile;                                       
	bool                                               LandscapeMobile;                                          
	bool                                               LandscapeShadowDepth;                                     
	bool                                               LandscapeDepth;                                           
	bool                                               SlateDefaultBase;                                         
	bool                                               SlateFontBase;                                            
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FRenderConfig
{
	struct FName                                       FormatName;                                               
	struct FName                                       FeatureLevel;                                             
	int                                                QualityType;                                              
	int                                                UserQualitySetting;                                       
	struct FName                                       MaterialQualityLevel;                                     
	int                                                PUBGLDR;                                                  
	int                                                MobileHDR;                                                
	int                                                MobileSimplerShader;                                      
	int                                                ShadowQuality;                                            
	int                                                MaxCSMShadowResolution;                                   
	int                                                MobileEnableHardwarePCF;                                  
	int                                                MobileEnableIBL;                                          
	int                                                MobileEarlyZPass;                                         
	int                                                MobileEnableEarlyZDepthBias;                              
	int                                                MobileUseAlphaToCoverage;                                 
	int                                                MobileBypassTranslucentMaterialPointLight;                
	int                                                MobileMSAA;                                               
	int                                                AllowStaticLighting;                                      
	int                                                SupportAllShaderPermutations;                             
	int                                                SupportLowQualityLightmaps;                               
	int                                                MobileEnableVertexPointLight;                             
	int                                                MobileFallbackMSAAToFXAA;                                 
	int                                                IndirectLightingCache;                                    
	int                                                MobileNumDynamicPointLights;                              
	bool                                               RHISupportsTexLod;                                        
	bool                                               RHISupportsHardwarePCF;                                   
	unsigned char                                      UnknownData00[0x2];                                       
};



struct FDeviceRenderConfig
{
	struct FName                                       ConfigName;                                               
	struct FRenderConfig                               RenderConfig;                                             
};



struct FOverrideRenderConfig
{
	unsigned char                                      bFormatName : 1;                                          
	unsigned char                                      bFeatureLevel : 1;                                        
	unsigned char                                      bQualityType : 1;                                         
	unsigned char                                      bUserQualitySetting : 1;                                  
	unsigned char                                      bMaterialQualityLevel : 1;                                
	unsigned char                                      bPUBGLDR : 1;                                             
	unsigned char                                      bMobileHDR : 1;                                           
	unsigned char                                      bMobileSimplerShader : 1;                                 
	unsigned char                                      bShadowQuality : 1;                                       
	unsigned char                                      bMaxCSMShadowResolution : 1;                              
	unsigned char                                      bMobileEnableHardwarePCF : 1;                             
	unsigned char                                      bMobileEnableIBL : 1;                                     
	unsigned char                                      bMobileEarlyZPass : 1;                                    
	unsigned char                                      bMobileEnableEarlyZDepthBias : 1;                         
	unsigned char                                      bMobileUseAlphaToCoverage : 1;                            
	unsigned char                                      bMobileBypassTranslucentMaterialPointLight : 1;           
	unsigned char                                      bMobileMSAA : 1;                                          
	unsigned char                                      bAllowStaticLighting : 1;                                 
	unsigned char                                      bSupportAllShaderPermutations : 1;                        
	unsigned char                                      bSupportLowQualityLightmaps : 1;                          
	unsigned char                                      bMobileEnableVertexPointLight : 1;                        
	unsigned char                                      bMobileFallbackMSAAToFXAA : 1;                            
	unsigned char                                      bIndirectLightingCache : 1;                               
	unsigned char                                      bMobileNumDynamicPointLights : 1;                         
	unsigned char                                      bRHISupportsTexLod : 1;                                   
	unsigned char                                      bRHISupportsHardwarePCF : 1;                              
};



struct FMapRenderConfig
{
	struct FName                                       ConfigName;                                               
	struct FName                                       MapName;                                                  
	TArray<struct FName>                               LevelNames;                                               
	struct FOverrideRenderConfig                       OverrideRenderConfig;                                     
	unsigned char                                      UnknownData00[0x4];                                       
	struct FRenderConfig                               RenderConfig;                                             
};



struct FShaderGroupDesc
{
	unsigned char                                      UnknownData00[0x8];                                       
	struct FString                                     Name;                                                     
	struct FString                                     Parent;                                                   
	unsigned char                                      UnknownData01[0x18];                                      
};



struct FShaderLevel : public FShaderGroupDesc
{
	TArray<struct FString>                             Include;                                                  
	TArray<struct FString>                             Quality;                                                  
};



struct FShaderPak : public FShaderGroupDesc
{
	TArray<struct FString>                             Include;                                                  
	TArray<struct FString>                             Exclude;                                                  
};

}

