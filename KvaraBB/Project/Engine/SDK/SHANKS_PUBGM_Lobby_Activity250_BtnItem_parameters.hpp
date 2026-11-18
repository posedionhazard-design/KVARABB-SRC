#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct ULobby_Activity250_BtnItem_C_SetOnlineActivityData_Params
{
	int                                                status;                                                   
	struct FString                                     strText;                                                  
};


struct ULobby_Activity250_BtnItem_C_SetBtnData_Params
{
	struct FString                                     ActivityName;                                             
	struct FString                                     IconPath;                                                 
	struct FString                                     JumpUrl;                                                  
	bool                                               IsShowCountDownIcon;                                      
	bool                                               IsNew;                                                    
	struct FString                                     DependItems;                                              
	int                                                ActID;                                                    
	int                                                CreatedUtc;                                               
};


struct ULobby_Activity250_BtnItem_C_ItemClickDispatcher__DelegateSignature_Params
{
	class ULobby_Activity_BtnItem_C*                   Item;                                                     
};


struct ULobby_Activity250_BtnItem_C_ItemMoveRightDispatcher__DelegateSignature_Params
{
	class ULobby_Activity_BtnItem_C*                   Item;                                                     
};


struct ULobby_Activity250_BtnItem_C_ItemMoveLeftDispatcher__DelegateSignature_Params
{
	class ULobby_Activity_BtnItem_C*                   Item;                                                     
};

}

