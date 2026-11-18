#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct APlayerReliableSequentialSyncActor_OnActorSpawned_Params
{
	class AActor*                                      Actor;                                                    
};


struct AUAENetActor_ReceivedPlayerActiveRegionsChanged_Params
{
	bool                                               bEnter;                                                   
};


struct UItemHandleBase_SetAssociation_Params
{
	int                                                AssociationType;                                          
	struct FItemAssociation                            Association;                                              
};


struct UItemHandleBase_RemoveAssociation_Params
{
	int                                                AssociationType;                                          
};


struct UItemHandleBase_Init_Params
{
	struct FItemDefineID                               InDefineID;                                               
};


struct UItemHandleBase_GetDefineID_Params
{
	struct FItemDefineID                               ReturnValue;                                              
};


struct UItemHandleBase_GetAssociationMap_Params
{
	TMap<int, struct FItemAssociation>                 ReturnValue;                                              
};


struct UItemHandleBase_GetAssociationListByTargetType_Params
{
	int                                                Type;                                                     
	TArray<struct FItemAssociation>                    ReturnValue;                                              
};


struct UItemHandleBase_GetAssociationByTargetDefineID_Params
{
	struct FItemDefineID                               TargetDefineID;                                           
	struct FItemAssociation                            ReturnValue;                                              
};


struct UItemHandleBase_GetAssociation_Params
{
	int                                                AssociationType;                                          
	struct FItemAssociation                            ReturnValue;                                              
};


struct UItemHandleBase_Constuct_Params
{
	struct FItemDefineID                               InDefineID;                                               
};


struct UItemHandleBase_CollectionNeedLoadSoftPath_Params
{
	TArray<struct FSoftObjectPath>                     OutSoftPathList;                                          
};


struct UItemHandleBase_AddAssociation_Params
{
	int                                                AssociationType;                                          
	struct FItemAssociation                            Association;                                              
};


struct UBattleItemHandleBase_UpdateAttributeModify_Params
{
	bool                                               bEnable;                                                  
};


struct UBattleItemHandleBase_UnEquip_Params
{
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandleBase_ShouldDropInDisuse_Params
{
	TScriptInterface<class UItemContainerInterface>    ItemContainer;                                            
	struct FItemDefineID                               CurrentPickupItemDefineID;                                
	struct FItemDefineID                               ThisItemDefineID;                                         
	int                                                KeptCount;                                                
	EBattleItemDisuseReason                            Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandleBase_HanldePickupAssociationData_Params
{
	TArray<struct FBattleItemAdditionalData>           PickupAdditionalData;                                     
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandleBase_HanldeDropAssociationData_Params
{
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandleBase_HanldeCleared_Params
{
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandleBase_HandleUse_Params
{
	struct FBattleItemUseTarget                        Target;                                                   
	EBattleItemUseReason                               Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandleBase_HandlePickup_Params
{
	TScriptInterface<class UItemContainerInterface>    ItemContainer;                                            
	struct FBattleItemPickupInfo                       PickupInfo;                                               
	EBattleItemPickupReason                            Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandleBase_HandleEnable_Params
{
	bool                                               bEnable;                                                  
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandleBase_HandleDrop_Params
{
	int                                                InCount;                                                  
	EBattleItemDropReason                              Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandleBase_HandleDisuse_Params
{
	EBattleItemDisuseReason                            Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandleBase_HandleChangeItemStoreArea_Params
{
	EItemStoreArea                                     InItemStoreArea;                                          
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandleBase_HandleBindToTargetItem_Params
{
	bool                                               ReturnValue;                                              
};


struct UBattleItemHandleBase_GetWorldInternal_Params
{
	class UWorld*                                      ReturnValue;                                              
};


struct UBattleItemHandleBase_GetCurrentWorld_Params
{
	class UWorld*                                      ReturnValue;                                              
};


struct UBattleItemHandleBase_ExtractItemData_Params
{
	struct FBattleItemData                             ReturnValue;                                              
};


struct UBattleItemHandleBase_ClearAdditionalDataByType_Params
{
	EBattleItemAdditionalDataType                      DataType;                                                 
};


struct UBattleItemHandleBase_ClearAdditionalData_Params
{
};


struct UBattleItemHandleBase_CheckCanUse_Params
{
	TScriptInterface<class UItemContainerInterface>    ItemContainer;                                            
	struct FBattleItemUseTarget                        Target;                                                   
	EBattleItemUseReason                               Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UUAEGameInstance_SetModeID_Params
{
	int                                                InModeID;                                                 
};


struct UUAEGameInstance_SetLuaStateWrapper_Params
{
	class ULuaStateWrapper*                            TLuaStateWrapper;                                         
};


struct UUAEGameInstance_SetExtraModules_Params
{
	TArray<struct FString>                             InExtraModules;                                           
};


struct UUAEGameInstance_OpenAssetLoadLog_Params
{
};


struct UUAEGameInstance_OnPreBattleResult__DelegateSignature_Params
{
};


struct UUAEGameInstance_LuaLeakDetect_Params
{
};


struct UUAEGameInstance_LuaDoString_Params
{
	struct FString                                     LuaString;                                                
};


struct UUAEGameInstance_GetWeatherTime_Params
{
	float                                              ReturnValue;                                              
};


struct UUAEGameInstance_GetWeatherLevelName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UUAEGameInstance_GetWeatherID_Params
{
	int                                                ReturnValue;                                              
};


struct UUAEGameInstance_GetModType2_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UUAEGameInstance_GetModType_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UUAEGameInstance_GetModeID_Params
{
	int                                                ReturnValue;                                              
};


struct UUAEGameInstance_GetLuaStateWrapper_Params
{
	class ULuaStateWrapper*                            ReturnValue;                                              
};


struct UUAEGameInstance_GetLoadWeatherName_Params
{
	struct FString                                     InWeatherName;                                            
	struct FString                                     ReturnValue;                                              
};


struct UUAEGameInstance_GetIsHighWeatherLevel_Params
{
	struct FString                                     InWeatherLevelName;                                       
	bool                                               ReturnValue;                                              
};


struct UUAEGameInstance_GetGameID_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UUAEGameInstance_GetExtraModulesString_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UUAEGameInstance_GetExtraModules_Params
{
	TArray<struct FString>                             ReturnValue;                                              
};


struct UUAEGameInstance_GetDeviceLevel_Params
{
	int                                                ReturnValue;                                              
};


struct UUAEGameInstance_GetDataTable_Mod_Params
{
	struct FString                                     tableName;                                                
	class UUAEDataTable*                               ReturnValue;                                              
};


struct UUAEGameInstance_GetDataTable_Params
{
	struct FString                                     tableName;                                                
	class UUAEDataTable*                               ReturnValue;                                              
};


struct UUAEGameInstance_GetAssociatedFrontendHUD_Params
{
	class UFrontendHUD*                                ReturnValue;                                              
};


struct UUAEGameInstance_CloseAssetLoadLog_Params
{
};


struct UAttrModifyComponent_SwitchAttrModifierByIndex_Params
{
	int                                                ModifyConfigIndex;                                        
	bool                                               Enable;                                                   
	bool                                               ReturnValue;                                              
};


struct UAttrModifyComponent_SwitchAttrModifier_Params
{
	struct FString                                     AttrModifyItemName;                                       
	bool                                               Enable;                                                   
	bool                                               ReturnValue;                                              
};


struct UAttrModifyComponent_StartTimerToSyncRecordAttrValue_Params
{
	float                                              Time;                                                     
};


struct UAttrModifyComponent_SetValueToAttributeSafety_Params
{
	struct FString                                     AttrName;                                                 
	float                                              Value;                                                    
	int                                                ModifyRecordType;                                         
};


struct UAttrModifyComponent_SetOrignalValueToAttribute_Params
{
	struct FString                                     AttrName;                                                 
	float                                              Value;                                                    
};


struct UAttrModifyComponent_SetOrignalValueAndBaseValue_Params
{
	struct FString                                     AttrName;                                                 
	float                                              Value;                                                    
};


struct UAttrModifyComponent_SetAttrModifyStateValue_Params
{
	int                                                Index;                                                    
	bool                                               Value;                                                    
};


struct UAttrModifyComponent_SetAttributeMinValue_Params
{
	struct FString                                     AttrName;                                                 
	float                                              MinValue;                                                 
};


struct UAttrModifyComponent_SetAttributeMaxValue_Params
{
	struct FString                                     AttrName;                                                 
	float                                              MaxValue;                                                 
};


struct UAttrModifyComponent_ServerSendExceptionType_Params
{
	struct FString                                     AttrName;                                                 
	int                                                ExceptionType;                                            
};


struct UAttrModifyComponent_ServerRequestRecordAttrValue_Params
{
	struct FString                                     AttrName;                                                 
};


struct UAttrModifyComponent_ResponeAttrValue_Params
{
	struct FString                                     AttrName;                                                 
	float                                              FinalValue;                                               
};


struct UAttrModifyComponent_RequestAttrValue_Params
{
	struct FString                                     AttrName;                                                 
};


struct UAttrModifyComponent_RemoveModifyItemFromCache_Params
{
	uint32_t                                           ModifyUID;                                                
	bool                                               ReturnValue;                                              
};


struct UAttrModifyComponent_RemoveAttrListener_Params
{
	struct FString                                     AttrName;                                                 
	struct FSluaBPVar                                  Listener;                                                 
};


struct UAttrModifyComponent_RemoveAllDynamicModifier_Params
{
	bool                                               bForce;                                                   
};


struct UAttrModifyComponent_RegisterModifyAbleAttr_Params
{
	TArray<struct FAttrRegisterItem>                   AttrRegists;                                              
	bool                                               bSetAttrByOrigin;                                         
	bool                                               ReturnValue;                                              
};


struct UAttrModifyComponent_RegistAttrModifyRecordList_Params
{
	struct FString                                     AttrName;                                                 
	int                                                RecordLen;                                                
};


struct UAttrModifyComponent_RegCurrentModAttrs_Params
{
};


struct UAttrModifyComponent_RefreshAttributeModify_Params
{
	struct FString                                     AttrName;                                                 
};


struct UAttrModifyComponent_PushAttrModifyRecordItem_Params
{
	struct FString                                     AttrName;                                                 
	float                                              PreValue;                                                 
	float                                              CurValue;                                                 
	int                                                ModifyRecordType;                                         
	struct FString                                     ModifyDesc;                                               
};


struct UAttrModifyComponent_OnRep_ModSimulateSyncList_Params
{
};


struct UAttrModifyComponent_OnRep_ExceptionAttrModifyRecords_Params
{
};


struct UAttrModifyComponent_OnRep_DynamicModifier_Params
{
};


struct UAttrModifyComponent_OnRep_AttrModifyStateList_Params
{
};


struct UAttrModifyComponent_OnNeedSetSpeedOverLimit__DelegateSignature_Params
{
};


struct UAttrModifyComponent_OnAttrModifiedEvent__DelegateSignature_Params
{
	TArray<struct FAttrAffected>                       AffectedAttrS;                                            
};


struct UAttrModifyComponent_LuaSetValueToAttributeSafety_Params
{
	struct FString                                     AttrName;                                                 
	float                                              Value;                                                    
};


struct UAttrModifyComponent_IsAttrModifyStateValidIndex_Params
{
	int                                                Index;                                                    
	bool                                               ReturnValue;                                              
};


struct UAttrModifyComponent_InitializeRelateAttributeExpands_Params
{
};


struct UAttrModifyComponent_HasDynamicModifier_Params
{
	struct FString                                     AttrModifyId;                                             
	bool                                               ReturnValue;                                              
};


struct UAttrModifyComponent_HandleExceptionAttrModify_Params
{
	struct FString                                     AttrName;                                                 
	int                                                ExceptionType;                                            
};


struct UAttrModifyComponent_GetSubsystem_Params
{
	class UAttrModifyModDataSubsystem*                 ReturnValue;                                              
};


struct UAttrModifyComponent_GetMaxAttrName_Params
{
	struct FString                                     AttrName;                                                 
	struct FString                                     ReturnValue;                                              
};


struct UAttrModifyComponent_GetAttrModifyStateValue_Params
{
	int                                                Index;                                                    
	bool                                               ReturnValue;                                              
};


struct UAttrModifyComponent_GetAttrModifyStateNum_Params
{
	int                                                ReturnValue;                                              
};


struct UAttrModifyComponent_GetAttrModifyItemByItemName_Params
{
	struct FString                                     ItemName;                                                 
	struct FAttrModifyItem                             ReturnValue;                                              
};


struct UAttrModifyComponent_GetAttributeValue_Params
{
	struct FString                                     AttrName;                                                 
	float                                              ReturnValue;                                              
};


struct UAttrModifyComponent_GetAttributeOrignalValue_Params
{
	struct FString                                     AttrName;                                                 
	float                                              ReturnValue;                                              
};


struct UAttrModifyComponent_GetAttributeMaxValue_Params
{
	struct FString                                     AttrName;                                                 
	float                                              ReturnValue;                                              
};


struct UAttrModifyComponent_GetAttrDynamicModifyTargetString_Params
{
	struct FAttrDynamicModifyTarget                    DynamicModifyTarget;                                      
	struct FString                                     ReturnValue;                                              
};


struct UAttrModifyComponent_GetAttrDynamicModifyItemString_Params
{
	struct FAttrDynamicModifyItem                      DynamicModifyItem;                                        
	struct FString                                     ReturnValue;                                              
};


struct UAttrModifyComponent_EnableAttrModifierByIndex_Params
{
	int                                                ModifyConfigIndex;                                        
	bool                                               ReturnValue;                                              
};


struct UAttrModifyComponent_EnableAttrModifier_Params
{
	struct FString                                     AttrModifyItemName;                                       
	bool                                               ReturnValue;                                              
};


struct UAttrModifyComponent_DisableAttrModifierByIndex_Params
{
	int                                                ModifyConfigIndex;                                        
	bool                                               ReturnValue;                                              
};


struct UAttrModifyComponent_DisableAttrModifier_Params
{
	struct FString                                     AttrModifyItemName;                                       
	bool                                               ReturnValue;                                              
};


struct UAttrModifyComponent_DisableAllAttrModifier_Params
{
	bool                                               bForce;                                                   
	bool                                               ReturnValue;                                              
};


struct UAttrModifyComponent_ConditionSyncRecordAttrValue_Params
{
};


struct UAttrModifyComponent_ClientSyncRecordAttrValue_Params
{
	TArray<struct FAttrDesc>                           AttrDescs;                                                
};


struct UAttrModifyComponent_ClientSendRecordData_Params
{
	struct FAttrModifyRecordItem                       RecordItem;                                               
	int                                                ExceptionType;                                            
};


struct UAttrModifyComponent_ClearAllAttrModify_Params
{
};


struct UAttrModifyComponent_AddValueToAttribute_Params
{
	struct FString                                     AttrName;                                                 
	float                                              Value;                                                    
};


struct UAttrModifyComponent_AddModifyItemAndCache_Params
{
	struct FString                                     AttrName;                                                 
	EAttrModifyRefType                                 CModifyType;                                              
	float                                              CValue;                                                   
	bool                                               bEnable;                                                  
	class UObject*                                     Causer;                                                   
	bool                                               bOldModify;                                               
	uint32_t                                           ReturnValue;                                              
};


struct UAttrModifyComponent_AddDynamicModifier_Params
{
	struct FAttrModifyItem                             AttrModifyItem;                                           
	bool                                               RepOnlyOwner;                                             
};


struct UAttrModifyComponent_AddBModifyAndCacheWithCParam_Params
{
	struct FString                                     AttrName;                                                 
	EAttrModifyRefType                                 CModifyType;                                              
	float                                              CValue;                                                   
	bool                                               ClientSimulate;                                           
	uint32_t                                           ReturnValue;                                              
};


struct UAttrModifyComponent_AddBModifyAndCache_Params
{
	struct FString                                     AttrName;                                                 
	EAttrOperator                                      ModifyType;                                               
	float                                              Value;                                                    
	bool                                               ClientSimulate;                                           
	uint32_t                                           ReturnValue;                                              
};


struct UAttrModifyComponent_AddAttrListener_Params
{
	struct FString                                     AttrName;                                                 
	struct FSluaBPVar                                  Listener;                                                 
};


struct UAttrModifyInterface_SetAttrValue_Params
{
	struct FString                                     AttrName;                                                 
	float                                              NewVal;                                                   
	int                                                Reason;                                                   
};


struct UAttrModifyInterface_RequestAttrValue_Params
{
	struct FString                                     AttrName;                                                 
};


struct UAttrModifyInterface_RegisterModifiedAttributes_Params
{
};


struct UAttrModifyInterface_GetAttrValue_Params
{
	struct FString                                     AttrName;                                                 
	float                                              ReturnValue;                                              
};


struct UAttrModifyInterface_GetAttrModifyRelevantActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              
};


struct UAttrModifyInterface_GetAttrModifyComponent_Params
{
	class UAttrModifyComponent*                        ReturnValue;                                              
};


struct UAttrModifyInterface_GetAttributeValue_Params
{
	struct FString                                     AttrName;                                                 
	float                                              ReturnValue;                                              
};


struct UAttrModifyInterface_AddAttrValue_Params
{
	struct FString                                     AttrName;                                                 
	float                                              AddVal;                                                   
	int                                                Reason;                                                   
};


struct UBPClassManager_ModifyClass_Params
{
	class UClass*                                      InNativeClass;                                            
	struct FString                                     BPClassPath;                                              
	struct FString                                     ModTag;                                                   
};


struct UBPClassManager_GetUClass_Params
{
	int                                                KeyIndex;                                                 
	class UClass*                                      ReturnValue;                                              
};


struct UBPClassManager_GetBPClassOverrideByName_Params
{
	struct FString                                     ClassTagName;                                             
	struct FString                                     ModTag;                                                   
	class UClass*                                      ReturnValue;                                              
};


struct UBPClassManager_GetBPClassOverride_Params
{
	class UClass*                                      InNativeClass;                                            
	struct FString                                     ModTag;                                                   
	class UClass*                                      ReturnValue;                                              
};


struct UBPClassManager_Get_Params
{
	class UBPClassManager*                             ReturnValue;                                              
};


struct UBuffConfigSubsystem_ReloadTable_Params
{
	class UWorld*                                      World;                                                    
};


struct UBuffConfigSubsystem_ClearTable_Params
{
};


struct UBuffUtils_IsRoleOK_Params
{
	EBuffEnabledRole                                   EnabledRole;                                              
	class UActorComponent*                             OwnerComponent;                                           
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_SetVectorArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<struct FVector>                             Values;                                                   
};


struct UCommonMessageDataLibrary_SetVector4Array_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<struct FVector4>                            Values;                                                   
};


struct UCommonMessageDataLibrary_SetVector4_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	struct FVector4                                    Value;                                                    
};


struct UCommonMessageDataLibrary_SetVector2DArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<struct FVector2D>                           Values;                                                   
};


struct UCommonMessageDataLibrary_SetVector2D_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	struct FVector2D                                   Value;                                                    
};


struct UCommonMessageDataLibrary_SetVector_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	struct FVector                                     Value;                                                    
};


struct UCommonMessageDataLibrary_SetTransformArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<struct FTransform>                          Values;                                                   
};


struct UCommonMessageDataLibrary_SetTransform_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	struct FTransform                                  Value;                                                    
};


struct UCommonMessageDataLibrary_SetStringArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<struct FString>                             Values;                                                   
};


struct UCommonMessageDataLibrary_SetString_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	struct FString                                     Value;                                                    
};


struct UCommonMessageDataLibrary_SetRotatorArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<struct FRotator>                            Values;                                                   
};


struct UCommonMessageDataLibrary_SetRotator_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	struct FRotator                                    Value;                                                    
};


struct UCommonMessageDataLibrary_SetQuatArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<struct FQuat>                               Values;                                                   
};


struct UCommonMessageDataLibrary_SetQuat_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	struct FQuat                                       Value;                                                    
};


struct UCommonMessageDataLibrary_SetObjectArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<class UObject*>                             Values;                                                   
};


struct UCommonMessageDataLibrary_SetObject_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	class UObject*                                     Value;                                                    
};


struct UCommonMessageDataLibrary_SetNameArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<struct FName>                               Values;                                                   
};


struct UCommonMessageDataLibrary_SetName_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	struct FName                                       Value;                                                    
};


struct UCommonMessageDataLibrary_SetLinearColorArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<struct FLinearColor>                        Values;                                                   
};


struct UCommonMessageDataLibrary_SetLinearColor_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	struct FLinearColor                                Value;                                                    
};


struct UCommonMessageDataLibrary_SetIntVectorArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<struct FIntVector>                          Values;                                                   
};


struct UCommonMessageDataLibrary_SetIntVector_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	struct FIntVector                                  Value;                                                    
};


struct UCommonMessageDataLibrary_SetIntPointArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<struct FIntPoint>                           Values;                                                   
};


struct UCommonMessageDataLibrary_SetIntPoint_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	struct FIntPoint                                   Value;                                                    
};


struct UCommonMessageDataLibrary_SetInt64Array_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<int64_t>                                    Values;                                                   
};


struct UCommonMessageDataLibrary_SetInt64_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	int64_t                                            Value;                                                    
};


struct UCommonMessageDataLibrary_SetInt32Array_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<int>                                        Values;                                                   
};


struct UCommonMessageDataLibrary_SetInt32_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	int                                                Value;                                                    
};


struct UCommonMessageDataLibrary_SetFloatArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<float>                                      Values;                                                   
};


struct UCommonMessageDataLibrary_SetFloat_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	float                                              Value;                                                    
};


struct UCommonMessageDataLibrary_SetColorArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<struct FColor>                              Values;                                                   
};


struct UCommonMessageDataLibrary_SetColor_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	struct FColor                                      Value;                                                    
};


struct UCommonMessageDataLibrary_SetClassArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<class UClass*>                              Values;                                                   
};


struct UCommonMessageDataLibrary_SetClass_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	class UClass*                                      Value;                                                    
};


struct UCommonMessageDataLibrary_SetByteArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<unsigned char>                              Values;                                                   
};


struct UCommonMessageDataLibrary_SetByte_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	unsigned char                                      Value;                                                    
};


struct UCommonMessageDataLibrary_SetBoolArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<bool>                                       Values;                                                   
};


struct UCommonMessageDataLibrary_SetBool_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	bool                                               Value;                                                    
};


struct UCommonMessageDataLibrary_SetActorArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<class AActor*>                              Values;                                                   
};


struct UCommonMessageDataLibrary_SetActor_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	class AActor*                                      Value;                                                    
};


struct UCommonMessageDataLibrary_Remove_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetVectorArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<struct FVector>                             OutValues;                                                
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetVector4Array_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<struct FVector4>                            OutValues;                                                
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetVector4_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	struct FVector4                                    OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetVector2DArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<struct FVector2D>                           OutValues;                                                
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetVector2D_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	struct FVector2D                                   OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetVector_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	struct FVector                                     OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetTransformArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<struct FTransform>                          OutValues;                                                
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetTransform_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	struct FTransform                                  OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetStringArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<struct FString>                             OutValues;                                                
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetString_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	struct FString                                     OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetRotatorArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<struct FRotator>                            OutValues;                                                
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetRotator_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	struct FRotator                                    OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetQuatArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<struct FQuat>                               OutValues;                                                
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetQuat_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	struct FQuat                                       OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetObjectArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<class UObject*>                             OutValues;                                                
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetObject_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	class UObject*                                     OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetNameArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<struct FName>                               OutValues;                                                
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetName_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	struct FName                                       OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetLinearColorArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<struct FLinearColor>                        OutValues;                                                
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetLinearColor_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	struct FLinearColor                                OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetIntVectorArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<struct FIntVector>                          OutValues;                                                
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetIntVector_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	struct FIntVector                                  OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetIntPointArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<struct FIntPoint>                           OutValues;                                                
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetIntPoint_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	struct FIntPoint                                   OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetInt64Array_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<int64_t>                                    OutValues;                                                
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetInt64_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	int64_t                                            OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetInt32Array_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<int>                                        OutValues;                                                
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetInt32_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	int                                                OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetFloatArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<float>                                      OutValues;                                                
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetFloat_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	float                                              OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetEmptyCommonMessageData_Params
{
	struct FCommonMessageData                          ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetColorArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<struct FColor>                              OutValues;                                                
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetColor_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	struct FColor                                      OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetClassArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<class UClass*>                              OutValues;                                                
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetClass_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	class UClass*                                      OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetByteArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<unsigned char>                              OutValues;                                                
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetByte_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	unsigned char                                      OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetBoolArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<bool>                                       OutValues;                                                
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetBool_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	bool                                               OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetActorArray_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	TArray<class AActor*>                              OutValues;                                                
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_GetActor_Params
{
	struct FCommonMessageData                          Target;                                                   
	unsigned char                                      Index;                                                    
	class AActor*                                      OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UCommonMessageDataLibrary_Clear_Params
{
	struct FCommonMessageData                          Target;                                                   
};


struct UDelayReplicationInterface_ReSendRPCAfterBeginPlay_Params
{
};


struct UDelayReplicationInterface_ReCallRepAfterBeginPlay_Params
{
};


struct UEnvLuaVMFactory_CreateEnvLuaVM_Params
{
	struct FString                                     InLuaFilePath;                                            
	class UObject*                                     WorldContextObject;                                       
	class UEnvLuaVM*                                   ReturnValue;                                              
};


struct UGameModeEnvUtil_GetModeID_Params
{
	struct FString                                     GameModeClassPath;                                        
	int                                                ReturnValue;                                              
};


struct UGameModeEnvUtil_GetGameModeEnvData_Params
{
	int                                                InModeID;                                                 
	struct FGameModeEnvData                            OutData;                                                  
	bool                                               ReturnValue;                                              
};


struct UStackModifyAttrInterface_PushVectorModify_Params
{
	int                                                ModifyKey;                                                
	struct FName                                       PropertyName;                                             
	struct FVector                                     InValue;                                                  
};


struct UStackModifyAttrInterface_PushVector4Modify_Params
{
	int                                                ModifyKey;                                                
	struct FName                                       PropertyName;                                             
	struct FVector4                                    InValue;                                                  
};


struct UStackModifyAttrInterface_PushVector2DModify_Params
{
	int                                                ModifyKey;                                                
	struct FName                                       PropertyName;                                             
	struct FVector2D                                   InValue;                                                  
};


struct UStackModifyAttrInterface_PushTransformModify_Params
{
	int                                                ModifyKey;                                                
	struct FName                                       PropertyName;                                             
	struct FTransform                                  InValue;                                                  
};


struct UStackModifyAttrInterface_PushStringModify_Params
{
	int                                                ModifyKey;                                                
	struct FName                                       PropertyName;                                             
	struct FString                                     InValue;                                                  
};


struct UStackModifyAttrInterface_PushRotatorModify_Params
{
	int                                                ModifyKey;                                                
	struct FName                                       PropertyName;                                             
	struct FRotator                                    InValue;                                                  
};


struct UStackModifyAttrInterface_PushQuatModify_Params
{
	int                                                ModifyKey;                                                
	struct FName                                       PropertyName;                                             
	struct FQuat                                       InValue;                                                  
};


struct UStackModifyAttrInterface_PushNameModify_Params
{
	int                                                ModifyKey;                                                
	struct FName                                       PropertyName;                                             
	struct FName                                       InValue;                                                  
};


struct UStackModifyAttrInterface_PushLinearColorModify_Params
{
	int                                                ModifyKey;                                                
	struct FName                                       PropertyName;                                             
	struct FLinearColor                                InValue;                                                  
};


struct UStackModifyAttrInterface_PushIntVectorModify_Params
{
	int                                                ModifyKey;                                                
	struct FName                                       PropertyName;                                             
	struct FIntVector                                  InValue;                                                  
};


struct UStackModifyAttrInterface_PushIntPointModify_Params
{
	int                                                ModifyKey;                                                
	struct FName                                       PropertyName;                                             
	struct FIntPoint                                   InValue;                                                  
};


struct UStackModifyAttrInterface_PushInt32Modify_Params
{
	int                                                ModifyKey;                                                
	struct FName                                       PropertyName;                                             
	int                                                InValue;                                                  
};


struct UStackModifyAttrInterface_PushFloatModify_Params
{
	int                                                ModifyKey;                                                
	struct FName                                       PropertyName;                                             
	float                                              InValue;                                                  
};


struct UStackModifyAttrInterface_PushColorModify_Params
{
	int                                                ModifyKey;                                                
	struct FName                                       PropertyName;                                             
	struct FColor                                      InValue;                                                  
};


struct UStackModifyAttrInterface_PushByteModify_Params
{
	int                                                ModifyKey;                                                
	struct FName                                       PropertyName;                                             
	unsigned char                                      InValue;                                                  
};


struct UStackModifyAttrInterface_PushBoolModify_Params
{
	int                                                ModifyKey;                                                
	struct FName                                       PropertyName;                                             
	bool                                               InValue;                                                  
};


struct UStackModifyAttrInterface_PopStackModifyAttr_Params
{
	int                                                ModifyKey;                                                
	struct FName                                       PropertyName;                                             
	bool                                               ReturnValue;                                              
};


struct UStackModifyAttrInterface_HasStackModify_Params
{
	struct FName                                       PropertyName;                                             
	bool                                               ReturnValue;                                              
};


struct UStackModifyAttrInterface_GetModifiedVector4_Params
{
	struct FName                                       PropertyName;                                             
	struct FVector4                                    OriginalValue;                                            
	struct FVector4                                    ReturnValue;                                              
};


struct UStackModifyAttrInterface_GetModifiedVector2D_Params
{
	struct FName                                       PropertyName;                                             
	struct FVector2D                                   OriginalValue;                                            
	struct FVector2D                                   ReturnValue;                                              
};


struct UStackModifyAttrInterface_GetModifiedVector_Params
{
	struct FName                                       PropertyName;                                             
	struct FVector                                     OriginalValue;                                            
	struct FVector                                     ReturnValue;                                              
};


struct UStackModifyAttrInterface_GetModifiedTransform_Params
{
	struct FName                                       PropertyName;                                             
	struct FTransform                                  OriginalValue;                                            
	struct FTransform                                  ReturnValue;                                              
};


struct UStackModifyAttrInterface_GetModifiedString_Params
{
	struct FName                                       PropertyName;                                             
	struct FString                                     OriginalValue;                                            
	struct FString                                     ReturnValue;                                              
};


struct UStackModifyAttrInterface_GetModifiedRotator_Params
{
	struct FName                                       PropertyName;                                             
	struct FRotator                                    OriginalValue;                                            
	struct FRotator                                    ReturnValue;                                              
};


struct UStackModifyAttrInterface_GetModifiedQuat_Params
{
	struct FName                                       PropertyName;                                             
	struct FQuat                                       OriginalValue;                                            
	struct FQuat                                       ReturnValue;                                              
};


struct UStackModifyAttrInterface_GetModifiedName_Params
{
	struct FName                                       PropertyName;                                             
	struct FName                                       OriginalValue;                                            
	struct FName                                       ReturnValue;                                              
};


struct UStackModifyAttrInterface_GetModifiedLinearColor_Params
{
	struct FName                                       PropertyName;                                             
	struct FLinearColor                                OriginalValue;                                            
	struct FLinearColor                                ReturnValue;                                              
};


struct UStackModifyAttrInterface_GetModifiedIntVector_Params
{
	struct FName                                       PropertyName;                                             
	struct FIntVector                                  OriginalValue;                                            
	struct FIntVector                                  ReturnValue;                                              
};


struct UStackModifyAttrInterface_GetModifiedIntPoint_Params
{
	struct FName                                       PropertyName;                                             
	struct FIntPoint                                   OriginalValue;                                            
	struct FIntPoint                                   ReturnValue;                                              
};


struct UStackModifyAttrInterface_GetModifiedInt32_Params
{
	struct FName                                       PropertyName;                                             
	int                                                OriginalValue;                                            
	int                                                ReturnValue;                                              
};


struct UStackModifyAttrInterface_GetModifiedFloat_Params
{
	struct FName                                       PropertyName;                                             
	float                                              OriginalValue;                                            
	float                                              ReturnValue;                                              
};


struct UStackModifyAttrInterface_GetModifiedColor_Params
{
	struct FName                                       PropertyName;                                             
	struct FColor                                      OriginalValue;                                            
	struct FColor                                      ReturnValue;                                              
};


struct UStackModifyAttrInterface_GetModifiedByte_Params
{
	struct FName                                       PropertyName;                                             
	unsigned char                                      OriginalValue;                                            
	unsigned char                                      ReturnValue;                                              
};


struct UStackModifyAttrInterface_GetModifiedBool_Params
{
	struct FName                                       PropertyName;                                             
	bool                                               OriginalValue;                                            
	bool                                               ReturnValue;                                              
};


struct UItemContainerInterface_GetOwningObject_Params
{
	class UObject*                                     ReturnValue;                                              
};


struct UItemContainerInterface_GetItemHandleListByDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 
	TArray<class UItemHandleBase*>                     ReturnValue;                                              
};


struct UItemContainerInterface_GetItemHandleByDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 
	class UItemHandleBase*                             ReturnValue;                                              
};


struct UItemContainerInterface_GetItemDefineIDList_Params
{
	TArray<struct FItemDefineID>                       ReturnValue;                                              
};


struct UItemContainerInterface_GetFirstItemDefineBySpecificID_Params
{
	int                                                ID;                                                       
	struct FItemDefineID                               ReturnValue;                                              
};


struct UItemContainerOwnerInterface_NotifyUpdateCustomAccessoriesData_Params
{
	int                                                WeaponItemId;                                             
	int                                                Index;                                                    
	int                                                ItemId;                                                   
	bool                                               bIsSetOrRemove;                                           
};


struct UItemContainerOwnerInterface_NotifyUpdateCapacity_Params
{
	float                                              InBackPackCapacity;                                       
	float                                              InOccupiedCapacity;                                       
	float                                              InSafetyBoxCapacity;                                      
	float                                              InSafetyBoxOccupiedCapacity;                              
};


struct UItemContainerOwnerInterface_NotifyItemUpdated_Params
{
	struct FItemDefineID                               DefineID;                                                 
	struct FBattleItemData                             ItemData;                                                 
};


struct UItemContainerOwnerInterface_NotifyItemRemoved_Params
{
	struct FItemDefineID                               DefineID;                                                 
	struct FBattleItemData                             ItemData;                                                 
};


struct UItemContainerOwnerInterface_NotifyItemEmpty_Params
{
};


struct UItemContainerOwnerInterface_NotifyItemAdded_Params
{
	struct FItemDefineID                               DefineID;                                                 
	struct FBattleItemData                             ItemData;                                                 
};


struct ULuaAsyncTasksSubsystem_IsNeedClear_Params
{
	float                                              ClearMemorySize;                                          
	float                                              ClearArrayObjectSize;                                     
	struct FSluaBPVar                                  Callback;                                                 
	bool                                               ReturnValue;                                              
};


struct ULuaAsyncTaskSubsystem_IsNeedClear_Params
{
	class UFrontendHUD*                                FrontendHUD;                                              
	struct FSluaBPVar                                  Callback;                                                 
	bool                                               ReturnValue;                                              
};


struct ULuaEventBridgeFunction_UnRegisterEventByTarget_Params
{
	class UObject*                                     ObjContext;                                               
};


struct ULuaEventBridgeFunction_UnRegisterEvent_Params
{
	struct FString                                     FEventType;                                               
	struct FString                                     EventID;                                                  
	class UObject*                                     ObjContext;                                               
	int                                                EventHandle;                                              
};


struct ULuaEventBridgeFunction_RegistEvent_Params
{
	struct FString                                     EventType;                                                
	struct FString                                     EventID;                                                  
	class UObject*                                     ObjContext;                                               
	struct FString                                     FunctionName;                                             
	int                                                ReturnValue;                                              
};


struct ULuaEventBridge_SyncLuaRegisterEventNum_Params
{
	struct FString                                     EventType;                                                
	struct FString                                     EventID;                                                  
	int                                                Number;                                                   
};


struct ULuaEventBridge_GetCurrentParam_Params
{
	TArray<class ULuaTemBPData*>                       ReturnValue;                                              
};


struct ULuaEventBridge_DeactivateEventsByFilterKey_Params
{
	uint32_t                                           FilterKey;                                                
};


struct ULuaEventBridge_CheckNeedPostEventWithFilterKey_Params
{
	uint32_t                                           FilterKey;                                                
	struct FString                                     EventType;                                                
	struct FString                                     EventID;                                                  
	bool                                               bCheckNeedPostLua;                                        
	bool                                               ReturnValue;                                              
};


struct ULuaEventBridge_ActiveEventByFilterKey_Params
{
	uint32_t                                           FilterKey;                                                
	struct FString                                     EventType;                                                
	struct FString                                     EventID;                                                  
	bool                                               bActive;                                                  
};


struct ULuaEventSubsystem_UnRegistEvent_Params
{
	int                                                EventHandle;                                              
};


struct ULuaEventSubsystem_SetBridgeFunction_Params
{
	struct FSluaBPVar                                  OnRegistEvent;                                            
	struct FSluaBPVar                                  OnUnRegistEvent;                                          
	struct FSluaBPVar                                  OnPostEvent;                                              
	struct FSluaBPVar                                  OnPostBlueprintEvent;                                     
};


struct ULuaEventSubsystem_RegistEvent_Params
{
	struct FString                                     EventID;                                                  
	struct FString                                     EventType;                                                
	class UObject*                                     Object;                                                   
	struct FString                                     FunctionName;                                             
	int                                                ReturnValue;                                              
};


struct URenderFunctionLibrary_MarkComponentRenderStateDirty_Params
{
	class UActorComponent*                             Comp;                                                     
};


struct USTBaseBuffCarrierInterface_SetEndTime_Params
{
	int                                                InstID;                                                   
	float                                              EndTime;                                                  
	bool                                               ReturnValue;                                              
};


struct USTBaseBuffCarrierInterface_RemoveBuffBySkill_Params
{
	int                                                SkillID;                                                  
	int                                                LayerCount;                                               
	class AActor*                                      Causer;                                                   
	bool                                               ReturnValue;                                              
};


struct USTBaseBuffCarrierInterface_RemoveBuffByID_Params
{
	int                                                BuffID;                                                   
	class AActor*                                      Causer;                                                   
	int                                                LayerCount;                                               
	int                                                CauseSkillID;                                             
	bool                                               ReturnValue;                                              
};


struct USTBaseBuffCarrierInterface_HasSkillID_Params
{
	int                                                SkillID;                                                  
	bool                                               ReturnValue;                                              
};


struct USTBaseBuffCarrierInterface_HasBuffID_Params
{
	int                                                BuffID;                                                   
	bool                                               ReturnValue;                                              
};


struct USTBaseBuffCarrierInterface_GetBuffIDsBySkillID_Params
{
	int                                                SkillID;                                                  
	TArray<int>                                        ReturnValue;                                              
};


struct USTBaseBuffCarrierInterface_GetBuffDuration_Params
{
	int                                                InstID;                                                   
	int                                                CauseSkillID;                                             
	float                                              ReturnValue;                                              
};


struct USTBaseBuffCarrierInterface_GetBuffComponent_Params
{
	class USTBuffSystemComponent*                      ReturnValue;                                              
};


struct USTBaseBuffCarrierInterface_ChangeBuffDuration_Params
{
	int                                                InstID;                                                   
	float                                              Duration;                                                 
	bool                                               ReturnValue;                                              
};


struct USTBaseBuffCarrierInterface_AddBuffBySkill_Params
{
	int                                                SkillID;                                                  
	int                                                LayerCount;                                               
	class AActor*                                      Causer;                                                   
	int                                                Level;                                                    
	bool                                               ReturnValue;                                              
};


struct USTBaseBuffCarrierInterface_AddBuffByID_Params
{
	int                                                BuffID;                                                   
	class AActor*                                      Causer;                                                   
	int                                                LayerCount;                                               
	int                                                CauseSkillID;                                             
	int                                                Level;                                                    
	int                                                ReturnValue;                                              
};


struct USTBuff_Tick_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
	float                                              DetalTime;                                                
	float                                              TimeSeconds;                                              
	TArray<int>                                        TickActionList;                                           
};


struct USTBuff_ResetActionExecute_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
};


struct USTBuff_OnCreate_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
};


struct USTBuff_Initialize_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
};


struct USTBuff_InitBuffAction_Params
{
};


struct USTBuff_End_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
};


struct USTBuff_Destroy_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
};


struct USTBuff_ChangeNotify_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
	bool                                               ReturnValue;                                              
};


struct USTBuffNodeInstanceData_GetBuffInstLevel_Params
{
	int                                                ReturnValue;                                              
};


struct USTBuffAction_ToString_Params
{
	struct FString                                     ReturnValue;                                              
};


struct USTBuffAction_Tick_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
	float                                              DetalTime;                                                
};


struct USTBuffAction_SetEnabled_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
	bool                                               Enabled;                                                  
};


struct USTBuffAction_ResetExecute_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
	bool                                               IgnoreEnd;                                                
};


struct USTBuffAction_OnTick_Params
{
	float                                              DetalTime;                                                
};


struct USTBuffAction_OnResetExecute_Params
{
	bool                                               IgnoreEnd;                                                
};


struct USTBuffAction_OnInitialize_Params
{
};


struct USTBuffAction_OnExecute_Params
{
};


struct USTBuffAction_OnEnd_Params
{
};


struct USTBuffAction_OnDestroy_Params
{
};


struct USTBuffAction_OnCheckLinkActionEnabled_Params
{
};


struct USTBuffAction_OnChangeNotify_Params
{
};


struct USTBuffAction_OnAsyncLoadSoftPathDone_Params
{
};


struct USTBuffAction_IsRoleOK_Params
{
	class UActorComponent*                             OwnerComponent;                                           
	bool                                               ReturnValue;                                              
};


struct USTBuffAction_Initialize_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
};


struct USTBuffAction_GetRealOwnerRole_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              
};


struct USTBuffAction_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              
};


struct USTBuffAction_GetCauser_Params
{
	class AActor*                                      ReturnValue;                                              
};


struct USTBuffAction_Execute_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
};


struct USTBuffAction_End_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
};


struct USTBuffAction_Destroy_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
};


struct USTBuffAction_CheckLinkActionEnabled_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
};


struct USTBuffAction_ChangeNotify_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
};


struct USTBuffAction_Lua_ToString_Params
{
	struct FString                                     ReturnValue;                                              
};


struct USTBuffAction_Lua_OnTick_Params
{
	float                                              DetalTime;                                                
};


struct USTBuffAction_Lua_OnInitialize_Params
{
};


struct USTBuffAction_Lua_OnExecute_Params
{
};


struct USTBuffAction_Lua_OnEnd_Params
{
};


struct USTBuffAction_Lua_OnDestroy_Params
{
};


struct USTBuffAction_Lua_OnChangeNotify_Params
{
};


struct USTBuffCheckConditionWrapper_Tick_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
	float                                              DetalTime;                                                
};


struct USTBuffCheckConditionWrapper_ResetExecute_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
	bool                                               IgnoreEnd;                                                
};


struct USTBuffCheckConditionWrapper_OnTick_Params
{
	float                                              DetalTime;                                                
};


struct USTBuffCheckConditionWrapper_OnInitialize_Params
{
};


struct USTBuffCheckConditionWrapper_OnDestroy_Params
{
};


struct USTBuffCheckConditionWrapper_OnConditionTrue_Params
{
};


struct USTBuffCheckConditionWrapper_OnConditionFalse_Params
{
};


struct USTBuffCheckConditionWrapper_OnChangeNotify_Params
{
};


struct USTBuffCheckConditionWrapper_IsRoleOK_Params
{
	class UActorComponent*                             OwnerComponent;                                           
	bool                                               ReturnValue;                                              
};


struct USTBuffCheckConditionWrapper_InitLinkActionEnableState_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
};


struct USTBuffCheckConditionWrapper_Initialize_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
};


struct USTBuffCheckConditionWrapper_GetRealOwnerRole_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              
};


struct USTBuffCheckConditionWrapper_Execute_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
};


struct USTBuffCheckConditionWrapper_End_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
};


struct USTBuffCheckConditionWrapper_Destroy_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
};


struct USTBuffCheckConditionWrapper_CheckCondition_Params
{
};


struct USTBuffCheckConditionWrapper_ChangeNotify_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
};


struct USTBuffCondition_OnResetExecute_Params
{
	bool                                               IgnoreEnd;                                                
};


struct USTBuffCondition_OnInitialize_Params
{
};


struct USTBuffCondition_OnEnd_Params
{
};


struct USTBuffCondition_OnDestroy_Params
{
};


struct USTBuffCondition_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              
};


struct USTBuffCondition_GetCauser_Params
{
	class AActor*                                      ReturnValue;                                              
};


struct USTBuffCondition_Copy_Params
{
	class UObject*                                     Outer;                                                    
	class USTBuffCondition*                            ReturnValue;                                              
};


struct USTBuffCondition_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_ChangeNotify_Params
{
};


struct USTBuffConditionComplex_OnInitialize_Params
{
};


struct USTBuffConditionComplex_OnDestroy_Params
{
};


struct USTBuffConditionComplex_Copy_Params
{
	class UObject*                                     Outer;                                                    
	class USTBuffCondition*                            ReturnValue;                                              
};


struct USTBuffConditionComplex_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffConditionNot_OnInitialize_Params
{
};


struct USTBuffConditionNot_OnDestroy_Params
{
};


struct USTBuffConditionNot_Copy_Params
{
	class UObject*                                     Outer;                                                    
	class USTBuffCondition*                            ReturnValue;                                              
};


struct USTBuffConditionNot_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffCondition_Lua_OnInitialize_Params
{
};


struct USTBuffCondition_Lua_OnDestroy_Params
{
};


struct USTBuffCondition_Lua_CheckIsTrue_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffConditionAction_OnTick_Params
{
	float                                              DetalTime;                                                
};


struct USTBuffConditionAction_OnInitialize_Params
{
};


struct USTBuffConditionAction_OnDestroy_Params
{
};


struct USTBuffConditionAction_OnConditionTrue_Params
{
};


struct USTBuffConditionAction_OnConditionFalse_Params
{
};


struct USTBuffConditionAction_OnChangeNotify_Params
{
};


struct USTBuffConditionAction_CheckCondition_Params
{
};


struct USTBuffEvent_TriggerEvent_Params
{
};


struct USTBuffEvent_ToString_Params
{
	struct FString                                     ReturnValue;                                              
};


struct USTBuffEvent_SetTimer_Params
{
	struct FName                                       FunctionName;                                             
	float                                              InRate;                                                   
	bool                                               InbLoop;                                                  
	float                                              InFirstDelay;                                             
};


struct USTBuffEvent_OnInitialize_Params
{
};


struct USTBuffEvent_OnEnd_Params
{
};


struct USTBuffEvent_OnDestroy_Params
{
};


struct USTBuffEvent_IsRoleOK_Params
{
	class UActorComponent*                             OwnerComponent;                                           
	bool                                               ReturnValue;                                              
};


struct USTBuffEvent_GetRealOwnerRole_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              
};


struct USTBuffEvent_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              
};


struct USTBuffEvent_GetCauser_Params
{
	class AActor*                                      ReturnValue;                                              
};


struct USTBuffEvent_Copy_Params
{
	class UObject*                                     Outer;                                                    
	class USTBuffEvent*                                ReturnValue;                                              
};


struct USTBuffEvent_ClearTimer_Params
{
	struct FName                                       FunctionName;                                             
};


struct USTBuffEvent_ClearAllTimer_Params
{
};


struct USTBuffEvent_Lua_ToString_Params
{
	struct FString                                     ReturnValue;                                              
};


struct USTBuffEvent_Multi_OnInitialize_Params
{
};


struct USTBuffEvent_Multi_OnEnd_Params
{
};


struct USTBuffEvent_Multi_OnDestroy_Params
{
};


struct USTBuffEvent_Multi_Copy_Params
{
	class UObject*                                     Outer;                                                    
	class USTBuffEvent*                                ReturnValue;                                              
};


struct USTBuffSharedInterface_SetVectorShared_Params
{
	struct FString                                     SharedName;                                               
	struct FVector                                     InValue;                                                  
};


struct USTBuffSharedInterface_SetUInt8Shared_Params
{
	struct FString                                     SharedName;                                               
	unsigned char                                      InValue;                                                  
};


struct USTBuffSharedInterface_SetTargetShared_Params
{
	struct FString                                     SharedName;                                               
	TArray<class AActor*>                              InActors;                                                 
};


struct USTBuffSharedInterface_SetStringShared_Params
{
	struct FString                                     SharedName;                                               
	struct FString                                     InValue;                                                  
};


struct USTBuffSharedInterface_SetRotatorShared_Params
{
	struct FString                                     SharedName;                                               
	struct FRotator                                    InValue;                                                  
};


struct USTBuffSharedInterface_SetNameShared_Params
{
	struct FString                                     SharedName;                                               
	struct FName                                       InValue;                                                  
};


struct USTBuffSharedInterface_SetInt32Shared_Params
{
	struct FString                                     SharedName;                                               
	int                                                InValue;                                                  
};


struct USTBuffSharedInterface_SetFloatShared_Params
{
	struct FString                                     SharedName;                                               
	float                                              InValue;                                                  
};


struct USTBuffSharedInterface_SetBooleanShared_Params
{
	struct FString                                     SharedName;                                               
	bool                                               InValue;                                                  
};


struct USTBuffSharedInterface_RemoveShared_Params
{
	struct FString                                     SharedName;                                               
};


struct USTBuffSharedInterface_GetVectorShared_Params
{
	struct FString                                     SharedName;                                               
	struct FVector                                     OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct USTBuffSharedInterface_GetUInt8Shared_Params
{
	struct FString                                     SharedName;                                               
	unsigned char                                      OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct USTBuffSharedInterface_GetTargetShared_Params
{
	struct FString                                     SharedName;                                               
	TArray<class AActor*>                              OutActors;                                                
	bool                                               ReturnValue;                                              
};


struct USTBuffSharedInterface_GetStringShared_Params
{
	struct FString                                     SharedName;                                               
	struct FString                                     OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct USTBuffSharedInterface_GetRotatorShared_Params
{
	struct FString                                     SharedName;                                               
	struct FRotator                                    OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct USTBuffSharedInterface_GetNameShared_Params
{
	struct FString                                     SharedName;                                               
	struct FName                                       OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct USTBuffSharedInterface_GetInt32Shared_Params
{
	struct FString                                     SharedName;                                               
	int                                                OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct USTBuffSharedInterface_GetFloatShared_Params
{
	struct FString                                     SharedName;                                               
	float                                              OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct USTBuffSharedInterface_GetBooleanShared_Params
{
	struct FString                                     SharedName;                                               
	bool                                               OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct USTBuffSystemComponent_UpdateClientBuff_Params
{
	struct FBuffSyncBrief                              Brief;                                                    
};


struct USTBuffSystemComponent_SetEndTime_Params
{
	int                                                InstID;                                                   
	float                                              EndTime;                                                  
	bool                                               ReturnValue;                                              
};


struct USTBuffSystemComponent_SetBuffReplaceData_Params
{
	struct FBuffReplaceData                            From;                                                     
	struct FBuffReplaceData                            To;                                                       
	bool                                               ReturnValue;                                              
};


struct USTBuffSystemComponent_RemoveBuffBySkill_Params
{
	int                                                SkillID;                                                  
	int                                                LayerCount;                                               
	class AActor*                                      Causer;                                                   
	bool                                               ReturnValue;                                              
};


struct USTBuffSystemComponent_RemoveBuff_Params
{
	int                                                BuffID;                                                   
	int                                                LayerCount;                                               
	class AActor*                                      Causer;                                                   
	int                                                CauseSkillID;                                             
};


struct USTBuffSystemComponent_RemoveAllBuffsWithExcludeArray_Params
{
	TArray<int>                                        InExcludeArry;                                            
};


struct USTBuffSystemComponent_RemoveAllBuffs_Params
{
	bool                                               bClearAll;                                                
};


struct USTBuffSystemComponent_OnUpdateBuffEvent__DelegateSignature_Params
{
	int                                                BuffID;                                                   
	int                                                SkillID;                                                  
	int                                                InstID;                                                   
};


struct USTBuffSystemComponent_OnRep_SyncBriefs_Params
{
};


struct USTBuffSystemComponent_OnRep_OwnerSyncBriefs_Params
{
};


struct USTBuffSystemComponent_OnRemoveBuffEvent__DelegateSignature_Params
{
	int                                                BuffID;                                                   
	int                                                SkillID;                                                  
	int                                                InstID;                                                   
};


struct USTBuffSystemComponent_OnClientUpdateBuffEvent__DelegateSignature_Params
{
	int                                                BuffID;                                                   
	int                                                SkillID;                                                  
	int                                                InstID;                                                   
};


struct USTBuffSystemComponent_OnClientRemoveBuffEvent__DelegateSignature_Params
{
	int                                                BuffID;                                                   
	int                                                SkillID;                                                  
	int                                                InstID;                                                   
};


struct USTBuffSystemComponent_OnClientAddBuffEvent__DelegateSignature_Params
{
	int                                                BuffID;                                                   
	int                                                SkillID;                                                  
	int                                                InstID;                                                   
};


struct USTBuffSystemComponent_OnAddBuffEvent__DelegateSignature_Params
{
	int                                                BuffID;                                                   
	int                                                SkillID;                                                  
	bool                                               IsExist;                                                  
	class AActor*                                      Causer;                                                   
};


struct USTBuffSystemComponent_IsCDOK_Params
{
	int                                                InstID;                                                   
	int                                                Index;                                                    
	bool                                               ReturnValue;                                              
};


struct USTBuffSystemComponent_IsBuffInstExist_Params
{
	int                                                InstID;                                                   
	bool                                               ReturnValue;                                              
};


struct USTBuffSystemComponent_HasSkillID_Params
{
	int                                                SkillID;                                                  
	bool                                               ReturnValue;                                              
};


struct USTBuffSystemComponent_HasBuff_Params
{
	int                                                BuffID;                                                   
	bool                                               ReturnValue;                                              
};


struct USTBuffSystemComponent_GetSubsystem_Params
{
	class UBuffConfigSubsystem*                        ReturnValue;                                              
};


struct USTBuffSystemComponent_GetSTBuffByBuffID_Params
{
	int                                                BuffID;                                                   
	class USTBuff*                                     ReturnValue;                                              
};


struct USTBuffSystemComponent_GetRealOwnerRoleSafety_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              
};


struct USTBuffSystemComponent_GetBuffReplaceDataByID_Params
{
	int                                                ID;                                                       
	bool                                               bBuffInst;                                                
	struct FBuffReplaceData                            ReturnValue;                                              
};


struct USTBuffSystemComponent_GetBuffLayerCount_Params
{
	int                                                InstID;                                                   
	int                                                CauseSkillID;                                             
	int                                                ReturnValue;                                              
};


struct USTBuffSystemComponent_GetBuffInfoBySkillID_Params
{
	int                                                SkillID;                                                  
	TArray<struct FBuffSyncBrief>                      ReturnValue;                                              
};


struct USTBuffSystemComponent_GetBuffInfoByBuffID_Params
{
	int                                                BuffID;                                                   
	TArray<struct FBuffSyncBrief>                      ReturnValue;                                              
};


struct USTBuffSystemComponent_GetBuffInfo_Params
{
	int                                                InstID;                                                   
	struct FBuffSyncBrief                              OutBuff;                                                  
	bool                                               ReturnValue;                                              
};


struct USTBuffSystemComponent_GetBuffIDsBySkillID_Params
{
	int                                                SkillID;                                                  
	TArray<int>                                        ReturnValue;                                              
};


struct USTBuffSystemComponent_GetBuffDuration_Params
{
	int                                                InstID;                                                   
	int                                                CauseSkillID;                                             
	float                                              ReturnValue;                                              
};


struct USTBuffSystemComponent_GetBuffDSEndTime_Params
{
	int                                                InstID;                                                   
	int                                                CauseSkillID;                                             
	float                                              ReturnValue;                                              
};


struct USTBuffSystemComponent_GetBuffCDInfo_Params
{
	int                                                InstID;                                                   
	TArray<float>                                      ReturnValue;                                              
};


struct USTBuffSystemComponent_GetAllBuffInfo_Params
{
	TArray<struct FBuffSyncBrief>                      ReturnValue;                                              
};


struct USTBuffSystemComponent_DoCooldown_Params
{
	int                                                InstID;                                                   
	int                                                Index;                                                    
	bool                                               bReset;                                                   
};


struct USTBuffSystemComponent_ClearBuffs_Params
{
};


struct USTBuffSystemComponent_ChangeLevel_Params
{
	int                                                InstID;                                                   
	int                                                NewLevel;                                                 
	bool                                               ReturnValue;                                              
};


struct USTBuffSystemComponent_ChangeDuration_Params
{
	int                                                InstID;                                                   
	float                                              Duration;                                                 
	bool                                               ReturnValue;                                              
};


struct USTBuffSystemComponent_AddBuffBySkill_Params
{
	int                                                SkillID;                                                  
	int                                                LayerCount;                                               
	class AActor*                                      Causer;                                                   
	int                                                Level;                                                    
	bool                                               ReturnValue;                                              
};


struct USTBuffSystemComponent_AddBuff_Params
{
	int                                                BuffID;                                                   
	class AActor*                                      Causer;                                                   
	int                                                LayerCount;                                               
	int                                                CauseSkillID;                                             
	int                                                Level;                                                    
	int                                                ReturnValue;                                              
};


struct USTBuffTriggerBase_Tick_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
	float                                              DeltaTime;                                                
};


struct USTBuffTriggerBase_ResetExecute_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
};


struct USTBuffTriggerBase_OnTriggerCreate_Params
{
};


struct USTBuffTriggerBase_OnTick_Params
{
	float                                              DeltaTime;                                                
};


struct USTBuffTriggerBase_OnInitialize_Params
{
};


struct USTBuffTriggerBase_OnEnd_Params
{
};


struct USTBuffTriggerBase_OnDestroy_Params
{
};


struct USTBuffTriggerBase_OnCreate_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
};


struct USTBuffTriggerBase_IsRoleOK_Params
{
	class UActorComponent*                             OwnerComponent;                                           
	bool                                               ReturnValue;                                              
};


struct USTBuffTriggerBase_IsNeedTick_Params
{
	bool                                               ReturnValue;                                              
};


struct USTBuffTriggerBase_InitLinkActionEnableState_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
};


struct USTBuffTriggerBase_Initialize_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
};


struct USTBuffTriggerBase_GetRealOwnerRole_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              
};


struct USTBuffTriggerBase_End_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
};


struct USTBuffTriggerBase_Destroy_Params
{
	class UActorComponent*                             BuffSystemComponent;                                      
	int                                                InstID;                                                   
};


struct UTableManagerSubsystem_SetTableStringDataField_Params
{
	struct FName                                       tableName;                                                
	struct FString                                     Key;                                                      
	struct FString                                     Field;                                                    
	struct FString                                     NewValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UTableManagerSubsystem_SetModName_Params
{
	struct FString                                     ModName;                                                  
};


struct UTableManagerSubsystem_GetTableProxy_Params
{
	struct FName                                       tableName;                                                
	bool                                               bTempory;                                                 
	struct FName                                       SystemName;                                               
	struct FName                                       SubModName;                                               
	bool                                               bPreLoadPathCompression;                                  
	class UDataTableProxy*                             ReturnValue;                                              
};


struct UTableManagerSubsystem_GetTableDataField_Params
{
	struct FString                                     tableName;                                                
	struct FTableRowBase                               Key;                                                      
	struct FString                                     Field;                                                    
	struct FTableRowBase                               Out;                                                      
	bool                                               ReturnValue;                                              
};


struct UTableManagerSubsystem_GetTableData_Params
{
	struct FString                                     tableName;                                                
	struct FString                                     Key;                                                      
	struct FTableRowBase                               OutRow;                                                   
	bool                                               ReturnValue;                                              
};


struct UTickOptimizationAnimComponent_ShouldForceEnableAnimUpdateRateOptimizations_Params
{
	bool                                               ReturnValue;                                              
};


struct UTickOptimizationAnimComponent_SetNonRenderedFramesSkipped_Params
{
	int                                                InNonRenderedFramesSkipped;                               
};


struct UTickOptimizationAnimComponent_SetMaxFramesSkippedForInterpolation_Params
{
	int                                                InMaxFramesSkippedForInterpolation;                       
};


struct UTickOptimizationAnimComponent_SetLODToFramesSkipped_Params
{
	TArray<int>                                        InLODToFramesSkipped;                                     
};


struct UTickOptimizationAnimComponent_SetFramesSkippedScreenSizeThresholds_Params
{
	TArray<float>                                      InFramesSkippedScreenSizeThresholds;                      
};


struct UTickOptimizationAnimComponent_SetForceEnableAnimUpdateRateOptimizations_Params
{
	bool                                               bInForceEnableAnimUpdateRateOptimizations;                
};


struct UTickOptimizationAnimComponent_SetAnimUpdateRateOptimizationsMode_Params
{
	ETickOptimizationAnimUROMode                       InAnimUpdateRateOptimizationsMode;                        
};


struct UTickOptimizationAnimComponent_RegisterDynamicSkinnedMeshComponent_Params
{
	class USkinnedMeshComponent*                       SkinnedMeshComponent;                                     
};


struct UTickOptimizationAnimComponent_GetNonRenderedFramesSkipped_Params
{
	int                                                ReturnValue;                                              
};


struct UTickOptimizationAnimComponent_GetMaxFramesSkippedForInterpolation_Params
{
	int                                                ReturnValue;                                              
};


struct UTickOptimizationAnimComponent_GetLODToFramesSkipped_Params
{
	TArray<int>                                        ReturnValue;                                              
};


struct UTickOptimizationAnimComponent_GetFramesSkippedScreenSizeThresholds_Params
{
	TArray<float>                                      ReturnValue;                                              
};


struct UTickOptimizationAnimComponent_GetAnimUpdateRateOptimizationsMode_Params
{
	ETickOptimizationAnimUROMode                       ReturnValue;                                              
};


struct UTickOptimizationFocusComponent_ShouldTrack_Params
{
	bool                                               ReturnValue;                                              
};


struct UTickOptimizationTargetComponent_ShouldForceExecuteFirstTick_Params
{
	bool                                               ReturnValue;                                              
};


struct UTickOptimizationTargetComponent_SetTickSettings_Params
{
	TArray<struct FTickOptimizationTickSettings>       InTickSettings;                                           
};


struct UTickOptimizationTargetComponent_SetSphereRadius_Params
{
	float                                              InRadius;                                                 
};


struct UTickOptimizationTargetComponent_SetMidZoneSizes_Params
{
	TArray<float>                                      InMidZoneSizes;                                           
};


struct UTickOptimizationTargetComponent_SetForceExecuteFirstTick_Params
{
	bool                                               bInForceExecuteFirstTick;                                 
};


struct UTickOptimizationTargetComponent_SetDistanceMode_Params
{
	ETickOptimizationDistanceMode                      InDistanceMode;                                           
};


struct UTickOptimizationTargetComponent_SetComponentsTickControl_Params
{
	bool                                               bInComponentsTickControl;                                 
};


struct UTickOptimizationTargetComponent_SetBufferSize_Params
{
	float                                              InBufferSize;                                             
};


struct UTickOptimizationTargetComponent_SetActorTickControl_Params
{
	bool                                               bInActorTickControl;                                      
};


struct UTickOptimizationTargetComponent_RemoveComponentTickControl_Params
{
	class UActorComponent*                             Component;                                                
};


struct UTickOptimizationTargetComponent_Release_Params
{
};


struct UTickOptimizationTargetComponent_IsForced_Params
{
	bool                                               ReturnValue;                                              
};


struct UTickOptimizationTargetComponent_IsComponentsTickControl_Params
{
	bool                                               ReturnValue;                                              
};


struct UTickOptimizationTargetComponent_IsActorTickControl_Params
{
	bool                                               ReturnValue;                                              
};


struct UTickOptimizationTargetComponent_GetTickZone_Params
{
	int                                                ReturnValue;                                              
};


struct UTickOptimizationTargetComponent_GetTickSettings_Params
{
	TArray<struct FTickOptimizationTickSettings>       ReturnValue;                                              
};


struct UTickOptimizationTargetComponent_GetSphereRadius_Params
{
	float                                              ReturnValue;                                              
};


struct UTickOptimizationTargetComponent_GetMidZoneSizes_Params
{
	TArray<float>                                      ReturnValue;                                              
};


struct UTickOptimizationTargetComponent_GetDistanceMode_Params
{
	ETickOptimizationDistanceMode                      ReturnValue;                                              
};


struct UTickOptimizationTargetComponent_GetBufferSize_Params
{
	float                                              ReturnValue;                                              
};


struct UTickOptimizationTargetComponent_Force_Params
{
	int                                                InZone;                                                   
};


struct UTickOptimizationTargetComponent_AddComponentTickControl_Params
{
	class UActorComponent*                             Component;                                                
};


struct UBPTable_GetWrapperPath_Params
{
	int                                                ID;                                                       
	struct FString                                     ReturnValue;                                              
};


struct UBPTable_GetWrapperClass_Params
{
	int                                                ID;                                                       
	class UClass*                                      ReturnValue;                                              
};


struct UBPTable_GetPath_Params
{
	int                                                ID;                                                       
	bool                                               IsLobby;                                                  
	bool                                               bForceLobby;                                              
	struct FString                                     ReturnValue;                                              
};


struct UBPTable_GetObject_Params
{
	int                                                ID;                                                       
	class UObject*                                     Outer;                                                    
	bool                                               IsLobby;                                                  
	bool                                               IsLowDevice;                                              
	class UObject*                                     ReturnValue;                                              
};


struct UBPTable_GetModObject_Params
{
	int                                                ID;                                                       
	class UObject*                                     Outer;                                                    
	bool                                               IsLobby;                                                  
	class UObject*                                     ReturnValue;                                              
};


struct UBPTable_GetModClass_Params
{
	int                                                ID;                                                       
	bool                                               IsLobby;                                                  
	class UClass*                                      ReturnValue;                                              
};


struct UBPTable_GetCustom1Class_Params
{
	int                                                ID;                                                       
	class UClass*                                      ReturnValue;                                              
};


struct UBPTable_GetClass_Params
{
	int                                                ID;                                                       
	bool                                               IsLobby;                                                  
	bool                                               IsLowDevice;                                              
	class UClass*                                      ReturnValue;                                              
};


struct UBPTable_ConvertPath_Params
{
	int                                                ID;                                                       
};


struct UUAELoadedClassManager_InitTableData_Params
{
};


struct UUAELoadedClassManager_InitialModTableItemMap_Params
{
};


struct UUAELoadedClassManager_InitBPTableMap_Mod_Params
{
};


struct UUAELoadedClassManager_InitBPTableMap_Params
{
};


struct UUAELoadedClassManager_HandleTableModNameChanged_Params
{
	struct FString                                     InModName;                                                
};


struct UUAELoadedClassManager_GetWrapperPath_Params
{
	struct FString                                     BPTableName;                                              
	int                                                ID;                                                       
	struct FString                                     ReturnValue;                                              
};


struct UUAELoadedClassManager_GetWrapperClass_Params
{
	struct FString                                     BPTableName;                                              
	int                                                ID;                                                       
	class UClass*                                      ReturnValue;                                              
};


struct UUAELoadedClassManager_GetPath_Params
{
	struct FString                                     BPTableName;                                              
	int                                                ID;                                                       
	bool                                               IsLobby;                                                  
	bool                                               bForceLobby;                                              
	struct FString                                     ReturnValue;                                              
};


struct UUAELoadedClassManager_GetObject_Params
{
	struct FString                                     BPTableName;                                              
	int                                                ID;                                                       
	class UObject*                                     Outer;                                                    
	bool                                               IsLobby;                                                  
	bool                                               IsLowDevice;                                              
	class UObject*                                     ReturnValue;                                              
};


struct UUAELoadedClassManager_GetExactDeviceLevel_Params
{
	int                                                ReturnValue;                                              
};


struct UUAELoadedClassManager_GetDeviceLevel_Params
{
	int                                                ReturnValue;                                              
};


struct UUAELoadedClassManager_GetCustom1Class_Params
{
	struct FString                                     BPTableName;                                              
	int                                                ID;                                                       
	class UClass*                                      ReturnValue;                                              
};


struct UUAELoadedClassManager_GetClassLoadingPath_Params
{
	struct FString                                     BPTableName;                                              
	int                                                ID;                                                       
	bool                                               IsLobby;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UUAELoadedClassManager_GetClass_Params
{
	struct FString                                     BPTableName;                                              
	int                                                ID;                                                       
	bool                                               IsLobby;                                                  
	bool                                               IsLowDevice;                                              
	class UClass*                                      ReturnValue;                                              
};


struct UUAELoadedClassManager_GetBPTableName_Params
{
	int                                                Type;                                                     
	struct FString                                     ReturnValue;                                              
};


struct UUAELoadedClassManager_GetAssetByAssetReferenceAsync_Params
{
	struct FSoftObjectPath                             AssetReference;                                           
	struct FScriptDelegate                             AssetLoadSuccessDelegate;                                 
};


struct UUAELoadedClassManager_GetAssetAsyncWithStringForManage_Params
{
	struct FSoftObjectPath                             AssetReference;                                           
	struct FString                                     InputString;                                              
	struct FScriptDelegate                             AssetLoadSuccessDelegate;                                 
};


struct UUAELoadedClassManager_Get_Params
{
	class UUAELoadedClassManager*                      ReturnValue;                                              
};


struct UUAELoadedClassManager_CreateAndAddBPTable_Mod_Params
{
	struct FString                                     BPTableName;                                              
	class UBPTable*                                    ReturnValue;                                              
};


struct UUAELoadedClassManager_CreateAndAddBPTable_Params
{
	struct FString                                     BPTableName;                                              
	class UBPTable*                                    ReturnValue;                                              
};


struct UUAELoadedClassManager_ClearModTableItemMap_Params
{
};


struct UUAELoadedClassManager_ClearBPTable_Mod_Params
{
};


struct UUAELoadedClassManager_ClearBPTable_Params
{
};


struct UUAELoadedClassManager_ClearAssetByAssetReferenceAsync_Params
{
	struct FScriptDelegate                             AssetLoadSuccessDelegate;                                 
};


struct UUAELoadedClassManager_ClearAllHandle_Params
{
};


struct UUAELoadedClassManager_ClearAllData_Params
{
};


struct UUAEMeshComponent_TriggerCacheMaterialParameterNameIndices_Params
{
};


struct UUAEMeshComponent_RemoveDisableClothRequest_Params
{
	struct FString                                     InSource;                                                 
};


struct UUAEMeshComponent_GetPredictedLODLevel_Params
{
	int                                                ReturnValue;                                              
};


struct UUAEMeshComponent_GetAnimUpdateParamsInfo_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UUAEMeshComponent_AddDisableClothRequest_Params
{
	struct FString                                     InSource;                                                 
};


struct UUAENetConnection_IsClosed_Params
{
	bool                                               ReturnValue;                                              
};


struct UUAENetConnection_HasSameRegion_Params
{
	struct FVector                                     OldLoc;                                                   
	struct FVector                                     NewLoc;                                                   
	bool                                               ReturnValue;                                              
};


struct UUAENetConnection_ForceRefreshRegionWeakNetUpdateObjects_Params
{
	float                                              WeakNetConsiderFrequency;                                 
};


struct UUAETableManager_ReleaseTable_Params
{
	struct FName                                       TableFName;                                               
};


struct UUAETableManager_PreloadDataTablesAsync_Params
{
};


struct UUAETableManager_GetTablePtr_Mod_Params
{
	struct FName                                       tableName;                                                
	class UUAEDataTable*                               ReturnValue;                                              
};


struct UUAETableManager_GetTablePtr_Params
{
	struct FName                                       tableName;                                                
	bool                                               bCheckModTable;                                           
	class UUAEDataTable*                               ReturnValue;                                              
};


struct UUAETableManager_GetTableMap_Params
{
	struct FString                                     tableName;                                                
	class UBaseTableResMap*                            ReturnValue;                                              
};


struct UUAETableManager_GetTableData_Params
{
	struct FString                                     tableName;                                                
	struct FString                                     Key;                                                      
	struct FTableRowBase                               OutRow;                                                   
	bool                                               ReturnValue;                                              
};


struct UUAETableManager_GetInstance_Params
{
	class UUAETableManager*                            ReturnValue;                                              
};


struct UUAETableManager_GetDomainByID_Params
{
	int                                                ID;                                                       
	struct FString                                     ReturnValue;                                              
};


struct UUAETableManager_GetDataTableStatic_Mod_Params
{
	struct FString                                     tableName;                                                
	class UUAEDataTable*                               ReturnValue;                                              
};


struct UUAETableManager_GetDataTableStatic_Params
{
	struct FString                                     tableName;                                                
	class UUAEDataTable*                               ReturnValue;                                              
};


struct UUAETableManager_GetDataTableProxy_Params
{
	struct FName                                       tableName;                                                
	bool                                               bTempory;                                                 
	struct FName                                       SystemName;                                               
	struct FName                                       SubModName;                                               
	class UDataTableProxy*                             ReturnValue;                                              
};


struct UUELanguageUtilityMethods_SetDownLoadLanguageName_Params
{
	struct FString                                     Language;                                                 
};


struct UUELanguageUtilityMethods_IsJaguar_Params
{
	bool                                               ReturnValue;                                              
};


struct UUELanguageUtilityMethods_GetPublishRegion_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UUELanguageUtilityMethods_GetDownLoadLanguageName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UUELanguageUtilityMethods_GetCurrentLanguageName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UUELanguageUtilityMethods_ConvertLanguageName_Params
{
	struct FString                                     prelanguage;                                              
	struct FString                                     ReturnValue;                                              
};


struct UUELanguageUtilityMethods_CheckLocalizationExist_Params
{
	bool                                               ReturnValue;                                              
};


struct UUEMathUtilityMethods_VectorNormalizeMultiple_Params
{
	struct FVector                                     Out;                                                      
	struct FVector                                     v1;                                                       
	float                                              Multiple;                                                 
};


struct UUEMathUtilityMethods_VectorMultiple_Params
{
	struct FVector                                     Out;                                                      
	struct FVector                                     v1;                                                       
	float                                              Multiple;                                                 
};


struct UUEMathUtilityMethods_VectorMinus_Params
{
	struct FVector                                     Out;                                                      
	struct FVector                                     v1;                                                       
	struct FVector                                     v2;                                                       
};


struct UUEMathUtilityMethods_VectorAdditive_Params
{
	struct FVector                                     Out;                                                      
	struct FVector                                     v1;                                                       
	struct FVector                                     v2;                                                       
};


struct UUEMathUtilityMethods_FilterOKForCurrentMode_Params
{
	unsigned char                                      ModeType;                                                 
	int                                                ModeOpenFlag;                                             
	struct FString                                     ModeTypes;                                                
	bool                                               ReturnValue;                                              
};


struct UUEMathUtilityMethods_Conv_VectorToRotator_Params
{
	struct FRotator                                    Out;                                                      
	struct FVector                                     Vec;                                                      
};


struct UUEMathUtilityMethods_CalculateAngleToTargetAngle_Params
{
	float                                              StartAngle;                                               
	float                                              targetAngle;                                              
	float                                              StepAngle;                                                
	EAngleRotationDirectionType                        Dir;                                                      
	float                                              ReturnValue;                                              
};


struct UUEMathUtilityMethods_BKDRHash_Params
{
	struct FString                                     StrToHash;                                                
	int                                                Mod;                                                      
	int                                                ReturnValue;                                              
};


struct UUEMathUtilityMethods_AngleDis_Params
{
	float                                              angleA;                                                   
	float                                              angleB;                                                   
	float                                              ReturnValue;                                              
};


struct UUEPathUtilityMethods_IsPathExist_Params
{
	struct FString                                     HandlePath;                                               
	bool                                               ReturnValue;                                              
};


struct UUEPathUtilityMethods_IsAvatarResPathExistRetODPakName_Params
{
	struct FString                                     HandlePath;                                               
	struct FString                                     OutODPakName;                                             
	bool                                               ReturnValue;                                              
};


struct UUEPathUtilityMethods_IsAvatarResPathExist_Params
{
	struct FString                                     HandlePath;                                               
	bool                                               ReturnValue;                                              
};


struct UUEPathUtilityMethods_GetPassiveDownloadResourcePaths_Params
{
	TArray<struct FString>                             ReturnValue;                                              
};


struct UUEPathUtilityMethods_GetPassiveDownloadResourceIDList_Params
{
	TArray<int>                                        ReturnValue;                                              
};


struct UUEPathUtilityMethods_GetODPakFileName_Params
{
	struct FString                                     InODPakPath;                                              
	struct FString                                     ReturnValue;                                              
};


struct UUEPathUtilityMethods_GetModName_Params
{
	class UObject*                                     WorldContext;                                             
	struct FString                                     ReturnValue;                                              
};


struct UUEPathUtilityMethods_GetFullModName_Params
{
	class UObject*                                     WorldContext;                                             
	struct FString                                     MainMod;                                                  
	struct FString                                     SubMod;                                                   
};


struct UUEPathUtilityMethods_FilterOKForCurrentModeString_Params
{
	struct FString                                     CurrentModeString;                                        
	struct FString                                     CurrentExtraModeString;                                   
	struct FString                                     ModStringInfo;                                            
	unsigned char                                      ModeType;                                                 
	int                                                ModeOpenFlag;                                             
	bool                                               ReturnValue;                                              
};


struct UUEPathUtilityMethods_ClearPassiveDownloadResourcePaths_Params
{
};


struct UUEPathUtilityMethods_ClearPassiveDownloadResourceIDList_Params
{
};


struct UUEPathUtilityMethods_AddPassiveResourceDownloadFlag_Params
{
	int                                                ItemId;                                                   
};

}

