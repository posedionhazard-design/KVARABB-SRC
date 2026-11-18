#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UCommon_Item_BP_C_SetTexture_Params
{
	class UImage*                                      Control;                                                  
	struct FString                                     Path;                                                     
};


struct UCommon_Item_BP_C_SetEveryPackIcon_Params
{
	int                                                specailIconTable;                                         
};


struct UCommon_Item_BP_C_SetLight_Params
{
	bool                                               bShow;                                                    
};


struct UCommon_Item_BP_C_SetNameColor_Params
{
	struct FSlateColor                                 Color;                                                    
};


struct UCommon_Item_BP_C_SetLimitCount_Params
{
	bool                                               IsShow;                                                   
	int                                                Has;                                                      
	int                                                Max;                                                      
};


struct UCommon_Item_BP_C_SetCostCount_Params
{
	bool                                               IsShow;                                                   
	int                                                Has;                                                      
	int                                                Cost;                                                     
};


struct UCommon_Item_BP_C_HideQualityOfBG_Params
{
};


struct UCommon_Item_BP_C_HideQuality_Params
{
};


struct UCommon_Item_BP_C_SetTimeLimitIcon_Params
{
	bool                                               Show;                                                     
};


struct UCommon_Item_BP_C_SetValidTime_Params
{
	int                                                validTime;                                                
};


struct UCommon_Item_BP_C_SetIsShowSubTransparentBg_Params
{
	bool                                               IsShow;                                                   
};


struct UCommon_Item_BP_C_SetGrayBg_Params
{
	bool                                               IsShow;                                                   
};


struct UCommon_Item_BP_C_SetBlackBg_Params
{
	bool                                               IsShow;                                                   
};


struct UCommon_Item_BP_C_SetAwardState_Params
{
	int                                                State;                                                    
};


struct UCommon_Item_BP_C_SetCombatReadinessIcon_Params
{
	bool                                               Visibility;                                               
};


struct UCommon_Item_BP_C_SetIsWear_Params
{
	bool                                               isWear;                                                   
};


struct UCommon_Item_BP_C_PlayDecomposeAni_Params
{
	int                                                OldItemID;                                                
	int                                                NewItemID;                                                
	int                                                newCnt;                                                   
};


struct UCommon_Item_BP_C_SetTakeState_Params
{
	bool                                               canTake;                                                  
};


struct UCommon_Item_BP_C_SetHasGet_Params
{
	bool                                               hasGet;                                                   
};


struct UCommon_Item_BP_C_EnableItemPreview_Params
{
};


struct UCommon_Item_BP_C_SetIconFromTexture_Params
{
	class UTexture2D*                                  Texture;                                                  
};


struct UCommon_Item_BP_C_ShowItemName_Params
{
};


struct UCommon_Item_BP_C_DisableItemPreview_Params
{
};


struct UCommon_Item_BP_C_OnReleaseItem_Params
{
};


struct UCommon_Item_BP_C_OnPressItem_Params
{
};


struct UCommon_Item_BP_C_OnClickItem_Params
{
};


struct UCommon_Item_BP_C_SetUseCount_Params
{
	int                                                UseCount;                                                 
	bool                                               isRolewear;                                               
};


struct UCommon_Item_BP_C_SetSmallerIcon_Params
{
	bool                                               IsNeedSmall;                                              
};


struct UCommon_Item_BP_C_SetSpecialIcon_Params
{
	struct FString                                     Path;                                                     
};


struct UCommon_Item_BP_C_SetDecomposeEffectIcon_Params
{
	int                                                from_id;                                                  
	int                                                to_id;                                                    
	int                                                to_cnt;                                                   
	float                                              playAnimDelayTime;                                        
};


struct UCommon_Item_BP_C_PlayDecomposeAnim_Params
{
};


struct UCommon_Item_BP_C_EnableShowLimit_Params
{
	bool                                               Enable;                                                   
};


struct UCommon_Item_BP_C_SetColorAndPattern_Params
{
	int                                                Color;                                                    
	int                                                Pattern;                                                  
};


struct UCommon_Item_BP_C_SetIsolated_Params
{
	bool                                               bShow;                                                    
};


struct UCommon_Item_BP_C_ShowMask_Params
{
	bool                                               IsShow;                                                   
};


struct UCommon_Item_BP_C_SetBGVisibility_Params
{
	bool                                               Visible;                                                  
};


struct UCommon_Item_BP_C_EnableShowTips_Params
{
	bool                                               Enable;                                                   
};


struct UCommon_Item_BP_C_HideNameAddrStr_Params
{
};


struct UCommon_Item_BP_C_SetIsTryOn_Params
{
	bool                                               tryOn;                                                    
};


struct UCommon_Item_BP_C_SetNameAddStr_Params
{
	struct FString                                     NewParam;                                                 
};


struct UCommon_Item_BP_C_SetIconAlpha_Params
{
	float                                              Alpha;                                                    
};


struct UCommon_Item_BP_C_SetIsLock_Params
{
	bool                                               isLock;                                                   
};


struct UCommon_Item_BP_C_SetIsNew_Params
{
	bool                                               IsNew;                                                    
};


struct UCommon_Item_BP_C_SetQuality_Params
{
	int                                                Quality;                                                  
};


struct UCommon_Item_BP_C_SetUsingState_Params
{
	bool                                               IsUsing;                                                  
};


struct UCommon_Item_BP_C_SetSelected_Params
{
	bool                                               IsSelected;                                               
};


struct UCommon_Item_BP_C_SetNumber_Params
{
	int                                                Number;                                                   
};


struct UCommon_Item_BP_C_InitView_Params
{
	int                                                resID;                                                    
	int                                                Count;                                                    
	int                                                Style;                                                    
	int                                                validHour;                                                
	bool                                               isShowTips;                                               
	bool                                               isRedEmotion;                                             
	class UCommon_Item_BP_C*                           Item;                                                     
};


struct UCommon_Item_BP_C_OnClickEvent_Params
{
};


struct UCommon_Item_BP_C_OnPressEvent_Params
{
};


struct UCommon_Item_BP_C_OnReleaseEvent_Params
{
};


struct UCommon_Item_BP_C__BindEvent_Params
{
};


struct UCommon_Item_BP_C__ClearEvent_Params
{
};


struct UCommon_Item_BP_C__BindDragEvent_Params
{
};


struct UCommon_Item_BP_C__ClearDragEvent_Params
{
};


struct UCommon_Item_BP_C_ExecuteUbergraph_Common_Item_BP_Params
{
	int                                                EntryPoint;                                               
};


struct UCommon_Item_BP_C_OnReleaseItemCallback__DelegateSignature_Params
{
};


struct UCommon_Item_BP_C_OnPressItemCallback__DelegateSignature_Params
{
};


struct UCommon_Item_BP_C_OnClickItemCallback__DelegateSignature_Params
{
	int                                                resID;                                                    
};

}

