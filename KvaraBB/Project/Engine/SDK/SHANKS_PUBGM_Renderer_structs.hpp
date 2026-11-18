#pragma once


 
namespace SDK
{





enum class ESparseVolumeTexturePreviewAttribute : uint8_t
{
	ESparseVolumeTexturePreviewAttribute__ESVTPA_AttributesA_R = 0,
	ESparseVolumeTexturePreviewAttribute__ESVTPA_AttributesA_G = 1,
	ESparseVolumeTexturePreviewAttribute__ESVTPA_AttributesA_B = 2,
	ESparseVolumeTexturePreviewAttribute__ESVTPA_AttributesA_A = 3,
	ESparseVolumeTexturePreviewAttribute__ESVTPA_AttributesB_R = 4,
	ESparseVolumeTexturePreviewAttribute__ESVTPA_AttributesB_G = 5,
	ESparseVolumeTexturePreviewAttribute__ESVTPA_AttributesB_B = 6,
	ESparseVolumeTexturePreviewAttribute__ESVTPA_AttributesB_A = 7,
	ESparseVolumeTexturePreviewAttribute__ESVTPA_MAX = 8
};









struct FLightPropagationVolumeSettings
{
	unsigned char                                      bOverride_LPVIntensity : 1;                               
	unsigned char                                      bOverride_LPVDirectionalOcclusionIntensity : 1;           
	unsigned char                                      bOverride_LPVDirectionalOcclusionRadius : 1;              
	unsigned char                                      bOverride_LPVDiffuseOcclusionExponent : 1;                
	unsigned char                                      bOverride_LPVSpecularOcclusionExponent : 1;               
	unsigned char                                      bOverride_LPVDiffuseOcclusionIntensity : 1;               
	unsigned char                                      bOverride_LPVSpecularOcclusionIntensity : 1;              
	unsigned char                                      bOverride_LPVSize : 1;                                    
	unsigned char                                      bOverride_LPVSecondaryOcclusionIntensity : 1;             
	unsigned char                                      bOverride_LPVSecondaryBounceIntensity : 1;                
	unsigned char                                      bOverride_LPVGeometryVolumeBias : 1;                      
	unsigned char                                      bOverride_LPVVplInjectionBias : 1;                        
	unsigned char                                      bOverride_LPVEmissiveInjectionIntensity : 1;              
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              LPVIntensity;                                             
	float                                              LPVVplInjectionBias;                                      
	float                                              LPVSize;                                                  
	float                                              LPVSecondaryOcclusionIntensity;                           
	float                                              LPVSecondaryBounceIntensity;                              
	float                                              LPVGeometryVolumeBias;                                    
	float                                              LPVEmissiveInjectionIntensity;                            
	float                                              LPVDirectionalOcclusionIntensity;                         
	float                                              LPVDirectionalOcclusionRadius;                            
	float                                              LPVDiffuseOcclusionExponent;                              
	float                                              LPVSpecularOcclusionExponent;                             
	float                                              LPVDiffuseOcclusionIntensity;                             
	float                                              LPVSpecularOcclusionIntensity;                            
	float                                              LPVFadeRange;                                             
	float                                              LPVDirectionalOcclusionFadeRange;                         
};

}

