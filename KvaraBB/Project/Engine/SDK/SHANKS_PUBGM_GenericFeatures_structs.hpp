#pragma once


 
namespace SDK
{





enum class EGenericInputEventType : uint8_t
{
	EGenericInputEventType__Pressed = 0,
	EGenericInputEventType__Released = 1,
	EGenericInputEventType__EGenericInputEventType_MAX = 2
};



enum class EHasAITagStateLogic : uint8_t
{
	EHasAITagStateLogic__Any       = 0,
	EHasAITagStateLogic__All       = 1,
	EHasAITagStateLogic__None      = 2,
	EHasAITagStateLogic__EHasAITagStateLogic_MAX = 3
};



enum class EGenericHitAnimationMode : uint8_t
{
	EGenericHitAnimationMode__BlendSpace = 0,
	EGenericHitAnimationMode__Montage = 1,
	EGenericHitAnimationMode__EGenericHitAnimationMode_MAX = 2
};



enum class EGenericHitDirection : uint8_t
{
	EGenericHitDirection__Default  = 0,
	EGenericHitDirection__Front    = 1,
	EGenericHitDirection__Back     = 2,
	EGenericHitDirection__Right    = 3,
	EGenericHitDirection__Left     = 4,
	EGenericHitDirection__EGenericHitDirection_MAX = 5
};



enum class EGenericSearchEnemyRule : uint8_t
{
	EGenericSearchEnemyRule__Nearest = 0,
	EGenericSearchEnemyRule__Farthest = 1,
	EGenericSearchEnemyRule__Random = 2,
	EGenericSearchEnemyRule__MostHP = 3,
	EGenericSearchEnemyRule__LeastHP = 4,
	EGenericSearchEnemyRule__LuaCustom = 5,
	EGenericSearchEnemyRule__ByBlackboardKey = 6,
	EGenericSearchEnemyRule__EGenericSearchEnemyRule_MAX = 7
};









struct FGenericInputOverrideEntry
{
	struct FName                                       Key;                                                      
	int                                                Priority;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
	struct FScriptDelegate                             Handler;                                                  
};



struct FGenericMonsterSensingFilterConfig
{
	bool                                               bEnableTargetAliveCheck;                                  
	bool                                               bEnableIgnoreTagCheck;                                    
	bool                                               bEnableFactionCheck;                                      
	bool                                               bEnableDistanceCheck;                                     
	bool                                               bEnableAngleCheck;                                        
	bool                                               bEnableNearDeathCheck;                                    
	bool                                               bDoNotAttackNearDeathEnemyFirst;                          
	bool                                               bEnableWaterCheck;                                        
	bool                                               bEnableVisibilityCheck;                                   
	bool                                               bEnableLuaTargetOverride;                                 
};



struct FGenericMonsterSensingConfig
{
	float                                              SensedRadius;                                             
	float                                              LoseSightRadius;                                          
	float                                              SensedAngle;                                              
	float                                              MaxRememberEnemyTime;                                     
	float                                              MinTimeLockTarget;                                        
	float                                              MinTimeWhenCannotSeeTarget;                               
	bool                                               bIncludePlayer;                                           
	bool                                               bIncludeMonster;                                          
	struct FGenericMonsterSensingFilterConfig          PlayerFilter;                                             
	struct FGenericMonsterSensingFilterConfig          MonsterFilter;                                            
	TEnumAsByte<ECollisionChannel>                     VisibilityTraceChannel;                                   
	unsigned char                                      UnknownData00[0x1];                                       
	float                                              VisibilityTraceStartZ;                                    
	float                                              VisibilityTraceEndZ;                                      
	EGenericSearchEnemyRule                            SearchRule;                                               
	unsigned char                                      UnknownData01[0x7];                                       
	struct FName                                       IgnoreTargetIfHasTag;                                     
};



struct FGenericSensingRuntimeState
{
	float                                              CanNotSeeTargetElapsedTime;                               
	float                                              LockTargetElapsedTime;                                    
	float                                              RememberEnemyElapsedTime;                                 
};



struct FGenericHitReactionEntry
{
	EGenericHitDirection                               Direction;                                                
	EAvatarDamagePosition                              BodyPart;                                                 
	unsigned char                                      UnknownData00[0x6];                                       
	struct FGameplayTag                                AnimationTag;                                             
	float                                              PlayRate;                                                 
	unsigned char                                      UnknownData01[0x4];                                       
	class UParticleSystem*                             HitEffect;                                                
};



struct FHitBoxTagInfo
{
	struct FBodyTypeDef                                BodyTypeDef;                                              
	struct FString                                     HitBoxTag;                                                
};



struct FStateRelationEntry
{
	struct FGameplayTag                                Tag;                                                      
	struct FGameplayTagContainer                       BlockedBy;                                                
	struct FGameplayTagContainer                       Cancel;                                                   
};

}

