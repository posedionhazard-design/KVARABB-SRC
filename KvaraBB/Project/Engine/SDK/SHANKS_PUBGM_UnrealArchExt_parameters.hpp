#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UUAEUserWidget_Visible_Params
{
	bool                                               ReturnValue;                                              
};


struct UUAEUserWidget_UnRegistFromGameFrontendHUD_Params
{
};


struct UUAEUserWidget_SynchronizeBlueprintProperties_Params
{
};


struct UUAEUserWidget_Show_Params
{
};


struct UUAEUserWidget_SetParentWidgetRecursive_Params
{
	class UUAEUserWidget*                              InParentWidget;                                           
};


struct UUAEUserWidget_SetParentWidget_Params
{
	class UUAEUserWidget*                              InParentWidget;                                           
};


struct UUAEUserWidget_SetOnWidgetShow_Params
{
	struct FScriptDelegate                             onShow;                                                   
};


struct UUAEUserWidget_SetOnWidgetHide_Params
{
	struct FScriptDelegate                             OnHide;                                                   
};


struct UUAEUserWidget_SetOnClearUIStack_Params
{
	struct FScriptDelegate                             onClear;                                                  
};


struct UUAEUserWidget_SetAdapation_Params
{
	float                                              Left;                                                     
	float                                              Top;                                                      
	float                                              Right;                                                    
	float                                              Bottom;                                                   
};


struct UUAEUserWidget_RegistToGameFrontendHUD_Params
{
	class UFrontendHUD*                                GameFrontHUD;                                             
};


struct UUAEUserWidget_Register_Params
{
	class ULogicManagerBase*                           LogicManager;                                             
	bool                                               bAddToViewport;                                           
};


struct UUAEUserWidget_ReceiveShow_Params
{
};


struct UUAEUserWidget_ReceiveHide_Params
{
};


struct UUAEUserWidget_ReceivedMountWidget_Params
{
};


struct UUAEUserWidget_ReceivedInitWidget_Params
{
};


struct UUAEUserWidget_ReCachedUIMsgFunction_Params
{
};


struct UUAEUserWidget_PushOpenedUIStack_Params
{
	struct FString                                     Name;                                                     
};


struct UUAEUserWidget_PopOpenedUIStack_Params
{
	struct FString                                     curOpen;                                                  
};


struct UUAEUserWidget_OnWidgetShow__DelegateSignature_Params
{
	struct FString                                     ClassName;                                                
};


struct UUAEUserWidget_OnWidgetHide__DelegateSignature_Params
{
	struct FString                                     ClassName;                                                
};


struct UUAEUserWidget_OnRightClicked_Params
{
	struct FVector2D                                   TempScreenPos;                                            
};


struct UUAEUserWidget_OnFadeOutFinished_Params
{
};


struct UUAEUserWidget_OnFadeInFinished_Params
{
};


struct UUAEUserWidget_OnDoubleClicked_Params
{
	struct FVector2D                                   TempScreenPos;                                            
};


struct UUAEUserWidget_OnClicked_Params
{
	struct FVector2D                                   TempScreenPos;                                            
};


struct UUAEUserWidget_OnClearUIStack__DelegateSignature_Params
{
};


struct UUAEUserWidget_IntCompare_Params
{
	int                                                A;                                                        
	int                                                B;                                                        
	EWidgetCompareType                                 CompareType;                                              
	bool                                               ReturnValue;                                              
};


struct UUAEUserWidget_InitWidget_Params
{
	bool                                               Recursive;                                                
};


struct UUAEUserWidget_InitCustomWidget_Params
{
	class AActor*                                      OwnerActor;                                               
	class UWidgetComponent*                            WidgetComponent;                                          
};


struct UUAEUserWidget_Hide_Params
{
};


struct UUAEUserWidget_HandleUIMessageBattle_Params
{
	struct FString                                     UIMessage;                                                
};


struct UUAEUserWidget_HandleUIMessage_Params
{
	struct FString                                     UIMessage;                                                
};


struct UUAEUserWidget_GetWidgetsByName_Params
{
	struct FString                                     WidgetName;                                               
	struct FString                                     OuterName;                                                
	bool                                               bUseContains;                                             
	class UWidget*                                     ReturnValue;                                              
};


struct UUAEUserWidget_GetWidgetContainsName_Params
{
	struct FString                                     Name;                                                     
	class UWidget*                                     ReturnValue;                                              
};


struct UUAEUserWidget_GetParentWidget_Params
{
	class UUAEUserWidget*                              ReturnValue;                                              
};


struct UUAEUserWidget_GetOwningPlayer_Params
{
	class APlayerController*                           ReturnValue;                                              
};


struct UUAEUserWidget_GetOwningLogicManager_Params
{
	class ULogicManagerBase*                           ReturnValue;                                              
};


struct UUAEUserWidget_GetOwningFrontendHUD_Params
{
	class UFrontendHUD*                                ReturnValue;                                              
};


struct UUAEUserWidget_GetImgDynamicMaterial_Params
{
	class UImage*                                      ImageMat;                                                 
	class UMaterialInstanceDynamic*                    ReturnValue;                                              
};


struct UUAEUserWidget_GetChildWidgetByEqualPolitics_Params
{
	struct FString                                     ChildName;                                                
	EUserWidgetNameEqualPolitics                       EqualPolitics;                                            
	int                                                RecursiveDepth;                                           
	class UUserWidget*                                 ReturnValue;                                              
};


struct UUAEUserWidget_GetChildWidget_Params
{
	struct FString                                     WName;                                                    
	class UUserWidget*                                 ReturnValue;                                              
};


struct UUAEUserWidget_GetAdapation_Params
{
	struct FMargin                                     ReturnValue;                                              
};


struct UUAEUserWidget_FloatCompare_Params
{
	float                                              A;                                                        
	float                                              B;                                                        
	EWidgetCompareType                                 CompareType;                                              
	bool                                               ReturnValue;                                              
};


struct UUAEUserWidget_DynamicRegistUIMsgToCache_Params
{
	class UUAEUserWidget*                              Widget;                                                   
};


struct UUAEUserWidget_DestroyWidget_Params
{
};


struct UUAEUserWidget_ClearOpenedUIStack_Params
{
};


struct UUAEUserWidget_ClearFunctionCacheByMsgName_Params
{
	struct FString                                     InUIMsg;                                                  
};


struct UUAEUserWidget_ClearFunctionCache_Params
{
};


struct UUAEUserWidget_ClearClassWidgetTree_Params
{
};


struct UUAEUserWidget_BindCustomUserEvent_Params
{
	class AActor*                                      OwnerActor;                                               
	class UWidgetComponent*                            WidgetComponent;                                          
};


struct UUAECanvasPanel_ReceiveInitCanvasPanel_Params
{
};


struct UBackendHUD_GetFrontendHUDByGameInstance_Params
{
	class UGameInstance*                               GameInstance;                                             
	class UFrontendHUD*                                ReturnValue;                                              
};


struct UBackendHUD_GetFrontendHUD_Params
{
	int                                                FrontendHUDIndex;                                         
	class UFrontendHUD*                                ReturnValue;                                              
};


struct ULogicManagerBase_SetEnableRemoveDynamicWidgets_Params
{
	bool                                               bEnable;                                                  
};


struct ULogicManagerBase_MarkWidgetClassPendingKill_Params
{
	class UUAEUserWidget*                              Widget;                                                   
};


struct ULogicManagerBase_IsNeedClear_Params
{
	float                                              MaxLowLevelMemorySize;                                    
	float                                              MaxMiddleMemorySize;                                      
	float                                              MaxGCArrayObjectSize;                                     
	bool                                               ReturnValue;                                              
};


struct ULogicManagerBase_IsEnableRemoveDynamicWidgets_Params
{
	bool                                               ReturnValue;                                              
};


struct ULogicManagerBase_GetWidgetList_Params
{
	TArray<class UUAEUserWidget*>                      ReturnValue;                                              
};


struct ULogicManagerBase_GetWidgetByName_Params
{
	struct FString                                     InName;                                                   
	class UUAEUserWidget*                              ReturnValue;                                              
};


struct ULogicManagerBase_GetWidgetByClass_Params
{
	class UClass*                                      InClass;                                                  
	class UUAEUserWidget*                              ReturnValue;                                              
};


struct ULogicManagerBase_GetOwningFrontendHUD_Params
{
	class UFrontendHUD*                                ReturnValue;                                              
};


struct ULogicManagerBase_GetDefaultSceneCamera_Params
{
	int                                                ReturnValue;                                              
};


struct ULogicManagerBase_DispatchUIMessage_Params
{
	struct FString                                     UIMessage;                                                
	class UObject*                                     Source;                                                   
	class UUAEUserWidget*                              Target;                                                   
};


struct UFrontendHUD_SwitchUIStatus_Params
{
	struct FString                                     InUIStatus;                                               
};


struct UFrontendHUD_SwitchGameStatus_Params
{
	struct FString                                     GameStatus;                                               
	struct FString                                     Options;                                                  
};


struct UFrontendHUD_StandAloneSwitchGameStatus_Params
{
	struct FString                                     InGameStatus;                                             
	struct FString                                     Options;                                                  
};


struct UFrontendHUD_OnRenderQualityChanged_Params
{
	bool                                               bLoadMap;                                                 
};


struct UFrontendHUD_OnPreLoadMap_Params
{
	struct FString                                     MapName;                                                  
};


struct UFrontendHUD_OnPostLoadMapWithWorld_Params
{
	class UWorld*                                      World;                                                    
};


struct UFrontendHUD_OnGameViewportClientCreated_Params
{
};


struct UFrontendHUD_GetWorld_Params
{
	class UWorld*                                      ReturnValue;                                              
};


struct UFrontendHUD_GetUtils_Params
{
	class UFrontendUtils*                              ReturnValue;                                              
};


struct UFrontendHUD_GetPlayerController_Params
{
	class APlayerController*                           ReturnValue;                                              
};


struct UFrontendHUD_GetLogicManagerByName_Params
{
	struct FString                                     LogicManagerTagName;                                      
	class ULogicManagerBase*                           ReturnValue;                                              
};


struct UFrontendHUD_GetLogicManager_Params
{
	int                                                LogicManagerIndex;                                        
	class ULogicManagerBase*                           ReturnValue;                                              
};


struct UFrontendHUD_GetGameViewportClient_Params
{
	class UGameViewportClient*                         ReturnValue;                                              
};


struct UFrontendHUD_GetGameMode_Params
{
	class AGameMode*                                   ReturnValue;                                              
};


struct UFrontendHUD_GetGameInstance_Params
{
	class UGameInstance*                               ReturnValue;                                              
};


struct UFrontendHUD_FindRegistedUIFunctionList_Params
{
	struct FString                                     strMsg;                                                   
	struct FString                                     moduleMsg;                                                
	TArray<TWeakObjectPtr<class UObject>>              ReturnValue;                                              
};


struct UFrontendHUD_EnableGuiTest_Params
{
	bool                                               bEnable;                                                  
};


struct UFrontendHUD_DynamicRegistUIMsgToCache_Params
{
	class UUAEUserWidget*                              Widget;                                                   
	struct FString                                     module;                                                   
};


struct UFrontendHUD_ClearLogicManagerListByStatus_Params
{
	struct FName                                       PendingStatus;                                            
	bool                                               bIsForceDelete;                                           
};


struct UFrontendHUD_ClearLogicManagerByName_Params
{
	struct FString                                     managerName;                                              
};


struct UFrontendHUD_ClearInGameUI_Params
{
};


struct UFrontendUtils_SwitchSceneCameraToTransform_Params
{
	struct FTransform                                  targetTrans;                                              
	TEnumAsByte<ECameraProjectionMode>                 ProjectionMode;                                           
	float                                              FOV;                                                      
	float                                              BlendTime;                                                
	bool                                               bForce;                                                   
	bool                                               bAutoFixAspect;                                           
};


struct UFrontendUtils_SwitchSceneCamera_Params
{
	struct FName                                       SceneCameraName;                                          
	float                                              BlendTime;                                                
	bool                                               bForce;                                                   
};


struct UFrontendUtils_SetSceneSkyLightProperty_Params
{
	struct FName                                       sceneLightName;                                           
	struct FTransform                                  targetTrans;                                              
	float                                              Intensity;                                                
	struct FLinearColor                                Color;                                                    
};


struct UFrontendUtils_SetScenePointLightProperty_Params
{
	struct FName                                       sceneLightName;                                           
	struct FTransform                                  targetTrans;                                              
	float                                              Intensity;                                                
	struct FLinearColor                                Color;                                                    
	int                                                inverseSquareFalloff;                                     
	float                                              Radius;                                                   
};


struct UFrontendUtils_SetSceneDirectionalLightProperty_Params
{
	struct FName                                       sceneLightName;                                           
	struct FTransform                                  targetTrans;                                              
	float                                              Intensity;                                                
	struct FLinearColor                                Color;                                                    
	struct FLightingChannels                           Channel;                                                  
};


struct UFrontendUtils_SetAutoFixFovByAspectRatio_Params
{
	class ACameraActor*                                CameraActor;                                              
	bool                                               bInAutoFixFov;                                            
};


struct UFrontendUtils_RegisterSceneSkyLight_Params
{
	struct FName                                       sceneLightName;                                           
	class ASkyLight*                                   Light;                                                    
};


struct UFrontendUtils_RegisterScenePointLight_Params
{
	struct FName                                       sceneLightName;                                           
	class APointLight*                                 Light;                                                    
};


struct UFrontendUtils_RegisterSceneDirectionalLight_Params
{
	struct FName                                       sceneLightName;                                           
	class ADirectionalLight*                           Light;                                                    
};


struct UFrontendUtils_RegisterSceneCamera_Params
{
	struct FName                                       SceneCameraName;                                          
	class ACameraActor*                                SceneCamera;                                              
};


struct UFrontendUtils_PopAllPushedUI_Params
{
};


struct UFrontendUtils_OnAllSceneCamerasRegistered_Params
{
};


struct UFrontendUtils_IsPushedPanel_Params
{
	struct FName                                       managerName;                                              
	bool                                               ReturnValue;                                              
};


struct UFrontendUtils_IsNoRenderClient_Params
{
	bool                                               ReturnValue;                                              
};


struct UFrontendUtils_GetUIStackTopSrcTag_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UFrontendUtils_GetUIStackTopDstTag_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UFrontendUtils_GetUIStackTop_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UFrontendUtils_GetSceneCameraComponent_Params
{
	class UCameraComponent*                            ReturnValue;                                              
};


struct UFrontendUtils_GetSceneCamera_Params
{
	class ACameraActor*                                ReturnValue;                                              
};


struct UFrontendUtils_GetOwningFrontendHUD_Params
{
	class UFrontendHUD*                                ReturnValue;                                              
};


struct UFrontendUtils_GetGlobalUIContainer_Params
{
	struct FName                                       ContainerName;                                            
	class UUAEWidgetContainer*                         ReturnValue;                                              
};


struct UFrontendUtils_GetAllActorsFromLevel_Params
{
	class ULevel*                                      Level;                                                    
	TArray<class AActor*>                              OutActors;                                                
};


struct UFrontendUtils_EnableLobbyMainLight_Params
{
	bool                                               NewEnable;                                                
};


struct UFrontendUtils_ClearAllSceneCameras_Params
{
};


struct UUAEDataTable_SetTableData_String_Params
{
	struct FString                                     KeyValue;                                                 
	struct FString                                     TagName;                                                  
	struct FString                                     Value;                                                    
	bool                                               ReturnValue;                                              
};


struct UUAEDataTable_SetTableData_Int32_Params
{
	struct FString                                     KeyValue;                                                 
	struct FString                                     TagName;                                                  
	int                                                Value;                                                    
	bool                                               ReturnValue;                                              
};


struct UUAEDataTable_SetTableData_Float_Params
{
	struct FString                                     KeyValue;                                                 
	struct FString                                     TagName;                                                  
	float                                              Value;                                                    
	bool                                               ReturnValue;                                              
};


struct UUAEDataTable_GetTableName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UUAEDataTable_GetRealTableName_Params
{
	struct FString                                     tableName;                                                
	struct FString                                     ReturnValue;                                              
};


struct UUAEDataTable_ConditionAddEmptyRow_Params
{
	struct FName                                       RowName;                                                  
	bool                                               ReturnValue;                                              
};


struct UUAEWidgetContainer_RemoveWidgetInternal_Params
{
	class UWidget*                                     Widget;                                                   
};


struct UUAEWidgetContainer_RemoveWidget_Params
{
	class UWidget*                                     Widget;                                                   
};


struct UUAEWidgetContainer_AddWidgetWithZOrderInternal_Params
{
	class UWidget*                                     Widget;                                                   
	int                                                ZOrder;                                                   
};


struct UUAEWidgetContainer_AddWidgetWithZOrder_Params
{
	class UWidget*                                     Widget;                                                   
	int                                                ZOrder;                                                   
};


struct UUAEWidgetContainer_AddWidgetInternal_Params
{
	class UWidget*                                     Widget;                                                   
};


struct UUAEWidgetContainer_AddWidget_Params
{
	class UWidget*                                     Widget;                                                   
};

}

