#pragma once


 
namespace SDK
{





enum class EImpactDamageOverride : uint8_t
{
	IDO_None                       = 0,
	IDO_On                         = 1,
	IDO_Off                        = 2,
	IDO_MAX                        = 3
};









struct FFractureMaterial
{
	struct FVector2D                                   UVScale;                                                  
	struct FVector2D                                   UVOffset;                                                 
	struct FVector                                     Tangent;                                                  
	float                                              UAngle;                                                   
	int                                                InteriorElementIndex;                                     
};



struct FDestructibleChunkParameters
{
	bool                                               bIsSupportChunk;                                          
	bool                                               bDoNotFracture;                                           
	bool                                               bDoNotDamage;                                             
	bool                                               bDoNotCrumble;                                            
};



struct FDestructibleDamageParameters
{
	float                                              DamageThreshold;                                          
	float                                              DamageSpread;                                             
	bool                                               bEnableImpactDamage;                                      
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              ImpactDamage;                                             
	int                                                DefaultImpactDamageDepth;                                 
	bool                                               bCustomImpactResistance;                                  
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              ImpactResistance;                                         
};



struct FDestructibleDebrisParameters
{
	float                                              DebrisLifetimeMin;                                        
	float                                              DebrisLifetimeMax;                                        
	float                                              DebrisMaxSeparationMin;                                   
	float                                              DebrisMaxSeparationMax;                                   
	struct FBox                                        ValidBounds;                                              
};



struct FDestructibleAdvancedParameters
{
	float                                              DamageCap;                                                
	float                                              ImpactVelocityThreshold;                                  
	float                                              MaxChunkSpeed;                                            
	float                                              FractureImpulseScale;                                     
};



struct FDestructibleSpecialHierarchyDepths
{
	int                                                SupportDepth;                                             
	int                                                MinimumFractureDepth;                                     
	bool                                               bEnableDebris;                                            
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                DebrisDepth;                                              
	int                                                EssentialDepth;                                           
};



struct FDestructibleDepthParameters
{
	TEnumAsByte<EImpactDamageOverride>                 ImpactDamageOverride;                                     
};



struct FDestructibleParametersFlag
{
	unsigned char                                      bAccumulateDamage : 1;                                    
	unsigned char                                      bAssetDefinedSupport : 1;                                 
	unsigned char                                      bWorldSupport : 1;                                        
	unsigned char                                      bDebrisTimeout : 1;                                       
	unsigned char                                      bDebrisMaxSeparation : 1;                                 
	unsigned char                                      bCrumbleSmallestChunks : 1;                               
	unsigned char                                      bAccurateRaycasts : 1;                                    
	unsigned char                                      bUseValidBounds : 1;                                      
	unsigned char                                      bFormExtendedStructures : 1;                              
	unsigned char                                      UnknownData00[0x2];                                       
};



struct FDestructibleParameters
{
	struct FDestructibleDamageParameters               DamageParameters;                                         
	struct FDestructibleDebrisParameters               DebrisParameters;                                         
	struct FDestructibleAdvancedParameters             AdvancedParameters;                                       
	struct FDestructibleSpecialHierarchyDepths         SpecialHierarchyDepths;                                   
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FDestructibleDepthParameters>        DepthParameters;                                          
	struct FDestructibleParametersFlag                 Flags;                                                    
	unsigned char                                      UnknownData01[0x4];                                       
};

}

