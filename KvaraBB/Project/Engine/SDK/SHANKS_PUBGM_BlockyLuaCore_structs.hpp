#pragma once


 
namespace SDK
{





enum class EBlockyToolButtonType : uint8_t
{
	BTBT_None                      = 0,
	BTBT_Copy                      = 1,
	BTBT_Eject                     = 2,
	BTBT_Comment                   = 3,
	BTBT_Paste                     = 4,
	BTBT_Disable                   = 5,
	BTBT_Delete                    = 6,
	BTBT_Define                    = 7,
	BTBT_Quote                     = 8,
	BTBT_Explain                   = 9,
	BTBT_Clone                     = 10,
	BTBT_GlobalComment             = 11,
	BTBT_MAX                       = 12
};



enum class EBlockyLogMsgMode : uint8_t
{
	EBlockyLogMsgMode__Error       = 0,
	EBlockyLogMsgMode__Warn        = 1,
	EBlockyLogMsgMode__Info        = 2,
	EBlockyLogMsgMode__EBlockyLogMsgMode_MAX = 3
};



enum class EVectorArithmeticOperationType : uint8_t
{
	EVOT_Addition                  = 0,
	EVOT_Subtraction               = 1,
	EVOT_Multiplication            = 2,
	EVOT_Division                  = 3,
	EVOT_MAX                       = 4
};



enum class EIntegerArithmeticOperationType : uint8_t
{
	EIOT_None                      = 0,
	EIOT_Addition                  = 1,
	EIOT_Subtraction               = 2,
	EIOT_Multiplication            = 3,
	EIOT_Division                  = 4,
	EIOT_Remainder                 = 5,
	EIOT_Exponentiation            = 6,
	EIOT_MAX                       = 7
};



enum class EArithmeticOperationType : uint8_t
{
	EOT_None                       = 0,
	EOT_Addition                   = 1,
	EOT_Subtraction                = 2,
	EOT_Multiplication             = 3,
	EOT_Division                   = 4,
	EOT_ExactDivision              = 5,
	EOT_Remainder                  = 6,
	EOT_Exponentiation             = 7,
	EOT_MAX                        = 8
};



enum class EBlockyBinaryOperation : uint8_t
{
	EBBO_Add                       = 0,
	EBBO_Subtract                  = 1,
	EBBO_Multiply                  = 2,
	EBBO_Divide                    = 3,
	EBBO_Modulus                   = 4,
	EBBO_Inequality                = 5,
	EBBO_Equality                  = 6,
	EBBO_BitwiseOr                 = 7,
	EBBO_BitwiseAnd                = 8,
	EBBO_BitwiseLeftShift          = 9,
	EBBO_BitwiseRightShift         = 10,
	EBBO_BooleanOr                 = 11,
	EBBO_BooleanAnd                = 12,
	EBBO_LessThan                  = 13,
	EBBO_LessThanOrEqual           = 14,
	EBBO_GreaterThan               = 15,
	EBBO_GreaterThanOrEqual        = 16,
	EBBO_Remainder                 = 17,
	EBBO_Exponentiation            = 18,
	EBBO_ExactDivision             = 19,
	EBBO_MAX                       = 20
};



enum class ESlotClickType : uint8_t
{
	ESlotClickType__Default        = 0,
	ESlotClickType__MenuItems      = 1,
	ESlotClickType__InputWithType  = 2,
	ESlotClickType__CustomSelection = 3,
	ESlotClickType__InputEnumWithIcon = 4,
	ESlotClickType__InputBoolean   = 5,
	ESlotClickType__Variables      = 6,
	ESlotClickType__Preset         = 7,
	ESlotClickType__TypeFilter     = 8,
	ESlotClickType__TypeString     = 9,
	ESlotClickType__CustomVar      = 10,
	ESlotClickType__All            = 11,
	ESlotClickType__ESlotClickType_MAX = 12
};



enum class EBlockyValueType : uint8_t
{
	BVT_Boolean                    = 0,
	BVT_String                     = 1,
	BVT_Int8                       = 2,
	BVT_UInt8                      = 3,
	BVT_Int16                      = 4,
	BVT_UInt16                     = 5,
	BVT_Int32                      = 6,
	BVT_UInt32                     = 7,
	BVT_Int64                      = 8,
	BVT_UInt64                     = 9,
	BVT_Float                      = 10,
	BVT_Double                     = 11,
	BVT_MAX                        = 12
};



enum class EBlockyVisitMode : uint8_t
{
	BVM_Public                     = 0,
	BVM_Protected                  = 1,
	BVM_Private                    = 2,
	BVM_Local                      = 3,
	BVM_MAX                        = 4
};



enum class EBlockyVariableType : uint8_t
{
	Var_BLIT_None                  = 0,
	Var_BLIT_DefineFunc            = 1,
	Var_BLIT_Executeable           = 2,
	Var_BLIT_Bool                  = 3,
	Var_BLIT_Int                   = 4,
	Var_BLIT_Float                 = 5,
	Var_BLIT_String                = 6,
	Var_BLIT_Array                 = 7,
	Var_BLIT_Class                 = 8,
	Var_BLIT_CodeType              = 9,
	Var_BLIT_Enum                  = 10,
	Var_BLIT_UInt                  = 11,
	Var_BLIT_Vector                = 12,
	Var_BLIT_Rotator               = 13,
	Var_BLIT_Color                 = 14,
	Var_BLIT_Integer               = 15,
	Var_BLIT_Number                = 16,
	Var_BLIT_Map                   = 17,
	Var_BLIT_PODType               = 18,
	Var_BLIT_ToStringAll           = 19,
	Var_BLIT_ArrayElementAll       = 20,
	Var_BLIT_ArrayAll              = 21,
	Var_BLIT_ALL                   = 22,
	Var_BLIT_MAX                   = 23
};



enum class EBlockyListItemType : uint8_t
{
	BLIT_None                      = 0,
	BLIT_DefineFunc                = 1,
	BLIT_Executeable               = 2,
	BLIT_Bool                      = 3,
	BLIT_Int                       = 4,
	BLIT_Float                     = 5,
	BLIT_String                    = 6,
	BLIT_Array                     = 7,
	BLIT_Class                     = 8,
	BLIT_CodeType                  = 9,
	BLIT_Enum                      = 10,
	BLIT_UInt                      = 11,
	BLIT_Vector                    = 12,
	BLIT_Rotator                   = 13,
	BLIT_Color                     = 14,
	BLIT_Map                       = 15,
	BLIT_Integer                   = 16,
	BLIT_Number                    = 17,
	BLIT_PODType                   = 18,
	BLIT_ToStringAll               = 19,
	BLIT_ArrayElementAll           = 20,
	BLIT_ArrayAll                  = 21,
	BLIT_ALL                       = 22,
	BLIT_MAX                       = 23
};



enum class EBlockyBPToolButtonType : uint8_t
{
	EBlockyBPToolButtonType__BP_BTBT_None = 0,
	EBlockyBPToolButtonType__BP_BTBT_Copy = 1,
	EBlockyBPToolButtonType__BP_BTBT_Eject = 2,
	EBlockyBPToolButtonType__BP_BTBT_Comment = 3,
	EBlockyBPToolButtonType__BP_BTBT_Paste = 4,
	EBlockyBPToolButtonType__BP_BTBT_Disable = 5,
	EBlockyBPToolButtonType__BP_BTBT_Delete = 6,
	EBlockyBPToolButtonType__BP_BTBT_Define = 7,
	EBlockyBPToolButtonType__BP_BTBT_Quote = 8,
	EBlockyBPToolButtonType__BP_BTBT_Explain = 9,
	EBlockyBPToolButtonType__BP_BTBT_Clone = 10,
	EBlockyBPToolButtonType__BP_BTBT_GlobalComment = 11,
	EBlockyBPToolButtonType__BP_BTBT_MAX = 12
};



enum class EBlockyBlockTypeGroup : uint8_t
{
	EBlockyBlockTypeGroup__BBTG_Event = 0,
	EBlockyBlockTypeGroup__BBTG_Action = 1,
	EBlockyBlockTypeGroup__BBTG_Logic = 2,
	EBlockyBlockTypeGroup__BBTG_Value = 3,
	EBlockyBlockTypeGroup__BBTG_Undefine = 4,
	EBlockyBlockTypeGroup__BBTG_Custom = 5,
	EBlockyBlockTypeGroup__BBTG_Max = 6
};



enum class EBlockyCurrentGraphBlockyNumberType : uint8_t
{
	EBlockyCurrentGraphBlockyNumberType__BCGBN_Total = 0,
	EBlockyCurrentGraphBlockyNumberType__BCGBN_TotalEvent = 1,
	EBlockyCurrentGraphBlockyNumberType__BCGBN_TotalAction = 2,
	EBlockyCurrentGraphBlockyNumberType__BCGBN_TotalLogic = 3,
	EBlockyCurrentGraphBlockyNumberType__BCGBN_TotalValue = 4,
	EBlockyCurrentGraphBlockyNumberType__BCGBN_TotalVariable = 5,
	EBlockyCurrentGraphBlockyNumberType__BCGBN_TotalCustomEvent = 6,
	EBlockyCurrentGraphBlockyNumberType__BCGBN_TotalCustomAction = 7,
	EBlockyCurrentGraphBlockyNumberType__BCGBN_TotalCustomValue = 8,
	EBlockyCurrentGraphBlockyNumberType__BCGBN_MaxActionBlocksNumInEvent = 9,
	EBlockyCurrentGraphBlockyNumberType__BCGBN_MaxBlocksNumInCustomEvent = 10,
	EBlockyCurrentGraphBlockyNumberType__BCGBN_MaxBlocksNumInCustomAction = 11,
	EBlockyCurrentGraphBlockyNumberType__BCGBN_MaxBlocksNumInCustomValue = 12,
	EBlockyCurrentGraphBlockyNumberType__BCGBN_MAX = 13
};



enum class EBlockyLuaStubArgType : uint8_t
{
	EBlockyLuaStubArgType__BlockyLuaStubArgType_Unknown = 0,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_IntProperty = 1,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_UInt32Property = 2,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_Int64Property = 3,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_UInt64Property = 4,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_Int16Property = 5,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_UInt16Property = 6,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_Int8Property = 7,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_ByteProperty = 8,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_FloatProperty = 9,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_DoubleProperty = 10,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_BoolProperty = 11,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_TextProperty = 12,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_StrProperty = 13,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_NameProperty = 14,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_UObjectProperty = 15,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_Struct = 16,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_Handle = 17,
	EBlockyLuaStubArgType__BlockyLuaStubArgType_MAX = 18
};



enum class EBlockListShowType : uint8_t
{
	EBLS_All                       = 0,
	EBLS_Var                       = 1,
	EBLS_BlackBoard                = 2,
	EBLS_CustomVar                 = 3,
	EBLS_MAX                       = 4
};



enum class ECustomBlockType : uint8_t
{
	ECBT_Action                    = 0,
	ECBT_Value                     = 1,
	ECBT_Event                     = 2,
	ECBT_MAX                       = 3
};



enum class EBlockyFunctionArgumentAttribute : uint8_t
{
	EBFAA_Default                  = 0,
	EBFAA_In                       = 1,
	EBFAA_Out                      = 2,
	EBFAA_Ref                      = 3,
	EBFAA_MAX                      = 4
};



enum class ECompareOperationType : uint8_t
{
	EOT_Inequality                 = 0,
	EOT_Equality                   = 1,
	EOT_GreaterThan                = 2,
	EOT_GreaterThanOrEqual         = 3,
	EOT_LessThan                   = 4,
	EOT_LessThanOrEqual            = 5
};



enum class EBlockyAccessType : uint8_t
{
	EBAT_Global                    = 0,
	EBAT_Canvas                    = 1,
	EBAT_Local                     = 2,
	EBAT_CallBack                  = 3,
	EBAT_MAX                       = 4
};



enum class EBlockyUnaryOperation : uint8_t
{
	EBUO_Negative                  = 0,
	EBUO_BooleanNot                = 1,
	EBUO_BitwiseNot                = 2,
	EBUO_MAX                       = 3
};



enum class EBlockyVarInitType : uint8_t
{
	EBVIT_InputWithValue           = 0,
	EBVIT_Preset                   = 1,
	EBVIT_ForbidInitialization     = 2,
	EBVIT_CustomSelection          = 3,
	EBVIT_MAX                      = 4
};









struct FBlockParam
{
	struct FString                                     Name;                                                     
	struct FText                                       DisplayName;                                              
	bool                                               bIsEnabled;                                               
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FBlockyLuaHandle
{
	uint32_t                                           Low;                                                      
	uint32_t                                           High;                                                     
};



struct FBlockPoint
{
	float                                              X;                                                        
	float                                              Y;                                                        
};



struct FBlockySlotString
{
	unsigned char                                      UnknownData00[0x28];                                      
	struct FString                                     CustomStr;                                                
};



struct FGraphString
{
	struct FGuid                                       ID;                                                       
	struct FString                                     Name;                                                     
	struct FString                                     DisplayName;                                              
	struct FString                                     TemplateName;                                             
};



struct FCustomVariableString
{
	unsigned char                                      UnknownData00[0x18];                                      
	struct FString                                     Name;                                                     
};



struct FCustomConfigString
{
	struct FGuid                                       ID;                                                       
	struct FString                                     Name;                                                     
	TEnumAsByte<ECustomBlockType>                      Type;                                                     
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FBlockyBrushInfo
{
	struct FString                                     RectName;                                                 
	struct FString                                     TexturePath;                                              
	float                                              TextureWidth;                                             
	float                                              TextureHeight;                                            
	int                                                DrawTypeInt;                                              
	struct FVector2D                                   StartUV;                                                  
	struct FVector2D                                   SizeUV;                                                   
	struct FMargin                                     RectMargin;                                               
	int                                                CrossDelta;                                               
	float                                              RectAngle;                                                
	struct FVector2D                                   RectSize;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FPresetTypeData
{
	unsigned char                                      UnknownData00[0x10];                                      
	class UVarDefiner*                                 VarDefiner;                                               
	TMap<struct FString, class UPresetDesc*>           Presets;                                                  
};



struct FSequence
{
	TArray<struct FString>                             SequenceNames;                                            
};



struct FCheckStringHandleData
{
	unsigned char                                      UnknownData00[0x18];                                      
};



struct FType
{
	unsigned char                                      UnknownData00[0x58];                                      
	struct FString                                     TypeName;                                                 
	unsigned char                                      UnknownData01[0x8];                                       
};



struct FPresetResetSlotState
{
	unsigned char                                      UnknownData00[0x20];                                      
	class UPresetDesc*                                 PresetDesc;                                               
	unsigned char                                      UnknownData01[0x18];                                      
};



struct FBlockPreviewBrush
{
	class UBrushData*                                  Brush;                                                    
	class UBlockBase*                                  InsideHostBlock;                                          
	unsigned char                                      UnknownData00[0x28];                                      
};



struct FFunctionParameter
{
	class UClass*                                      BlockType;                                                
	unsigned char                                      UnknownData00[0xE0];                                      
};



struct FHotFixSlotHandle
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FDependResInfo
{
	TArray<int>                                        AssetIDs;                                                 
	TArray<int>                                        FeatureIDs;                                               
	TArray<struct FString>                             CustomAssetKeys;                                          
};



struct FStubType
{
	EBlockyLuaStubArgType                              Type;                                                     
	unsigned char                                      UnknownData00[0x7];                                       
	class UScriptStruct*                               Struct;                                                   
};



struct FBlockyLuaStub
{
	class UObject*                                     OverrideContext;                                          
	class UObject*                                     Host;                                                     
	struct FString                                     Name;                                                     
	TArray<unsigned char>                              ArgumentsData;                                            
	TArray<unsigned char>                              ReturnData;                                               
	TArray<struct FStubType>                           ArgTypes;                                                 
	struct FStubType                                   ReturnType;                                               
	unsigned char                                      UnknownData00[0x20];                                      
};



struct FMessageDataStruct
{
	unsigned char                                      UnknownData00[0x28];                                      
};



struct FGraphSetting
{
	bool                                               CanCopy;                                                  
	bool                                               CanReName;                                                
	bool                                               CanDel;                                                   
	bool                                               CanSave;                                                  
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<int>                                        Tags;                                                     
};



struct FGraphSettingMap
{
	TMap<struct FString, struct FGraphSetting>         graphSettings;                                            
};



struct FBlockOutputInfo
{
	TArray<struct FString>                             Infos;                                                    
	class UBlockBase*                                  SlotHostBlock;                                            
	unsigned char                                      UnknownData00[0x18];                                      
	class UBlockBase*                                  TargetBlock;                                              
	unsigned char                                      UnknownData01[0x8];                                       
};



struct FQuoteData
{
	struct FVector2D                                   pos;                                                      
	struct FString                                     BlockName;                                                
	struct FString                                     GraphName;                                                
};



struct FBlockRect
{
	struct FBlockPoint                                 Position;                                                 
	struct FBlockPoint                                 Size;                                                     
};



struct FMsgData
{
	struct FText                                       Info;                                                     
	class UBlockBase*                                  SourceBlock;                                              
	unsigned char                                      UnknownData00[0x40];                                      
};



struct FNamedVarData
{
	TEnumAsByte<EBlockyAccessType>                     Access;                                                   
	unsigned char                                      UnknownData00[0x7];                                       
	class UVarDefiner*                                 Definer;                                                  
	bool                                               bIsArray;                                                 
	unsigned char                                      UnknownData01[0x7];                                       
	struct FString                                     InitValueString;                                          
};

}

