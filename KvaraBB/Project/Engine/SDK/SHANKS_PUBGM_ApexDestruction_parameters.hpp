#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UDestructibleComponent_SetDestructibleMesh_Params
{
	class UDestructibleMesh*                           NewMesh;                                                  
};


struct UDestructibleComponent_GetDestructibleMesh_Params
{
	class UDestructibleMesh*                           ReturnValue;                                              
};


struct UDestructibleComponent_ApplyRadiusDamage_Params
{
	float                                              BaseDamage;                                               
	struct FVector                                     HurtOrigin;                                               
	float                                              DamageRadius;                                             
	float                                              ImpulseStrength;                                          
	bool                                               bFullDamage;                                              
};


struct UDestructibleComponent_ApplyDamage_Params
{
	float                                              DamageAmount;                                             
	struct FVector                                     HitLocation;                                              
	struct FVector                                     ImpulseDir;                                               
	float                                              ImpulseStrength;                                          
};

}

