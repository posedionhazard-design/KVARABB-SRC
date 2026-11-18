#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct ALandscapeProxy_SetLandScapeRenderMask_Params
{
	int                                                Index;                                                    
	bool                                               bUseRenderMask;                                           
	unsigned char                                      RenderMask;                                               
};


struct ALandscapeProxy_EditorApplySpline_Params
{
	class USplineComponent*                            InSplineComponent;                                        
	float                                              StartWidth;                                               
	float                                              EndWidth;                                                 
	float                                              StartSideFalloff;                                         
	float                                              EndSideFalloff;                                           
	float                                              StartRoll;                                                
	float                                              EndRoll;                                                  
	int                                                NumSubdivisions;                                          
	bool                                               bRaiseHeights;                                            
	bool                                               bLowerHeights;                                            
	class ULandscapeLayerInfoObject*                   PaintLayer;                                               
};


struct ALandscapeProxy_ChangeLODDistributionSettingConsoleVariable_Params
{
};


struct ALandscapeProxy_ChangeLODDistanceFactor_Params
{
	float                                              InLODDistanceFactor;                                      
};


struct ALandscapeProxy_ChangeLOD0DistributionSettingConsoleVariable_Params
{
};


struct ALandscapeProxy_ChangebUseScreenSizeLOD_Params
{
	bool                                               InbUseScreenSizeLOD;                                      
};


struct UIdeaGrassFieldFunctionLibrary_IdeaGrassRenderForceTextureTrample_Params
{
	struct FIdeaGrassFieldData                         GrassFieldData;                                           
};


struct UIdeaGrassFieldFunctionLibrary_IdeaGrassRenderForceTextureSkill_Params
{
	struct FIdeaGrassFieldData                         GrassFieldData;                                           
};


struct UIdeaGrassFieldFunctionLibrary_IdeaGrassRenderForceTextureFade_Params
{
	struct FIdeaGrassFieldData                         GrassFieldData;                                           
};


struct UIdeaGrassFieldFunctionLibrary_IdeaGrassRenderForceTexture_Params
{
	struct FIdeaGrassFieldData                         GrassFieldData;                                           
};

}

