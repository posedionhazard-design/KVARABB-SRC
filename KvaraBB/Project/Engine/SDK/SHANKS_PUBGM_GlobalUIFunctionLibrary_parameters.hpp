#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UGlobalUIFunctionLibrary_C_GetImagePixelSize_Params
{
	struct FString                                     sPath;                                                    
	class UObject*                                     __WorldContext;                                           
	int                                                Width;                                                    
	int                                                Height;                                                   
};


struct UGlobalUIFunctionLibrary_C_GetLobbyCorpsIcon_Params
{
	int                                                IconID;                                                   
	class UObject*                                     __WorldContext;                                           
	class UTexture2D*                                  Value;                                                    
};


struct UGlobalUIFunctionLibrary_C_IsAsyncSetTexture_Params
{
	class UObject*                                     __WorldContext;                                           
	bool                                               IsAsync;                                                  
};


struct UGlobalUIFunctionLibrary_C_SetArenaWeaponLightProperty_Params
{
	class UObject*                                     __WorldContext;                                           
};


struct UGlobalUIFunctionLibrary_C_SetLobbyDefaultLightProperty_Params
{
	class UObject*                                     __WorldContext;                                           
};


struct UGlobalUIFunctionLibrary_C_SwitchLobbyMeshBg_Params
{
	int                                                BgIdx;                                                    
	class UObject*                                     __WorldContext;                                           
};


struct UGlobalUIFunctionLibrary_C_AddOrUpdateBlendable_Params
{
	class UCameraComponent*                            CameraComponent;                                          
	class UMaterialInstanceDynamic*                    MIDynamic;                                                
	float                                              BlendWeight;                                              
	class UObject*                                     __WorldContext;                                           
};


struct UGlobalUIFunctionLibrary_C_ProcessAndroidBack_Params
{
	class UObject*                                     __WorldContext;                                           
};


struct UGlobalUIFunctionLibrary_C_SetSpecialIconWithSprite2DMatchSize_Params
{
	class UImage*                                      Widget;                                                   
	struct FString                                     specialIconPath;                                          
	class UObject*                                     __WorldContext;                                           
};


struct UGlobalUIFunctionLibrary_C_GetItemTableRow_Params
{
	int                                                ID;                                                       
	class UObject*                                     __WorldContext;                                           
	struct FBP_STRUCT_Item_type                        Item;                                                     
};


struct UGlobalUIFunctionLibrary_C_SecondsToMMSS_Params
{
	int                                                Seconds;                                                  
	class UObject*                                     __WorldContext;                                           
	struct FString                                     FormatTime;                                               
};


struct UGlobalUIFunctionLibrary_C_PlaySoundPopup_Params
{
	class UObject*                                     __WorldContext;                                           
};


struct UGlobalUIFunctionLibrary_C_PlaySoundTab_Params
{
	class UObject*                                     __WorldContext;                                           
};


struct UGlobalUIFunctionLibrary_C_GetUIRectOffset_Params
{
	class UObject*                                     __WorldContext;                                           
	int                                                Left;                                                     
	int                                                Right;                                                    
};


struct UGlobalUIFunctionLibrary_C_IsConfigGameModeSubType_Params
{
	EGameModeSubType                                   InSubType;                                                
	class UObject*                                     Context;                                                  
	class UObject*                                     __WorldContext;                                           
	bool                                               res;                                                      
};


struct UGlobalUIFunctionLibrary_C_IsConfigGameModeType_Params
{
	EGameModeType                                      InGameModeType;                                           
	class UObject*                                     Context;                                                  
	class UObject*                                     __WorldContext;                                           
	bool                                               res;                                                      
};


struct UGlobalUIFunctionLibrary_C_GetGlobalLuaUI_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UObject*                                     __WorldContext;                                           
	class UGlobalLuaWidget_C*                          AsGlobal_Lua_Widget;                                      
};


struct UGlobalUIFunctionLibrary_C_GetVector4_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              W;                                                        
	float                                              H;                                                        
	class UObject*                                     __WorldContext;                                           
	struct FVector4                                    Vector;                                                   
};


struct UGlobalUIFunctionLibrary_C_InitAmmoDropBox_Params
{
	class UMeshComponent*                              MeshComponent;                                            
	int                                                LOD;                                                      
	class UObject*                                     __WorldContext;                                           
};


struct UGlobalUIFunctionLibrary_C_GetRankIntegralBigIcon_Params
{
	struct FString                                     Icon;                                                     
	class UObject*                                     __WorldContext;                                           
	struct FString                                     ReturnValue;                                              
};


struct UGlobalUIFunctionLibrary_C_GetRankIntegralSmallIcon_Params
{
	struct FString                                     Icon;                                                     
	class UObject*                                     __WorldContext;                                           
	struct FString                                     ReturnValue;                                              
};


struct UGlobalUIFunctionLibrary_C_GetRankIntegralSubIcon_Params
{
	struct FString                                     Icon;                                                     
	class UObject*                                     __WorldContext;                                           
	struct FString                                     ReturnValue;                                              
};


struct UGlobalUIFunctionLibrary_C_SetRankInteral_Params
{
	struct FBP_STRUCT_RankIntegralLevel_type           RankIntegralLevelInfo;                                    
	class UImage*                                      ImageIcon;                                                
	class UTextBlock*                                  TextBlock_Rank;                                           
	class UCanvasPanel*                                Canvas_Panel_Star;                                        
	class UImage*                                      Image_Star;                                               
	class UTextBlock*                                  TextBlock_Star;                                           
	bool                                               isSegmentStarOpen;                                        
	class UImage*                                      Image_Quality;                                            
	class UImage*                                      vx_Image_Quality;                                         
	class UObject*                                     __WorldContext;                                           
};


struct UGlobalUIFunctionLibrary_C_SetImageFromPath_Params
{
	class UImage*                                      Image;                                                    
	struct FString                                     IconPath;                                                 
	class UObject*                                     __WorldContext;                                           
};


struct UGlobalUIFunctionLibrary_C_GetBrushFromSprite_Params
{
	struct FSlateBrush                                 Brush;                                                    
	struct FString                                     Path;                                                     
	class UObject*                                     __WorldContext;                                           
	struct FSlateBrush                                 Result;                                                   
};


struct UGlobalUIFunctionLibrary_C_LoadSprite_Params
{
	class UImage*                                      Image;                                                    
	struct FString                                     IconPath;                                                 
	class UObject*                                     __WorldContext;                                           
};


struct UGlobalUIFunctionLibrary_C_GetXieQualityPath_Params
{
	int                                                Quality;                                                  
	class UObject*                                     __WorldContext;                                           
	struct FString                                     Path;                                                     
};


struct UGlobalUIFunctionLibrary_C_GetBgQualityPath_Params
{
	int                                                Quality;                                                  
	class UObject*                                     __WorldContext;                                           
	struct FString                                     Path;                                                     
};


struct UGlobalUIFunctionLibrary_C_GetQualityPath_Params
{
	int                                                Quality;                                                  
	class UObject*                                     __WorldContext;                                           
	struct FString                                     Path;                                                     
};


struct UGlobalUIFunctionLibrary_C_SetCornerQuality_Params
{
	class UImage*                                      Image;                                                    
	int                                                Quality;                                                  
	class UObject*                                     __WorldContext;                                           
};


struct UGlobalUIFunctionLibrary_C_GetPingColor_Params
{
	float                                              ms;                                                       
	class UObject*                                     __WorldContext;                                           
	struct FLinearColor                                Color;                                                    
};


struct UGlobalUIFunctionLibrary_C_SetImgWithPath_Params
{
	class UImage*                                      ImgRef;                                                   
	struct FString                                     imgPath;                                                  
	bool                                               IsMatchSize;                                              
	class UObject*                                     __WorldContext;                                           
	bool                                               Success;                                                  
};


struct UGlobalUIFunctionLibrary_C_GetItemName_Params
{
	struct FString                                     Name;                                                     
	int                                                Length;                                                   
	bool                                               chineseSensity;                                           
	class UObject*                                     __WorldContext;                                           
	struct FString                                     OutName;                                                  
};


struct UGlobalUIFunctionLibrary_C_UpdateImageByPath_Params
{
	class UImage*                                      Image;                                                    
	struct FString                                     Path;                                                     
	class UObject*                                     __WorldContext;                                           
};


struct UGlobalUIFunctionLibrary_C_UpdateImageTint_Params
{
	class UImage*                                      Image;                                                    
	struct FLinearColor                                Color;                                                    
	class UObject*                                     __WorldContext;                                           
};


struct UGlobalUIFunctionLibrary_C_ChangeBrushColor_Params
{
	struct FSlateBrush                                 Brush;                                                    
	struct FLinearColor                                Color;                                                    
	class UObject*                                     __WorldContext;                                           
	struct FSlateBrush                                 NewBrush;                                                 
};


struct UGlobalUIFunctionLibrary_C_GetCameraMod_Params
{
	class UObject*                                     __WorldContext;                                           
	int                                                Mod;                                                      
};


struct UGlobalUIFunctionLibrary_C_SetHumanLightProperty_Params
{
	class UObject*                                     __WorldContext;                                           
};


struct UGlobalUIFunctionLibrary_C_SetWeaponLightProperty_Params
{
	class UObject*                                     __WorldContext;                                           
};


struct UGlobalUIFunctionLibrary_C_SetSceneSkyLightProperty_Params
{
	struct FString                                     lightName;                                                
	struct FTransform                                  Trans;                                                    
	float                                              Intensity;                                                
	struct FLinearColor                                Color;                                                    
	class UObject*                                     __WorldContext;                                           
};


struct UGlobalUIFunctionLibrary_C_SetAndroidKeyIsValid_Params
{
	bool                                               bValid;                                                   
	class UObject*                                     __WorldContext;                                           
};


struct UGlobalUIFunctionLibrary_C_numToTimeStrFormat_Params
{
	int                                                timeNum;                                                  
	class UObject*                                     __WorldContext;                                           
	struct FString                                     TimeStr;                                                  
};


struct UGlobalUIFunctionLibrary_C_numToTimeStr_Params
{
	int                                                timeNum;                                                  
	class UObject*                                     __WorldContext;                                           
	struct FString                                     TimeStr;                                                  
};


struct UGlobalUIFunctionLibrary_C_UpdateNationImage_Params
{
	class UImage*                                      Image;                                                    
	struct FString                                     RoleNation;                                               
	class UObject*                                     __WorldContext;                                           
};


struct UGlobalUIFunctionLibrary_C_SetScenePointLightProperty_Params
{
	struct FString                                     lightName;                                                
	struct FTransform                                  targetTrans;                                              
	float                                              Intensity;                                                
	struct FLinearColor                                Color;                                                    
	int                                                inverseSquareFalloff;                                     
	float                                              Radius;                                                   
	class UObject*                                     __WorldContext;                                           
};


struct UGlobalUIFunctionLibrary_C_SetSceneDirectionalLightProperty_Params
{
	struct FString                                     lightName;                                                
	struct FTransform                                  targetTrans;                                              
	float                                              Intensity;                                                
	struct FLinearColor                                Color;                                                    
	class UObject*                                     __WorldContext;                                           
};


struct UGlobalUIFunctionLibrary_C_GetLobbyGlobalBp_Params
{
	class UObject*                                     __WorldContext;                                           
	class UGlobal_Bp_C*                                AsGlobal_Bp;                                              
};


struct UGlobalUIFunctionLibrary_C_GetLobbyFrameTexture_Params
{
	int                                                frameLevel;                                               
	class UObject*                                     __WorldContext;                                           
	class UTexture2D*                                  Output;                                                   
};


struct UGlobalUIFunctionLibrary_C_GetNationInfo_Params
{
	struct FString                                     NationCode;                                               
	class UObject*                                     __WorldContext;                                           
	struct FBP_STRUCT_RegionConfig_type                NationInfo;                                               
};


struct UGlobalUIFunctionLibrary_C_SetImageWithSpriteRes_Params
{
	struct FString                                     ResPath;                                                  
	class UImage*                                      Image;                                                    
	class UObject*                                     __WorldContext;                                           
};


struct UGlobalUIFunctionLibrary_C_GetNationSwitch_Params
{
	struct FString                                     Name;                                                     
	class UObject*                                     __WorldContext;                                           
	bool                                               Ret;                                                      
};


struct UGlobalUIFunctionLibrary_C_CheckIfMenuOpen_Params
{
	int                                                MenuId;                                                   
	class UObject*                                     __WorldContext;                                           
	bool                                               Ret;                                                      
};


struct UGlobalUIFunctionLibrary_C_GetItemTimeS_Params
{
	int                                                res_id;                                                   
	int                                                FirstTimeNum;                                             
	class UObject*                                     __WorldContext;                                           
	struct FString                                     time_s;                                                   
	bool                                               is_have_limit;                                            
};


struct UGlobalUIFunctionLibrary_C_ShowItemTipsByButton_Params
{
	int                                                ItemId;                                                   
	class UButton*                                     Button;                                                   
	int                                                validHours;                                               
	bool                                               isShowCloseBtn;                                           
	class UObject*                                     __WorldContext;                                           
};


struct UGlobalUIFunctionLibrary_C_CloseItemTips_Params
{
	class UObject*                                     __WorldContext;                                           
};


struct UGlobalUIFunctionLibrary_C_CreateUAEUserWidget_Params
{
	class UClass*                                      Class;                                                    
	class UUAEUserWidget*                              Parent;                                                   
	class UObject*                                     __WorldContext;                                           
	class UUAEUserWidget*                              Widget;                                                   
};


struct UGlobalUIFunctionLibrary_C_PlaySoundCloseButton_Params
{
	class UObject*                                     __WorldContext;                                           
};


struct UGlobalUIFunctionLibrary_C_ShowEffect_Params
{
	TArray<class UWidget*>                             Widget;                                                   
	bool                                               IsShow;                                                   
	class UObject*                                     __WorldContext;                                           
};


struct UGlobalUIFunctionLibrary_C_IsWidgetVisible_Params
{
	class UWidget*                                     Widget;                                                   
	class UObject*                                     __WorldContext;                                           
	bool                                               Visible;                                                  
};


struct UGlobalUIFunctionLibrary_C_PlaySoundClickButton_Params
{
	class UObject*                                     __WorldContext;                                           
};


struct UGlobalUIFunctionLibrary_C_SendBAReport_Params
{
	int                                                ButtonType;                                               
	int                                                Reason;                                                   
	class UObject*                                     __WorldContext;                                           
};


struct UGlobalUIFunctionLibrary_C_IsWhiteSpace_Params
{
	struct FString                                     Text;                                                     
	class UObject*                                     __WorldContext;                                           
	bool                                               Result;                                                   
};


struct UGlobalUIFunctionLibrary_C_GetTextLength_Params
{
	struct FString                                     Text;                                                     
	bool                                               chineseSensity;                                           
	class UObject*                                     __WorldContext;                                           
	int                                                Length;                                                   
};


struct UGlobalUIFunctionLibrary_C_BoolToVisible_Params
{
	bool                                               Visible;                                                  
	bool                                               collapse;                                                 
	bool                                               isButton;                                                 
	class UObject*                                     __WorldContext;                                           
	ESlateVisibility                                   Visibility;                                               
};


struct UGlobalUIFunctionLibrary_C_IsEnglish_Params
{
	struct FString                                     Text;                                                     
	class UObject*                                     __WorldContext;                                           
	bool                                               Result;                                                   
};


struct UGlobalUIFunctionLibrary_C_GetGlobalData_Params
{
	class UObject*                                     __WorldContext;                                           
	class Abp_global_C*                                globalObj;                                                
};


struct UGlobalUIFunctionLibrary_C_GetLocalizeString_Params
{
	int                                                ID;                                                       
	struct FString                                     string1;                                                  
	struct FString                                     string2;                                                  
	struct FString                                     string3;                                                  
	class UObject*                                     __WorldContext;                                           
	struct FString                                     TextValue;                                                
};

}

