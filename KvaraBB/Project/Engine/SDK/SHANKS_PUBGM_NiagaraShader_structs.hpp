#pragma once


 
namespace SDK
{





enum class EFNiagaraCompileEventSeverity : uint8_t
{
	FNiagaraCompileEventSeverity__Log = 0,
	FNiagaraCompileEventSeverity__Warning = 1,
	FNiagaraCompileEventSeverity__Error = 2,
	FNiagaraCompileEventSeverity__FNiagaraCompileEventSeverity_MAX = 3
};









struct FNiagaraDataInterfaceGPUParamInfo
{
	struct FString                                     DataInterfaceHLSLSymbol;                                  
	struct FString                                     DIClassName;                                              
};



struct FNiagaraCompileEvent
{
	EFNiagaraCompileEventSeverity                      Severity;                                                 
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     Message;                                                  
	struct FGuid                                       NodeGuid;                                                 
	struct FGuid                                       PinGuid;                                                  
	TArray<struct FGuid>                               StackGuids;                                               
};

}

