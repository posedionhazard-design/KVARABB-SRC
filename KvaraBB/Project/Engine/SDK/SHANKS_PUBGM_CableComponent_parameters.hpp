#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UCableComponent_SetAttachEndTo_Params
{
	class AActor*                                      Actor;                                                    
	struct FName                                       ComponentProperty;                                        
	struct FName                                       SocketName;                                               
};


struct UCableComponent_GetCableParticleLocations_Params
{
	TArray<struct FVector>                             Locations;                                                
};


struct UCableComponent_GetAttachedComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              
};


struct UCableComponent_GetAttachedActor_Params
{
	class AActor*                                      ReturnValue;                                              
};

}

