
 
#include "../SDK.hpp"

namespace SDK
{











void ALandscapeProxy::SetLandScapeRenderMask(int Index, bool bUseRenderMask, unsigned char RenderMask)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandScapeRenderMask");

	ALandscapeProxy_SetLandScapeRenderMask_Params params;
	params.Index = Index;
	params.bUseRenderMask = bUseRenderMask;
	params.RenderMask = RenderMask;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

















void ALandscapeProxy::EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorApplySpline");

	ALandscapeProxy_EditorApplySpline_Params params;
	params.InSplineComponent = InSplineComponent;
	params.StartWidth = StartWidth;
	params.EndWidth = EndWidth;
	params.StartSideFalloff = StartSideFalloff;
	params.EndSideFalloff = EndSideFalloff;
	params.StartRoll = StartRoll;
	params.EndRoll = EndRoll;
	params.NumSubdivisions = NumSubdivisions;
	params.bRaiseHeights = bRaiseHeights;
	params.bLowerHeights = bLowerHeights;
	params.PaintLayer = PaintLayer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ALandscapeProxy::ChangeLODDistributionSettingConsoleVariable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeLODDistributionSettingConsoleVariable");

	ALandscapeProxy_ChangeLODDistributionSettingConsoleVariable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ALandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeLODDistanceFactor");

	ALandscapeProxy_ChangeLODDistanceFactor_Params params;
	params.InLODDistanceFactor = InLODDistanceFactor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ALandscapeProxy::ChangeLOD0DistributionSettingConsoleVariable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeLOD0DistributionSettingConsoleVariable");

	ALandscapeProxy_ChangeLOD0DistributionSettingConsoleVariable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ALandscapeProxy::ChangebUseScreenSizeLOD(bool InbUseScreenSizeLOD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangebUseScreenSizeLOD");

	ALandscapeProxy_ChangebUseScreenSizeLOD_Params params;
	params.InbUseScreenSizeLOD = InbUseScreenSizeLOD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UIdeaGrassFieldFunctionLibrary::IdeaGrassRenderForceTextureTrample(const struct FIdeaGrassFieldData& GrassFieldData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Landscape.IdeaGrassFieldFunctionLibrary.IdeaGrassRenderForceTextureTrample");

	UIdeaGrassFieldFunctionLibrary_IdeaGrassRenderForceTextureTrample_Params params;
	params.GrassFieldData = GrassFieldData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UIdeaGrassFieldFunctionLibrary::IdeaGrassRenderForceTextureSkill(const struct FIdeaGrassFieldData& GrassFieldData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Landscape.IdeaGrassFieldFunctionLibrary.IdeaGrassRenderForceTextureSkill");

	UIdeaGrassFieldFunctionLibrary_IdeaGrassRenderForceTextureSkill_Params params;
	params.GrassFieldData = GrassFieldData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UIdeaGrassFieldFunctionLibrary::IdeaGrassRenderForceTextureFade(const struct FIdeaGrassFieldData& GrassFieldData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Landscape.IdeaGrassFieldFunctionLibrary.IdeaGrassRenderForceTextureFade");

	UIdeaGrassFieldFunctionLibrary_IdeaGrassRenderForceTextureFade_Params params;
	params.GrassFieldData = GrassFieldData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UIdeaGrassFieldFunctionLibrary::IdeaGrassRenderForceTexture(const struct FIdeaGrassFieldData& GrassFieldData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Landscape.IdeaGrassFieldFunctionLibrary.IdeaGrassRenderForceTexture");

	UIdeaGrassFieldFunctionLibrary_IdeaGrassRenderForceTexture_Params params;
	params.GrassFieldData = GrassFieldData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

