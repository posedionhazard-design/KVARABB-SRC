#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UBlockBase_SetIsDisable_Params
{
	bool                                               Disable;                                                  
};


struct UBlockBase_MakeSequentialDisplayName_Params
{
	class UBlockyGraphData*                            GraphData;                                                
	struct FString                                     BaseName;                                                 
	struct FString                                     ReturnValue;                                              
};


struct UBlockBase_IsEvent_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlockBase_GetCenterPos_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct UBlockBase_AssignSequentialDisplayName_Params
{
	class UBlockyGraphData*                            GraphData;                                                
	struct FString                                     BaseName;                                                 
};


struct UExecuteable_SupportFuncVar_Params
{
	bool                                               ReturnValue;                                              
};


struct UExecuteable_ReEditFuncVar_Params
{
	class UNamedVar*                                   var;                                                      
};


struct UExecuteable_DeleteFuncVar_Params
{
	class UNamedVar*                                   var;                                                      
};


struct UExecuteable_CreateFuncVar_Params
{
};


struct UExpressionBase_ReleaseExpression_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
};


struct UExpressionBase_CreateExpressionBase_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UArrayLengthExpression_SetTarget_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            Target;                                                   
};


struct UArrayLengthExpression_GetTarget_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UArrayLengthExpression_CreateArrayLengthExpression_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UNamedVar_UpdateColor_Params
{
	struct FLinearColor                                Color;                                                    
};


struct UNamedVar_SetNameVarColor_Params
{
	struct FLinearColor                                Color;                                                    
};


struct UNamedVar_SetIsArray_Params
{
	bool                                               IsArray;                                                  
};


struct UNamedVar_SetInitValueString_Params
{
	struct FString                                     Value;                                                    
};


struct UNamedVar_SetDefiner_Params
{
	class UVarDefiner*                                 Definer;                                                  
};


struct UNamedVar_SetAccessType_Params
{
	TEnumAsByte<EBlockyAccessType>                     Access;                                                   
};


struct UNamedVar_IsGlobalVar_Params
{
	bool                                               ReturnValue;                                              
};


struct UNamedVar_IsCustomColor_Params
{
	bool                                               ReturnValue;                                              
};


struct UNamedVar_IsArray_Params
{
	bool                                               ReturnValue;                                              
};


struct UNamedVar_InitColorDesc_Params
{
};


struct UNamedVar_GetNameVarColorDesc_Params
{
	int                                                idx;                                                      
	bool                                               IsArray;                                                  
	class UColorDesc*                                  ReturnValue;                                              
};


struct UNamedVar_GetNameVarColor_Params
{
	int                                                idx;                                                      
	bool                                               IsArray;                                                  
	struct FLinearColor                                ReturnValue;                                              
};


struct UNamedVar_GetInitValueString_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UNamedVar_GetDefiner_Params
{
	class UVarDefiner*                                 ReturnValue;                                              
};


struct UNamedVar_GetColorStr_Params
{
	int                                                idx;                                                      
	bool                                               IsArray;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UNamedVar_GetAccessType_Params
{
	TEnumAsByte<EBlockyAccessType>                     ReturnValue;                                              
};


struct UNamedVar_CallCustomSelectObject_Params
{
	int                                                idx;                                                      
	bool                                               IsArray;                                                  
};


struct UNamedVar_AddColorToArray_Params
{
};


struct UBinaryOperatorExpression_SetWithParentheses_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	bool                                               Value;                                                    
};


struct UBinaryOperatorExpression_SetRight_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            Value;                                                    
};


struct UBinaryOperatorExpression_SetOperation_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	TEnumAsByte<EBlockyBinaryOperation>                BlockyOp;                                                 
};


struct UBinaryOperatorExpression_SetLeft_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            Value;                                                    
};


struct UBinaryOperatorExpression_GetWithParentheses_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	bool                                               ReturnValue;                                              
};


struct UBinaryOperatorExpression_GetRight_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UBinaryOperatorExpression_GetOperation_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	TEnumAsByte<EBlockyBinaryOperation>                ReturnValue;                                              
};


struct UBinaryOperatorExpression_GetLeft_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UBinaryOperatorExpression_CreateBinaryOperatorExpression_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UCategoryDefiner_GetCurrentLocateShowName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBlockyCategoryItemObject_SetShowRedDotVar_Params
{
	bool                                               var;                                                      
};


struct UBlockyCategoryItemObject_InitShowRedDotVar_Params
{
	struct FString                                     BlockName;                                                
};


struct UBlockyCategoryItemObject_GetSelectedIconBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              
};


struct UBlockyCategoryItemObject_GetNewBlockNums_Params
{
	int                                                ReturnValue;                                              
};


struct UBlockyCategoryItemObject_GetIconBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              
};


struct UBlockyGraph_UpdateCustomBlockName_Params
{
};


struct UBlockyGraph_TryAdjustingBlockIntoView_Params
{
	class UBlockyGraphData*                            GraphData;                                                
};


struct UBlockyGraph_SetIsDisable_Params
{
	bool                                               Disable;                                                  
};


struct UBlockyGraph_SaveGraphToFile_Params
{
	struct FString                                     Filename;                                                 
	bool                                               IsNewFile;                                                
};


struct UBlockyGraph_SaveGraphAsTemplate_Params
{
	TArray<unsigned char>                              OutData;                                                  
	class UCustomConfig*                               CustomConfig;                                             
	bool                                               ReturnValue;                                              
};


struct UBlockyGraph_SaveCsutomGraphAsTemplate_Params
{
	TArray<unsigned char>                              OutData;                                                  
	bool                                               ReturnValue;                                              
};


struct UBlockyGraph_LoadGraphFromTemplate_Params
{
	TArray<unsigned char>                              Data;                                                     
	bool                                               IsLoadPresetsInGraph;                                     
};


struct UBlockyGraph_IsCustomTemplateGraph_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlockyGraph_IsCustomGraph_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlockyGraph_IsBasicTemplateGraph_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlockyGraph_GetTriggerItemsByRootBlocks_Params
{
	TArray<class UBlockBase*>                          ReturnValue;                                              
};


struct UBlockyGraph_GetTotalBlockNum_Params
{
	int                                                ReturnValue;                                              
};


struct UBlockyGraph_CaptureScreenWithShot_Params
{
	class UUserWidget*                                 Widget;                                                   
	struct FVector2D                                   rect;                                                     
	class UTexture2D*                                  ReturnValue;                                              
};


struct UBlockyGraph_CaptureScreenShot_Params
{
	class UUserWidget*                                 Widget;                                                   
};


struct UBlockyGraph_CanSaveAsTemplate_Params
{
	struct FString                                     OutFailedReason;                                          
	bool                                               ReturnValue;                                              
};


struct UBlockyGraph_CanBeRemove_Params
{
	class UBlockyGraphData*                            GraphData;                                                
	bool                                               ReturnValue;                                              
};


struct UBlockyGraph_CanBeDuplicated_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlockyGraph_AssignSequentialDisplayName_Params
{
	class UBlockyGraphData*                            GraphData;                                                
	struct FString                                     BaseName;                                                 
};


struct UBlockyGraphData_UseTemplate_Params
{
	class UBlockyGraph*                                templateGraph;                                            
};


struct UBlockyGraphData_UpdateVariableMenu_Params
{
};


struct UBlockyGraphData_UpdateVariableItemNames_Params
{
	TArray<struct FText>                               ReturnValue;                                              
};


struct UBlockyGraphData_UpdateCustomMenu_Params
{
};


struct UBlockyGraphData_UpdateCustomItemNames_Params
{
	TArray<struct FText>                               ReturnValue;                                              
};


struct UBlockyGraphData_UpdateAllPresetInGraph_Params
{
};


struct UBlockyGraphData_UpdateAfterLoadBin_Params
{
};


struct UBlockyGraphData_Undo_Params
{
};


struct UBlockyGraphData_TryCloseItemList_Params
{
};


struct UBlockyGraphData_ShowTips_Params
{
	struct FText                                       Tips;                                                     
};


struct UBlockyGraphData_ShowBlockSettingPop_Params
{
};


struct UBlockyGraphData_SetSlotString_Params
{
	struct FBlockySlotString                           slotStr;                                                  
};


struct UBlockyGraphData_SetGraphStrings_Params
{
	struct FGraphString                                graphStr;                                                 
};


struct UBlockyGraphData_SetCustomVariableString_Params
{
	struct FCustomVariableString                       variableStr;                                              
};


struct UBlockyGraphData_SetCustomConfigString_Params
{
	struct FCustomConfigString                         configStr;                                                
};


struct UBlockyGraphData_SetCurrentSubGraph_Params
{
	struct FString                                     InName;                                                   
};


struct UBlockyGraphData_SetCacheData_Params
{
	TMap<struct FString, struct FString>               Data;                                                     
};


struct UBlockyGraphData_SetBlockLogText_Params
{
	EBlockyLogMsgMode                                  Mode;                                                     
	class UBlockBase*                                  BlockSource;                                              
	struct FString                                     SlotID;                                                   
	struct FString                                     Info;                                                     
};


struct UBlockyGraphData_SetBlockLogTabNum_Params
{
	int                                                Mode;                                                     
	int                                                Num;                                                      
};


struct UBlockyGraphData_SetBlockLogNum_Params
{
	int                                                Mode;                                                     
	int                                                Num;                                                      
};


struct UBlockyGraphData_SaveGraphToJsonText_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBlockyGraphData_SaveGraphToBinFile_Params
{
	struct FString                                     FilePath;                                                 
};


struct UBlockyGraphData_SaveGraphToBin_Params
{
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UBlockyGraphData_SaveGlobalVarToJsonText_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBlockyGraphData_SaveGlobalVarToBin_Params
{
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UBlockyGraphData_SaveCustom_Params
{
};


struct UBlockyGraphData_Save_Params
{
};


struct UBlockyGraphData_ReturnToPreviewGraph_Params
{
};


struct UBlockyGraphData_ReturnToMainGraph_Params
{
};


struct UBlockyGraphData_ResetGraph_Params
{
};


struct UBlockyGraphData_RemoveSubGraph_Params
{
	struct FString                                     InName;                                                   
};


struct UBlockyGraphData_RefreshFont_Params
{
};


struct UBlockyGraphData_ReEditVariable_Params
{
	int                                                Index;                                                    
};


struct UBlockyGraphData_Redo_Params
{
};


struct UBlockyGraphData_QuoteVariable_Params
{
	int                                                Index;                                                    
};


struct UBlockyGraphData_QuoteCustom_Params
{
};


struct UBlockyGraphData_Quote_Params
{
};


struct UBlockyGraphData_Paste_Params
{
};


struct UBlockyGraphData_OpenGuideWebUrl_Params
{
};


struct UBlockyGraphData_OnLoadFinished_Params
{
};


struct UBlockyGraphData_MarkGraphDirty_Params
{
};


struct UBlockyGraphData_MakeSequentialDisplayName_Params
{
	struct FString                                     BaseName;                                                 
	struct FString                                     ReturnValue;                                              
};


struct UBlockyGraphData_LoadGraphFromJsonText_Params
{
	struct FString                                     JsonStr;                                                  
};


struct UBlockyGraphData_LoadGraphFromBinFile_Params
{
	struct FString                                     FilePath;                                                 
};


struct UBlockyGraphData_LoadGlobalVarFromJsonText_Params
{
	struct FString                                     JsonStr;                                                  
};


struct UBlockyGraphData_LoadByTicker_Params
{
};


struct UBlockyGraphData_Load_Params
{
};


struct UBlockyGraphData_JumpToFocusSlotByIdStrAndIdx_Params
{
	struct FString                                     blockId;                                                  
	unsigned char                                      idx;                                                      
	class UBlockBase*                                  ReturnValue;                                              
};


struct UBlockyGraphData_JumpToFocusSlotByIdStr_Params
{
	struct FString                                     blockId;                                                  
	struct FString                                     TargetSlotIdStr;                                          
	class UBlockBase*                                  ReturnValue;                                              
};


struct UBlockyGraphData_JumpToFocusBlockByIdStr_Params
{
	struct FString                                     blockId;                                                  
	class UBlockBase*                                  ReturnValue;                                              
};


struct UBlockyGraphData_ItemHasOpend_Params
{
	struct FString                                     ItemStringName;                                           
	bool                                               ReturnValue;                                              
};


struct UBlockyGraphData_IsStagedCanvasLoadInProgress_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlockyGraphData_IsGraphChanged_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlockyGraphData_IsFirstGraph_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlockyGraphData_IsBlockGuideButton_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlockyGraphData_HasExecutableCode_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlockyGraphData_GM_LoadGraph_DS_FromFiles_Params
{
	struct FString                                     GraphFilePath;                                            
	struct FString                                     GlobalVarsFilePath;                                       
	bool                                               ReturnValue;                                              
};


struct UBlockyGraphData_GM_LoadGraph_DS_Params
{
};


struct UBlockyGraphData_GM_GenerateAllBlocks_Params
{
	int                                                CombinedBlocksNum;                                        
	int                                                GraphBlocksNum;                                           
};


struct UBlockyGraphData_GetTriggerList_Params
{
	TArray<struct FString>                             ReturnValue;                                              
};


struct UBlockyGraphData_GetTLogType_Params
{
	TArray<struct FString>                             ReturnValue;                                              
};


struct UBlockyGraphData_GetTLog_Params
{
	TMap<struct FString, struct FString>               ReturnValue;                                              
};


struct UBlockyGraphData_GetSelectedBlockId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBlockyGraphData_GetQuoteVariableItem_Params
{
	class UBlockyGraph*                                Graph;                                                    
	TArray<class UBlockBase*>                          ReturnValue;                                              
};


struct UBlockyGraphData_GetQuoteVariableGraph_Params
{
	int                                                Index;                                                    
	TArray<class UBlockyGraph*>                        ReturnValue;                                              
};


struct UBlockyGraphData_GetPresetDescArray_Params
{
	bool                                               LocalOnly;                                                
	TArray<class UPresetDesc*>                         ReturnValue;                                              
};


struct UBlockyGraphData_GetNewBlocksNumWithMenu_Params
{
	struct FString                                     menuItemName;                                             
	int                                                ReturnValue;                                              
};


struct UBlockyGraphData_GetIsDisableComment_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlockyGraphData_GetGraphStrings_Params
{
	TArray<struct FGraphString>                        ReturnValue;                                              
};


struct UBlockyGraphData_GetGraphMap_Params
{
	TMap<struct FString, struct FString>               ReturnValue;                                              
};


struct UBlockyGraphData_GetFunctionDescArray_Params
{
	TArray<class UFunctionDesc*>                       ReturnValue;                                              
};


struct UBlockyGraphData_GetDeleteBlockUIRect_Params
{
	float                                              InRectWidth;                                              
};


struct UBlockyGraphData_GetCustomVariableStrings_Params
{
	TArray<struct FCustomVariableString>               ReturnValue;                                              
};


struct UBlockyGraphData_GetCustomNames_Params
{
	TArray<struct FText>                               ReturnValue;                                              
};


struct UBlockyGraphData_GetCustomEventConfigs_Params
{
	bool                                               isCloudGameEvent;                                         
	TArray<class UCustomConfig*>                       ReturnValue;                                              
};


struct UBlockyGraphData_GetCustomConfigStrings_Params
{
	TArray<struct FCustomConfigString>                 ReturnValue;                                              
};


struct UBlockyGraphData_GetCurrentGraphBlockyNumberByType_Params
{
	EBlockyCurrentGraphBlockyNumberType                Type;                                                     
	int                                                ReturnValue;                                              
};


struct UBlockyGraphData_GetCurrentGraph_Params
{
	class UBlockyGraph*                                ReturnValue;                                              
};


struct UBlockyGraphData_GetCurrentBlockyNumByMune_Params
{
	struct FString                                     Menu;                                                     
	struct FString                                     Category;                                                 
	int                                                ReturnValue;                                              
};


struct UBlockyGraphData_GetCacheData_Params
{
	TMap<struct FString, struct FString>               ReturnValue;                                              
};


struct UBlockyGraphData_GetBlockyStringDatasInPairWithBlocks_Params
{
	TArray<struct FBlockySlotString>                   OutSlotStrings;                                           
	TArray<class UBlockBase*>                          OutBlocks;                                                
};


struct UBlockyGraphData_GetBlockyStringDatasInPair_Params
{
	TArray<struct FBlockySlotString>                   ReturnValue;                                              
};


struct UBlockyGraphData_GetBlocks_Params
{
	TArray<class UBlockBase*>                          ReturnValue;                                              
};


struct UBlockyGraphData_GetAllBlockyInGraph_Params
{
	TArray<class UBlockBase*>                          ReturnValue;                                              
};


struct UBlockyGraphData_GetAllBlockIdStrings_Params
{
	TArray<struct FString>                             ReturnValue;                                              
};


struct UBlockyGraphData_GetAllBlockByKeyName_Params
{
	TMap<struct FString, int>                          ReturnValue;                                              
};


struct UBlockyGraphData_FocusToSlotByBlockySlotId_Params
{
	struct FBlockySlotString                           SlotID;                                                   
	class UBlockBase*                                  ReturnValue;                                              
};


struct UBlockyGraphData_FocusToSlot_Params
{
	class UBlockBase*                                  TargetBlock;                                              
	struct FString                                     TargetSlotIdStr;                                          
};


struct UBlockyGraphData_FocusTo_Params
{
	class UBlockBase*                                  TargetBlock;                                              
};


struct UBlockyGraphData_FinishVariableEdit_Params
{
	bool                                               bSaveVar;                                                 
	bool                                               bReEdit;                                                  
};


struct UBlockyGraphData_FinishCustomEdit_Params
{
	bool                                               bSave;                                                    
};


struct UBlockyGraphData_FinishBlockSetting_Params
{
	bool                                               bSaveVar;                                                 
};


struct UBlockyGraphData_FindBlockByIdStr_Params
{
	struct FString                                     blockId;                                                  
	class UBlockBase*                                  ReturnValue;                                              
};


struct UBlockyGraphData_EmptyListItemSeleceted_Params
{
};


struct UBlockyGraphData_Eject_Params
{
};


struct UBlockyGraphData_EditVariable_Params
{
};


struct UBlockyGraphData_EditCustumBlockGraph_Params
{
};


struct UBlockyGraphData_EditCustom_Params
{
};


struct UBlockyGraphData_DuplicateSubGraph_Params
{
	struct FString                                     SrcName;                                                  
};


struct UBlockyGraphData_DuplicateBlock_Params
{
	class UBlockBase*                                  bLock;                                                    
};


struct UBlockyGraphData_Disable_Params
{
};


struct UBlockyGraphData_DeleteVariableListItem_Params
{
	int                                                Index;                                                    
};


struct UBlockyGraphData_DeleteSelected_Params
{
};


struct UBlockyGraphData_DeleteCustom_Params
{
};


struct UBlockyGraphData_DeleteBlocks_Params
{
};


struct UBlockyGraphData_DeleteBlockInGraph_Params
{
	class UBlockyGraph*                                InGraph;                                                  
	class UBlockBase*                                  bLock;                                                    
};


struct UBlockyGraphData_DeleteBlockAndNextInGraph_Params
{
	class UBlockyGraph*                                InGraph;                                                  
	class UBlockBase*                                  bLock;                                                    
};


struct UBlockyGraphData_DeleteBlockAndNext_Params
{
	class UBlockBase*                                  bLock;                                                    
};


struct UBlockyGraphData_DeleteBlock_Params
{
	class UBlockBase*                                  bLock;                                                    
};


struct UBlockyGraphData_DefineCustom_Params
{
};


struct UBlockyGraphData_Define_Params
{
};


struct UBlockyGraphData_CustomNumByType_Params
{
	TEnumAsByte<ECustomBlockType>                      CustomType;                                               
	int                                                ReturnValue;                                              
};


struct UBlockyGraphData_CurSelectSubBlockyGraphs_Params
{
	TArray<class UBlockyGraph*>                        ReturnValue;                                              
};


struct UBlockyGraphData_Copy_Params
{
};


struct UBlockyGraphData_Comment_Params
{
};


struct UBlockyGraphData_Clone_Params
{
};


struct UBlockyGraphData_ClearUndoRedoDatas_Params
{
};


struct UBlockyGraphData_ClearTextSizeCache_Params
{
};


struct UBlockyGraphData_ClearGraphDirty_Params
{
};


struct UBlockyGraphData_ClearBlockLog_Params
{
};


struct UBlockyGraphData_CheckReports_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlockyGraphData_AsyncLoadGraphFromBinFile_Params
{
	struct FString                                     FilePath;                                                 
	struct FScriptDelegate                             Callback;                                                 
};


struct UBlockyGraphData_AddSubGraph_Params
{
	struct FString                                     InName;                                                   
	struct FString                                     InType;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UBlockyGraphData_AddOpendNameToArr_Params
{
	struct FString                                     ItemStringName;                                           
};


struct UBlockyGraphData_AddGraph_Params
{
	struct FString                                     InName;                                                   
	struct FString                                     InType;                                                   
	class UBlockyGraph*                                ReturnValue;                                              
};


struct UBlockyGraphData_AddGlobalComment_Params
{
};


struct UBlockyLuaConfig_SetCustomDefaultFont_Params
{
	struct FSlateFontInfo                              DefaultFont;                                              
};


struct UBlockyLuaConfig_ReplaceChCharToMaskChar_Params
{
	struct FString                                     Source;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UBlockyLuaConfig_PlayPresetSound_Params
{
	struct FString                                     SoundPath;                                                
};


struct UBlockyLuaConfig_IsNameStringValid_Params
{
	struct FString                                     NameString;                                               
	bool                                               ReturnValue;                                              
};


struct UBlockyLuaConfig_IsBlackboardVar_Params
{
	class UVarDefiner*                                 Definer;                                                  
	bool                                               ReturnValue;                                              
};


struct UBlockyLuaConfig_GetValidString_Params
{
	struct FString                                     CheckString;                                              
	struct FString                                     ReturnValue;                                              
};


struct UBlockyLuaConfig_GetTranslateStringTest_Params
{
	struct FString                                     KeyString;                                                
	struct FString                                     ReturnValue;                                              
};


struct UBlockyLuaConfig_GetTranslateString_Params
{
	struct FString                                     KeyString;                                                
	struct FString                                     ReturnValue;                                              
};


struct UBlockyLuaConfig_GetLocaleString_Params
{
	struct FString                                     KeyString;                                                
	struct FString                                     ReturnValue;                                              
};


struct UBlockyLuaConfig_GetBlackboardDefiner_Params
{
	class UVarDefiner*                                 Definer;                                                  
	class UBlackboardDefiner*                          ReturnValue;                                              
};


struct UBlockyLuaConfig_ClearCustomDefaultFont_Params
{
};


struct UBlockyLuaConfig_ClearAsyncTextureHandleMap_Params
{
};


struct UBlockyLuaConfig_CheckStringValidTest_Params
{
	struct FString                                     CheckString;                                              
	struct FCheckStringHandleData                      Data;                                                     
};


struct UBlockyLuaUtility_WriteUInt8_Params
{
	struct FBlockyLuaHandle                            ar;                                                       
	unsigned char                                      Value;                                                    
};


struct UBlockyLuaUtility_WriteUInt64_Params
{
	struct FBlockyLuaHandle                            ar;                                                       
	uint64_t                                           Value;                                                    
};


struct UBlockyLuaUtility_WriteUInt32_Params
{
	struct FBlockyLuaHandle                            ar;                                                       
	uint32_t                                           Value;                                                    
};


struct UBlockyLuaUtility_WriteUInt16_Params
{
	struct FBlockyLuaHandle                            ar;                                                       
	uint16_t                                           Value;                                                    
};


struct UBlockyLuaUtility_WriteString_Params
{
	struct FBlockyLuaHandle                            ar;                                                       
	struct FString                                     Value;                                                    
};


struct UBlockyLuaUtility_WriteSingle_Params
{
	struct FBlockyLuaHandle                            ar;                                                       
	float                                              Value;                                                    
};


struct UBlockyLuaUtility_WriteObjectPtr_Params
{
	struct FBlockyLuaHandle                            ar;                                                       
	class UObject*                                     Value;                                                    
};


struct UBlockyLuaUtility_WriteInt8_Params
{
	struct FBlockyLuaHandle                            ar;                                                       
	int8_t                                             Value;                                                    
};


struct UBlockyLuaUtility_WriteInt64_Params
{
	struct FBlockyLuaHandle                            ar;                                                       
	int64_t                                            Value;                                                    
};


struct UBlockyLuaUtility_WriteInt32_Params
{
	struct FBlockyLuaHandle                            ar;                                                       
	int                                                Value;                                                    
};


struct UBlockyLuaUtility_WriteInt16_Params
{
	struct FBlockyLuaHandle                            ar;                                                       
	int16_t                                            Value;                                                    
};


struct UBlockyLuaUtility_WriteHandle_Params
{
	struct FBlockyLuaHandle                            ar;                                                       
	struct FBlockyLuaHandle                            Value;                                                    
};


struct UBlockyLuaUtility_WriteDouble_Params
{
	struct FBlockyLuaHandle                            ar;                                                       
	double                                             Value;                                                    
};


struct UBlockyLuaUtility_WriteBool_Params
{
	struct FBlockyLuaHandle                            ar;                                                       
	bool                                               Value;                                                    
};


struct UBlockyLuaUtility_ReadUInt8_Params
{
	struct FBlockyLuaHandle                            ar;                                                       
	unsigned char                                      ReturnValue;                                              
};


struct UBlockyLuaUtility_ReadUInt64_Params
{
	struct FBlockyLuaHandle                            ar;                                                       
	uint64_t                                           ReturnValue;                                              
};


struct UBlockyLuaUtility_ReadUInt32_Params
{
	struct FBlockyLuaHandle                            ar;                                                       
	uint32_t                                           ReturnValue;                                              
};


struct UBlockyLuaUtility_ReadUInt16_Params
{
	struct FBlockyLuaHandle                            ar;                                                       
	uint16_t                                           ReturnValue;                                              
};


struct UBlockyLuaUtility_ReadString_Params
{
	struct FBlockyLuaHandle                            ar;                                                       
	struct FString                                     ReturnValue;                                              
};


struct UBlockyLuaUtility_ReadSingle_Params
{
	struct FBlockyLuaHandle                            ar;                                                       
	float                                              ReturnValue;                                              
};


struct UBlockyLuaUtility_ReadObjectPtr_Params
{
	struct FBlockyLuaHandle                            ar;                                                       
	class UObject*                                     ReturnValue;                                              
};


struct UBlockyLuaUtility_ReadInt8_Params
{
	struct FBlockyLuaHandle                            ar;                                                       
	int8_t                                             ReturnValue;                                              
};


struct UBlockyLuaUtility_ReadInt64_Params
{
	struct FBlockyLuaHandle                            ar;                                                       
	int64_t                                            ReturnValue;                                              
};


struct UBlockyLuaUtility_ReadInt32_Params
{
	struct FBlockyLuaHandle                            ar;                                                       
	int                                                ReturnValue;                                              
};


struct UBlockyLuaUtility_ReadInt16_Params
{
	struct FBlockyLuaHandle                            ar;                                                       
	int16_t                                            ReturnValue;                                              
};


struct UBlockyLuaUtility_ReadHandle_Params
{
	struct FBlockyLuaHandle                            ar;                                                       
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UBlockyLuaUtility_ReadDouble_Params
{
	struct FBlockyLuaHandle                            ar;                                                       
	double                                             ReturnValue;                                              
};


struct UBlockyLuaUtility_ReadBool_Params
{
	struct FBlockyLuaHandle                            ar;                                                       
	bool                                               ReturnValue;                                              
};


struct UBlockyLuaUtility_DestroyReturnWriter_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
};


struct UBlockyLuaUtility_DestroyArgumentsReader_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
};


struct UBlockyLuaUtility_CreateReturnWriter_Params
{
	struct FBlockyLuaHandle                            stubHandle;                                               
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UBlockyLuaUtility_CreateArgumentsReader_Params
{
	struct FBlockyLuaHandle                            stubHandle;                                               
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UBlockyMenuItemObject_SetShowRedDotVar_Params
{
	bool                                               var;                                                      
};


struct UBlockyMenuItemObject_InitShowRedDotVar_Params
{
};


struct UBlockyMenuItemObject_Custom_NewCustom_Params
{
};


struct UBlockyMenuItemObject_Custom_IsCurrentCategoryEmpty_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlockyMenuItemObject_Custom_GetCustomType_Params
{
	TEnumAsByte<ECustomBlockType>                      ReturnValue;                                              
};


struct UBlockyMenuItemObject_Custom_ClosePopUp_Params
{
};


struct UBlockyMenuItemObject_Variable_NewVariable_Params
{
};


struct UBlockyMenuItemObject_Variable_NewCustomVariable_Params
{
};


struct UBlockyMenuItemObject_Variable_IsSlotCustomVarToShow_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlockyMenuItemObject_Variable_IsPlayerBlackboard_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlockyMenuItemObject_Variable_IsCurrentCategoryEmpty_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlockyMenuItemObject_Variable_IsBlackBoardVariable_Params
{
	bool                                               ReturnValue;                                              
};


struct UBlockyMenuItemObject_Variable_FilterBlackboard_Params
{
	bool                                               bIsPlayerVar;                                             
};


struct UBlockyMenuItemObject_Variable_FilterAccess_Params
{
	TEnumAsByte<EBlockyAccessType>                     InAccess;                                                 
};


struct UBlockyMenuItemObject_Variable_CanSeeCustomVar_Params
{
	bool                                               IsConfigContain;                                          
	bool                                               IsOnlyShowCustom;                                         
	bool                                               IsHiddenCustom;                                           
};


struct UCastExpression_SetTargetType_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            Target;                                                   
};


struct UCastExpression_SetExpression_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            Target;                                                   
};


struct UCastExpression_GetTargetType_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UCastExpression_GetExpression_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UCastExpression_CreateCastExpression2_Params
{
	struct FBlockyLuaHandle                            TargetType;                                               
	struct FBlockyLuaHandle                            expression;                                               
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UCastExpression_CreateCastExpression_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UClassReferenceExpression_SetClass_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            klass;                                                    
};


struct UClassReferenceExpression_GetClass_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UClassReferenceExpression_CreateClassReferenceExpression_Params
{
	struct FBlockyLuaHandle                            klass;                                                    
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UColorDesc_NameContainsString_Params
{
	struct FString                                     filter;                                                   
	bool                                               ReturnValue;                                              
};


struct UColorDesc_IsNameEmpty_Params
{
	bool                                               ReturnValue;                                              
};


struct UColorDesc_IsCodeNameEmpty_Params
{
	bool                                               ReturnValue;                                              
};


struct UColorDesc_GetType_Params
{
	struct FType                                       ReturnValue;                                              
};


struct UColorDesc_GetLocaleName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UColorDesc_GetHSVStr_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UColorDesc_GetColor_Params
{
	struct FLinearColor                                ReturnValue;                                              
};


struct UCommonUIFunctionLibrary_VarDefinerTypeCanBeArray_Params
{
	class UVarDefiner*                                 Definer;                                                  
	bool                                               ReturnValue;                                              
};


struct UCommonUIFunctionLibrary_SetIsVirtualKeyboardVisible_Params
{
	bool                                               Visible;                                                  
};


struct UCommonUIFunctionLibrary_LimitTextLength_Params
{
	struct FText                                       InputText;                                                
	int                                                MaxCharCount;                                             
	struct FText                                       OutText;                                                  
	bool                                               ReturnValue;                                              
};


struct UCommonUIFunctionLibrary_LimitTextEmojiInput_Params
{
	struct FText                                       InputText;                                                
	struct FText                                       ReturnValue;                                              
};


struct UCommonUIFunctionLibrary_IsNameStringValid_Params
{
	struct FString                                     NameString;                                               
	bool                                               ReturnValue;                                              
};


struct UCommonUIFunctionLibrary_IsFuncDisabled_Params
{
	struct FString                                     FuncName;                                                 
	bool                                               ReturnValue;                                              
};


struct UCommonUIFunctionLibrary_IsDeveloperMode_Params
{
	bool                                               ReturnValue;                                              
};


struct UCommonUIFunctionLibrary_GetTranslateString_BP_Params
{
	struct FString                                     KeyString;                                                
	struct FString                                     ReturnValue;                                              
};


struct UCommonUIFunctionLibrary_GetTranslateString_Params
{
	struct FString                                     KeyString;                                                
	struct FString                                     ReturnValue;                                              
};


struct UCommonUIFunctionLibrary_GetTextLen_Params
{
	struct FText                                       Text;                                                     
	int                                                ReturnValue;                                              
};


struct UCommonUIFunctionLibrary_GetPresetDescs_Params
{
	class UVarDefiner*                                 Definer;                                                  
	TArray<class UPresetDesc*>                         ReturnValue;                                              
};


struct UCommonUIFunctionLibrary_GetLocaleText_Params
{
	struct FText                                       KeyString;                                                
	struct FText                                       ReturnValue;                                              
};


struct UCommonUIFunctionLibrary_GetLocaleString_Params
{
	struct FString                                     KeyString;                                                
	struct FString                                     ReturnValue;                                              
};


struct UCommonUIFunctionLibrary_GetIsVirtualKeyboardVisible_Params
{
	bool                                               ReturnValue;                                              
};


struct UCommonUIFunctionLibrary_GetCustomVarNum_Params
{
	int                                                ReturnValue;                                              
};


struct UCommonUIFunctionLibrary_GetArrayInitStringStart_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UCommonUIFunctionLibrary_GetArrayInitStringEnd_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UCommonUIFunctionLibrary_GetAllDefiners_Params
{
	TArray<class UVarDefiner*>                         ReturnValue;                                              
};


struct UCommonUIFunctionLibrary_GenerateNextNameWithSuffix_Params
{
	TArray<struct FString>                             ExistingNames;                                            
	struct FString                                     InputName;                                                
	bool                                               InDuplicate;                                              
	struct FString                                     ReturnValue;                                              
};


struct UCommonUIFunctionLibrary_FormatNumber_Params
{
	struct FString                                     Input;                                                    
	struct FString                                     ReturnValue;                                              
};


struct UCommonUIFunctionLibrary_DisplayNameToTranslate_Params
{
	class UBlockBase*                                  bLock;                                                    
	struct FString                                     ReturnValue;                                              
};


struct UCommonUIFunctionLibrary_CollectAllObjects_Params
{
};


struct UCommonUIFunctionLibrary_CheckNameValid_Params
{
	struct FString                                     InName;                                                   
	struct FText                                       ErrorMsg;                                                 
	bool                                               ReturnValue;                                              
};


struct UCommonUIFunctionLibrary_CheckNameHasInvalidChar_Params
{
	struct FString                                     InName;                                                   
	bool                                               ReturnValue;                                              
};


struct UConfigDataAsset_SaveToAsset_Params
{
	struct FString                                     PackageName;                                              
};


struct UCreateObjectExpression_SetTypeName_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FString                                     Value;                                                    
};


struct UCreateObjectExpression_SetParameters_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	TArray<struct FBlockyLuaHandle>                    Value;                                                    
};


struct UCreateObjectExpression_GetTypeName_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UCreateObjectExpression_GetParameters_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	TArray<struct FBlockyLuaHandle>                    ReturnValue;                                              
};


struct UCreateObjectExpression_CreateCreateObjectExpression_Params
{
	struct FString                                     TypeName;                                                 
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UCustomParam_CopyFrom_Params
{
	class UCustomParam*                                Other;                                                    
};


struct UCustomConfig_UpdateDesc_Params
{
};


struct UCustomConfig_SetParamNum_Params
{
	int                                                paramNum;                                                 
};


struct UCustomConfig_InitResult_Params
{
	class UCustomParam*                                ReturnValue;                                              
};


struct UCustomConfig_Init_Params
{
};


struct UCustomConfig_GetParam_Params
{
	int                                                idx;                                                      
	class UCustomParam*                                ReturnValue;                                              
};


struct UCustomConfig_GetCustomGraphName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UCustomConfig_CopyFrom_Params
{
	class UCustomConfig*                               Other;                                                    
};


struct UDefaultValueExpression_SetType_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            Type;                                                     
};


struct UDefaultValueExpression_GetType_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UDefaultValueExpression_CreateDefaultValueExpression2_Params
{
	struct FBlockyLuaHandle                            typeRef;                                                  
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UDefaultValueExpression_CreateDefaultValueExpression_Params
{
	struct FBlockyLuaHandle                            typeClass;                                                
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UFunctionDesc_GetMenu_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UFunctionDesc_GetCategory_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UFunctionInvokeArgumentExpression_SetOperationType_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	TEnumAsByte<EBlockyFunctionArgumentAttribute>      Value;                                                    
};


struct UFunctionInvokeArgumentExpression_SetExpression_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            Value;                                                    
};


struct UFunctionInvokeArgumentExpression_SetAdditionPostCode_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FString                                     Value;                                                    
};


struct UFunctionInvokeArgumentExpression_GetOperationType_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	TEnumAsByte<EBlockyFunctionArgumentAttribute>      ReturnValue;                                              
};


struct UFunctionInvokeArgumentExpression_GetExpression_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UFunctionInvokeArgumentExpression_GetAdditionPostCode_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UFunctionInvokeArgumentExpression_CreateFunctionInvokeArgumentExpression_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UFunctionInvokeExpression_SetReturnValue_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            Value;                                                    
};


struct UFunctionInvokeExpression_SetHost_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            Value;                                                    
};


struct UFunctionInvokeExpression_SetFunctionName_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FString                                     Value;                                                    
};


struct UFunctionInvokeExpression_SetComment_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            Value;                                                    
};


struct UFunctionInvokeExpression_SetArguments_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	TArray<struct FBlockyLuaHandle>                    Value;                                                    
};


struct UFunctionInvokeExpression_GetReturnValue_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UFunctionInvokeExpression_GetHost_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UFunctionInvokeExpression_GetFunctionName_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UFunctionInvokeExpression_GetComment_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UFunctionInvokeExpression_GetArguments_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	TArray<struct FBlockyLuaHandle>                    ReturnValue;                                              
};


struct UFunctionInvokeExpression_CreateFunctionInvokeExpression_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UHotfixUtility_UVarDefiner_GetCurrentLocateShowName_Params
{
	class UVarDefiner*                                 pThis;                                                    
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UPresetDesc_GetLocaleName_Params
{
	class UPresetDesc*                                 PresetDesc;                                               
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UNumFromTo_UpdateParameterDisplayName_Index_DisplayName_Params
{
	class UFunctionDesc*                               Desc;                                                     
	struct FString                                     DisplayName;                                              
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UNumFromTo_UpdateParameterDisplayName_CurrNum_DisplayName_Params
{
	class UFunctionDesc*                               Desc;                                                     
	struct FString                                     DisplayName;                                              
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UNumFromTo_SetFunctionDesc_NamedVarBlock_DisplayName_Params
{
	class UFunctionDesc*                               Desc;                                                     
	int                                                ParamIdx;                                                 
	struct FString                                     DisplayName;                                              
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UNumFromTo_InitializeBlock_IndexBlock_Name_Params
{
	class UNumFromTo*                                  NumFromTo;                                                
	struct FString                                     Name;                                                     
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UNumFromTo_InitializeBlock_CurrentBlock_Name_Params
{
	class UNumFromTo*                                  NumFromTo;                                                
	struct FString                                     Name;                                                     
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UNamedVar_UpdateFormater_VarFormatNameText_Params
{
	class UNamedVar*                                   var;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UForEach_UpdateParameterDisplayName_ForeachIndex_DisplayName_Params
{
	class UFunctionDesc*                               Desc;                                                     
	struct FString                                     DisplayName;                                              
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UForEach_UpdateParameterDisplayName_ForeachElement_DisplayName_Params
{
	class UFunctionDesc*                               Desc;                                                     
	struct FString                                     DisplayName;                                              
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UForEach_UpdateParameterDisplayName_ElementNormalDisplay_Params
{
	class UFunctionDesc*                               Desc;                                                     
	struct FString                                     DisplayName;                                              
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UForEach_UpdateParameterDisplayName_ElementDisableDisplay_Params
{
	class UFunctionDesc*                               Desc;                                                     
	struct FString                                     DisplayName;                                              
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UForEach_SetFunctionDesc_ForeachIndex_DisplayName_Params
{
	class UFunctionDesc*                               Desc;                                                     
	struct FString                                     DisplayName;                                              
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UForEach_SetFunctionDesc_ForeachElement_DisplayName_Params
{
	class UFunctionDesc*                               Desc;                                                     
	struct FString                                     DisplayName;                                              
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UForEach_SetFunctionDesc_ElementNormalDisplay_Params
{
	class UFunctionDesc*                               Desc;                                                     
	struct FString                                     DisplayName;                                              
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UForEach_SetFunctionDesc_ElementDisableDisplay_Params
{
	class UFunctionDesc*                               Desc;                                                     
	struct FString                                     DisplayName;                                              
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UExecuteable_SetFunctionDesc_ParamDisplayName_Params
{
	class UFunctionDesc*                               Desc;                                                     
	int                                                ParamIdx;                                                 
	struct FString                                     ParamDisplayName;                                         
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UEnumDesc_GetCurrentLocaleEnumValueName_Params
{
	class UEnumDesc*                                   EnumDesc;                                                 
	struct FName                                       enumValueName;                                            
	struct FString                                     enumValueLocName;                                         
	bool                                               useDefaultWhenNotFound;                                   
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UEnumDesc_GetCurrentLocaleEnumTypeName_Params
{
	class UEnumDesc*                                   EnumDesc;                                                 
	struct FString                                     EnumTypeName;                                             
	bool                                               useDefaultWhenNotFound;                                   
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UDoNum_UpdateParameterDisplayName_CurrentIndexSlotDisplayName_Params
{
	class UFunctionDesc*                               Desc;                                                     
	struct FString                                     CurrentIndexDisplayName;                                  
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UDoNum_SetFunctionDesc_CurrentIndexSlotDisplayName_Params
{
	class UFunctionDesc*                               Desc;                                                     
	struct FString                                     CurrentIndexDisplayName;                                  
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UDefineFunction_SetFunctionDesc_ParamName_Params
{
	class UFunctionDesc*                               Desc;                                                     
	int                                                ParamIdx;                                                 
	struct FString                                     ParamName;                                                
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UCommonUIFunctionLibrary_GetTranslateString_Params
{
	struct FString                                     KeyString;                                                
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UCommonUIFunctionLibrary_GetLocaleString_Params
{
	struct FString                                     KeyString;                                                
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UColorDesc_GetLocaleName_Params
{
	class UColorDesc*                                  ColorDesc;                                                
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UBlockyTimer_UpdateParameterDisplayName_CurrentCount_DisplayName_Params
{
	class UFunctionDesc*                               Desc;                                                     
	struct FString                                     DisplayName;                                              
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UBlockyTimer_SetFunctionDesc_CurrentCount_DisplayName_Params
{
	class UFunctionDesc*                               Desc;                                                     
	struct FString                                     DisplayName;                                              
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UBlockySearchWidget_RefreshTabContainerView_ContentName_Params
{
	class UUserWidget*                                 pThis;                                                    
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UBlockySearchWidget_RefreshTabContainerView_CategoryName_Params
{
	class UUserWidget*                                 pThis;                                                    
	class UBlockyCategoryItemObject*                   Category;                                                 
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UBlockyMenuWidget_UpdateMenus_MenuWidgetName_Params
{
	class UUserWidget*                                 pThis;                                                    
	class UBlockyMenuItemObject*                       MenuItem;                                                 
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UBlockyMenuItemObject_Search_SearchMatchingResults_ItemObjectString_Params
{
	class UBlockyMenuItemObject_Search*                MenuItem;                                                 
	class UBlockyBlockListItemObject*                  ItemObject;                                               
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UBlockyMenuItemObject_Search_PaintSearchedItems_CategoryName_Params
{
	class UBlockyMenuItemObject_Search*                MenuItem;                                                 
	class UBlockyCategoryItemObject*                   CategoryItem;                                             
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UBlockyMenuItemObject_Search_PaintSearchedContentTitle_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UBlockyMenuItemObject_Search_GetBlockSearchString_NamedVarName_Params
{
	class UNamedVar*                                   var;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UBlockyMenuItemObject_Search_GetBlockSearchString_Block_Params
{
	class UBlockBase*                                  InBlock;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UBlockyMenuItemObject_Paint_CategoryName_Params
{
	class UBlockyMenuItemObject*                       MenuItem;                                                 
	class UBlockyCategoryItemObject*                   CategoryItem;                                             
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UBlockyGraphData_GetCustomNames_CustomName_Params
{
	class UCustomConfig*                               Custom;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UBlockyGraph_LoadGraphFromXnd_OnLocalVarBlockLoaded_Params
{
	class UBlockyGraph*                                pThis;                                                    
	class UNamedVar*                                   bLock;                                                    
};


struct UHotfixUtility_UBlockyGraph_LoadGraphFromXnd_OnBlockLoaded_Params
{
	class UBlockyGraph*                                pThis;                                                    
	class UBlockBase*                                  bLock;                                                    
};


struct UHotfixUtility_UBlockyEditor_OnClickSlot_TypeFilterMenuName_Params
{
	class UBlockBase*                                  slotHost;                                                 
	struct FHotFixSlotHandle                           Handle;                                                   
	struct FString                                     menuName;                                                 
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UBlockyEditor_OnClickSlot_TypeFilterCategoryName_Params
{
	class UBlockBase*                                  slotHost;                                                 
	struct FHotFixSlotHandle                           Handle;                                                   
	struct FString                                     CategoryName;                                             
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UBlockyEditor_OnClickSlot_SelectFromSceneWidget_DefaultShowName_Params
{
	class UBlockBase*                                  slotHost;                                                 
	struct FHotFixSlotHandle                           Handle;                                                   
	struct FString                                     slotCustomClickTypeName;                                  
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UBlockyEditor_OnClickSlot_EnumName_Params
{
	class UBlockBase*                                  slotHost;                                                 
	class UEnumDesc*                                   EnumDesc;                                                 
	struct FName                                       EnumName;                                                 
	struct FString                                     EnumString;                                               
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UBlockyEditor_OnClickSlot_CategoryItemName_Params
{
	class UBlockBase*                                  slotHost;                                                 
	struct FString                                     CategoryName;                                             
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UBlockyEditor_OnClickSlot_BPMenuItemName_Params
{
	class UBlockBase*                                  slotHost;                                                 
	struct FString                                     menuName;                                                 
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UBlockyEditor_GetLocaleString_Params
{
	struct FString                                     KeyString;                                                
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UBlockyCategoryWidget_FilterWithBlockyMenuItem_WidgetName_Params
{
	class UUserWidget*                                 pThis;                                                    
	class UBlockyCategoryItemObject*                   Category;                                                 
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UBlockyBlockListItemObject_Variable_GetStingUsedToSearch_Params
{
	class UBlockyBlockListItemObject_Variable*         ItemObject;                                               
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UBlockyBlockListItemObject_GetStingUsedToSearch_Params
{
	class UBlockyBlockListItemObject*                  ItemObject;                                               
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_UBlockyBlockListItemObject_Custom_GetStingUsedToSearch_Params
{
	class UBlockyBlockListItemObject_Custom*           ItemObject;                                               
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_Slot_IsValidPreset_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   
	class UPresetDesc*                                 Preset;                                                   
	bool                                               ReturnValue;                                              
};


struct UHotfixUtility_Slot_IsValidItem_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   
	class UBlockyBlockListItemObject*                  Item;                                                     
	bool                                               ReturnValue;                                              
};


struct UHotfixUtility_Slot_IsValidHandle_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   
	bool                                               ReturnValue;                                              
};


struct UHotfixUtility_Slot_IsValidBlock_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   
	class UBlockBase*                                  blk;                                                      
	bool                                               ReturnValue;                                              
};


struct UHotfixUtility_Slot_HasClickType_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   
	int                                                Type;                                                     
	bool                                               ReturnValue;                                              
};


struct UHotfixUtility_Slot_GetSlotPresetDesc_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   
	class UPresetDesc*                                 ReturnValue;                                              
};


struct UHotfixUtility_Slot_GetSlotName_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   
	struct FText                                       OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UHotfixUtility_Slot_GetSlotItemType_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   
	struct FType                                       OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UHotfixUtility_Slot_GetSlotGetColorValue_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   
	struct FLinearColor                                OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UHotfixUtility_Slot_GetSlotDisplayName_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   
	struct FString                                     OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UHotfixUtility_Slot_GetSlotDefaultValue_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   
	struct FString                                     OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UHotfixUtility_Slot_GetSlotCustomClickTypeName_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   
	struct FString                                     OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UHotfixUtility_Slot_GetSlotCustomClickType_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   
	struct FString                                     OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UHotfixUtility_Slot_GetSlotColorDesc_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   
	class UColorDesc*                                  ReturnValue;                                              
};


struct UHotfixUtility_Slot_GetSlotClickType_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   
	int                                                OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UHotfixUtility_Slot_GetHostBlock_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   
	class UBlockBase*                                  ReturnValue;                                              
};


struct UHotfixUtility_Slot_CanSetBlock_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   
	class UBlockBase*                                  Host;                                                     
	class UBlockBase*                                  blk;                                                      
	bool                                               ReturnValue;                                              
};


struct UHotfixUtility_SetTypeValue_Params
{
	struct FType                                       Type;                                                     
	int                                                NewValue;                                                 
};


struct UHotfixUtility_GetTypeValue_Params
{
	struct FType                                       Type;                                                     
	int                                                ReturnValue;                                              
};


struct UHotfixUtility_GetTranslateString_ShowTips_Params
{
	struct FString                                     Tip;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_GetTranslateString_Params
{
	struct FString                                     String;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_GetDisplayNameString_SlotDisplayName_Params
{
	struct FHotFixSlotHandle                           Handle;                                                   
	struct FString                                     SlotDisplayName;                                          
	struct FString                                     SlotName;                                                 
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_FPresetTypeData_GetLocalTypeName_Params
{
	struct FPresetTypeData                             PresetTypeData;                                           
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_FMsgData_CreateMessageData_InfoString_ReplaceTriggerName_Params
{
	class UFunctionDesc*                               Desc;                                                     
	struct FString                                     ListItemFormatString;                                     
	struct FString                                     InfoString;                                               
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_FMsgData_CreateMessageData_InfoString_ReplaceBlockName_Params
{
	class UBlockBase*                                  bLock;                                                    
	struct FString                                     ListItemFormatString;                                     
	struct FString                                     InfoString;                                               
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_FMsgData_CreateMessageData_GetInfoTranslateString_Params
{
	class UBlockBase*                                  bLock;                                                    
	struct FHotFixSlotHandle                           Slot;                                                     
	struct FString                                     Info;                                                     
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_FLocaleFormatter_UpdateVarFormatters_SeparatorStr_Params
{
	struct FString                                     str;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_FLocaleFormatter_InitializeListItemFormats_ListItemFormatString_Params
{
	struct FString                                     ListItemFormatString;                                     
	bool                                               bNeedLocalization;                                        
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_FLocaleFormatter_InitializeFormats_FormatString_Params
{
	struct FString                                     FormatString;                                             
	bool                                               bNeedLocalization;                                        
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_FLocaleFormatter_FFormatData_SlotIdx_OnPaintListItem_ParamDisplayName_Params
{
	class UBlockyBlockListItemObject*                  ListItemObject;                                           
	int                                                ParamIdx;                                                 
	struct FString                                     DisplayName;                                              
	struct FString                                     ReturnValue;                                              
};


struct UHotfixUtility_FLocaleFormatter_FFormatData_SlotIdx_OnArrangeListItem_ParamDisplayName_Params
{
	class UBlockyBlockListItemObject*                  ListItemObject;                                           
	int                                                ParamIdx;                                                 
	struct FString                                     DisplayName;                                              
	struct FString                                     ReturnValue;                                              
};


struct UIndexerOperatorExpression_SetTarget_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            Value;                                                    
};


struct UIndexerOperatorExpression_SetIndices_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	TArray<struct FBlockyLuaHandle>                    Value;                                                    
};


struct UIndexerOperatorExpression_GetTarget_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UIndexerOperatorExpression_GetIndices_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	TArray<struct FBlockyLuaHandle>                    ReturnValue;                                              
};


struct UIndexerOperatorExpression_CreateIndexerOperatorExpression_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UNullExpression_CreateNullExpression_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UPresetDesc_NameContainsString_Params
{
	struct FString                                     filter;                                                   
	bool                                               ReturnValue;                                              
};


struct UPresetDesc_IsNameEmpty_Params
{
	bool                                               ReturnValue;                                              
};


struct UPresetDesc_IsCodeNameEmpty_Params
{
	bool                                               ReturnValue;                                              
};


struct UPresetDesc_HasIcon_Params
{
	bool                                               ReturnValue;                                              
};


struct UPresetDesc_GetType_Params
{
	struct FType                                       ReturnValue;                                              
};


struct UPresetDesc_GetPresetValidityDurationValue_Params
{
	int                                                ReturnValue;                                              
};


struct UPresetDesc_GetLocaleName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UPrimitiveExpression_GetValueType_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	TEnumAsByte<EBlockyValueType>                      ReturnValue;                                              
};


struct UPrimitiveExpression_GetValueString_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FString                                     str;                                                      
};


struct UPrimitiveExpression_CreatePrimitiveExpression_UInt8_Params
{
	int                                                Value;                                                    
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UPrimitiveExpression_CreatePrimitiveExpression_UInt64_Params
{
	struct FBlockyLuaHandle                            Value;                                                    
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UPrimitiveExpression_CreatePrimitiveExpression_UInt32_Params
{
	int                                                Value;                                                    
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UPrimitiveExpression_CreatePrimitiveExpression_UInt16_Params
{
	int                                                Value;                                                    
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UPrimitiveExpression_CreatePrimitiveExpression_Str_Params
{
	struct FString                                     Value;                                                    
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UPrimitiveExpression_CreatePrimitiveExpression_Int8_Params
{
	int                                                Value;                                                    
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UPrimitiveExpression_CreatePrimitiveExpression_Int64_Params
{
	struct FBlockyLuaHandle                            Value;                                                    
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UPrimitiveExpression_CreatePrimitiveExpression_Int32_Params
{
	int                                                Value;                                                    
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UPrimitiveExpression_CreatePrimitiveExpression_Int16_Params
{
	int                                                Value;                                                    
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UPrimitiveExpression_CreatePrimitiveExpression_Float_Params
{
	float                                              Value;                                                    
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UPrimitiveExpression_CreatePrimitiveExpression_Double_Params
{
	struct FBlockyLuaHandle                            Value;                                                    
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UPrimitiveExpression_CreatePrimitiveExpression_Bool_Params
{
	bool                                               Value;                                                    
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UPrimitiveExpression_Clear_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
};


struct USelectionData_IsCurrentSlot_Params
{
	bool                                               ReturnValue;                                              
};


struct USelfReferenceExpression_CreateSelfReferenceExpression_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct USnippetExpression_GetSnippetString_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FString                                     ReturnValue;                                              
};


struct USnippetExpression_GetParameters_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	TArray<struct FBlockyLuaHandle>                    ReturnValue;                                              
};


struct USnippetExpression_CreateDefaultValueExpression_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UStatementBase_SetNextExpr_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            nextExpr;                                                 
};


struct UStatementBase_ReleaseExpression_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
};


struct UStatementBase_GetNextExpr_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UStatementBase_CreateStatementBase_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UVariableDeclaration_SetVisitMode_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	TEnumAsByte<EBlockyVisitMode>                      visitMode;                                                
};


struct UVariableDeclaration_SetVariableName_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FString                                     Name;                                                     
};


struct UVariableDeclaration_SetInitValue_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            initValue;                                                
};


struct UVariableDeclaration_SetComment_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            Comment;                                                  
};


struct UVariableDeclaration_GetVisitMode_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	TEnumAsByte<EBlockyVisitMode>                      ReturnValue;                                              
};


struct UVariableDeclaration_GetVariableName_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UVariableDeclaration_GetInitValue_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UVariableDeclaration_GetComment_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UVariableDeclaration_CreateVariableDeclaration_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UAssignOperatorStatement_SetTo_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            To;                                                       
};


struct UAssignOperatorStatement_SetFrom_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            From;                                                     
};


struct UAssignOperatorStatement_GetTo_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UAssignOperatorStatement_GetFrom_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UAssignOperatorStatement_CreateAssignOperatorStatement_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UExecuteSequenceStatement_SetSequence_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	TArray<struct FBlockyLuaHandle>                    Sequence;                                                 
};


struct UExecuteSequenceStatement_GetSequence_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	TArray<struct FBlockyLuaHandle>                    ReturnValue;                                              
};


struct UExecuteSequenceStatement_CreateExecuteSequenceStatement_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UReturnStatement_CreateReturnStatement_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UIfStatement_SetTrueStatement_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            trueStatement;                                            
};


struct UIfStatement_SetFalseStatement_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            falseStatement;                                           
};


struct UIfStatement_SetElseIfs_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	TArray<struct FBlockyLuaHandle>                    elseIfs;                                                  
};


struct UIfStatement_SetCondition_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            Condition;                                                
};


struct UIfStatement_GetTrueStatement_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UIfStatement_GetFalseStatement_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UIfStatement_GetElseIfs_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	TArray<struct FBlockyLuaHandle>                    ReturnValue;                                              
};


struct UIfStatement_GetCondition_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UIfStatement_CreateIfStatement_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UForLoopStatement_SetStepExpression_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            stepExpression;                                           
};


struct UForLoopStatement_SetLoopIndexName_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FString                                     loopIndexName;                                            
};


struct UForLoopStatement_SetLoopBody_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            loopBody;                                                 
};


struct UForLoopStatement_SetEndExpression_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            endExpression;                                            
};


struct UForLoopStatement_SetBeginExpression_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            beginExpression;                                          
};


struct UForLoopStatement_GetStepExpression_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UForLoopStatement_GetLoopIndexName_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UForLoopStatement_GetLoopBody_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UForLoopStatement_GetEndExpression_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UForLoopStatement_GetBeginExpression_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UForLoopStatement_CreateForLoopStatement_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UForeachLoopStatement_SetLoopItemName_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FString                                     loopIndexName;                                            
};


struct UForeachLoopStatement_SetLoopItemExp_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            loopItemExp;                                              
};


struct UForeachLoopStatement_SetLoopIndexName_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FString                                     loopIndexName;                                            
};


struct UForeachLoopStatement_SetLoopBody_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            loopBody;                                                 
};


struct UForeachLoopStatement_GetLoopItemName_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UForeachLoopStatement_GetLoopItemExp_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UForeachLoopStatement_GetLoopIndexName_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UForeachLoopStatement_GetLoopBody_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UForeachLoopStatement_CreateForeachLoopStatement_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UWhileLoopStatement_SetLoopBody_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            loopBody;                                                 
};


struct UWhileLoopStatement_SetCondition_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            Condition;                                                
};


struct UWhileLoopStatement_GetLoopBody_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UWhileLoopStatement_GetCondition_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UWhileLoopStatement_CreateWhileLoopStatement_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UContinueStatement_CreateContinueStatement_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UBreakStatement_CreateBreakStatement_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UCommentStatement_SetNewLine_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	bool                                               newLine;                                                  
};


struct UCommentStatement_SetCommentString_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FString                                     commentString;                                            
};


struct UCommentStatement_GetNewLine_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	bool                                               ReturnValue;                                              
};


struct UCommentStatement_GetCommentString_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UCommentStatement_CreateCommentStatement_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UExpressionStatement_SetNextStatement_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            nextStatement;                                            
};


struct UExpressionStatement_SetExpression_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            expression;                                               
};


struct UExpressionStatement_GetNextStatement_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UExpressionStatement_GetExpression_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UExpressionStatement_CreateExpressionStatement_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UStringAppendExpression_SetRight_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            Value;                                                    
};


struct UStringAppendExpression_SetLeft_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            Value;                                                    
};


struct UStringAppendExpression_SetExtras_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	TArray<struct FBlockyLuaHandle>                    Value;                                                    
};


struct UStringAppendExpression_GetRight_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UStringAppendExpression_GetLeft_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UStringAppendExpression_GetExtras_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	TArray<struct FBlockyLuaHandle>                    ReturnValue;                                              
};


struct UStringAppendExpression_CreateStringAppendExpression_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UTypeReference_SetTypeName_Params
{
	struct FBlockyLuaHandle                            Self;                                                     
	struct FString                                     Name;                                                     
};


struct UTypeReference_ReleaseTypeReference_Params
{
	struct FBlockyLuaHandle                            Self;                                                     
};


struct UTypeReference_GetTypeName_Params
{
	struct FBlockyLuaHandle                            Self;                                                     
	struct FString                                     ReturnValue;                                              
};


struct UTypeReference_FindClass_Params
{
	struct FString                                     Name;                                                     
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UTypeReference_CreateTypeReference3_Params
{
	struct FBlockyLuaHandle                            klass;                                                    
	int                                                numOfPointer;                                             
	bool                                               isRefer;                                                  
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UTypeReference_CreateTypeReference_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UTypeReference_AsStub_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaStub                              ReturnValue;                                              
};


struct UUnaryOperatorExpression_SetValue_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            Value;                                                    
};


struct UUnaryOperatorExpression_SetOperation_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	TEnumAsByte<EBlockyUnaryOperation>                 Op;                                                       
};


struct UUnaryOperatorExpression_GetValue_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UUnaryOperatorExpression_GetOperation_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	TEnumAsByte<EBlockyUnaryOperation>                 ReturnValue;                                              
};


struct UUnaryOperatorExpression_CreateUnaryOperatorExpression_Params
{
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UVarDefiner_SetType_Params
{
	struct FType                                       Value;                                                    
};


struct UVarDefiner_GetVarTypeEnum_Params
{
	TEnumAsByte<EBlockyVariableType>                   ReturnValue;                                              
};


struct UVarDefiner_GetTypeEnum_Params
{
	TEnumAsByte<EBlockyListItemType>                   ReturnValue;                                              
};


struct UVarDefiner_GetType_Params
{
	struct FType                                       ReturnValue;                                              
};


struct UVarDefiner_GetFirstShowName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UVarDefiner_GetCurrentLocateShowName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UVariableReferenceExpression_SetVariableName_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FString                                     Name;                                                     
};


struct UVariableReferenceExpression_SetHost_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            Host;                                                     
};


struct UVariableReferenceExpression_GetVariableName_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UVariableReferenceExpression_GetHost_Params
{
	struct FBlockyLuaHandle                            ptr;                                                      
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UVariableReferenceExpression_CreateVariableReferenceExpression2_Params
{
	struct FBlockyLuaHandle                            Host;                                                     
	struct FString                                     VariableName;                                             
	struct FBlockyLuaHandle                            ReturnValue;                                              
};


struct UVariableReferenceExpression_CreateVariableReferenceExpression_Params
{
	struct FString                                     VariableName;                                             
	struct FBlockyLuaHandle                            ReturnValue;                                              
};

}

