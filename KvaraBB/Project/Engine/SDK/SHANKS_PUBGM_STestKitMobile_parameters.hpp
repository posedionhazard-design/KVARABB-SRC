#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct USTestKitMobileLibrary_TapWidget_Params
{
	class UWidget*                                     Widget;                                                   
	struct FSTestMobileTapOptions                      Options;                                                  
	bool                                               ReturnValue;                                              
};


struct USTestKitMobileLibrary_ShowConnectionPanel_Params
{
	bool                                               ReturnValue;                                              
};


struct USTestKitMobileLibrary_ResolveLoopItemInUI_Params
{
	struct FString                                     UIName;                                                   
	struct FString                                     LoopName;                                                 
	int                                                ItemIndex;                                                
	class UWidget*                                     ReturnValue;                                              
};


struct USTestKitMobileLibrary_RequestPairing_Params
{
	bool                                               ReturnValue;                                              
};


struct USTestKitMobileLibrary_ReportResult_Params
{
	struct FString                                     RunId;                                                    
	bool                                               bSuccess;                                                 
	struct FString                                     Payload;                                                  
	struct FString                                     Error;                                                    
	bool                                               ReturnValue;                                              
};


struct USTestKitMobileLibrary_ReportEvent_Params
{
	struct FString                                     RunId;                                                    
	struct FString                                     EventJson;                                                
	bool                                               ReturnValue;                                              
};


struct USTestKitMobileLibrary_IsRuntimeEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct USTestKitMobileLibrary_IsBridgeConnected_Params
{
	bool                                               ReturnValue;                                              
};


struct USTestKitMobileLibrary_HitTestSelf_Params
{
	class UWidget*                                     Widget;                                                   
	bool                                               ReturnValue;                                              
};


struct USTestKitMobileLibrary_HitTestActionable_Params
{
	class UWidget*                                     Widget;                                                   
	bool                                               ReturnValue;                                              
};


struct USTestKitMobileLibrary_HideConnectionPanel_Params
{
};


struct USTestKitMobileLibrary_GetWidgetRect_Params
{
	class UWidget*                                     Widget;                                                   
	struct FVector4                                    ReturnValue;                                              
};


struct USTestKitMobileLibrary_GetUIReferenceCaptureStatusJson_Params
{
	struct FString                                     ReturnValue;                                              
};


struct USTestKitMobileLibrary_GetScreenCenter_Params
{
	class UWidget*                                     Widget;                                                   
	struct FVector2D                                   ReturnValue;                                              
};


struct USTestKitMobileLibrary_GetPairingCode_Params
{
	struct FString                                     ReturnValue;                                              
};


struct USTestKitMobileLibrary_GetHitTestActionableInfo_Params
{
	class UWidget*                                     Widget;                                                   
	struct FString                                     ReturnValue;                                              
};


struct USTestKitMobileLibrary_GetDeviceId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct USTestKitMobileLibrary_GetBridgeStatusJson_Params
{
	struct FString                                     ReturnValue;                                              
};


struct USTestKitMobileLibrary_FindWidgetInWidget_Params
{
	class UWidget*                                     RootWidget;                                               
	struct FString                                     WidgetName;                                               
	int                                                Index;                                                    
	class UWidget*                                     ReturnValue;                                              
};


struct USTestKitMobileLibrary_FindWidgetInUIByInstanceId_Params
{
	struct FString                                     WidgetInstanceId;                                         
	struct FString                                     WidgetName;                                               
	class UWidget*                                     ReturnValue;                                              
};


struct USTestKitMobileLibrary_FindWidgetInUIByCondition_Params
{
	struct FString                                     UIName;                                                   
	struct FString                                     WidgetNameRegex;                                          
	struct FString                                     TextRegex;                                                
	int                                                Index;                                                    
	class UWidget*                                     ReturnValue;                                              
};


struct USTestKitMobileLibrary_FindWidgetInUI_Params
{
	struct FString                                     UIName;                                                   
	struct FString                                     WidgetName;                                               
	int                                                Index;                                                    
	class UWidget*                                     ReturnValue;                                              
};


struct USTestKitMobileLibrary_FindUserWidgetByUIName_Params
{
	struct FString                                     UIName;                                                   
	int                                                Index;                                                    
	class UWidget*                                     ReturnValue;                                              
};


struct USTestKitMobileLibrary_FillText_Params
{
	class UWidget*                                     Widget;                                                   
	struct FString                                     Text;                                                     
	struct FSTestMobileFillOptions                     Options;                                                  
	bool                                               ReturnValue;                                              
};


struct USTestKitMobileLibrary_DumpRuntimeWidgetTree_Params
{
	bool                                               bVisibleOnly;                                             
	bool                                               bIncludeText;                                             
	struct FString                                     ReturnValue;                                              
};


struct USTestKitMobileLibrary_DragWidget_Params
{
	class UWidget*                                     From;                                                     
	class UWidget*                                     To;                                                       
	struct FSTestMobileDragOptions                     Options;                                                  
	bool                                               ReturnValue;                                              
};


struct USTestKitMobileLibrary_DragByOffset_Params
{
	class UWidget*                                     Widget;                                                   
	float                                              Dx;                                                       
	float                                              Dy;                                                       
	struct FSTestMobileDragOptions                     Options;                                                  
	bool                                               ReturnValue;                                              
};


struct USTestKitMobileLibrary_DisconnectBridge_Params
{
};


struct USTestKitMobileLibrary_ConnectBridge_Params
{
	struct FString                                     BridgeUrl;                                                
	bool                                               bSaveUrl;                                                 
	bool                                               ReturnValue;                                              
};


struct USTestKitMobileLibrary_CollectVisibleWidgetBlueprintPaths_Params
{
	int                                                MaxDepth;                                                 
	struct FString                                     ReturnValue;                                              
};


struct USTestKitMobileLibrary_CollectVisibleWidgetBlueprintHierarchy_Params
{
	int                                                MaxDepth;                                                 
	struct FString                                     ReturnValue;                                              
};


struct USTestKitMobileLibrary_CaptureAndUploadUIReference_Params
{
	struct FString                                     ServerURL;                                                
	struct FString                                     APIKey;                                                   
	struct FString                                     Source;                                                   
	int                                                JpegQuality;                                              
	bool                                               ReturnValue;                                              
};


struct USTestKitMobileLibrary_CaptureAndUploadConfiguredUIReference_Params
{
	struct FString                                     Source;                                                   
	int                                                JpegQuality;                                              
	bool                                               ReturnValue;                                              
};

}

