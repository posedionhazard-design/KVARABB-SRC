#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UNiagaraSystemWidget_SetIsActivated_Params
{
	bool                                               bInIsActive;                                              
};


struct UNiagaraSystemWidget_GetNiagaraComponent_Params
{
	class UNiagaraUIComponent*                         ReturnValue;                                              
};


struct UNiagaraSystemWidget_GetIsActivated_Params
{
	bool                                               ReturnValue;                                              
};


struct UNiagaraSystemWidget_DeactivateSystem_Params
{
};


struct UNiagaraSystemWidget_ActivateSystem_Params
{
	bool                                               Reset;                                                    
};

}

