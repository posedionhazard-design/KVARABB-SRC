#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UBlocky3DVarWidget_SetResult_Params
{
};


struct UBlocky3DVarWidget_InitText_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
};


struct UBlocky3DVarWidget_CleanNumber_Params
{
	struct FString                                     Input;                                                    
	struct FString                                     ReturnValue;                                              
};


struct UBlockyBlockDisplayWidget_Custom_UpdateName_Params
{
	struct FString                                     Name;                                                     
};


struct UBlockyBlockDisplayWidget_Custom_Init_Params
{
	TEnumAsByte<ECustomBlockType>                      Type;                                                     
};


struct UBlockyBlockDisplayWidget_Preset_InitPreset_Params
{
	class UBlockyGraphWidget*                          HostGraphWidget;                                          
};


struct UBlockyBlockDisplayWidget_Variable_Init_Params
{
};


struct UBlockyBlockDisplayWidget_Variable_CalculateDrawSize_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct UBlockyBlockWindowWidget_SetWidgetVariableToShow_Params
{
	class UBlockyMenuItemObject_Variable*              item_Variable;                                            
};


struct UBlockyBlockWindowWidget_SetWidgetCustomToShow_Params
{
	class UBlockyMenuItemObject_Custom*                item_Custom;                                              
};


struct UBlockyBlockWindowWidget_SetWidgetCommonToShow_Params
{
	class UBlockyMenuItemObject*                       MenuItem;                                                 
};


struct UBlockyBlockWindowWidget_SetWidgetBPToShow_Params
{
	class UUserWidget*                                 Widget;                                                   
};


struct UBlockyBooleanWidget_SetText_Params
{
	struct FString                                     Value;                                                    
};


struct UBlockyBooleanWidget_SetResult_Params
{
	struct FString                                     displayValue;                                             
	struct FString                                     Value;                                                    
};


struct UBlockyCategoryItemWidget_SetSelected_Params
{
	bool                                               IsSelected;                                               
};


struct UBlockyCategoryItemWidget_OnScroll_Params
{
};


struct UBlockyCategoryItemWidget_OnClick_Params
{
};


struct UBlockyCategoryItemWidget_InitWithItemObject_Params
{
	class UBlockyCategoryItemObject*                   Item;                                                     
};


struct UBlockyCategoryItemWidget_InitTextToShow_Params
{
};


struct UBlockyCategoryWidget_GetCurrentCategoryNameWithVariable_Params
{
	struct FText                                       ReturnValue;                                              
};


struct UBlockyCategoryWidget_GetCategoryContainer_Params
{
	class UPanelWidget*                                ReturnValue;                                              
};


struct UBlockyColorPickerWidget_SetResult_Params
{
	struct FLinearColor                                Value;                                                    
};


struct UBlockyColorPickerWidget_SetColor_Params
{
	struct FLinearColor                                Value;                                                    
};


struct UBlockyColorPickerWidget_LoadColors_Params
{
};


struct UBlockyEditor_UpdateTriggerGroups_Params
{
};


struct UBlockyEditor_UpdateSearchPanel_Params
{
};


struct UBlockyEditor_UpdateSearchButtonVisible_Params
{
	bool                                               IsShowSearchButton;                                       
};


struct UBlockyEditor_TryBackToVariableOrCustomPanel_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlockyEditor_ShowPresetAnimation_Params
{
	class UPresetDesc*                                 PresetDesc;                                               
};


struct UBlockyEditor_SetWidgetBPToShow_Params
{
	class UUserWidget*                                 Widget;                                                   
	bool                                               HideCategory;                                             
};


struct UBlockyEditor_SetMenuWidget_Params
{
	class UBlockyMenuWidget*                           Widget;                                                   
};


struct UBlockyEditor_SetCategoryWidget_Params
{
	class UBlockyCategoryWidget*                       Widget;                                                   
};


struct UBlockyEditor_SetBlockLogWidget_Params
{
	class UBlockyLogWidget*                            Widget;                                                   
};


struct UBlockyEditor_SetBlockListWidget_Params
{
	class UBlockyBlockWindowWidget*                    Widget;                                                   
};


struct UBlockyEditor_ResetAsyncWidgetHandleMap_Params
{
};


struct UBlockyEditor_OnUpdateUndoRedoState_Params
{
	bool                                               HasUndoCommands;                                          
	bool                                               HasRedoCommands;                                          
};


struct UBlockyEditor_OnShowTips_Params
{
	struct FText                                       Tips;                                                     
};


struct UBlockyEditor_OnShowPresetPanelHandler_Params
{
	bool                                               IsShow;                                                   
};


struct UBlockyEditor_LoadWidgetAsync_Params
{
	struct FString                                     WidgetName;                                               
	struct FString                                     WidgetPath;                                               
	struct FScriptDelegate                             Delegate;                                                 
};


struct UBlockyEditor_LoadMaterialInterface_Params
{
	struct FString                                     AnimationPath;                                            
	class UMaterialInterface*                          ReturnValue;                                              
};


struct UBlockyEditor_IsShowExplain_Params
{
	bool                                               bFlag;                                                    
};


struct UBlockyEditor_IsCloseComment_Params
{
	bool                                               bFlag;                                                    
};


struct UBlockyEditor_GetSaveCooldownDuration_Params
{
	float                                              ReturnValue;                                              
};


struct UBlockyEditor_GetLocaleString_Params
{
	struct FString                                     KeyString;                                                
	struct FString                                     ReturnValue;                                              
};


struct UBlockyEditor_GetCurrentMenuItem_Params
{
	class UBlockyMenuItemObject*                       ReturnValue;                                              
};


struct UBlockyEditor_CollectListItem_Params
{
	bool                                               bCollect;                                                 
};


struct UBlockyEditor_BP_OnShowTools_Params
{
	TArray<EBlockyBPToolButtonType>                    ButtonTypes;                                              
};


struct UBlockyEditor_BP_OnBlockyEditorShortcut_Params
{
	EBlockyEditorShortcutKey                           ShortCutKey;                                              
};


struct UBlockyEditor_AddChildBluckyWidget_Params
{
	class UUserWidget*                                 Widget;                                                   
};


struct UBlockyEnumWidget_SetShowDisplayItems_Params
{
	TMap<struct FName, struct FText>                   Names;                                                    
};


struct UBlockyEnumWidget_SetResultWithName_Params
{
	struct FName                                       Name;                                                     
};


struct UBlockyFloatWidget_SetText_Params
{
	struct FString                                     Value;                                                    
};


struct UBlockyFloatWidget_SetResult_Params
{
	struct FString                                     Value;                                                    
};


struct UBlockyFloatWidget_CleanNumber_Params
{
	struct FString                                     Input;                                                    
	struct FString                                     ReturnValue;                                              
};


struct UBlockyGraphWidget_ViewPosToCanvasPos_Params
{
	struct FVector2D                                   Postion;                                                  
	struct FVector2D                                   ReturnValue;                                              
};


struct UBlockyGraphWidget_UpdateVariableItemNames_Params
{
	TArray<struct FText>                               ReturnValue;                                              
};


struct UBlockyGraphWidget_UpdateTriggerGroups_Params
{
};


struct UBlockyGraphWidget_UpdateCustomItemNames_Params
{
	TArray<struct FText>                               ReturnValue;                                              
};


struct UBlockyGraphWidget_UpdateBlockByTag_Params
{
};


struct UBlockyGraphWidget_Undo_Params
{
};


struct UBlockyGraphWidget_TryBackToVariableOrCustomPanel_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlockyGraphWidget_ShowTips_Params
{
	struct FText                                       Tips;                                                     
};


struct UBlockyGraphWidget_ShowPresetParamPop_Params
{
};


struct UBlockyGraphWidget_SetViewScale_Params
{
	float                                              InScale;                                                  
};


struct UBlockyGraphWidget_SetViewPosition_Params
{
	struct FVector2D                                   ViewPosition;                                             
};


struct UBlockyGraphWidget_SetTagsSetting_Params
{
	TArray<int>                                        newDefaultTags;                                           
	struct FGraphSettingMap                            newGraphSettingsMap;                                      
};


struct UBlockyGraphWidget_SetShowSaveTemplateVar_Params
{
	bool                                               IsShow;                                                   
};


struct UBlockyGraphWidget_SetMenuWidget_Params
{
	class UBlockyMenuWidget*                           Widget;                                                   
};


struct UBlockyGraphWidget_SetGraphCanMove_Params
{
	bool                                               isCanMove;                                                
};


struct UBlockyGraphWidget_SetCurrentSubGraph_Params
{
	struct FString                                     InName;                                                   
};


struct UBlockyGraphWidget_SetCategoryWidget_Params
{
	class UBlockyCategoryWidget*                       Widget;                                                   
};


struct UBlockyGraphWidget_SetCaptureScreenShot_Params
{
	struct FVector2D                                   screenRect;                                               
	class UTexture2D*                                  ReturnValue;                                              
};


struct UBlockyGraphWidget_SetBlockLogWidget_Params
{
	class UBlockyLogWidget*                            Widget;                                                   
};


struct UBlockyGraphWidget_SetBlockListWidget_Params
{
	class UBlockyBlockWindowWidget*                    Widget;                                                   
};


struct UBlockyGraphWidget_SaveGraphToJsonText_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBlockyGraphWidget_SaveGraphToBin_Params
{
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UBlockyGraphWidget_SaveGlobalVarToJsonText_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBlockyGraphWidget_SaveGlobalVarToBin_Params
{
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UBlockyGraphWidget_SaveCustom_Params
{
};


struct UBlockyGraphWidget_SaveBlockyGraphToTemplate_Params
{
	class UBlockyGraph*                                BlockyGraph;                                              
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UBlockyGraphWidget_Save_Params
{
};


struct UBlockyGraphWidget_ReturnToPreviewGraph_Params
{
};


struct UBlockyGraphWidget_ReturnToMainGraph_Params
{
};


struct UBlockyGraphWidget_ResetMenuItems_Params
{
};


struct UBlockyGraphWidget_ResetJsonChangedFlag_Params
{
};


struct UBlockyGraphWidget_ResetGraph_Params
{
};


struct UBlockyGraphWidget_RemoveSubGraph_Params
{
	struct FString                                     InName;                                                   
};


struct UBlockyGraphWidget_RefreshFont_Params
{
};


struct UBlockyGraphWidget_ReEditVariable_Params
{
	int                                                Index;                                                    
};


struct UBlockyGraphWidget_Redo_Params
{
};


struct UBlockyGraphWidget_QuoteCustom_Params
{
};


struct UBlockyGraphWidget_Quote_Params
{
};


struct UBlockyGraphWidget_Paste_Params
{
};


struct UBlockyGraphWidget_OnCloseItemList_Params
{
};


struct UBlockyGraphWidget_OnAsyncLoadGraphBinCompleted_Params
{
};


struct UBlockyGraphWidget_LoadTemplateToBlockyGraph_Test_Params
{
	TArray<unsigned char>                              TemplateAst;                                              
	bool                                               IsCreateNewGraph;                                         
	bool                                               IsLoadPresetsInGraph;                                     
};


struct UBlockyGraphWidget_LoadTemplateToBlockyGraph_Params
{
	TArray<unsigned char>                              TemplateAst;                                              
	bool                                               IsCreateNewGraph;                                         
	bool                                               IsLoadPresetsInGraph;                                     
};


struct UBlockyGraphWidget_LoadGraphFromJsonText_Params
{
	struct FString                                     JsonStr;                                                  
};


struct UBlockyGraphWidget_LoadGraphFromBin_Params
{
	TArray<unsigned char>                              JsonStr;                                                  
};


struct UBlockyGraphWidget_LoadGlobalVarFromJsonText_Params
{
	struct FString                                     JsonStr;                                                  
};


struct UBlockyGraphWidget_LoadGlobalVarFromBin_Params
{
	TArray<unsigned char>                              JsonStr;                                                  
};


struct UBlockyGraphWidget_Load_Params
{
};


struct UBlockyGraphWidget_IsViewOverlap_Params
{
	struct FVector2D                                   Position;                                                 
	struct FVector2D                                   Size;                                                     
	bool                                               ReturnValue;                                              
};


struct UBlockyGraphWidget_IsFirstGraph_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlockyGraphWidget_GM_GenerateAllBlocks_Params
{
	int                                                CombinedBlocksNum;                                        
	int                                                GraphBlocksNum;                                           
	bool                                               bNeedResetGraph;                                          
};


struct UBlockyGraphWidget_GM_AddBlocks_Params
{
	TArray<struct FString>                             typeNames;                                                
	int                                                X;                                                        
	int                                                Y;                                                        
};


struct UBlockyGraphWidget_GetViewSize_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct UBlockyGraphWidget_GetViewScale_Params
{
	float                                              ReturnValue;                                              
};


struct UBlockyGraphWidget_GetViewPosition_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct UBlockyGraphWidget_GetJsonChangedFlag_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlockyGraphWidget_GetGraphSettingByName_Params
{
	struct FString                                     GraphName;                                                
	bool                                               CanCopy;                                                  
	bool                                               CanReName;                                                
	bool                                               CanDel;                                                   
	bool                                               CanSave;                                                  
	TArray<int>                                        Tags;                                                     
};


struct UBlockyGraphWidget_GetDeleteBlockUIRect_Params
{
	float                                              InRectWidth;                                              
};


struct UBlockyGraphWidget_GetCurrentGraph_Params
{
	class UBlockyGraph*                                ReturnValue;                                              
};


struct UBlockyGraphWidget_FocusTo_Params
{
	class UBlockBase*                                  TargetBlock;                                              
};


struct UBlockyGraphWidget_FinishVariableEdit_Params
{
	bool                                               bSaveVar;                                                 
	bool                                               bReEdit;                                                  
};


struct UBlockyGraphWidget_FinishCustomEdit_Params
{
	bool                                               bSave;                                                    
};


struct UBlockyGraphWidget_FinishBlockSetting_Params
{
	bool                                               bSave;                                                    
};


struct UBlockyGraphWidget_Eject_Params
{
};


struct UBlockyGraphWidget_EditCustumBlockGraph_Params
{
};


struct UBlockyGraphWidget_EditCustom_Params
{
};


struct UBlockyGraphWidget_Disable_Params
{
};


struct UBlockyGraphWidget_DeleteVariableListItem_Params
{
	int                                                Index;                                                    
};


struct UBlockyGraphWidget_DeleteSelected_Params
{
};


struct UBlockyGraphWidget_DeleteCustom_Params
{
};


struct UBlockyGraphWidget_DefineCustom_Params
{
};


struct UBlockyGraphWidget_Define_Params
{
};


struct UBlockyGraphWidget_Copy_Params
{
};


struct UBlockyGraphWidget_Comment_Params
{
};


struct UBlockyGraphWidget_CollectListItem_Params
{
	bool                                               bCollect;                                                 
};


struct UBlockyGraphWidget_Clone_Params
{
};


struct UBlockyGraphWidget_ClearUndoRedoDatas_Params
{
};


struct UBlockyGraphWidget_ClearTextSizeCache_Params
{
};


struct UBlockyGraphWidget_ClearLog_Params
{
};


struct UBlockyGraphWidget_CanvasPosToViewPos_Params
{
	struct FVector2D                                   Postion;                                                  
	struct FVector2D                                   ReturnValue;                                              
};


struct UBlockyGraphWidget_BlockyLog_Show_Params
{
	EBlockyLogMsgMode                                  Mode;                                                     
	class UBlockBase*                                  BlockSource;                                              
	struct FString                                     SlotID;                                                   
	struct FString                                     Info;                                                     
};


struct UBlockyGraphWidget_AsyncLoadGraphFromBin_Params
{
	TArray<unsigned char>                              GraphBinContent;                                          
	TArray<unsigned char>                              GlobalVarBinContent;                                      
};


struct UBlockyGraphWidget_AddSubGraph_Params
{
	struct FString                                     InName;                                                   
	struct FString                                     InType;                                                   
};


struct UBlockyGraphWidget_AddGraph_Params
{
	struct FString                                     InName;                                                   
	struct FString                                     InType;                                                   
	class UBlockyGraph*                                ReturnValue;                                              
};


struct UBlockyGraphWidget_AddGlobalComment_Params
{
};


struct UBlockyGroupWidget_GetGroupContainer_Params
{
	class UPanelWidget*                                ReturnValue;                                              
};


struct UBlockyGroupWidget_AddGroupItem_Params
{
};


struct UBlockyIntegerWidget_SetText_Params
{
	struct FString                                     Value;                                                    
};


struct UBlockyIntegerWidget_SetResult_Params
{
	struct FString                                     Value;                                                    
};


struct UBlockyIntegerWidget_SetNegativeEnable_Params
{
	bool                                               Enable;                                                   
};


struct UBlockyLogItemWidget_SetShowWarn_Params
{
	struct FString                                     Warn;                                                     
};


struct UBlockyLogItemWidget_SetShowInfo_Params
{
	struct FString                                     Info;                                                     
};


struct UBlockyLogItemWidget_SetShowError_Params
{
	struct FString                                     Error;                                                    
};


struct UBlockyLogItemWidget_SetActiveWidgetIndex_Params
{
	int                                                Index;                                                    
};


struct UBlockyLogItemWidget_OnClickBtnToBlock_Params
{
};


struct UBlockyLogItemWidget_GetTextBlockWarn_Params
{
	class UTextBlock*                                  ReturnValue;                                              
};


struct UBlockyLogItemWidget_GetTextBlockInfo_Params
{
	class UTextBlock*                                  ReturnValue;                                              
};


struct UBlockyLogItemWidget_GetTextBlockError_Params
{
	class UTextBlock*                                  ReturnValue;                                              
};


struct UBlockyLogItemWidget_GetActiveWidgetIndex_Params
{
	int                                                ReturnValue;                                              
};


struct UBlockyLogWidget_ShowLog_Params
{
};


struct UBlockyLogWidget_SetBtnWarnText_Params
{
	struct FString                                     Warn;                                                     
};


struct UBlockyLogWidget_SetBtnInfoText_Params
{
	struct FString                                     Info;                                                     
};


struct UBlockyLogWidget_SetBtnErrorText_Params
{
	struct FString                                     Error;                                                    
};


struct UBlockyLogWidget_OnClickWarnShow_Params
{
};


struct UBlockyLogWidget_OnClickInfoShow_Params
{
};


struct UBlockyLogWidget_OnClickErrorShow_Params
{
};


struct UBlockyLogWidget_OnClickAllShow_Params
{
};


struct UBlockyLogWidget_GetLogContainer_Params
{
	class UPanelWidget*                                ReturnValue;                                              
};


struct UBlockyLogWidget_GetItemTextWidth_Params
{
	float                                              ReturnValue;                                              
};


struct UBlockyLogWidget_GetBtnWarnText_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBlockyLogWidget_GetBtnInfoText_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBlockyLogWidget_GetBtnErrorText_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBlockyLuaLoopScrollBase_UserScrolled_Params
{
	float                                              Offset;                                                   
};


struct UBlockyLuaLoopScrollBase_SetItemType_Params
{
	class UClass*                                      _ItemType;                                                
};


struct UBlockyLuaLoopScrollBase_SetItemCount_Params
{
	int                                                Count;                                                    
	bool                                               ReturnValue;                                              
};


struct UBlockyLuaLoopScrollBase_RemoveItem_Params
{
	int                                                Index;                                                    
};


struct UBlockyLuaLoopScrollBase_RefreshItem_Params
{
	int                                                Index;                                                    
	bool                                               ReturnValue;                                              
};


struct UBlockyLuaLoopScrollBase_RefreshAllItems_Params
{
};


struct UBlockyLuaLoopScrollBase_Push_Params
{
};


struct UBlockyLuaLoopScrollBase_Pop_Params
{
};


struct UBlockyLuaLoopScrollBase_OnRefreshItem__DelegateSignature_Params
{
	class UWidget*                                     Item;                                                     
	int                                                Index;                                                    
};


struct UBlockyLuaLoopScrollBase_OnItemCreated__DelegateSignature_Params
{
	class UWidget*                                     Item;                                                     
	int                                                Index;                                                    
};


struct UBlockyLuaLoopScrollBase_OnChangeData__DelegateSignature_Params
{
	class UWidget*                                     Item;                                                     
	int                                                Index;                                                    
	struct FString                                     Key;                                                      
};


struct UBlockyLuaLoopScrollBase_InsertItem_Params
{
	int                                                Index;                                                    
};


struct UBlockyLuaLoopScrollBase_GetWidgetIndex_Params
{
	class UWidget*                                     Item;                                                     
	int                                                ReturnValue;                                              
};


struct UBlockyLuaLoopScrollBase_GetItemCount_Params
{
	int                                                ReturnValue;                                              
};


struct UBlockyLuaLoopScrollBase_GetIndexOfWidget_Params
{
	int                                                Index;                                                    
	class UWidget*                                     ReturnValue;                                              
};


struct UBlockyLuaLoopScrollBase_ChangeData_Params
{
	int                                                Index;                                                    
	struct FString                                     Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UBlockyLuaLoopScrollBase_CallTick_Params
{
	float                                              DeltaTime;                                                
};


struct UBlockyLuaLoopScrollBase_AutoSize_Params
{
	bool                                               bAutoSize;                                                
};


struct UBlockyLuaLoopScrollBase_MultiItem_UserScrolled_Params
{
	float                                              Offset;                                                   
};


struct UBlockyLuaLoopScrollBase_MultiItem_SetItemType_Params
{
	TArray<class UClass*>                              TypeArray;                                                
};


struct UBlockyLuaLoopScrollBase_MultiItem_SetItemCount_Params
{
	int                                                Count;                                                    
	bool                                               ReturnValue;                                              
};


struct UBlockyLuaLoopScrollBase_MultiItem_RemoveItem_Params
{
	int                                                Index;                                                    
};


struct UBlockyLuaLoopScrollBase_MultiItem_RefreshItem_Params
{
	int                                                Index;                                                    
	bool                                               ReturnValue;                                              
};


struct UBlockyLuaLoopScrollBase_MultiItem_RefreshAllItems_Params
{
};


struct UBlockyLuaLoopScrollBase_MultiItem_Push_Params
{
	class UClass*                                      Type;                                                     
};


struct UBlockyLuaLoopScrollBase_MultiItem_Pop_Params
{
};


struct UBlockyLuaLoopScrollBase_MultiItem_OnRefreshItem__DelegateSignature_Params
{
	class UWidget*                                     Item;                                                     
	int                                                Index;                                                    
};


struct UBlockyLuaLoopScrollBase_MultiItem_OnItemCreated__DelegateSignature_Params
{
	class UWidget*                                     Item;                                                     
	int                                                Index;                                                    
};


struct UBlockyLuaLoopScrollBase_MultiItem_OnChangeData__DelegateSignature_Params
{
	class UWidget*                                     Item;                                                     
	int                                                Index;                                                    
	struct FString                                     Key;                                                      
};


struct UBlockyLuaLoopScrollBase_MultiItem_InsertItem_Params
{
	int                                                Index;                                                    
	class UClass*                                      Type;                                                     
};


struct UBlockyLuaLoopScrollBase_MultiItem_GetWidgetIndex_Params
{
	class UWidget*                                     Item;                                                     
	int                                                ReturnValue;                                              
};


struct UBlockyLuaLoopScrollBase_MultiItem_GetItemCount_Params
{
	int                                                ReturnValue;                                              
};


struct UBlockyLuaLoopScrollBase_MultiItem_GetIndexOfWidget_Params
{
	int                                                Index;                                                    
	class UWidget*                                     ReturnValue;                                              
};


struct UBlockyLuaLoopScrollBase_MultiItem_ClearItems_Params
{
};


struct UBlockyLuaLoopScrollBase_MultiItem_ChangeData_Params
{
	int                                                Index;                                                    
	struct FString                                     Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UBlockyLuaLoopScrollBase_MultiItem_CallTick_Params
{
	float                                              DeltaTime;                                                
};


struct UBlockyLuaLoopScrollBase_MultiItem_AutoSize_Params
{
	bool                                               bAutoSize;                                                
};


struct UBlockyLuaLoopScrollBox_ScrollToItem_Params
{
	int                                                Index;                                                    
};


struct UBlockyLuaLoopScrollBox_MultiItem_ScrollToItem_Params
{
	int                                                Index;                                                    
};


struct UBlockyLuaLoopScrollBox_MultiItem_BP_UserScrolled_Params
{
	float                                              Offset;                                                   
};


struct UBlockyLuaLoopScrollBox_MultiItem_BP_PreventScrollOutOfSize_Params
{
	bool                                               bScroll;                                                  
	bool                                               ReturnValue;                                              
};


struct UBlockyLuaLoopScrollBox_MultiItem_BP_GetContentSize_Params
{
	float                                              ReturnValue;                                              
};


struct UBlockyLuaLoopScrollGrid_ScrollToItem_Params
{
	int                                                Index;                                                    
};


struct UBlockyMenuItemWidget_SetSelected_Params
{
	bool                                               IsSelected;                                               
};


struct UBlockyMenuItemWidget_OnClick_Params
{
};


struct UBlockyMenuItemWidget_InitWithItemObject_Params
{
	class UBlockyMenuItemObject*                       Item;                                                     
};


struct UBlockyMenuItemWidget_InitTextToShow_Params
{
};


struct UBlockyMenuWidget_SelectMenu_Params
{
	class UBlockyMenuItemWidget*                       MenuItemWidget;                                           
	bool                                               ReturnValue;                                              
};


struct UBlockyMenuWidget_OnAddMenuItemWidget_Params
{
	class UBlockyMenuItemWidget*                       MenuItemWidget;                                           
};


struct UBlockyMenuWidget_GetMenuContainer_Params
{
	class UPanelWidget*                                ReturnValue;                                              
};


struct UBlockyPresetItemWidget_SetPresetDesc_BP_Params
{
	class UPresetDesc*                                 PresetDesc;                                               
};


struct UBlockyPresetItemWidget_SetImageShowIcon_Params
{
	class UImage*                                      Image;                                                    
};


struct UBlockyPresetItemWidget_GetPresetDescCode_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBlockyPresetWidget_SetResult_Params
{
	class UPresetDesc*                                 Value;                                                    
};


struct UBlockyPresetWidget_SetPresets_Params
{
	TArray<class UPresetDesc*>                         Presets;                                                  
};


struct UBlockyPresetWidget_ResetMenuItem_Params
{
};


struct UBlockyPresetWidget_OnFilterBtnClick_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBlockyPresetWidget_LoopScrollBoxFilterStr_Params
{
	struct FString                                     filter;                                                   
};


struct UBlockyPresetWidget_LoopScrollBoxFilterByTag_Params
{
	TMap<int, struct FIntArrayWrapper>                 Tags;                                                     
	TArray<struct FString>                             curTagsStr;                                               
};


struct UBlockyPresetWidget_InitPresets_Params
{
};


struct UBlockyPresetWidget_GetPresetDesc_Params
{
	class UPresetDesc*                                 ReturnValue;                                              
};


struct UBlockyPresetWidget_GetLoopScrollBox_Params
{
	class UScrollBox*                                  ReturnValue;                                              
};


struct UBlockyPresetWidget_GetIsIconWidget_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlockyPresetWidget_ClearSearchText_Params
{
};


struct UBlockyRichTextBlock_SetText_Params
{
	struct FText                                       InText;                                                   
};


struct UBlockyRichTextBlock_GetText_Params
{
	struct FText                                       ReturnValue;                                              
};


struct UBlockySearchResultPanel_UpdateGraphContentSize_Params
{
};


struct UBlockySearchResultPanel_ToggleGraphResults_Params
{
	class UBlockyGraph*                                InGraph;                                                  
};


struct UBlockySearchResultPanel_ScrollToCategory_Params
{
	int                                                CategoryIndex;                                            
	bool                                               GraphCategory;                                            
};


struct UBlockySearchResultPanel_RefreshGraphBlocksWidgets_Params
{
};


struct UBlockySearchResultPanel_OnGraphBlocksCreated_Params
{
	class UWidget*                                     Widget;                                                   
	int                                                Index;                                                    
};


struct UBlockySearchResultPanel_FocusToBlock_Params
{
	class UBlockyGraph*                                InGraph;                                                  
	class UBlockBase*                                  InBlock;                                                  
};


struct UBlockySearchResultPanel_FilterOutSearchResultToShow_Params
{
	ESearchResultVisibleType                           VisibleType;                                              
};


struct UBlockySearchResultPanel_BP_ScrollYOffset_Params
{
	int                                                DeltaY;                                                   
	bool                                               ReturnValue;                                              
};


struct UBlockySearchResults_GraphItemWidget_OnClickedBlock_Params
{
};


struct UBlockySearchResults_GraphItemWidget_OnBlockWidgetSelected_Params
{
	bool                                               bSelected;                                                
};


struct UBlockySearchResults_GraphItemWidget_MarkSearchingStringWithColor_Params
{
	struct FString                                     InputString;                                              
	struct FString                                     Target;                                                   
	struct FString                                     ColorString;                                              
	struct FString                                     ReturnValue;                                              
};


struct UBlockySearchResults_GraphItemWidget_IsSearchUseCase_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlockySearchResults_GraphItemWidget_GetKeyWordColor_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBlockySearchResults_GraphWidget_ToggleGraphResultsCollapse_Params
{
};


struct UBlockySearchResults_GraphWidget_OnSetGraphResultsCollapse_Params
{
	bool                                               InCollapse;                                               
};


struct UBlockySearchResults_GraphWidget_OnRefreshDisplayNameView_Params
{
	struct FString                                     InGraphDisplayName;                                       
};


struct UBlockySearchResultsTab_OnSetSelected_Params
{
	bool                                               bSelected;                                                
};


struct UBlockySearchWidget_StoreLastSelectedMenuItems_Params
{
	bool                                               OverrideLastData;                                         
};


struct UBlockySearchWidget_ShouldCommitString_Params
{
	struct FText                                       Value;                                                    
	bool                                               ReturnValue;                                              
};


struct UBlockySearchWidget_SetSearchHistories_Params
{
	TArray<struct FString>                             searchArr;                                                
};


struct UBlockySearchWidget_SetResult_Params
{
	class UPresetDesc*                                 Value;                                                    
};


struct UBlockySearchWidget_SetGraphWidget_Params
{
	class UBlockyGraphWidget*                          InGraphWidget;                                            
};


struct UBlockySearchWidget_SearchMatchingResults_Params
{
	struct FString                                     SearchStr;                                                
	bool                                               ReturnValue;                                              
};


struct UBlockySearchWidget_ScrollToTabContent_Params
{
	class UBlockySearchResultsTab*                     NewSelectedTab;                                           
};


struct UBlockySearchWidget_SaveSearchHistories_Params
{
};


struct UBlockySearchWidget_RevertLastSelectedMenuItem_Params
{
};


struct UBlockySearchWidget_RefreshTabContainerView_Params
{
};


struct UBlockySearchWidget_RefreshSearchResultsView_Params
{
};


struct UBlockySearchWidget_LoadSearchHistories_Params
{
};


struct UBlockySearchWidget_IsSearchUseCase_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlockySearchWidget_InitLoopScroll_Params
{
	class UBlockyLoopScrollBox*                        ScrollBox;                                                
	TArray<class UPresetDesc*>                         arrayPresets;                                             
};


struct UBlockySearchWidget_HasMenuSelected_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlockySearchWidget_HasAnySearchResults_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlockySearchWidget_HasAnyHistory_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlockySearchWidget_GetTotalSearchedNums_Params
{
	int                                                ReturnValue;                                              
};


struct UBlockySearchWidget_GetSearchHistories_Params
{
	TArray<struct FString>                             ReturnValue;                                              
};


struct UBlockySearchWidget_GetPresetsSearchedNums_Params
{
	int                                                ReturnValue;                                              
};


struct UBlockySearchWidget_GetPresetDesc_Params
{
	class UPresetDesc*                                 ReturnValue;                                              
};


struct UBlockySearchWidget_GetHistoryStoreNum_Params
{
	int                                                ReturnValue;                                              
};


struct UBlockySearchWidget_GetHistoryNums_Params
{
	int                                                ReturnValue;                                              
};


struct UBlockySearchWidget_GetGraphSearchedNums_Params
{
	int                                                ReturnValue;                                              
};


struct UBlockySearchWidget_GetBlockSearchedNums_Params
{
	int                                                ReturnValue;                                              
};


struct UBlockySearchWidget_FilterSearchResultVisible_Params
{
	ESearchResultVisibleType                           InSearchResultVisibleType;                                
};


struct UBlockySearchWidget_EmptyListItemSeleceted_Params
{
};


struct UBlockySearchWidget_DoSearching_Params
{
	struct FString                                     SearchStr;                                                
};


struct UBlockySearchWidget_ClearTabSelected_Params
{
};


struct UBlockySearchWidget_ClearSearchHistories_Params
{
};


struct UBlockySearchWidget_ClearMenuSelectionStore_Params
{
};


struct UBlockySearchWidget_AddSearchHistory_Params
{
	struct FString                                     NewHistory;                                               
};


struct UBlockySelectFromSceneWidget_SetPreset_Params
{
	class UPresetDesc*                                 Value;                                                    
};


struct UBlockySelectFromSceneWidget_SetObjectDesc_Params
{
	class UObjectDesc*                                 Value;                                                    
};


struct UBlockySelectFromSceneWidget_SetImageShowIcon_Params
{
	class UImage*                                      Image;                                                    
	bool                                               ReturnValue;                                              
};


struct UBlockySelectFromSceneWidget_OnReceiveCustomSelectionResult_Params
{
	class UObjectDesc*                                 Value;                                                    
};


struct UBlockySelectFromSceneWidget_CallSelectScenePreset_Params
{
};


struct UBlockyStringWidget_StrDelEnt_Params
{
	struct FText                                       Value;                                                    
	struct FText                                       ReturnValue;                                              
};


struct UBlockyStringWidget_StoreSlotDataWithSerialId_Params
{
	int                                                SerialId;                                                 
};


struct UBlockyStringWidget_SetText_Params
{
	struct FString                                     Value;                                                    
};


struct UBlockyStringWidget_SetResult_Params
{
	struct FString                                     Value;                                                    
	int                                                SerialId;                                                 
};


struct UCustomizeEditableText_SetNewText_Params
{
	struct FText                                       InText;                                                   
};


struct UCustomizeEditableText_ReceiveCheckStringResultProcess_Params
{
	bool                                               Result;                                                   
	struct FString                                     ValidString;                                              
	struct FCheckStringHandleData                      Data;                                                     
};


struct UCustomizeEditableText_OpenKeyBoard_Params
{
};


struct UCustomizeEditableText_OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature_Params
{
	struct FText                                       CommittedText;                                            
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             
	int                                                SerialId;                                                 
};


struct UCustomizeEditableText_GetValidText_Params
{
	struct FText                                       ReturnValue;                                              
};


struct UCustomizeEditableTextBox_SetNewText_Params
{
	struct FText                                       InText;                                                   
};


struct UCustomizeEditableTextBox_ReceiveCheckStringResultProcess_Params
{
	bool                                               Result;                                                   
	struct FString                                     ValidString;                                              
	struct FCheckStringHandleData                      Data;                                                     
};


struct UCustomizeEditableTextBox_OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature_Params
{
	struct FText                                       CommittedText;                                            
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             
	int                                                SerialId;                                                 
};


struct UCustomizeEditableTextBox_GetValidText_Params
{
	struct FText                                       ReturnValue;                                              
};


struct UCustomizeMultiLineEditableTextBox_SetNewText_Params
{
	struct FText                                       InText;                                                   
};


struct UCustomizeMultiLineEditableTextBox_ReceiveCheckStringResultProcess_Params
{
	bool                                               Result;                                                   
	struct FString                                     ValidString;                                              
	struct FCheckStringHandleData                      Data;                                                     
};


struct UCustomizeMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature_Params
{
	struct FText                                       CommittedText;                                            
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             
	int                                                SerialId;                                                 
};


struct UCustomizeMultiLineEditableTextBox_GetValidText_Params
{
	struct FText                                       ReturnValue;                                              
};


struct UCustomizeMultiLineEditableTextBox_CheckStringValidProcess_Params
{
	struct FText                                       InText;                                                   
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             
};


struct UBlockyAutoScrollBox_Tick_Params
{
	float                                              DeltaTime;                                                
};


struct UBlockyAutoScrollBox_SetTextPadding_Params
{
	class UTextBlock*                                  Text;                                                     
	class UScrollBoxSlot*                              boxSlot;                                                  
	float                                              totalLength;                                              
};


struct UBlockyLoopScrollBase_UserScrolled_Params
{
	float                                              Offset;                                                   
};


struct UBlockyLoopScrollBase_Tick_Params
{
	float                                              DeltaTime;                                                
};


struct UBlockyLoopScrollBase_SetItemType_Params
{
	class UClass*                                      _ItemType;                                                
};


struct UBlockyLoopScrollBase_SetItemCount_Params
{
	int                                                Count;                                                    
	bool                                               ReturnValue;                                              
};


struct UBlockyLoopScrollBase_RemoveItem_Params
{
	int                                                Index;                                                    
};


struct UBlockyLoopScrollBase_RefreshItem_Params
{
	int                                                Index;                                                    
	bool                                               ReturnValue;                                              
};


struct UBlockyLoopScrollBase_RefreshAllItems_Params
{
};


struct UBlockyLoopScrollBase_OnRefreshItem__DelegateSignature_Params
{
	class UWidget*                                     Item;                                                     
	int                                                Index;                                                    
};


struct UBlockyLoopScrollBase_OnItemCreated__DelegateSignature_Params
{
	class UWidget*                                     Item;                                                     
	int                                                Index;                                                    
};


struct UBlockyLoopScrollBase_OnChangeData__DelegateSignature_Params
{
	class UWidget*                                     Item;                                                     
	int                                                Index;                                                    
	struct FString                                     Key;                                                      
};


struct UBlockyLoopScrollBase_LoopScrollBoxFilterStr_Params
{
	struct FString                                     filter;                                                   
};


struct UBlockyLoopScrollBase_LoopScrollBoxFilterByTag_Params
{
	TMap<int, struct FIntArrayWrapper>                 Tags;                                                     
};


struct UBlockyLoopScrollBase_InsertItem_Params
{
	int                                                Index;                                                    
};


struct UBlockyLoopScrollBase_GetWidgetIndex_Params
{
	class UWidget*                                     Item;                                                     
	int                                                ReturnValue;                                              
};


struct UBlockyLoopScrollBase_GetItems_Params
{
	TArray<class UWidget*>                             ReturnValue;                                              
};


struct UBlockyLoopScrollBase_GetItemCount_Params
{
	int                                                ReturnValue;                                              
};


struct UBlockyLoopScrollBase_GetIndexOfWidget_Params
{
	int                                                Index;                                                    
	class UWidget*                                     ReturnValue;                                              
};


struct UBlockyLoopScrollBase_ChangeData_Params
{
	int                                                Index;                                                    
	struct FString                                     Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UBlockyLoopScrollBase_AutoSize_Params
{
	bool                                               bAutoSize;                                                
};


struct UBlockyLoopScrollBox_Tick_Params
{
	float                                              DeltaTime;                                                
};


struct UBlockyLoopScrollBox_ScrollToItem_Params
{
	int                                                Index;                                                    
};


struct UBlockyLoopScrollGrid_ScrollToItem_Params
{
	int                                                Index;                                                    
};

}

