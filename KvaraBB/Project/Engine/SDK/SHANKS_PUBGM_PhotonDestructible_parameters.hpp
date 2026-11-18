#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UPhotonDestructiblePuppet_TriggerPuppetEvent_Params
{
	int                                                EventID;                                                  
};


struct UPhotonDestructiblePuppetContainer_TriggerPuppetEvent_Params
{
	struct FString                                     ObjectName;                                               
	int                                                EventID;                                                  
};


struct UPhotonDestructiblePuppetMgr_Client_TriggerPuppetEvent_Params
{
	struct FGuid                                       PuppetGUID;                                               
	int                                                EventID;                                                  
};


struct UPhotonDestructibleSurfaceComponent_Server_ProcessHit_Params
{
	struct FPhotonDestructibleSurfaceHitData           HitData;                                                  
};


struct UPhotonDestructibleSurfaceComponent_OnRep_SurfaceNetData_Params
{
};


struct UPhotonDestructibleSurfaceComponent_Client_OnProcessHit_Params
{
	struct FPhotonDestructibleSurfaceHitData           HitData;                                                  
};


struct UPhotonDestructibleInstancedSurfaceComponent_Server_ProcessHit_Params
{
	struct FPhotonDestructibleSurfaceHitData           HitData;                                                  
};


struct UPhotonDestructibleInstancedSurfaceComponent_OnRep_SurfaceNetData_Params
{
};


struct UPhotonDestructibleInstancedSurfaceComponent_Client_OnProcessHit_Params
{
	struct FPhotonDestructibleSurfaceHitData           HitData;                                                  
};

}

