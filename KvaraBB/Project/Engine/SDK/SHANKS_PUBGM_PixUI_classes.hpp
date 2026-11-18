#pragma once


 
namespace SDK
{






class UPixUIBrushWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIBrushWrapper");
		return pStaticClass;
	}

};




class UPixUIBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIBPLibrary");
		return pStaticClass;
	}


	static struct FString PixUI_Version();
	static void PixUI_Tick(float fDeltaTime);
	static bool PixUI_StartupEx(const struct FString& strCachePathForWrite, bool bSupportAsyncModel);
	static bool PixUI_Startup(const struct FString& strCachePathForWrite);
	static bool PixUI_Shutdown();
	static void PixUI_SetTickIntervalSec(float fTickIntervalSec);
	static void PixUI_SetSupportTextShape(bool beSupportTextShape);
	static void PixUI_SetSupportEngineFont(bool bSupportEngineFont);
	static void PixUI_SetSpecialCapability(const struct FString& strCapability);
	static void PixUI_SetSecretKey(const struct FString& strSecretKey);
	static void PixUI_SetPxLibDefaultVersionTag(int nNewPxLibVersionTag);
	static void PixUI_SetPixUIMaxLayerId(int nMaxLayerId);
	static void PixUI_SetPixUIMaxDynamicTextureTotalSize(int nMaxDynamicTextureTotalSize);
	static void PixUI_SetPixUIMaxDynamicTextureGCSize(int nMaxDynamicTextureGCSize);
	static void PixUI_SetPixUIMaxDynamicTextureGCRate(float fMaxGCRate);
	static void PixUI_SetMobileUseTouchEvent(bool bUseTouchEvent);
	static void PixUI_SetMatRootPath(const struct FString& strMatRootPath);
	static void PixUI_SetMatBasePath(const struct FString& strMatBasePath);
	static void PixUI_SetMatAsyncLoad(bool bMatAsyncLoad);
	static void PixUI_SetJsGCThreshold(int nGCThreshold);
	static void PixUI_SetGradientBrushCallFlushCommands(bool beGradientBrushCallFlushCommands);
	static void PixUI_SetFontTypeFaceName(const struct FString& strFontName, EPxFontFaceType ePxFontTypeFace, const struct FString& strFontTypeFaceName);
	static void PixUI_SetExternalInterface(const TScriptInterface<class UPixUIExternalInterface>& scriptInterfaceExternal);
	static void PixUI_SetExtBpCallSupportThrowException(bool bSupportThrowException);
	static void PixUI_SetDynamicTextureUpdateMode(EPxDynamicTextureUpdateMode eUpdateMode);
	static void PixUI_SetDynamicTextureFilter(TEnumAsByte<ETextureFilter> eTextureFilter);
	static bool PixUI_SetDynamicLibraryPath(struct FString* strDynamicLibraryPath);
	static void PixUI_SetDynamicFixFontSize(bool bOpenDynamicFix);
	static void PixUI_SetDrawEffectNoPixelSnapping(bool bNoPixelSnapping);
	static void PixUI_SetDefaultFontSize(int nFontSize);
	static void PixUI_SetDefaultFont(const struct FString& strFontName);
	static void PixUI_SetCoreTickDuration(int nDurationCount);
	static bool PixUI_SetCoreLibValidByTag(int nVersionTag, bool bValid);
	static void PixUI_SetAutoTick(bool bAutoTick);
	static void PixUI_SetAsyncMode(bool beRunAsyncMode);
	static void PixUI_SetAsyncBpCallWaitOutTime(float fTimeOutSecond);
	static bool PixUI_SetAndroidDyLibSearchEnvPath(const struct FString& strDyLibSearchEnvPath);
	static int PixUI_RHIShaderPlatform();
	static int PixUI_RHIShaderLevel();
	static void PixUI_RemoveSystemFont(const struct FString& strFontName);
	static bool PixUI_RemoveDynamicLibraryPath(const struct FString& strDynamicLibraryPath);
	static void PixUI_PublicCapabilitySwitch(EPxPublicCapability EPxDebugInfo, bool bOpen);
	static void PixUI_PrintProfilerInfo();
	static float PixUI_PlatformOSVersionCode();
	static struct FString PixUI_PlatformOSVersion();
	static int PixUI_PlatformCode();
	static struct FString PixUI_Platform();
	static bool PixUI_IsSupportTextShape();
	static bool PixUI_IsStartUp();
	static bool PixUI_IsRHIShaderVulkan();
	static bool PixUI_IsRHIShaderOpenGLES2();
	static bool PixUI_IsRHIShaderOpenGL();
	static bool PixUI_IsRHIShaderMetal();
	static bool PixUI_IsRHIShaderDX();
	static bool PixUI_IsOsBit64();
	static bool PixUI_IsOsBit32();
	static bool PixUI_IsMobileUseTouchEvent();
	static bool PixUI_IsDynamicFixFontSize();
	static bool PixUI_IsAutoTick();
	static class UObject* PixUI_GetWindowSlotObject(int nWindowID, const struct FString& strTagId);
	static int PixUI_GetTotalFontCount();
	static float PixUI_GetTickIntervalSec();
	static void PixUI_GetSupportPxLibVersionTagArray(TArray<int>* arraySupportPxLibVersionTag);
	static bool PixUI_GetSupportEngineFont();
	static class UPixUIScriptVM* PixUI_GetScriptVMByID(int nScriptVmId);
	static int PixUI_GetPxLibDefaultVersionTag();
	static class UObject* PixUI_GetPixUIWidgetSlotObject(int nPxWidgetID, const struct FString& strSlotTagId);
	static class UPixUIWidget* PixUI_GetPixUIWidgetByID(int nPxWidgetID);
	static int PixUI_GetPixUIMaxLayerId();
	static int PixUI_GetPixUIMaxDynamicTextureTotalSize();
	static int PixUI_GetPixUIMaxDynamicTextureGCSize();
	static float PixUI_GetPixUIMaxDynamicTextureGCRate();
	static struct FString PixUI_GetMatRootPath();
	static struct FString PixUI_GetMatBasePath();
	static bool PixUI_GetMatAsyncLoad();
	static int PixUI_GetJsGCThreshold();
	static bool PixUI_GetGradientBrushCallFlushCommands();
	static struct FString PixUI_GetFontTypeFaceName(const struct FString& strFontName, EPxFontFaceType ePxFontTypeFace);
	static struct FString PixUI_GetFontPathByIndex(int nIndex);
	static bool PixUI_GetFontPath(const struct FString& strFontName, struct FString* strOutFontPath);
	static struct FString PixUI_GetFontNameByIndex(int nIndex);
	static bool PixUI_GetExtBpCallSupportThrowException();
	static EPxDynamicTextureUpdateMode PixUI_GetDynamicTextureUpdateMode();
	static TEnumAsByte<ETextureFilter> PixUI_GetDynamicTextureFilter();
	static void PixUI_GetDynamicLibraryPaths(TArray<struct FString>* arrayOutPaths);
	static bool PixUI_GetDrawEffectNoPixelSnapping();
	static void PixUI_GetDefaultFontSize(int* nOutFontSize);
	static void PixUI_GetDefaultFont(struct FString* strFontName);
	static int PixUI_GetCoreTickDuration();
	static int PixUI_GetCoreLibVersionTagByIndex(int nIndex);
	static int PixUI_GetCoreLibCount();
	static void PixUI_GetCachePath(struct FString* strOutCachePath);
	static bool PixUI_GetAsyncMode();
	static float PixUI_GetAsyncBpCallWaitOutTime();
	static class UPixUIWidget* PixUI_FindByWindowID(int nWindowID);
	static void PixUI_DebugInfoSwitch(EPxDebugInfo EPxDebugInfo, bool bOpen);
	static class UPixUIWidget* PixUI_CreateWidget();
	static class UPixUIViewPortWidget* PixUI_CreateViewPortWidget();
	static class UPixUIViewPortWidget* PixUI_CreateViewPortAddToCanvasEx(class UCanvasPanel* pParentCanvas);
	static class UPixUIViewPortWidget* PixUI_CreateViewPortAddToCanvas(class UCanvasPanel* pParentCanvas, const struct FAnchors& Anchors, const struct FMargin& Margin);
	static class UPixUIScriptVM* PixUI_CreateScriptVM();
	static class UPixUIWidget* PixUI_CreateAddToCanvasEx(class UCanvasPanel* pParentCanvas);
	static class UPixUIWidget* PixUI_CreateAddToCanvas(class UCanvasPanel* p_ParentCanvas, const struct FAnchors& Anchors, const struct FMargin& Margin);
	static void PixUI_ClearDynamicLibraryPaths();
	static void PixUI_ClearCacheFile();
	static bool PixUI_CallPixUIAssetGC(int nViewId);
	static bool PixUI_BePublicCapabilityOpen(EPxPublicCapability EPxDebugInfo);
	static bool PixUI_BeDebugInfoOpen(EPxDebugInfo EPxDebugInfo);
	static void PixUI_AddSystemFont(const struct FString& strFontName, const struct FString& strFontPath);
	static bool PixUI_AddDynamicLibraryPath(const struct FString& strDynamicLibraryPath);
};




class UPixUIExternalInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIExternalInterface");
		return pStaticClass;
	}


	bool OnWidgetUnload(class UWidget* pWidget);
	class UWidget* OnWidgetLoad(const struct FString& strWidgetPath, const struct FString& strWidgetTag);
	class UPixUIBrushWrapper* OnSlateBrushLoad(const struct FString& strBrushPath);
	bool OnFileLoad(const struct FString& StrFilePath, const struct FScriptDelegate& callDelegate);
	bool OnFileCanLoad(const struct FString& StrFilePath);
};




class UPixUIInput : public UObject
{
public:
	struct FScriptDelegate                             DelegateActivateInput;                                    
	struct FScriptDelegate                             DelegateDeactivateInput;                                  
	unsigned char                                      UnknownData00[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIInput");
		return pStaticClass;
	}


	static void OnInputText(const struct FString& strInsert, bool bEndInput, bool bLostFocus, bool bReplace);
	static class UPixUIInput* Get();
};




class UPixUIRenderTarget : public UObject
{
public:
	struct FScriptMulticastDelegate                    DelegateOnCreate;                                         
	struct FScriptMulticastDelegate                    DelegateOnClose;                                          
	struct FScriptMulticastDelegate                    DelegateOnDestroy;                                        
	struct FScriptMulticastDelegate                    DelegateOnLoaded;                                         
	struct FScriptMulticastDelegate                    DelegateOnScriptStateInit;                                
	struct FScriptMulticastDelegate                    DelegateOnScriptStateDone;                                
	struct FScriptMulticastDelegate                    DelegateOnInternalError;                                  
	struct FScriptDelegate                             DelegateOnExternalOpen;                                   
	struct FScriptMulticastDelegate                    DelegateOnExternalClose;                                  
	struct FScriptMulticastDelegate                    DelegateOnMessage;                                        
	struct FScriptMulticastDelegate                    DelegateOnAlert;                                          
	struct FScriptDelegate                             DelegateOnConfirm;                                        
	struct FScriptDelegate                             DelegateOnPrompt;                                         
	struct FScriptMulticastDelegate                    DelegateOnAppForeground;                                  
	struct FScriptMulticastDelegate                    DelegateOnAppBackground;                                  
	int                                                pxLibVersionTag;                                          
	unsigned char                                      UnknownData00[0x4C];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIRenderTarget");
		return pStaticClass;
	}


	void SetTickIntervalSec(float fTickIntervalSec);
	void SetExternalRenderTarget2D(class UTextureRenderTarget2D* pTextureRenderTarget);
	void SetBeSupportEventCallNested(bool bSupportEventCallNested);
	void SetBeDelayCallMessage(bool bDelayMessage);
	struct FString SendPxMessage(const struct FString& strMessage);
	void ReSize(int nNewWidth, int nNewHeight);
	void ReScale(float fScale);
	int PostPxMessage(const struct FString& strMessage);
	void OnExternalTouchEvent(const struct FVector2D& v2dPosTouch, int nPointerIndex, EPxTouchType ETouchType);
	void OnExternalTextInput(const struct FString& strNewInput, bool beEndInput, bool beLostFocus, bool beReplace);
	void OnExternalMouseEvent(const struct FVector2D& v2dPosMouse, const struct FVector2D& v2dOffsetWheel, EPxMouseType eMouseType, EPxKeyEventType uEvent);
	void OnExternalKeyBoardEvent(const struct FKeyEvent& KeyEvent, EPxKeyEventType eEventType);
	void OnExternalGamepadEvent(const struct FKeyEvent& KeyEvent, EPxKeyEventType eEventType);
	void OnExternalGamepadAnalogEvent(const struct FAnalogInputEvent& AnalogInputEvent, EPxKeyEventType eEventType);
	int LoadPageFromUrl(const struct FString& strUrl);
	int LoadPageFromGameAssetPath(const struct FString& strAssetPath);
	int LoadPageFromData(const struct FString& strBasePath, TArray<unsigned char>* arrayData);
	bool IsPxViewValid();
	void HistoryGo(int nStep);
	int GetRenderTarget2DWidth();
	int GetRenderTarget2DHeight();
	class UTextureRenderTarget2D* GetRenderTarget2D();
	struct FString GetCoreLibVersion();
	void DestroyPage();
	int Create(int nWidth, int nHeight, float fScale, bool bAsyncModel, bool bCoreLibAsyncModel, bool bGammaSpace, bool bAntiAliasing);
	void ClosePage();
};




class UPixUIScriptVM : public UObject
{
public:
	struct FScriptMulticastDelegate                    DelegateOnCreate;                                         
	struct FScriptMulticastDelegate                    DelegateOnClose;                                          
	struct FScriptMulticastDelegate                    DelegateOnDestroy;                                        
	struct FScriptMulticastDelegate                    DelegateOnLoaded;                                         
	struct FScriptMulticastDelegate                    DelegateOnScriptStateInit;                                
	struct FScriptMulticastDelegate                    DelegateOnScriptStateDone;                                
	struct FScriptMulticastDelegate                    DelegateOnInternalError;                                  
	struct FScriptDelegate                             DelegateOnExternalOpen;                                   
	struct FScriptMulticastDelegate                    DelegateOnExternalClose;                                  
	struct FScriptMulticastDelegate                    DelegateOnMessage;                                        
	struct FScriptMulticastDelegate                    DelegateOnAppForeground;                                  
	struct FScriptMulticastDelegate                    DelegateOnAppBackground;                                  
	int                                                pxLibVersionTag;                                          
	unsigned char                                      UnknownData00[0x24];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIScriptVM");
		return pStaticClass;
	}


	void SetTickIntervalSec(float fTickIntervalSec);
	void SetScriptGlobalString(const struct FString& StrName, const struct FString& strKey, const struct FString& strValue);
	void SetScriptGlobalNumber(const struct FString& StrName, const struct FString& strKey, float fValue);
	void SetScriptGlobalBoolean(const struct FString& StrName, const struct FString& strKey, bool bValue);
	void SetJsGCThreshold(int nGCThreshold);
	void SetBeSupportEventCallNested(bool bSupportEventCallNested);
	void SetBeDelayCallMessage(bool bDelayMessage);
	struct FString SendPxMessage(const struct FString& strMessage, int nWaitMS);
	int PostPxMessage(const struct FString& strMessage, int nWaitMS);
	int LoadUrl(const struct FString& strUrl, int nWaitMS);
	bool IsValid();
	bool IsPxVmValid();
	struct FString GetScriptGlobalString(const struct FString& StrName, const struct FString& strKey);
	float GetScriptGlobalNumber(const struct FString& StrName, const struct FString& strKey);
	bool GetScriptGlobalBoolean(const struct FString& StrName, const struct FString& strKey);
	int GetPxVMId();
	struct FString GetCoreLibVersion();
	int DoFile(const struct FString& StrFilePath, int nWaitMS);
	int DoBufferByAssetPath(const struct FString& strAssetPath, const struct FString& StrName, const struct FString& strModuleName, int nWaitMS);
	int DoBuffer(TArray<unsigned char> arrayData, const struct FString& strBasePath, const struct FString& StrName, const struct FString& strModuleName, int nWaitMS);
	int DestroyVM(int nWaitMS);
	void CreateScriptGlobal(const struct FString& StrName);
	int CreateEx(bool bAsyncMode, bool bCoreLibAsyncMode, int nWaitMS);
	int Create(bool bAsyncMode, int nWaitMS);
	int CloseVM(int nWaitMS);
};




class UPixUIViewPortWidget : public UUserWidget
{
public:
	struct FScriptDelegate                             PixUIWidgetOpenDelegate;                                  
	struct FScriptDelegate                             PixUIWidgetConfirmDelegate;                               
	struct FScriptDelegate                             PixUIWidgetPromptDelegate;                                
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIViewPortWidget");
		return pStaticClass;
	}


	struct FString SendPxMessage(const struct FString& strMessage);
	void PostPxViewMessage(const struct FString& strMessage);
	int PostPxMessage(const struct FString& strMessage);
	void OnPixUITransformDelegate(EPxWidgetTransformType EPxWidgetTransformType, int nParam1, int nParam2);
	struct FString OnPixUIPromptDelegate(const struct FString& strTip, const struct FString& strDefault);
	int OnPixUIOpenDelegate(const struct FString& strUrl, const struct FString& StrName, const struct FString& strFeatures, bool bReplace);
	bool OnPixUIConfirmDelegate(const struct FString& strConfirmMsg);
	int LoadPxViewFromUrl(const struct FString& strUrl);
	int LoadPxViewFromGameAssetPath(const struct FString& strAssetPath);
	int LoadPxViewFromData(const struct FString& strRootPath, TArray<unsigned char>* arrayData);
	int LoadPageFromUrl(const struct FString& strUrl);
	int LoadPageFromGameAssetPath(const struct FString& strAssetPath);
	int LoadPageFromData(const struct FString& strRootPath, TArray<unsigned char>* arrayData);
	class UPixUIWidget* GetPixUIWidget();
	void ClosePxView();
	void ClosePage();
};




class UPixUIWidget : public UCanvasPanel
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FScriptMulticastDelegate                    DelegateOnCreate;                                         
	struct FScriptMulticastDelegate                    DelegateOnClose;                                          
	struct FScriptMulticastDelegate                    DelegateOnDestroy;                                        
	struct FScriptMulticastDelegate                    DelegateOnLoaded;                                         
	struct FScriptMulticastDelegate                    DelegateOnScriptStateInit;                                
	struct FScriptMulticastDelegate                    DelegateOnScriptStateDone;                                
	struct FScriptMulticastDelegate                    DelegateOnInternalError;                                  
	struct FScriptDelegate                             DelegateOnExternalOpen;                                   
	struct FScriptMulticastDelegate                    DelegateOnExternalClose;                                  
	struct FScriptMulticastDelegate                    DelegateOnMessage;                                        
	struct FScriptMulticastDelegate                    DelegateOnAlert;                                          
	struct FScriptDelegate                             DelegateOnConfirm;                                        
	struct FScriptDelegate                             DelegateOnPrompt;                                         
	struct FScriptMulticastDelegate                    DelegateOnTransform;                                      
	struct FScriptMulticastDelegate                    DelegateOnAppForeground;                                  
	struct FScriptMulticastDelegate                    DelegateOnAppBackground;                                  
	struct FScriptDelegate                             DelegateHookKeyEvent;                                     
	int                                                pxLibVersionTag;                                          
	bool                                               bIsAsync;                                                 
	bool                                               bIsCoreLibAsync;                                          
	bool                                               bIsForcePaint;                                            
	bool                                               bIsLazyReleaseMode;                                       
	EPxWidgetBatchType                                 BatchType;                                                
	unsigned char                                      UnknownData01[0x7];                                       
	struct FText                                       TextDefaultUrl;                                           
	bool                                               bIsStateNodeMode;                                         
	bool                                               bIsRHIRender;                                             
	bool                                               bIsRHIRenderAntiAliasing;                                 
	bool                                               bPxSlotTopHit;                                            
	bool                                               bIsRetainMode;                                            
	bool                                               bNoPixelSnapping;                                         
	unsigned char                                      UnknownData02[0xE2];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIWidget");
		return pStaticClass;
	}


	void ShowNextDrawItem();
	void ShowNextDrawBatch();
	void ShowAllDrawItem();
	void ShowAllDrawBatch();
	void SetTickMode(EPxTickMode eTickMode);
	void SetTickIntervalSec(float fTickIntervalSec);
	void SetScriptGlobalString(const struct FString& StrName, const struct FString& strKey, const struct FString& strValue);
	void SetScriptGlobalNumber(const struct FString& StrName, const struct FString& strKey, float fValue);
	void SetScriptGlobalBoolean(const struct FString& StrName, const struct FString& strKey, bool bValue);
	void SetJsGCThreshold(int nGCThreshold);
	void SetBeSupportEventCallNested(bool bSupportEventCallNested);
	void SetBeDelayCallMessage(bool bDelayMessage);
	void SetBackgroundBlur(float fBlurStrength);
	void SetAutoTransform(bool bAutoTransform);
	struct FString SendPxMessage(const struct FString& strMessage);
	int PostPxMessage(const struct FString& strMessage);
	int OpenPageFromUrl(const struct FString& strUrl);
	int OpenPageFromGameAssetPath(const struct FString& strAssetPath);
	int OpenPageFromData(const struct FString& strBasePath, TArray<unsigned char>* arrayData);
	void OnExternalTouchEvent(const struct FVector2D& v2dPosTouch, int nPointerIndex, EPxTouchType ETouchType);
	void OnExternalTextInput(const struct FString& strNewInput, bool beEndInput, bool beLostFocus, bool beReplace);
	void OnExternalMouseEvent(const struct FVector2D& v2dPosMouse, const struct FVector2D& v2dOffsetWheel, EPxMouseType eMouseType, EPxKeyEventType uEvent);
	void OnExternalKeyBoardEvent(const struct FKeyEvent& KeyEvent, EPxKeyEventType eEventType);
	void OnExternalGamepadEvent(const struct FKeyEvent& KeyEvent, EPxKeyEventType eEventType);
	void OnExternalGamepadAnalogEvent(const struct FAnalogInputEvent& AnalogInputEvent, EPxKeyEventType eEventType);
	int LoadPageFromUrl(const struct FString& strUrl);
	int LoadPageFromGameAssetPath(const struct FString& strAssetPath);
	int LoadPageFromData(const struct FString& strBasePath, TArray<unsigned char>* arrayData);
	bool IsPxViewValid();
	void HistoryGo(int nStep);
	class UObject* GetSlotObjectByTagId(const struct FString& strSlotTagId);
	struct FString GetScriptGlobalString(const struct FString& StrName, const struct FString& strKey);
	float GetScriptGlobalNumber(const struct FString& StrName, const struct FString& strKey);
	bool GetScriptGlobalBoolean(const struct FString& StrName, const struct FString& strKey);
	int GetPxWinId();
	class UWidget* GetCtrlWidget();
	struct FString GetCoreLibVersion();
	void DestroyPage();
	void CreateScriptGlobal(const struct FString& StrName);
	void ClosePage();
};




class UPxCustomDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PxCustomDelegate");
		return pStaticClass;
	}


	void OnPxCustomDelegate();
	static class UPxCustomDelegate* MakeCustomDelegate(const struct FString& strCustomDelegateName);
};




class UPxCustomInterfaceDyImp : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PxCustomInterfaceDyImp");
		return pStaticClass;
	}


	static class UPxCustomInterfaceDyImp* MakeCustomInterface(const struct FString& strCustomInterfaceName, class UClass* pOverrideBaseClass);
};




class UPxFileLoad : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PxFileLoad");
		return pStaticClass;
	}


	void OnFileLoad(TArray<unsigned char> arrayFileData);
};




class UPxSubLayerWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x3A0];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PxSubLayerWidget");
		return pStaticClass;
	}

};




class UPxSubCtrlWidget : public UPxSubLayerWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PxSubCtrlWidget");
		return pStaticClass;
	}

};




class UPxSubNodeWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x3A0];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PxSubNodeWidget");
		return pStaticClass;
	}

};


}

