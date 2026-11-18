#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct ULobby_Mid_Bnner_More250_UIBP_C_GetCurScroll_Params
{
	class ULoopScrollBox*                              Scroll;                                                   
};


struct ULobby_Mid_Bnner_More250_UIBP_C_GetOffset_Params
{
	float                                              Offset;                                                   
};


struct ULobby_Mid_Bnner_More250_UIBP_C_GetCurrentIndex_Params
{
	int                                                Index;                                                    
};


struct ULobby_Mid_Bnner_More250_UIBP_C_OnClickActivityItem_Params
{
	class ULobby_Activity_BtnItem_C*                   Item;                                                     
};


struct ULobby_Mid_Bnner_More250_UIBP_C_UpdateCurrentPage_Params
{
};


struct ULobby_Mid_Bnner_More250_UIBP_C_SetActivityListPageCount_Params
{
	int                                                pageCount;                                                
};


struct ULobby_Mid_Bnner_More250_UIBP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               
	float*                                             InDeltaTime;                                              
};


struct ULobby_Mid_Bnner_More250_UIBP_C_ExecuteUbergraph_Lobby_Mid_Bnner_More250_UIBP_Params
{
	int                                                EntryPoint;                                               
};


struct ULobby_Mid_Bnner_More250_UIBP_C_EventDispatcherClickItem__DelegateSignature_Params
{
	int                                                ID;                                                       
	struct FString                                     JumpUrl;                                                  
};

}

