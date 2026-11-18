#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UCustomizePanelBase_SetScale_Params
{
	float                                              Scale;                                                    
};


struct UCustomizePanelBase_SetPosition_Params
{
	struct FVector2D                                   Position;                                                 
};


struct UCustomizePanelBase_SetOpacityWithClamp_Params
{
	float                                              InOpacity;                                                
	float                                              MinOpacity;                                               
	float                                              MaxOpacity;                                               
};


struct UCustomizePanelBase_SetOpacity_Params
{
	float                                              InOpacity;                                                
};


struct UCustomizePanelBase_SetMovable_Params
{
	bool                                               bInMovable;                                               
};


struct UCustomizePanelBase_SetMaxScale_Params
{
	float                                              Scale;                                                    
};


struct UCustomizePanelBase_SetInvalid_Params
{
	bool                                               Invalid;                                                  
};


struct UCustomizePanelBase_SetInterceptChildInput_Params
{
	bool                                               bInIntercept;                                             
};


struct UCustomizePanelBase_SetDrawMargin_Params
{
	bool                                               bDraw;                                                    
};


struct UCustomizePanelBase_SetDetectMargin_Params
{
	struct FMargin                                     InMargin;                                                 
};


struct UCustomizePanelBase_SetDesireScale_Params
{
	float                                              Scale;                                                    
};


struct UCustomizePanelBase_SetDesirePosition_Params
{
	struct FVector2D                                   Position;                                                 
};


struct UCustomizePanelBase_SetDefaultLayoutCode_Params
{
	struct FCustomLayoutBlueprintCode                  InCode;                                                   
};


struct UCustomizePanelBase_SetDefaultLayoutByPositionAndAnchors_Params
{
	struct FVector2D                                   InPosition;                                               
	struct FAnchors                                    InAnchors;                                                
};


struct UCustomizePanelBase_SetCustomType_Params
{
	int                                                NewType;                                                  
};


struct UCustomizePanelBase_RestoreInBound_Params
{
};


struct UCustomizePanelBase_ResetMaxScale_Params
{
};


struct UCustomizePanelBase_IsOutOfBound_Params
{
	float                                              InvisibleCheckOffset;                                     
	bool                                               ReturnValue;                                              
};


struct UCustomizePanelBase_InitDefaultLayoutData_Params
{
};


struct UCustomizePanelBase_GetScale_Params
{
	float                                              ReturnValue;                                              
};


struct UCustomizePanelBase_GetPosition_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct UCustomizePanelBase_GetOpacity_Params
{
	float                                              ReturnValue;                                              
};


struct UCustomizePanelBase_GetMovable_Params
{
	bool                                               ReturnValue;                                              
};


struct UCustomizePanelBase_GetMaxScale_Params
{
	float                                              ReturnValue;                                              
};


struct UCustomizePanelBase_GetLayoutData_Params
{
	struct FUIElemLayoutDetail                         ReturnValue;                                              
};


struct UCustomizePanelBase_GetLayoutCode_Params
{
	struct FCustomLayoutBlueprintCode                  ReturnValue;                                              
};


struct UCustomizePanelBase_GetInvalid_Params
{
	bool                                               ReturnValue;                                              
};


struct UCustomizePanelBase_GetDefaultLayoutData_Params
{
	struct FUIElemLayoutDetail                         ReturnValue;                                              
};


struct UCustomizePanelBase_GetCustomType_Params
{
	int                                                ReturnValue;                                              
};


struct UCustomizePanelBase_ClampPosition_Params
{
	struct FVector2D                                   DesiredPos;                                               
	struct FVector2D                                   ReturnValue;                                              
};


struct UCustomizePanelBase_ApplyLayoutData_Params
{
	struct FUIElemLayoutDetail                         LayoutDetail;                                             
};


struct UCustomizePanelBase_ApplyLayoutCode_Params
{
	struct FCustomLayoutBlueprintCode                  InCode;                                                   
};


struct UCustomizePanelBase_ApplyDefaultLayout_Params
{
};


struct UCustomLayoutBlueprintLibrary_MakeLayoutDetail_Params
{
	int                                                Type;                                                     
	EAnchorsType                                       AnchorType;                                               
	struct FVector2D                                   Offset;                                                   
	struct FUIElemLayoutDetail                         ReturnValue;                                              
};


struct UCustomLayoutBlueprintLibrary_GenerateUserSettingFromIndexer_Params
{
	class UDynamicCustomIndexer*                       InIndexer;                                                
	class UCustomLayoutUserSetting*                    InOutUserSetting;                                         
	bool                                               ReturnValue;                                              
};


struct UCustomLayoutBlueprintLibrary_CreateCustomLayoutUserSetting_Params
{
	struct FString                                     InSaveSlotName;                                           
	class UCustomLayoutUserSetting*                    ReturnValue;                                              
};


struct UCustomLayoutBlueprintLibrary_Conv_TypeToAnchors_Params
{
	EAnchorsType                                       InType;                                                   
	struct FAnchors                                    ReturnValue;                                              
};


struct UCustomLayoutBlueprintLibrary_Conv_TouchStatInfoToLong_Params
{
	struct FTouchStatInfo                              Info;                                                     
	uint64_t                                           ReturnValue;                                              
};


struct UCustomLayoutBlueprintLibrary_Conv_LongToTouchStatInfo_Params
{
	uint64_t                                           Num;                                                      
	struct FTouchStatInfo                              ReturnValue;                                              
};


struct UCustomLayoutBlueprintLibrary_Conv_LayoutDetailToCode_Params
{
	struct FUIElemLayoutDetail                         InDetail;                                                 
	struct FCustomLayoutBlueprintCode                  ReturnValue;                                              
};


struct UCustomLayoutBlueprintLibrary_Conv_CodeToLayoutDetail_Params
{
	struct FCustomLayoutBlueprintCode                  InCode;                                                   
	int                                                Type;                                                     
	struct FUIElemLayoutDetail                         ReturnValue;                                              
};


struct UCustomLayoutBlueprintLibrary_Conv_AnchorsToType_Params
{
	struct FAnchors                                    InAnchors;                                                
	EAnchorsType                                       ReturnValue;                                              
};


struct UCustomLayoutSubsystem_UnregisterCustomPanel_Params
{
	class UCustomPanel*                                InCustomizePanel;                                         
};


struct UCustomLayoutSubsystem_SetScreenPadding_Params
{
	struct FMargin                                     InOffset;                                                 
};


struct UCustomLayoutSubsystem_SetEditMode_Params
{
	bool                                               bEnable;                                                  
};


struct UCustomLayoutSubsystem_RemoveUserSettingSlot_Params
{
	class UCustomLayoutUserSetting*                    InUserSetting;                                            
};


struct UCustomLayoutSubsystem_RegisterCustomPanel_Params
{
	class UCustomPanel*                                InCustomizePanel;                                         
};


struct UCustomLayoutSubsystem_InsertUserSettingSlot_Params
{
	class UCustomLayoutUserSetting*                    InUserSetting;                                            
	int                                                Index;                                                    
};


struct UCustomLayoutSubsystem_GetUserSettingInSlot_Params
{
	struct FString                                     Name;                                                     
	class UCustomLayoutUserSetting*                    ReturnValue;                                              
};


struct UCustomLayoutSubsystem_GetRegisteredPanel_Params
{
	int                                                InCustomType;                                             
	class UCustomPanel*                                ReturnValue;                                              
};


struct UCustomLayoutSubsystem_FlushRegisteredPanelMap_Params
{
};


struct UCustomLayoutSubsystem_FindLayoutDetail_Params
{
	int                                                InCustomType;                                             
	struct FUIElemLayoutDetail                         OutDetail;                                                
	bool                                               ReturnValue;                                              
};


struct UCustomLayoutSubsystem_ClearUserSettingSlots_Params
{
};


struct UCustomLayoutSubsystem_ClearRegisteredPanelMap_Params
{
};


struct UCustomLayoutSubsystem_BroadcastCustomLayoutChange_Params
{
	TArray<int>                                        InCustomTypeList;                                         
};


struct UCustomLayoutSubsystem_AddUserSettingSlot_Params
{
	class UCustomLayoutUserSetting*                    InUserSetting;                                            
};


struct UCustomLayoutUserSetting_UpdateTimeTag_Params
{
};


struct UCustomLayoutUserSetting_SetTimeTagFromUnixTimestamp_Params
{
	int64_t                                            InUnixTimestamp;                                          
};


struct UCustomLayoutUserSetting_SetDataByLayoutDetail_Params
{
	int                                                InCustomType;                                             
	struct FUIElemLayoutDetail                         InData;                                                   
};


struct UCustomLayoutUserSetting_RemoveData_Params
{
	int                                                InCustomType;                                             
};


struct UCustomLayoutUserSetting_GetTimeTagAsUnixTimestamp_Params
{
	int64_t                                            ReturnValue;                                              
};


struct UCustomLayoutUserSetting_GetLayoutCodeCheckSum_Params
{
	uint64_t                                           ReturnValue;                                              
};


struct UCustomLayoutUserSetting_GetDataAsLayoutDetail_Params
{
	int                                                InCustomType;                                             
	struct FUIElemLayoutDetail                         ReturnValue;                                              
};


struct UCustomLayoutUserSetting_GetCustomTypeList_Params
{
	TArray<int>                                        OutKeys;                                                  
};


struct UCustomLayoutUserSetting_Contains_Params
{
	int                                                InCustomType;                                             
	bool                                               ReturnValue;                                              
};


struct UCustomPanel_UpdateCustomLayout_Params
{
};


struct UCustomPanel_SetEditable_Params
{
	bool                                               bEditable;                                                
};


struct UDynamicCustomIndexer_SetupDefaultLayoutForPanel_Params
{
	int                                                CustomType;                                               
	class UCustomizePanelBase*                         Panel;                                                    
	bool                                               ReturnValue;                                              
};


struct UDynamicCustomIndexer_GetIndexer_Params
{
	struct FString                                     Path;                                                     
	class UDynamicCustomIndexer*                       ReturnValue;                                              
};


struct UDynamicCustomIndexer_CreateDynamicCustomWidgets_Params
{
	TArray<int>                                        InCustomTypeList;                                         
	TMap<int, class UCustomizePanelBase*>              CustomPanelMap;                                           
	class UPanelWidget*                                Container;                                                
	bool                                               bIgnoreDPIScale;                                          
	TMap<int, class UCustomizePanelBase*>              ReturnValue;                                              
};


struct UPinchDragWidget_SetPinchEnabled_Params
{
	bool                                               bEnabled;                                                 
};


struct UPinchDragWidget_SetDragEnabled_Params
{
	bool                                               bEnabled;                                                 
};


struct UPinchDragWidget_ScreenDeltaToParentLocal_Params
{
	class UWidget*                                     Widget;                                                   
	struct FVector2D                                   ScreenDelta;                                              
	struct FVector2D                                   ReturnValue;                                              
};


struct UPinchDragWidget_Reset_Params
{
};


struct UPinchDragWidget_IsPinchEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct UPinchDragWidget_IsFirstPointIndex_Params
{
	struct FPointerEvent                               InPointerEvent;                                           
	bool                                               ReturnValue;                                              
};


struct UPinchDragWidget_IsDragEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct USettingCustomPanel_SetSelectedImageOriginEffect_Params
{
};


struct USettingCustomPanel_SetSelectedImageFlashEffect_Params
{
};


struct USettingCustomPanel_SetDisplayState_Params
{
	ESCPDisplayState                                   State;                                                    
};


struct USettingCustomPanel_OnTouchPreview_Params
{
};


struct USettingCustomPanel_IsSquareFlashEffectAssetName_Params
{
	struct FString                                     InAssetName;                                              
	bool                                               ReturnValue;                                              
};


struct USettingCustomPanel_IsCircleFlashEffectAssetName_Params
{
	struct FString                                     InAssetName;                                              
	bool                                               ReturnValue;                                              
};


struct USettingCustomPanel_GetWidgetByType_Params
{
	class UWidget*                                     RootWidget;                                               
	class UClass*                                      WidgetType;                                               
	class UWidget*                                     ReturnValue;                                              
};


struct USettingCustomPanel_GetSelectedImage_Params
{
	class UImage*                                      ReturnValue;                                              
};


struct USettingCustomPanel_GetParentWidget_Params
{
	class UWidget*                                     ReturnValue;                                              
};


struct USettingCustomPanel_GetNamedWidgetFromOwner_Params
{
	struct FString                                     Prefix;                                                   
	class UWidget*                                     ReturnValue;                                              
};


struct USettingCustomPanel_GetInvalidImage_Params
{
	class UImage*                                      ReturnValue;                                              
};


struct USettingCustomPanel_GetCenterPositionInScreenSpace_Params
{
	class UWidget*                                     FullScreenWidget;                                         
	struct FVector2D                                   ReturnValue;                                              
};


struct USettingCustomPanel_FlashHighlight_Params
{
	float                                              Seconds;                                                  
};


struct USettingCustomPanel_ConvertCenterPositionFromScreenSpace_Params
{
	class UWidget*                                     FullScreenWidget;                                         
	struct FVector2D                                   SSPosition;                                               
	struct FVector2D                                   ReturnValue;                                              
};

}

