#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UPixUIBPLibrary_PixUI_Version_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_Tick_Params
{
	float                                              fDeltaTime;                                               
};


struct UPixUIBPLibrary_PixUI_StartupEx_Params
{
	struct FString                                     strCachePathForWrite;                                     
	bool                                               bSupportAsyncModel;                                       
	bool                                               ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_Startup_Params
{
	struct FString                                     strCachePathForWrite;                                     
	bool                                               ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_Shutdown_Params
{
	bool                                               ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_SetTickIntervalSec_Params
{
	float                                              fTickIntervalSec;                                         
};


struct UPixUIBPLibrary_PixUI_SetSupportTextShape_Params
{
	bool                                               beSupportTextShape;                                       
};


struct UPixUIBPLibrary_PixUI_SetSupportEngineFont_Params
{
	bool                                               bSupportEngineFont;                                       
};


struct UPixUIBPLibrary_PixUI_SetSpecialCapability_Params
{
	struct FString                                     strCapability;                                            
};


struct UPixUIBPLibrary_PixUI_SetSecretKey_Params
{
	struct FString                                     strSecretKey;                                             
};


struct UPixUIBPLibrary_PixUI_SetPxLibDefaultVersionTag_Params
{
	int                                                nNewPxLibVersionTag;                                      
};


struct UPixUIBPLibrary_PixUI_SetPixUIMaxLayerId_Params
{
	int                                                nMaxLayerId;                                              
};


struct UPixUIBPLibrary_PixUI_SetPixUIMaxDynamicTextureTotalSize_Params
{
	int                                                nMaxDynamicTextureTotalSize;                              
};


struct UPixUIBPLibrary_PixUI_SetPixUIMaxDynamicTextureGCSize_Params
{
	int                                                nMaxDynamicTextureGCSize;                                 
};


struct UPixUIBPLibrary_PixUI_SetPixUIMaxDynamicTextureGCRate_Params
{
	float                                              fMaxGCRate;                                               
};


struct UPixUIBPLibrary_PixUI_SetMobileUseTouchEvent_Params
{
	bool                                               bUseTouchEvent;                                           
};


struct UPixUIBPLibrary_PixUI_SetMatRootPath_Params
{
	struct FString                                     strMatRootPath;                                           
};


struct UPixUIBPLibrary_PixUI_SetMatBasePath_Params
{
	struct FString                                     strMatBasePath;                                           
};


struct UPixUIBPLibrary_PixUI_SetMatAsyncLoad_Params
{
	bool                                               bMatAsyncLoad;                                            
};


struct UPixUIBPLibrary_PixUI_SetJsGCThreshold_Params
{
	int                                                nGCThreshold;                                             
};


struct UPixUIBPLibrary_PixUI_SetGradientBrushCallFlushCommands_Params
{
	bool                                               beGradientBrushCallFlushCommands;                         
};


struct UPixUIBPLibrary_PixUI_SetFontTypeFaceName_Params
{
	struct FString                                     strFontName;                                              
	EPxFontFaceType                                    ePxFontTypeFace;                                          
	struct FString                                     strFontTypeFaceName;                                      
};


struct UPixUIBPLibrary_PixUI_SetExternalInterface_Params
{
	TScriptInterface<class UPixUIExternalInterface>    scriptInterfaceExternal;                                  
};


struct UPixUIBPLibrary_PixUI_SetExtBpCallSupportThrowException_Params
{
	bool                                               bSupportThrowException;                                   
};


struct UPixUIBPLibrary_PixUI_SetDynamicTextureUpdateMode_Params
{
	EPxDynamicTextureUpdateMode                        eUpdateMode;                                              
};


struct UPixUIBPLibrary_PixUI_SetDynamicTextureFilter_Params
{
	TEnumAsByte<ETextureFilter>                        eTextureFilter;                                           
};


struct UPixUIBPLibrary_PixUI_SetDynamicLibraryPath_Params
{
	struct FString                                     strDynamicLibraryPath;                                    
	bool                                               ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_SetDynamicFixFontSize_Params
{
	bool                                               bOpenDynamicFix;                                          
};


struct UPixUIBPLibrary_PixUI_SetDrawEffectNoPixelSnapping_Params
{
	bool                                               bNoPixelSnapping;                                         
};


struct UPixUIBPLibrary_PixUI_SetDefaultFontSize_Params
{
	int                                                nFontSize;                                                
};


struct UPixUIBPLibrary_PixUI_SetDefaultFont_Params
{
	struct FString                                     strFontName;                                              
};


struct UPixUIBPLibrary_PixUI_SetCoreTickDuration_Params
{
	int                                                nDurationCount;                                           
};


struct UPixUIBPLibrary_PixUI_SetCoreLibValidByTag_Params
{
	int                                                nVersionTag;                                              
	bool                                               bValid;                                                   
	bool                                               ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_SetAutoTick_Params
{
	bool                                               bAutoTick;                                                
};


struct UPixUIBPLibrary_PixUI_SetAsyncMode_Params
{
	bool                                               beRunAsyncMode;                                           
};


struct UPixUIBPLibrary_PixUI_SetAsyncBpCallWaitOutTime_Params
{
	float                                              fTimeOutSecond;                                           
};


struct UPixUIBPLibrary_PixUI_SetAndroidDyLibSearchEnvPath_Params
{
	struct FString                                     strDyLibSearchEnvPath;                                    
	bool                                               ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_RHIShaderPlatform_Params
{
	int                                                ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_RHIShaderLevel_Params
{
	int                                                ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_RemoveSystemFont_Params
{
	struct FString                                     strFontName;                                              
};


struct UPixUIBPLibrary_PixUI_RemoveDynamicLibraryPath_Params
{
	struct FString                                     strDynamicLibraryPath;                                    
	bool                                               ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_PublicCapabilitySwitch_Params
{
	EPxPublicCapability                                EPxDebugInfo;                                             
	bool                                               bOpen;                                                    
};


struct UPixUIBPLibrary_PixUI_PrintProfilerInfo_Params
{
};


struct UPixUIBPLibrary_PixUI_PlatformOSVersionCode_Params
{
	float                                              ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_PlatformOSVersion_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_PlatformCode_Params
{
	int                                                ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_Platform_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_IsSupportTextShape_Params
{
	bool                                               ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_IsStartUp_Params
{
	bool                                               ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_IsRHIShaderVulkan_Params
{
	bool                                               ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_IsRHIShaderOpenGLES2_Params
{
	bool                                               ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_IsRHIShaderOpenGL_Params
{
	bool                                               ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_IsRHIShaderMetal_Params
{
	bool                                               ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_IsRHIShaderDX_Params
{
	bool                                               ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_IsOsBit64_Params
{
	bool                                               ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_IsOsBit32_Params
{
	bool                                               ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_IsMobileUseTouchEvent_Params
{
	bool                                               ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_IsDynamicFixFontSize_Params
{
	bool                                               ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_IsAutoTick_Params
{
	bool                                               ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetWindowSlotObject_Params
{
	int                                                nWindowID;                                                
	struct FString                                     strTagId;                                                 
	class UObject*                                     ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetTotalFontCount_Params
{
	int                                                ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetTickIntervalSec_Params
{
	float                                              ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetSupportPxLibVersionTagArray_Params
{
	TArray<int>                                        arraySupportPxLibVersionTag;                              
};


struct UPixUIBPLibrary_PixUI_GetSupportEngineFont_Params
{
	bool                                               ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetScriptVMByID_Params
{
	int                                                nScriptVmId;                                              
	class UPixUIScriptVM*                              ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetPxLibDefaultVersionTag_Params
{
	int                                                ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetPixUIWidgetSlotObject_Params
{
	int                                                nPxWidgetID;                                              
	struct FString                                     strSlotTagId;                                             
	class UObject*                                     ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetPixUIWidgetByID_Params
{
	int                                                nPxWidgetID;                                              
	class UPixUIWidget*                                ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetPixUIMaxLayerId_Params
{
	int                                                ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetPixUIMaxDynamicTextureTotalSize_Params
{
	int                                                ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetPixUIMaxDynamicTextureGCSize_Params
{
	int                                                ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetPixUIMaxDynamicTextureGCRate_Params
{
	float                                              ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetMatRootPath_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetMatBasePath_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetMatAsyncLoad_Params
{
	bool                                               ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetJsGCThreshold_Params
{
	int                                                ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetGradientBrushCallFlushCommands_Params
{
	bool                                               ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetFontTypeFaceName_Params
{
	struct FString                                     strFontName;                                              
	EPxFontFaceType                                    ePxFontTypeFace;                                          
	struct FString                                     ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetFontPathByIndex_Params
{
	int                                                nIndex;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetFontPath_Params
{
	struct FString                                     strFontName;                                              
	struct FString                                     strOutFontPath;                                           
	bool                                               ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetFontNameByIndex_Params
{
	int                                                nIndex;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetExtBpCallSupportThrowException_Params
{
	bool                                               ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetDynamicTextureUpdateMode_Params
{
	EPxDynamicTextureUpdateMode                        ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetDynamicTextureFilter_Params
{
	TEnumAsByte<ETextureFilter>                        ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetDynamicLibraryPaths_Params
{
	TArray<struct FString>                             arrayOutPaths;                                            
};


struct UPixUIBPLibrary_PixUI_GetDrawEffectNoPixelSnapping_Params
{
	bool                                               ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetDefaultFontSize_Params
{
	int                                                nOutFontSize;                                             
};


struct UPixUIBPLibrary_PixUI_GetDefaultFont_Params
{
	struct FString                                     strFontName;                                              
};


struct UPixUIBPLibrary_PixUI_GetCoreTickDuration_Params
{
	int                                                ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetCoreLibVersionTagByIndex_Params
{
	int                                                nIndex;                                                   
	int                                                ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetCoreLibCount_Params
{
	int                                                ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetCachePath_Params
{
	struct FString                                     strOutCachePath;                                          
};


struct UPixUIBPLibrary_PixUI_GetAsyncMode_Params
{
	bool                                               ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_GetAsyncBpCallWaitOutTime_Params
{
	float                                              ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_FindByWindowID_Params
{
	int                                                nWindowID;                                                
	class UPixUIWidget*                                ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_DebugInfoSwitch_Params
{
	EPxDebugInfo                                       EPxDebugInfo;                                             
	bool                                               bOpen;                                                    
};


struct UPixUIBPLibrary_PixUI_CreateWidget_Params
{
	class UPixUIWidget*                                ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_CreateViewPortWidget_Params
{
	class UPixUIViewPortWidget*                        ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_CreateViewPortAddToCanvasEx_Params
{
	class UCanvasPanel*                                pParentCanvas;                                            
	class UPixUIViewPortWidget*                        ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_CreateViewPortAddToCanvas_Params
{
	class UCanvasPanel*                                pParentCanvas;                                            
	struct FAnchors                                    Anchors;                                                  
	struct FMargin                                     Margin;                                                   
	class UPixUIViewPortWidget*                        ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_CreateScriptVM_Params
{
	class UPixUIScriptVM*                              ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_CreateAddToCanvasEx_Params
{
	class UCanvasPanel*                                pParentCanvas;                                            
	class UPixUIWidget*                                ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_CreateAddToCanvas_Params
{
	class UCanvasPanel*                                p_ParentCanvas;                                           
	struct FAnchors                                    Anchors;                                                  
	struct FMargin                                     Margin;                                                   
	class UPixUIWidget*                                ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_ClearDynamicLibraryPaths_Params
{
};


struct UPixUIBPLibrary_PixUI_ClearCacheFile_Params
{
};


struct UPixUIBPLibrary_PixUI_CallPixUIAssetGC_Params
{
	int                                                nViewId;                                                  
	bool                                               ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_BePublicCapabilityOpen_Params
{
	EPxPublicCapability                                EPxDebugInfo;                                             
	bool                                               ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_BeDebugInfoOpen_Params
{
	EPxDebugInfo                                       EPxDebugInfo;                                             
	bool                                               ReturnValue;                                              
};


struct UPixUIBPLibrary_PixUI_AddSystemFont_Params
{
	struct FString                                     strFontName;                                              
	struct FString                                     strFontPath;                                              
};


struct UPixUIBPLibrary_PixUI_AddDynamicLibraryPath_Params
{
	struct FString                                     strDynamicLibraryPath;                                    
	bool                                               ReturnValue;                                              
};


struct UPixUIExternalInterface_OnWidgetUnload_Params
{
	class UWidget*                                     pWidget;                                                  
	bool                                               ReturnValue;                                              
};


struct UPixUIExternalInterface_OnWidgetLoad_Params
{
	struct FString                                     strWidgetPath;                                            
	struct FString                                     strWidgetTag;                                             
	class UWidget*                                     ReturnValue;                                              
};


struct UPixUIExternalInterface_OnSlateBrushLoad_Params
{
	struct FString                                     strBrushPath;                                             
	class UPixUIBrushWrapper*                          ReturnValue;                                              
};


struct UPixUIExternalInterface_OnFileLoad_Params
{
	struct FString                                     StrFilePath;                                              
	struct FScriptDelegate                             callDelegate;                                             
	bool                                               ReturnValue;                                              
};


struct UPixUIExternalInterface_OnFileCanLoad_Params
{
	struct FString                                     StrFilePath;                                              
	bool                                               ReturnValue;                                              
};


struct UPixUIInput_OnInputText_Params
{
	struct FString                                     strInsert;                                                
	bool                                               bEndInput;                                                
	bool                                               bLostFocus;                                               
	bool                                               bReplace;                                                 
};


struct UPixUIInput_Get_Params
{
	class UPixUIInput*                                 ReturnValue;                                              
};


struct UPixUIRenderTarget_SetTickIntervalSec_Params
{
	float                                              fTickIntervalSec;                                         
};


struct UPixUIRenderTarget_SetExternalRenderTarget2D_Params
{
	class UTextureRenderTarget2D*                      pTextureRenderTarget;                                     
};


struct UPixUIRenderTarget_SetBeSupportEventCallNested_Params
{
	bool                                               bSupportEventCallNested;                                  
};


struct UPixUIRenderTarget_SetBeDelayCallMessage_Params
{
	bool                                               bDelayMessage;                                            
};


struct UPixUIRenderTarget_SendPxMessage_Params
{
	struct FString                                     strMessage;                                               
	struct FString                                     ReturnValue;                                              
};


struct UPixUIRenderTarget_ReSize_Params
{
	int                                                nNewWidth;                                                
	int                                                nNewHeight;                                               
};


struct UPixUIRenderTarget_ReScale_Params
{
	float                                              fScale;                                                   
};


struct UPixUIRenderTarget_PostPxMessage_Params
{
	struct FString                                     strMessage;                                               
	int                                                ReturnValue;                                              
};


struct UPixUIRenderTarget_OnExternalTouchEvent_Params
{
	struct FVector2D                                   v2dPosTouch;                                              
	int                                                nPointerIndex;                                            
	EPxTouchType                                       ETouchType;                                               
};


struct UPixUIRenderTarget_OnExternalTextInput_Params
{
	struct FString                                     strNewInput;                                              
	bool                                               beEndInput;                                               
	bool                                               beLostFocus;                                              
	bool                                               beReplace;                                                
};


struct UPixUIRenderTarget_OnExternalMouseEvent_Params
{
	struct FVector2D                                   v2dPosMouse;                                              
	struct FVector2D                                   v2dOffsetWheel;                                           
	EPxMouseType                                       eMouseType;                                               
	EPxKeyEventType                                    uEvent;                                                   
};


struct UPixUIRenderTarget_OnExternalKeyBoardEvent_Params
{
	struct FKeyEvent                                   KeyEvent;                                                 
	EPxKeyEventType                                    eEventType;                                               
};


struct UPixUIRenderTarget_OnExternalGamepadEvent_Params
{
	struct FKeyEvent                                   KeyEvent;                                                 
	EPxKeyEventType                                    eEventType;                                               
};


struct UPixUIRenderTarget_OnExternalGamepadAnalogEvent_Params
{
	struct FAnalogInputEvent                           AnalogInputEvent;                                         
	EPxKeyEventType                                    eEventType;                                               
};


struct UPixUIRenderTarget_LoadPageFromUrl_Params
{
	struct FString                                     strUrl;                                                   
	int                                                ReturnValue;                                              
};


struct UPixUIRenderTarget_LoadPageFromGameAssetPath_Params
{
	struct FString                                     strAssetPath;                                             
	int                                                ReturnValue;                                              
};


struct UPixUIRenderTarget_LoadPageFromData_Params
{
	TArray<unsigned char>                              arrayData;                                                
	struct FString                                     strBasePath;                                              
	int                                                ReturnValue;                                              
};


struct UPixUIRenderTarget_IsPxViewValid_Params
{
	bool                                               ReturnValue;                                              
};


struct UPixUIRenderTarget_HistoryGo_Params
{
	int                                                nStep;                                                    
};


struct UPixUIRenderTarget_GetRenderTarget2DWidth_Params
{
	int                                                ReturnValue;                                              
};


struct UPixUIRenderTarget_GetRenderTarget2DHeight_Params
{
	int                                                ReturnValue;                                              
};


struct UPixUIRenderTarget_GetRenderTarget2D_Params
{
	class UTextureRenderTarget2D*                      ReturnValue;                                              
};


struct UPixUIRenderTarget_GetCoreLibVersion_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UPixUIRenderTarget_DestroyPage_Params
{
};


struct UPixUIRenderTarget_Create_Params
{
	int                                                nWidth;                                                   
	int                                                nHeight;                                                  
	float                                              fScale;                                                   
	bool                                               bAsyncModel;                                              
	bool                                               bCoreLibAsyncModel;                                       
	bool                                               bGammaSpace;                                              
	bool                                               bAntiAliasing;                                            
	int                                                ReturnValue;                                              
};


struct UPixUIRenderTarget_ClosePage_Params
{
};


struct UPixUIScriptVM_SetTickIntervalSec_Params
{
	float                                              fTickIntervalSec;                                         
};


struct UPixUIScriptVM_SetScriptGlobalString_Params
{
	struct FString                                     StrName;                                                  
	struct FString                                     strKey;                                                   
	struct FString                                     strValue;                                                 
};


struct UPixUIScriptVM_SetScriptGlobalNumber_Params
{
	struct FString                                     StrName;                                                  
	struct FString                                     strKey;                                                   
	float                                              fValue;                                                   
};


struct UPixUIScriptVM_SetScriptGlobalBoolean_Params
{
	struct FString                                     StrName;                                                  
	struct FString                                     strKey;                                                   
	bool                                               bValue;                                                   
};


struct UPixUIScriptVM_SetJsGCThreshold_Params
{
	int                                                nGCThreshold;                                             
};


struct UPixUIScriptVM_SetBeSupportEventCallNested_Params
{
	bool                                               bSupportEventCallNested;                                  
};


struct UPixUIScriptVM_SetBeDelayCallMessage_Params
{
	bool                                               bDelayMessage;                                            
};


struct UPixUIScriptVM_SendPxMessage_Params
{
	struct FString                                     strMessage;                                               
	int                                                nWaitMS;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UPixUIScriptVM_PostPxMessage_Params
{
	struct FString                                     strMessage;                                               
	int                                                nWaitMS;                                                  
	int                                                ReturnValue;                                              
};


struct UPixUIScriptVM_LoadUrl_Params
{
	struct FString                                     strUrl;                                                   
	int                                                nWaitMS;                                                  
	int                                                ReturnValue;                                              
};


struct UPixUIScriptVM_IsValid_Params
{
	bool                                               ReturnValue;                                              
};


struct UPixUIScriptVM_IsPxVmValid_Params
{
	bool                                               ReturnValue;                                              
};


struct UPixUIScriptVM_GetScriptGlobalString_Params
{
	struct FString                                     StrName;                                                  
	struct FString                                     strKey;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UPixUIScriptVM_GetScriptGlobalNumber_Params
{
	struct FString                                     StrName;                                                  
	struct FString                                     strKey;                                                   
	float                                              ReturnValue;                                              
};


struct UPixUIScriptVM_GetScriptGlobalBoolean_Params
{
	struct FString                                     StrName;                                                  
	struct FString                                     strKey;                                                   
	bool                                               ReturnValue;                                              
};


struct UPixUIScriptVM_GetPxVMId_Params
{
	int                                                ReturnValue;                                              
};


struct UPixUIScriptVM_GetCoreLibVersion_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UPixUIScriptVM_DoFile_Params
{
	struct FString                                     StrFilePath;                                              
	int                                                nWaitMS;                                                  
	int                                                ReturnValue;                                              
};


struct UPixUIScriptVM_DoBufferByAssetPath_Params
{
	struct FString                                     strAssetPath;                                             
	struct FString                                     StrName;                                                  
	struct FString                                     strModuleName;                                            
	int                                                nWaitMS;                                                  
	int                                                ReturnValue;                                              
};


struct UPixUIScriptVM_DoBuffer_Params
{
	TArray<unsigned char>                              arrayData;                                                
	struct FString                                     strBasePath;                                              
	struct FString                                     StrName;                                                  
	struct FString                                     strModuleName;                                            
	int                                                nWaitMS;                                                  
	int                                                ReturnValue;                                              
};


struct UPixUIScriptVM_DestroyVM_Params
{
	int                                                nWaitMS;                                                  
	int                                                ReturnValue;                                              
};


struct UPixUIScriptVM_CreateScriptGlobal_Params
{
	struct FString                                     StrName;                                                  
};


struct UPixUIScriptVM_CreateEx_Params
{
	bool                                               bAsyncMode;                                               
	bool                                               bCoreLibAsyncMode;                                        
	int                                                nWaitMS;                                                  
	int                                                ReturnValue;                                              
};


struct UPixUIScriptVM_Create_Params
{
	bool                                               bAsyncMode;                                               
	int                                                nWaitMS;                                                  
	int                                                ReturnValue;                                              
};


struct UPixUIScriptVM_CloseVM_Params
{
	int                                                nWaitMS;                                                  
	int                                                ReturnValue;                                              
};


struct UPixUIViewPortWidget_SendPxMessage_Params
{
	struct FString                                     strMessage;                                               
	struct FString                                     ReturnValue;                                              
};


struct UPixUIViewPortWidget_PostPxViewMessage_Params
{
	struct FString                                     strMessage;                                               
};


struct UPixUIViewPortWidget_PostPxMessage_Params
{
	struct FString                                     strMessage;                                               
	int                                                ReturnValue;                                              
};


struct UPixUIViewPortWidget_OnPixUITransformDelegate_Params
{
	EPxWidgetTransformType                             EPxWidgetTransformType;                                   
	int                                                nParam1;                                                  
	int                                                nParam2;                                                  
};


struct UPixUIViewPortWidget_OnPixUIPromptDelegate_Params
{
	struct FString                                     strTip;                                                   
	struct FString                                     strDefault;                                               
	struct FString                                     ReturnValue;                                              
};


struct UPixUIViewPortWidget_OnPixUIOpenDelegate_Params
{
	struct FString                                     strUrl;                                                   
	struct FString                                     StrName;                                                  
	struct FString                                     strFeatures;                                              
	bool                                               bReplace;                                                 
	int                                                ReturnValue;                                              
};


struct UPixUIViewPortWidget_OnPixUIConfirmDelegate_Params
{
	struct FString                                     strConfirmMsg;                                            
	bool                                               ReturnValue;                                              
};


struct UPixUIViewPortWidget_LoadPxViewFromUrl_Params
{
	struct FString                                     strUrl;                                                   
	int                                                ReturnValue;                                              
};


struct UPixUIViewPortWidget_LoadPxViewFromGameAssetPath_Params
{
	struct FString                                     strAssetPath;                                             
	int                                                ReturnValue;                                              
};


struct UPixUIViewPortWidget_LoadPxViewFromData_Params
{
	TArray<unsigned char>                              arrayData;                                                
	struct FString                                     strRootPath;                                              
	int                                                ReturnValue;                                              
};


struct UPixUIViewPortWidget_LoadPageFromUrl_Params
{
	struct FString                                     strUrl;                                                   
	int                                                ReturnValue;                                              
};


struct UPixUIViewPortWidget_LoadPageFromGameAssetPath_Params
{
	struct FString                                     strAssetPath;                                             
	int                                                ReturnValue;                                              
};


struct UPixUIViewPortWidget_LoadPageFromData_Params
{
	TArray<unsigned char>                              arrayData;                                                
	struct FString                                     strRootPath;                                              
	int                                                ReturnValue;                                              
};


struct UPixUIViewPortWidget_GetPixUIWidget_Params
{
	class UPixUIWidget*                                ReturnValue;                                              
};


struct UPixUIViewPortWidget_ClosePxView_Params
{
};


struct UPixUIViewPortWidget_ClosePage_Params
{
};


struct UPixUIWidget_ShowNextDrawItem_Params
{
};


struct UPixUIWidget_ShowNextDrawBatch_Params
{
};


struct UPixUIWidget_ShowAllDrawItem_Params
{
};


struct UPixUIWidget_ShowAllDrawBatch_Params
{
};


struct UPixUIWidget_SetTickMode_Params
{
	EPxTickMode                                        eTickMode;                                                
};


struct UPixUIWidget_SetTickIntervalSec_Params
{
	float                                              fTickIntervalSec;                                         
};


struct UPixUIWidget_SetScriptGlobalString_Params
{
	struct FString                                     StrName;                                                  
	struct FString                                     strKey;                                                   
	struct FString                                     strValue;                                                 
};


struct UPixUIWidget_SetScriptGlobalNumber_Params
{
	struct FString                                     StrName;                                                  
	struct FString                                     strKey;                                                   
	float                                              fValue;                                                   
};


struct UPixUIWidget_SetScriptGlobalBoolean_Params
{
	struct FString                                     StrName;                                                  
	struct FString                                     strKey;                                                   
	bool                                               bValue;                                                   
};


struct UPixUIWidget_SetJsGCThreshold_Params
{
	int                                                nGCThreshold;                                             
};


struct UPixUIWidget_SetBeSupportEventCallNested_Params
{
	bool                                               bSupportEventCallNested;                                  
};


struct UPixUIWidget_SetBeDelayCallMessage_Params
{
	bool                                               bDelayMessage;                                            
};


struct UPixUIWidget_SetBackgroundBlur_Params
{
	float                                              fBlurStrength;                                            
};


struct UPixUIWidget_SetAutoTransform_Params
{
	bool                                               bAutoTransform;                                           
};


struct UPixUIWidget_SendPxMessage_Params
{
	struct FString                                     strMessage;                                               
	struct FString                                     ReturnValue;                                              
};


struct UPixUIWidget_PostPxMessage_Params
{
	struct FString                                     strMessage;                                               
	int                                                ReturnValue;                                              
};


struct UPixUIWidget_OpenPageFromUrl_Params
{
	struct FString                                     strUrl;                                                   
	int                                                ReturnValue;                                              
};


struct UPixUIWidget_OpenPageFromGameAssetPath_Params
{
	struct FString                                     strAssetPath;                                             
	int                                                ReturnValue;                                              
};


struct UPixUIWidget_OpenPageFromData_Params
{
	TArray<unsigned char>                              arrayData;                                                
	struct FString                                     strBasePath;                                              
	int                                                ReturnValue;                                              
};


struct UPixUIWidget_OnExternalTouchEvent_Params
{
	struct FVector2D                                   v2dPosTouch;                                              
	int                                                nPointerIndex;                                            
	EPxTouchType                                       ETouchType;                                               
};


struct UPixUIWidget_OnExternalTextInput_Params
{
	struct FString                                     strNewInput;                                              
	bool                                               beEndInput;                                               
	bool                                               beLostFocus;                                              
	bool                                               beReplace;                                                
};


struct UPixUIWidget_OnExternalMouseEvent_Params
{
	struct FVector2D                                   v2dPosMouse;                                              
	struct FVector2D                                   v2dOffsetWheel;                                           
	EPxMouseType                                       eMouseType;                                               
	EPxKeyEventType                                    uEvent;                                                   
};


struct UPixUIWidget_OnExternalKeyBoardEvent_Params
{
	struct FKeyEvent                                   KeyEvent;                                                 
	EPxKeyEventType                                    eEventType;                                               
};


struct UPixUIWidget_OnExternalGamepadEvent_Params
{
	struct FKeyEvent                                   KeyEvent;                                                 
	EPxKeyEventType                                    eEventType;                                               
};


struct UPixUIWidget_OnExternalGamepadAnalogEvent_Params
{
	struct FAnalogInputEvent                           AnalogInputEvent;                                         
	EPxKeyEventType                                    eEventType;                                               
};


struct UPixUIWidget_LoadPageFromUrl_Params
{
	struct FString                                     strUrl;                                                   
	int                                                ReturnValue;                                              
};


struct UPixUIWidget_LoadPageFromGameAssetPath_Params
{
	struct FString                                     strAssetPath;                                             
	int                                                ReturnValue;                                              
};


struct UPixUIWidget_LoadPageFromData_Params
{
	TArray<unsigned char>                              arrayData;                                                
	struct FString                                     strBasePath;                                              
	int                                                ReturnValue;                                              
};


struct UPixUIWidget_IsPxViewValid_Params
{
	bool                                               ReturnValue;                                              
};


struct UPixUIWidget_HistoryGo_Params
{
	int                                                nStep;                                                    
};


struct UPixUIWidget_GetSlotObjectByTagId_Params
{
	struct FString                                     strSlotTagId;                                             
	class UObject*                                     ReturnValue;                                              
};


struct UPixUIWidget_GetScriptGlobalString_Params
{
	struct FString                                     StrName;                                                  
	struct FString                                     strKey;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UPixUIWidget_GetScriptGlobalNumber_Params
{
	struct FString                                     StrName;                                                  
	struct FString                                     strKey;                                                   
	float                                              ReturnValue;                                              
};


struct UPixUIWidget_GetScriptGlobalBoolean_Params
{
	struct FString                                     StrName;                                                  
	struct FString                                     strKey;                                                   
	bool                                               ReturnValue;                                              
};


struct UPixUIWidget_GetPxWinId_Params
{
	int                                                ReturnValue;                                              
};


struct UPixUIWidget_GetCtrlWidget_Params
{
	class UWidget*                                     ReturnValue;                                              
};


struct UPixUIWidget_GetCoreLibVersion_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UPixUIWidget_DestroyPage_Params
{
};


struct UPixUIWidget_CreateScriptGlobal_Params
{
	struct FString                                     StrName;                                                  
};


struct UPixUIWidget_ClosePage_Params
{
};


struct UPxCustomDelegate_OnPxCustomDelegate_Params
{
};


struct UPxCustomDelegate_MakeCustomDelegate_Params
{
	struct FString                                     strCustomDelegateName;                                    
	class UPxCustomDelegate*                           ReturnValue;                                              
};


struct UPxCustomInterfaceDyImp_MakeCustomInterface_Params
{
	struct FString                                     strCustomInterfaceName;                                   
	class UClass*                                      pOverrideBaseClass;                                       
	class UPxCustomInterfaceDyImp*                     ReturnValue;                                              
};


struct UPxFileLoad_OnFileLoad_Params
{
	TArray<unsigned char>                              arrayFileData;                                            
};

}

