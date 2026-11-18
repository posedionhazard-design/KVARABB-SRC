#pragma once


 
namespace SDK
{





enum class EAISoundCollectType : uint8_t
{
	EAISoundCollectType__AISoundCollectType_Step = 0,
	EAISoundCollectType__AISoundCollectType_Weapon = 1,
	EAISoundCollectType__AISoundCollectType_Vehicle = 2,
	EAISoundCollectType__AISoundCollectType_Horn = 3,
	EAISoundCollectType__AISoundCollectType_Grenade = 4,
	EAISoundCollectType__AISoundCollectType_MAX = 5
};



enum class EObstacleDetectionSpace : uint8_t
{
	EObstacleDetectionSpace__ObstacleDetection_Box = 0,
	EObstacleDetectionSpace__ObstacleDetection_CapsuleSweep = 1,
	EObstacleDetectionSpace__ObstacleDetection_MAX = 2
};



enum class EAICheckFlyingStatusType : uint8_t
{
	EAICheckFlyingStatusType__FlyingStatus_HasNavigationSystem = 0,
	EAICheckFlyingStatusType__FlyingStatus_NavigationVoxelDataDone = 1,
	EAICheckFlyingStatusType__FlyingStatus_MAX = 2
};



enum class EAIOcclusionPointPoseType : uint8_t
{
	EAIOcclusionPointPoseType__Occlusion_PoseProne = 0,
	EAIOcclusionPointPoseType__Occlusion_PoseCrouch = 1,
	EAIOcclusionPointPoseType__Occlusion_PoseStand = 2,
	EAIOcclusionPointPoseType__Occlusion_PoseBush = 3,
	EAIOcclusionPointPoseType__Occlusion_MAX = 4
};



enum class EAICheckShootingPoseType : uint8_t
{
	EAICheckShootingPoseType__ShootingPose_Normal = 0,
	EAICheckShootingPoseType__ShootingPose_Stand = 1,
	EAICheckShootingPoseType__ShootingPose_Peek = 2,
	EAICheckShootingPoseType__ShootingPose_WaitVisibilityCheck = 3,
	EAICheckShootingPoseType__ShootingPose_MAX = 4
};



enum class EDistanceCheckType : uint8_t
{
	FixedDistance                  = 0,
	BlackboardKey                  = 1,
	ApplySensedRadius              = 2,
	EDistanceCheckType_MAX         = 3
};



enum class ECompareLengthType : uint8_t
{
	ELengthGreater                 = 0,
	ELengthLess                    = 1,
	ELengthEequal                  = 2,
	ECompareLengthType_MAX         = 3
};



enum class EAIDecoratorGeneralLineTraceType : uint8_t
{
	EAIDecoratorGeneralLineTraceType__LineTraceType_Forward = 0,
	EAIDecoratorGeneralLineTraceType__LineTraceType_MAX = 1
};



enum class EInSafetyCircleType : uint8_t
{
	EInSafetyCircleType__EInSafetyCircleType_None = 0,
	EInSafetyCircleType__EInSafetyCircleType_BlueCircle = 1,
	EInSafetyCircleType__EInSafetyCircleType_WhiteCircle = 2,
	EInSafetyCircleType__EInSafetyCircleType_MAX = 3
};



enum class EItemNumCheckType : uint8_t
{
	ItemNumGreater                 = 0,
	ItemNumLess                    = 1,
	ItemNumEequal                  = 2,
	EItemNumCheckType_MAX          = 3
};



enum class EMobHasAIStateLogic : uint8_t
{
	EMobHasAIStateLogic__Any       = 0,
	EMobHasAIStateLogic__All       = 1,
	EMobHasAIStateLogic__None      = 2,
	EMobHasAIStateLogic__EMobHasAIStateLogic_MAX = 3
};



enum class EChooseEnemySearchMethod : uint8_t
{
	EChooseEnemySearchMethod__SearchMethod_Nearest = 0,
	EChooseEnemySearchMethod__SearchMethod_MostHP = 1,
	EChooseEnemySearchMethod__SearchMethod_LeastHP = 2,
	EChooseEnemySearchMethod__SearchMethod_ByBlackboardValue = 3,
	EChooseEnemySearchMethod__SearchMethod_MAX = 4
};



enum class EChooseEnemyType : uint8_t
{
	EChooseEnemyType__EnemyType_Player = 0,
	EChooseEnemyType__EnemyType_Animal = 1,
	EChooseEnemyType__EnemyType_Zombie = 2,
	EChooseEnemyType__EnemyType_UAV = 3,
	EChooseEnemyType__EnemyType_MAX = 4
};



enum class EAISearchTeammateType : uint8_t
{
	EAISearchTeammateType__Nearest = 0,
	EAISearchTeammateType__LeastHP = 1,
	EAISearchTeammateType__EAISearchTeammateType_MAX = 2
};



enum class EFlyingChooseEnemySensedAngleMode : uint8_t
{
	EFlyingChooseEnemySensedAngleMode__HorizontalFan = 0,
	EFlyingChooseEnemySensedAngleMode__Cone3D = 1,
	EFlyingChooseEnemySensedAngleMode__EFlyingChooseEnemySensedAngleMode_MAX = 2
};



enum class EMobAddHPServiceType : uint8_t
{
	EMobAddHPServiceType__LoseTarget = 0,
	EMobAddHPServiceType__EMobAddHPServiceType_MAX = 1
};



enum class EAISearchEnemyType : uint8_t
{
	EAISearchEnemyType__Nearest    = 0,
	EAISearchEnemyType__Random     = 1,
	EAISearchEnemyType__Farthest   = 2,
	EAISearchEnemyType__EAISearchEnemyType_MAX = 3
};



enum class EAISearchEnemyRule : uint8_t
{
	EAISearchEnemyRule__SingleRule_Hatred = 0,
	EAISearchEnemyRule__SingleRule_Random = 1,
	EAISearchEnemyRule__SingleRule_Nearest = 2,
	EAISearchEnemyRule__SingleRule_Farthest = 3,
	EAISearchEnemyRule__SingleRule_MostHP = 4,
	EAISearchEnemyRule__SingleRule_PoorHP = 5,
	EAISearchEnemyRule__SingleRule_BlackboardValue = 6,
	EAISearchEnemyRule__SingleRule_MAX = 7
};



enum class EAISearchEnemyEntityType : uint8_t
{
	EAISearchEnemyEntityType__PlayerOnly = 0,
	EAISearchEnemyEntityType__PlayerAndMob = 1,
	EAISearchEnemyEntityType__EAISearchEnemyEntityType_MAX = 2
};



enum class EAISearchEnemySingleRule : uint8_t
{
	EAISearchEnemySingleRule__SingleRule_Hatred = 0,
	EAISearchEnemySingleRule__SingleRule_Random = 1,
	EAISearchEnemySingleRule__SingleRule_Nearest = 2,
	EAISearchEnemySingleRule__SingleRule_Farthest = 3,
	EAISearchEnemySingleRule__SingleRule_MostHP = 4,
	EAISearchEnemySingleRule__SingleRule_PoorHP = 5,
	EAISearchEnemySingleRule__SingleRule_BlackboardValue = 6,
	EAISearchEnemySingleRule__SingleRule_MAX = 7
};



enum class EAISenseGrenadeType : uint8_t
{
	EAISenseGrenadeType__ExplosionGrenade = 0,
	EAISenseGrenadeType__BurningGrenade = 1,
	EAISenseGrenadeType__SmokingGrenade = 2,
	EAISenseGrenadeType__FlashBomb = 3,
	EAISenseGrenadeType__Grenade_MaxNum = 4,
	EAISenseGrenadeType__EAISenseGrenadeType_MAX = 5
};



enum class ESightHearingSoundType : uint8_t
{
	ESightHearingSoundType__None   = 0,
	ESightHearingSoundType__Walk   = 1,
	ESightHearingSoundType__Run    = 2,
	ESightHearingSoundType__Jump   = 3,
	ESightHearingSoundType__Fire   = 4,
	ESightHearingSoundType__Crouch = 5,
	ESightHearingSoundType__Prone  = 6,
	ESightHearingSoundType__ESightHearingSoundType_MAX = 7
};



enum class ETargetAngleCheck : uint8_t
{
	TargetAngleCheckFocus          = 0,
	TargetAngleCheckFocusFail      = 1,
	TargetAngleCheckFocusSuccess   = 2,
	ETargetAngleCheck_MAX          = 3
};



enum class EVHQueryEnemyRule : uint8_t
{
	EVHQueryEnemyRule__Nearest     = 0,
	EVHQueryEnemyRule__Random      = 1,
	EVHQueryEnemyRule__EVHQueryEnemyRule_MAX = 2
};



enum class EVHEnemyType : uint8_t
{
	EVHEnemyType__EVHEnemyType_Player = 0,
	EVHEnemyType__EVHEnemyType_Car = 1,
	EVHEnemyType__EVHEnemyType_Mob = 2,
	EVHEnemyType__EVHEnemyType_FakePlayer = 3,
	EVHEnemyType__EVHEnemyType_MAX = 4
};



enum class EAIAdvFindOcclusionPointSearchBestOcclusionMethod : uint8_t
{
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_Normal = 0,
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_NearToTarget = 1,
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_FarToTarget = 2,
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_NearToSelf = 3,
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_RandomOfSelf = 4,
	EAIAdvFindOcclusionPointSearchBestOcclusionMethod__Method_MAX = 5
};



enum class EAIAdvFindOcclusionPointPoseType : uint8_t
{
	EAIAdvFindOcclusionPointPoseType__Occlusion_PoseProne = 0,
	EAIAdvFindOcclusionPointPoseType__Occlusion_PoseCrouch = 1,
	EAIAdvFindOcclusionPointPoseType__Occlusion_PoseStand = 2,
	EAIAdvFindOcclusionPointPoseType__Occlusion_PoseBush = 3,
	EAIAdvFindOcclusionPointPoseType__Occlusion_MAX = 4
};



enum class EBioVHMoveType : uint8_t
{
	EBioVHMoveType__EMoveType_Normal = 0,
	EBioVHMoveType__EMoveType_Backward = 1,
	EBioVHMoveType__EMoveType_Directly = 2,
	EBioVHMoveType__EMoveType_MAX  = 3
};



enum class EFindFlyingHoverPointOneSideShapeOType : uint8_t
{
	EFindFlyingHoverPointOneSideShapeOType__OT_RandomSide = 0,
	EFindFlyingHoverPointOneSideShapeOType__OT_LeftSide = 1,
	EFindFlyingHoverPointOneSideShapeOType__OT_RightSide = 2,
	EFindFlyingHoverPointOneSideShapeOType__OT_MAX = 3
};



enum class EFindFlyingHoverPointHoverType : uint8_t
{
	EFindFlyingHoverPointHoverType__HT_OneSideShapeO = 0,
	EFindFlyingHoverPointHoverType__HT_MAX = 1
};



enum class EFlyToPathfindingThread : uint8_t
{
	EFlyToPathfindingThread__Sync  = 0,
	EFlyToPathfindingThread__ASync = 1,
	EFlyToPathfindingThread__EFlyToPathfindingThread_MAX = 2
};



enum class EMobFindAttackablePositionLineTraceType : uint8_t
{
	EMobFindAttackablePositionLineTraceType__Normal = 0,
	EMobFindAttackablePositionLineTraceType__HalfHeightOffset = 1,
	EMobFindAttackablePositionLineTraceType__CustomHeightOffset = 2,
	EMobFindAttackablePositionLineTraceType__EMobFindAttackablePositionLineTraceType_MAX = 3
};



enum class ESearchType : uint8_t
{
	ESearchType__CenterInSelfLocation = 0,
	ESearchType__CenterInSpecificLocation = 1,
	ESearchType__ESearchType_MAX   = 2
};



enum class EAIMoveToOcclusionFinishMovePoseType : uint8_t
{
	EAIMoveToOcclusionFinishMovePoseType__FinishMovePoseType_Normal = 0,
	EAIMoveToOcclusionFinishMovePoseType__FinishMovePoseType_CrouchIfACrouchOcclusion = 1,
	EAIMoveToOcclusionFinishMovePoseType__FinishMovePoseType_MAX = 2
};



enum class EAIMoveToOcclusionMovingPoseType : uint8_t
{
	EAIMoveToOcclusionMovingPoseType__MovingPoseType_Normal = 0,
	EAIMoveToOcclusionMovingPoseType__MovingPoseType_CrouchSprintIfAlreadyCrouched = 1,
	EAIMoveToOcclusionMovingPoseType__MovingPoseType_MAX = 2
};



enum class EAIMoveToOcclusionSearchBestOcclusionMethod : uint8_t
{
	EAIMoveToOcclusionSearchBestOcclusionMethod__Normal = 0,
	EAIMoveToOcclusionSearchBestOcclusionMethod__NearToTarget = 1,
	EAIMoveToOcclusionSearchBestOcclusionMethod__FarToTarget = 2,
	EAIMoveToOcclusionSearchBestOcclusionMethod__NearToSelf = 3,
	EAIMoveToOcclusionSearchBestOcclusionMethod__RandomOfSelf = 4,
	EAIMoveToOcclusionSearchBestOcclusionMethod__EAIMoveToOcclusionSearchBestOcclusionMethod_MAX = 5
};



enum class EAIMoveToOcclusionPoseType : uint8_t
{
	EAIMoveToOcclusionPoseType__PoseProne = 0,
	EAIMoveToOcclusionPoseType__PoseCrouch = 1,
	EAIMoveToOcclusionPoseType__PoseStand = 2,
	EAIMoveToOcclusionPoseType__PoseBush = 3,
	EAIMoveToOcclusionPoseType__EAIMoveToOcclusionPoseType_MAX = 4
};



enum class ESeekFlyPointHorizontalAngleType : uint8_t
{
	ESeekFlyPointHorizontalAngleType__TargetView = 0,
	ESeekFlyPointHorizontalAngleType__TargetToSelf = 1,
	ESeekFlyPointHorizontalAngleType__BornLocationView = 2,
	ESeekFlyPointHorizontalAngleType__ESeekFlyPointHorizontalAngleType_MAX = 3
};



enum class ESeekFlyPointCenterLocType : uint8_t
{
	ESeekFlyPointCenterLocType__Target = 0,
	ESeekFlyPointCenterLocType__Self = 1,
	ESeekFlyPointCenterLocType__BornLocation = 2,
	ESeekFlyPointCenterLocType__ESeekFlyPointCenterLocType_MAX = 3
};



enum class ELocateType : uint8_t
{
	ELocateType__ELocateType_Random = 0,
	ELocateType__ELocateType_Strategy = 1,
	ELocateType__ELocateType_Escape = 2,
	ELocateType__ELocateType_MAX   = 3
};



enum class EAIVHMoveType : uint8_t
{
	EAIVHMoveType__ELocateType_Normal = 0,
	EAIVHMoveType__ELocateType_Strategy = 1,
	EAIVHMoveType__ELocateType_Directly = 2,
	EAIVHMoveType__ELocateType_Toward = 3,
	EAIVHMoveType__ELocateType_MAX = 4
};



enum class EAITaskNodeThrowGrenadeMethod : uint8_t
{
	EAITaskNodeThrowGrenadeMethod__ThrowGrenadeMethod_Normal = 0,
	EAITaskNodeThrowGrenadeMethod__ThrowGrenadeMethod_Advanced = 1,
	EAITaskNodeThrowGrenadeMethod__ThrowGrenadeMethod_MAX = 2
};



enum class ECustomDamageEventReactionType : uint8_t
{
	ECustomDamageEventReactionType__SpawnActor = 0,
	ECustomDamageEventReactionType__ActiveParticles = 1,
	ECustomDamageEventReactionType__DetactiveParticles = 2,
	ECustomDamageEventReactionType__HideMesh = 3,
	ECustomDamageEventReactionType__HideMeshInstance = 4,
	ECustomDamageEventReactionType__HideBone = 5,
	ECustomDamageEventReactionType__ApplyPhysicalAnimationProfile = 6,
	ECustomDamageEventReactionType__SetCollisionEnabled = 7,
	ECustomDamageEventReactionType__ECustomDamageEventReactionType_MAX = 8
};



enum class ECustomDamageEventTriggerType : uint8_t
{
	ECustomDamageEventTriggerType__OnPassedDamageThreshold = 0,
	ECustomDamageEventTriggerType__OnAnyDamage = 1,
	ECustomDamageEventTriggerType__ECustomDamageEventTriggerType_MAX = 2
};



enum class EAIProviderType : uint8_t
{
	Type_None                      = 0,
	Type_TEG                       = 1,
	Type_CCS                       = 2,
	Type_MAX                       = 3
};



enum class EMLBotType : uint8_t
{
	BT                             = 0,
	MLAI                           = 1,
	MLDelivery                     = 2,
	MLTeammate                     = 3,
	MLHumanoid                     = 4,
	EMLBotType_MAX                 = 5
};



enum class EMLAIJumpingPhase : uint8_t
{
	EMLAIJumpingPhase__Before      = 0,
	EMLAIJumpingPhase__FreeFalling = 1,
	EMLAIJumpingPhase__OpenParachute = 2,
	EMLAIJumpingPhase__Landing     = 3,
	EMLAIJumpingPhase__EMLAIJumpingPhase_MAX = 4
};



enum class EDiffListIDTag : uint8_t
{
	EDiffListIDTag__NoDiff         = 0,
	EDiffListIDTag__General        = 1,
	EDiffListIDTag__GeneralDiff    = 2,
	EDiffListIDTag__EDiffListIDTag_MAX = 3
};



enum class EStatePlayerType : uint8_t
{
	EStatePlayerType__None         = 0,
	EStatePlayerType__MLAI_Normal  = 1,
	EStatePlayerType__MLAI_Deliver = 2,
	EStatePlayerType__BTAI         = 3,
	EStatePlayerType__Player       = 4,
	EStatePlayerType__MLAI_Teammate = 5,
	EStatePlayerType__CandidateBTAI = 6,
	EStatePlayerType__CandidateMLAI = 7,
	EStatePlayerType__Player_Teammate = 8,
	EStatePlayerType__MLAI_Humanoid = 9,
	EStatePlayerType__MLAI_Mercenary = 10,
	EStatePlayerType__EStatePlayerType_MAX = 11
};



enum class ENearItemType : uint8_t
{
	ENearItemType__Box             = 0,
	ENearItemType__Item            = 1,
	ENearItemType__AirDropBox      = 2,
	ENearItemType__TreasureChest   = 3,
	ENearItemType__Weed            = 4,
	ENearItemType__ENearItemType_MAX = 5
};



enum class ESpecialZoneType : uint8_t
{
	ESpecialZoneType__Normal       = 0,
	ESpecialZoneType__Character    = 1,
	ESpecialZoneType__DamageableActor = 2,
	ESpecialZoneType__Vehicle      = 3,
	ESpecialZoneType__ESpecialZoneType_MAX = 4
};



enum class EVehicleSpecialState : uint8_t
{
	EVehicleSpecialState__BeCatched = 0,
	EVehicleSpecialState__HoverVHMagnetStatus = 1,
	EVehicleSpecialState__HasNitroBoostAbility = 2,
	EVehicleSpecialState__IsNitroBoosting = 3,
	EVehicleSpecialState__CanNitroBoost = 4,
	EVehicleSpecialState__EVehicleSpecialState_MAX = 5
};









struct FChildDynamicItem
{
	int                                                Category;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     ChildName;                                                
	unsigned char                                      UnknownData01[0x8];                                       
};



struct FAIStateInfoBase
{
	uint64_t                                           UnChanged;                                                
	TArray<struct FString>                             IgnoreNames;                                              
};



struct FUniqueStateInfo : public FAIStateInfoBase
{
	uint64_t                                           diff_mark_id;                                             
};



struct FIntAIAttribute : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       
	unsigned char                                      UnknownData00[0x4];                                       
	uint64_t                                           Value;                                                    
};



struct FAIAttribute : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       
	float                                              Value;                                                    
};



struct FAIStateXYZ
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
};



struct FSoundState : public FAIStateInfoBase
{
	int                                                Type;                                                     
	struct FAIStateXYZ                                 Location;                                                 
	uint32_t                                           ID;                                                       
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FCacheSoundState
{
	struct FSoundState                                 SoundState;                                               
	float                                              Time;                                                     
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FDamageSource : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 damage_source;                                            
	int                                                damage_type;                                              
	int                                                damage_weapon_type;                                       
	uint32_t                                           damage_source_id;                                         
};



struct FItemStateData : public FUniqueStateInfo
{
	int                                                Type;                                                     
	int                                                Category;                                                 
	int                                                ID;                                                       
	int                                                UID;                                                      
	float                                              Durability;                                               
	struct FAIStateXYZ                                 Position;                                                 
	uint32_t                                           player_id;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	uint64_t                                           unique_id;                                                
};



struct FCacheNearbyItemState
{
	TArray<struct FItemStateData>                      States;                                                   
	struct FVector                                     Position;                                                 
	bool                                               IsDirty;                                                  
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FAIDamageInfo : public FAIStateInfoBase
{
	uint32_t                                           PlayerKey;                                                
	float                                              Damage;                                                   
	int                                                damage_type;                                              
	int                                                damage_weapon_type;                                       
	uint32_t                                           damage_part;                                              
	float                                              damage_before_cal_armor;                                  
};



struct FAIPlayerInteractInfo : public FAIStateInfoBase
{
	TArray<struct FAIDamageInfo>                       active_damage;                                            
	TArray<struct FAIDamageInfo>                       passive_damage;                                           
	TArray<uint32_t>                                   kill_list;                                                
	TArray<uint32_t>                                   knock_down_list;                                          
};



struct FSingleDestroyBulletProbInfo : public FAIStateInfoBase
{
	float                                              max_destroy_time_float;                                   
	int                                                max_destroy_num;                                          
	float                                              destroy_cd_float;                                         
	float                                              destroy_bullet_prob;                                      
};



struct FAIDestroyBulletProbInfo : public FUniqueStateInfo
{
	int                                                bullet_id;                                                
	float                                              low_hp_threshold;                                         
	struct FSingleDestroyBulletProbInfo                low_hp_destroy_bullet_info;                               
	struct FSingleDestroyBulletProbInfo                high_hp_destroy_bullet_info;                              
	struct FSingleDestroyBulletProbInfo                fatal_Damage_destroy_bullet_info;                         
};



struct FAIHeardSound : public FAIStateInfoBase
{
	TArray<struct FSoundState>                         heard_sound;                                              
};



struct FAIPlayerHitInfo : public FAIStateInfoBase
{
	int                                                fire_count;                                               
	int                                                hit_count;                                                
	int                                                hit_head_count;                                           
	int                                                hit_count_filter;                                         
	int                                                hit_head_filter;                                          
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FAIStateConfig : public FAIStateInfoBase
{
	int                                                Level;                                                    
	int                                                Style;                                                    
};



struct FDamageRate : public FAIStateInfoBase
{
	float                                              Hp;                                                       
	float                                              Rate;                                                     
};



struct FDamageRateInfo : public FAIStateInfoBase
{
	TArray<struct FDamageRate>                         damage_rate_map;                                          
	TArray<struct FDamageRate>                         revive_damage_rate_map;                                   
	float                                              near_death_damage_rate;                                   
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FAIBulletHole : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 hole_pos;                                                 
	struct FAIStateXYZ                                 hole_source_pos;                                          
	uint32_t                                           hole_source_id;                                           
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FMLBaseAIStateInfo : public FUniqueStateInfo
{
	struct FAIHeardSound                               Sound;                                                    
	struct FAIPlayerHitInfo                            player_hit_info;                                          
	struct FAIStateConfig                              Config;                                                   
	struct FDamageRateInfo                             damage_rate_info;                                         
	TArray<struct FAIDestroyBulletProbInfo>            destroy_bullet_prob_info;                                 
	TArray<struct FDamageSource>                       all_damage_source;                                        
	TArray<struct FAIBulletHole>                       all_bullet_hole;                                          
};



struct FDiffAIDestroyBulletProbInfoList : public FAIStateInfoBase
{
	TArray<struct FAIDestroyBulletProbInfo>            Values;                                                   
	TArray<uint64_t>                                   del_item_id;                                              
};



struct FDiffMLBaseAIStateInfo : public FUniqueStateInfo
{
	struct FAIHeardSound                               Sound;                                                    
	struct FAIPlayerHitInfo                            player_hit_info;                                          
	struct FAIStateConfig                              Config;                                                   
	struct FDamageRateInfo                             damage_rate_info;                                         
	struct FDiffAIDestroyBulletProbInfoList            destroy_bullet_prob_info;                                 
	TArray<struct FAIBulletHole>                       all_bullet_hole;                                          
	TArray<struct FDamageSource>                       all_damage_source;                                        
};



struct FDiffMLBaseAllPlayersInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FMLBaseAIStateInfo>          AllAIStateInfo;                                           
	TMap<uint32_t, struct FDiffMLBaseAIStateInfo>      AllDiffAIStateInfo;                                       
	TMap<uint32_t, struct FMLBaseAIStateInfo>          DebugAllAIStateInfo;                                      
};



struct FStrAIAttribute : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     Value;                                                    
};



struct FBaseModAIPlayerState : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       
	unsigned char                                      UnknownData00[0x4];                                       
	uint64_t                                           unique_id;                                                
	struct FString                                     player_name;                                              
	int                                                team_id;                                                  
	int                                                team_index;                                               
	struct FAIStateXYZ                                 Position;                                                 
	struct FAIStateXYZ                                 Rotation;                                                 
	struct FAIStateXYZ                                 Speed;                                                    
	float                                              Hp;                                                       
	float                                              Energy;                                                   
	float                                              dying_hp;                                                 
	float                                              oxygen;                                                   
	int                                                active_weapon_slot;                                       
	int                                                weapon_status;                                            
	bool                                               is_switching;                                             
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                alive_state;                                              
	int                                                kill_count;                                               
	int                                                assist_count;                                             
	int                                                Damages;                                                  
	bool                                               is_left_probe;                                            
	bool                                               is_right_probe;                                           
	bool                                               is_floating;                                              
	unsigned char                                      UnknownData02[0x1];                                       
	int                                                using_skill_id;                                           
	int                                                skill_phase_index;                                        
	bool                                               is_pose_acting;                                           
	bool                                               is_picking;                                               
	unsigned char                                      UnknownData03[0x2];                                       
	int                                                body_state;                                               
	int                                                location_state;                                           
	bool                                               has_smoke;                                                
	unsigned char                                      UnknownData04[0x3];                                       
	int                                                player_type;                                              
	int                                                ai_level;                                                 
	unsigned char                                      UnknownData05[0x4];                                       
	TArray<struct FAIAttribute>                        Attributes;                                               
	TArray<struct FIntAIAttribute>                     int_attributes;                                           
	TArray<struct FStrAIAttribute>                     str_attributes;                                           
	TArray<uint64_t>                                   pawn_state_list;                                          
	bool                                               is_lost_connection;                                       
	unsigned char                                      UnknownData06[0x3];                                       
	int                                                ai_kill_count;                                            
	bool                                               in_delivery_pool;                                         
	bool                                               has_gone;                                                 
	bool                                               in_afk;                                                   
	unsigned char                                      UnknownData07[0x1];                                       
	int                                                emote_id;                                                 
	bool                                               is_move_has_collision;                                    
	unsigned char                                      UnknownData08[0x3];                                       
	float                                              rating_score;                                             
	float                                              real_hidden_score;                                        
	float                                              realscore_mu;                                             
	float                                              realscore_sigma;                                          
	int                                                zone_id;                                                  
	int                                                Gender;                                                   
	unsigned char                                      UnknownData09[0x4];                                       
	struct FString                                     OpenID;                                                   
	int                                                high_hp_destroy_bullet_num;                               
	int                                                low_hp_destroy_bullet_num;                                
	int                                                fatal_damage_destroy_bullet_num;                          
	bool                                               is_weapon_near_wall;                                      
	unsigned char                                      UnknownData10[0x3];                                       
	struct FAIStateXYZ                                 head_position;                                            
	struct FAIStateXYZ                                 muzzle_position;                                          
	uint32_t                                           ally_master_id;                                           
	int                                                first_lang_id;                                            
	int                                                received_fatal_destroy_bullet_num;                        
	int                                                feature_id;                                               
};



struct FCameraState : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 Position;                                                 
	struct FAIStateXYZ                                 Rotation;                                                 
	struct FAIStateXYZ                                 view_position;                                            
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FAIWeaponStateInfo : public FUniqueStateInfo
{
	int                                                slot_id;                                                  
	int                                                Category;                                                 
	int                                                Type;                                                     
	int                                                Bullet;                                                   
	float                                              remain_reloading;                                         
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<int>                                        attachments;                                              
	int                                                bullet_in_backpak;                                        
	uint32_t                                           weapon_avatar_id;                                         
};



struct FAIPlayerWeapon : public FAIStateInfoBase
{
	TArray<struct FAIWeaponStateInfo>                  player_weapon;                                            
};



struct FAIBackpackItem : public FUniqueStateInfo
{
	int                                                Category;                                                 
	uint32_t                                           ID;                                                       
	uint32_t                                           Count;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FAIPlayerBackpack : public FAIStateInfoBase
{
	TArray<struct FAIBackpackItem>                     backpack_item;                                            
	float                                              left_capacity;                                            
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FAIEquipmentInfo : public FUniqueStateInfo
{
	int                                                Category;                                                 
	uint32_t                                           ID;                                                       
	float                                              Durability;                                               
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FAIPlayerEquipment : public FAIStateInfoBase
{
	TArray<struct FAIEquipmentInfo>                    equipment_item;                                           
};



struct FChatMsgInfo : public FAIStateInfoBase
{
	struct FString                                     msg_content;                                              
	uint32_t                                           item_id;                                                  
	uint32_t                                           msg_id;                                                   
	struct FAIStateXYZ                                 hit_position;                                             
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FSignMsgInfo : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 hit_pos;                                                  
	uint32_t                                           item_id;                                                  
	uint32_t                                           msg_type;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FMapMarkInfo : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 mapmark_loc;                                              
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FAIStateXYZ>                         mapmultimark_list;                                        
};



struct FAIAvatarInfo : public FAIStateInfoBase
{
	int                                                slot_id;                                                  
	int                                                item_id;                                                  
};



struct FProgressBarState : public FAIStateInfoBase
{
	int                                                Type;                                                     
	float                                              remain_time;                                              
	uint32_t                                           targetid;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FBaseModAIStateInfo : public FUniqueStateInfo
{
	struct FBaseModAIPlayerState                       State;                                                    
	struct FAIPlayerInteractInfo                       player_interact_info;                                     
	struct FCameraState                                Camera;                                                   
	struct FAIPlayerWeapon                             Weapon;                                                   
	struct FAIPlayerBackpack                           BackPack;                                                 
	struct FAIPlayerEquipment                          equipment;                                                
	uint32_t                                           Key;                                                      
	uint32_t                                           ai_style;                                                 
	TArray<struct FChatMsgInfo>                        chatmsg_info_list;                                        
	TArray<struct FSignMsgInfo>                        signmsg_info_list;                                        
	TArray<struct FMapMarkInfo>                        mapmark_info_list;                                        
	TArray<struct FAIAvatarInfo>                       avatar_info;                                              
	uint32_t                                           ai_provider;                                              
	unsigned char                                      UnknownData00[0x4];                                       
	struct FProgressBarState                           progress_bar;                                             
	unsigned char                                      UnknownData01[0x8];                                       
};



struct FDiffAIAttributeList : public FAIStateInfoBase
{
	TArray<struct FAIAttribute>                        Values;                                                   
	TArray<uint64_t>                                   del_item_id;                                              
};



struct FDiffIntAIAttributeList : public FAIStateInfoBase
{
	TArray<struct FIntAIAttribute>                     Values;                                                   
	TArray<uint64_t>                                   del_item_id;                                              
};



struct FDiffStrAIAttributeList : public FAIStateInfoBase
{
	TArray<struct FStrAIAttribute>                     Values;                                                   
	TArray<uint64_t>                                   del_item_id;                                              
};



struct FDiffBaseModAIPlayerState : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       
	unsigned char                                      UnknownData00[0x4];                                       
	uint64_t                                           unique_id;                                                
	struct FString                                     player_name;                                              
	int                                                team_id;                                                  
	int                                                team_index;                                               
	struct FAIStateXYZ                                 Position;                                                 
	struct FAIStateXYZ                                 Rotation;                                                 
	struct FAIStateXYZ                                 Speed;                                                    
	float                                              Hp;                                                       
	float                                              Energy;                                                   
	float                                              dying_hp;                                                 
	float                                              oxygen;                                                   
	int                                                active_weapon_slot;                                       
	int                                                weapon_status;                                            
	bool                                               is_switching;                                             
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                alive_state;                                              
	int                                                kill_count;                                               
	int                                                assist_count;                                             
	int                                                Damages;                                                  
	bool                                               is_left_probe;                                            
	bool                                               is_right_probe;                                           
	bool                                               is_floating;                                              
	unsigned char                                      UnknownData02[0x1];                                       
	int                                                using_skill_id;                                           
	int                                                skill_phase_index;                                        
	bool                                               is_pose_acting;                                           
	bool                                               is_picking;                                               
	bool                                               is_weapon_near_wall;                                      
	unsigned char                                      UnknownData03[0x1];                                       
	int                                                body_state;                                               
	int                                                location_state;                                           
	bool                                               has_smoke;                                                
	unsigned char                                      UnknownData04[0x3];                                       
	int                                                player_type;                                              
	int                                                ai_level;                                                 
	bool                                               is_move_has_collision;                                    
	bool                                               is_lost_connection;                                       
	unsigned char                                      UnknownData05[0x2];                                       
	float                                              rating_score;                                             
	float                                              real_hidden_score;                                        
	float                                              realscore_mu;                                             
	float                                              realscore_sigma;                                          
	int                                                zone_id;                                                  
	bool                                               in_delivery_pool;                                         
	unsigned char                                      UnknownData06[0x3];                                       
	struct FDiffAIAttributeList                        Attributes;                                               
	struct FDiffIntAIAttributeList                     int_attributes;                                           
	struct FDiffStrAIAttributeList                     str_attributes;                                           
	TArray<uint64_t>                                   pawn_state_list;                                          
	int                                                ai_kill_count;                                            
	int                                                Gender;                                                   
	struct FString                                     OpenID;                                                   
	bool                                               has_gone;                                                 
	bool                                               in_afk;                                                   
	unsigned char                                      UnknownData07[0x2];                                       
	int                                                emote_id;                                                 
	int                                                high_hp_destroy_bullet_num;                               
	int                                                low_hp_destroy_bullet_num;                                
	int                                                fatal_damage_destroy_bullet_num;                          
	struct FAIStateXYZ                                 head_position;                                            
	struct FAIStateXYZ                                 muzzle_position;                                          
	uint32_t                                           ally_master_id;                                           
	int                                                first_lang_id;                                            
	int                                                received_fatal_destroy_bullet_num;                        
	int                                                feature_id;                                               
	unsigned char                                      UnknownData08[0x4];                                       
};



struct FDiffAIWeaponStateInfoList : public FAIStateInfoBase
{
	TArray<struct FAIWeaponStateInfo>                  Values;                                                   
	TArray<uint64_t>                                   del_item_id;                                              
};



struct FDiffAIPlayerWeapon : public FAIStateInfoBase
{
	struct FDiffAIWeaponStateInfoList                  player_weapon;                                            
};



struct FDiffAIBackpackItemList : public FAIStateInfoBase
{
	TArray<struct FAIBackpackItem>                     Values;                                                   
	TArray<uint64_t>                                   del_item_id;                                              
};



struct FDiffAIPlayerBackpack : public FAIStateInfoBase
{
	struct FDiffAIBackpackItemList                     backpack_item;                                            
	float                                              left_capacity;                                            
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FDiffAIEquipmentInfoList : public FAIStateInfoBase
{
	TArray<struct FAIEquipmentInfo>                    Values;                                                   
	TArray<uint64_t>                                   del_item_id;                                              
};



struct FDiffAIPlayerEquipment : public FAIStateInfoBase
{
	struct FDiffAIEquipmentInfoList                    equipment_item;                                           
};



struct FDiffBaseModAIStateInfo : public FUniqueStateInfo
{
	struct FDiffBaseModAIPlayerState                   State;                                                    
	struct FAIPlayerInteractInfo                       player_interact_info;                                     
	struct FCameraState                                Camera;                                                   
	struct FDiffAIPlayerWeapon                         Weapon;                                                   
	struct FDiffAIPlayerBackpack                       BackPack;                                                 
	struct FDiffAIPlayerEquipment                      equipment;                                                
	uint32_t                                           Key;                                                      
	uint32_t                                           ai_style;                                                 
	TArray<struct FChatMsgInfo>                        chatmsg_info_list;                                        
	TArray<struct FSignMsgInfo>                        signmsg_info_list;                                        
	TArray<struct FMapMarkInfo>                        mapmark_info_list;                                        
	TArray<struct FAIAvatarInfo>                       avatar_info;                                              
	uint32_t                                           ai_provider;                                              
	unsigned char                                      UnknownData00[0x4];                                       
	struct FProgressBarState                           progress_bar;                                             
};



struct FDiffBaseModAllPlayersInfo : public FAIStateInfoBase
{
	uint32_t                                           Key;                                                      
	unsigned char                                      UnknownData00[0x4];                                       
	TMap<uint32_t, struct FBaseModAIStateInfo>         AllAIStateInfo;                                           
	TMap<uint32_t, struct FDiffBaseModAIStateInfo>     AllDiffAIStateInfo;                                       
	TMap<uint32_t, struct FBaseModAIStateInfo>         DebugAllAIStateInfo;                                      
	TArray<uint64_t>                                   del_item_id;                                              
};



struct FBaseModAIGameState : public FAIStateInfoBase
{
	bool                                               is_over;                                                  
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                alive_player_count;                                       
	int                                                Stage;                                                    
	uint32_t                                           mode_map;                                                 
	uint32_t                                           mode_type;                                                
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     game_ds_version;                                          
	int                                                zone_id;                                                  
	unsigned char                                      UnknownData02[0x4];                                       
	uint64_t                                           left_time;                                                
	uint64_t                                           stage_time;                                               
	int                                                can_jump_sky;                                             
	int                                                newbie_score;                                             
	int                                                newbie_match_count;                                       
	int                                                mod_game_type;                                            
	TArray<struct FAIAttribute>                        custom_attribute_list;                                    
};



struct FSpecialZoneState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       
	struct FAIStateXYZ                                 Center;                                                   
	float                                              Radius;                                                   
	uint32_t                                           Type;                                                     
	struct FAIStateXYZ                                 Position;                                                 
	struct FAIStateXYZ                                 Rotation;                                                 
	int                                                custom_state;                                             
	struct FAIStateXYZ                                 Scale;                                                    
	uint32_t                                           extra_state;                                              
	float                                              Health;                                                   
	TArray<struct FAIAttribute>                        custom_attribute_list;                                    
	TArray<struct FIntAIAttribute>                     int_custom_attribute_list;                                
};



struct FBattleVoiceRoomInfo : public FUniqueStateInfo
{
	uint32_t                                           team_id;                                                  
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     battle_voice_room_id;                                     
	struct FString                                     battle_voice_server_url;                                  
};



struct FBaseModGlobalGameState : public FAIStateInfoBase
{
	struct FBaseModAIGameState                         Game;                                                     
	TArray<struct FSpecialZoneState>                   special_zones;                                            
	TArray<struct FBattleVoiceRoomInfo>                voice_room_list;                                          
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FDiffBaseModAIGameState : public FAIStateInfoBase
{
	bool                                               is_over;                                                  
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                alive_player_count;                                       
	int                                                Stage;                                                    
	uint32_t                                           mode_map;                                                 
	uint32_t                                           mode_type;                                                
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     game_ds_version;                                          
	int                                                zone_id;                                                  
	unsigned char                                      UnknownData02[0x4];                                       
	uint64_t                                           left_time;                                                
	uint64_t                                           stage_time;                                               
	int                                                can_jump_sky;                                             
	int                                                newbie_score;                                             
	int                                                newbie_match_count;                                       
	int                                                mod_game_type;                                            
	struct FDiffAIAttributeList                        custom_attribute_list;                                    
};



struct FDiffSpecialZoneStateList : public FAIStateInfoBase
{
	TArray<struct FSpecialZoneState>                   Values;                                                   
	TArray<uint64_t>                                   del_item_id;                                              
};



struct FDiffBattleVoiceRoomInfoList : public FAIStateInfoBase
{
	TArray<struct FBattleVoiceRoomInfo>                Values;                                                   
	TArray<uint64_t>                                   del_item_id;                                              
};



struct FDiffBaseModGlobalGameState : public FAIStateInfoBase
{
	struct FDiffBaseModAIGameState                     Game;                                                     
	struct FDiffSpecialZoneStateList                   special_zones;                                            
	struct FDiffBattleVoiceRoomInfoList                voice_room_list;                                          
};



struct FBRBaseAIPlayerState : public FAIStateInfoBase
{
	int                                                expect_delivery_num;                                      
	int                                                remain_delivery_num;                                      
	bool                                               is_diving;                                                
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                revival_count;                                            
	uint32_t                                           parachute_state;                                          
	uint32_t                                           plane_id;                                                 
	int                                                parallel_world_id;                                        
	bool                                               is_be_spectated;                                          
	unsigned char                                      UnknownData01[0x3];                                       
	uint32_t                                           related_id;                                               
	bool                                               can_parachute_jump;                                       
	unsigned char                                      UnknownData02[0x3];                                       
	uint32_t                                           follow_state;                                             
	uint32_t                                           leader_id;                                                
	uint32_t                                           parachute_type;                                           
	int                                                revival_type;                                             
	struct FAIStateXYZ                                 target_position;                                          
	unsigned char                                      UnknownData03[0x4];                                       
};



struct FAIRecipients : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       
	uint32_t                                           team_id;                                                  
	struct FAIStateXYZ                                 Position;                                                 
	float                                              Hp;                                                       
	uint32_t                                           Type;                                                     
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FBRBaseAIStateInfo : public FUniqueStateInfo
{
	struct FBRBaseAIPlayerState                        State;                                                    
	uint32_t                                           deliver_target_id;                                        
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FAIRecipients>                       recipients;                                               
};



struct FDiffBRBaseAllPlayersInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FBRBaseAIStateInfo>          AllAIStateInfo;                                           
	TMap<uint32_t, struct FBRBaseAIStateInfo>          AllDiffAIStateInfo;                                       
	TMap<uint32_t, struct FBRBaseAIStateInfo>          DebugAllAIStateInfo;                                      
	TArray<uint64_t>                                   del_item_id;                                              
};



struct FAirDropBoxState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       
	int                                                Type;                                                     
	struct FAIStateXYZ                                 Position;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FSpecialMeshState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       
	struct FAIStateXYZ                                 Position;                                                 
	struct FAIStateXYZ                                 Rotation;                                                 
	int                                                custom_state;                                             
};



struct FRedZoneState : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 Center;                                                   
	float                                              Radius;                                                   
	float                                              remain_time;                                              
	float                                              start_time;                                               
};



struct FSafetyAreaState : public FAIStateInfoBase
{
	int                                                State;                                                    
	struct FAIStateXYZ                                 Center;                                                   
	float                                              Radius;                                                   
	struct FAIStateXYZ                                 next_center;                                              
	float                                              next_radius;                                              
	int                                                Time;                                                     
	int                                                total_time;                                               
	int                                                circle_index;                                             
};



struct FFlightInfo : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 start_loc;                                                
	struct FAIStateXYZ                                 end_loc;                                                  
	struct FAIStateXYZ                                 can_jump_loc;                                             
	struct FAIStateXYZ                                 force_jump_loc;                                           
	int                                                player_num;                                               
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FPlaneInfo : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       
	uint32_t                                           Type;                                                     
	struct FAIStateXYZ                                 Position;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
	struct FFlightInfo                                 flight_info;                                              
};



struct FGlobalControlInfo : public FAIStateInfoBase
{
	int                                                airdrop_tag;                                              
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FBRBaseGlobalGameState : public FAIStateInfoBase
{
	TArray<struct FAirDropBoxState>                    air_drop_box_states;                                      
	TArray<struct FSpecialMeshState>                   special_meshes;                                           
	struct FRedZoneState                               red_zone;                                                 
	struct FSafetyAreaState                            safety_area;                                              
	TArray<struct FPlaneInfo>                          airplane_list;                                            
	struct FGlobalControlInfo                          control_info;                                             
	TArray<uint32_t>                                   silent_list;                                              
};



struct FDiffAirDropBoxStateList : public FAIStateInfoBase
{
	TArray<struct FAirDropBoxState>                    Values;                                                   
	TArray<uint64_t>                                   del_item_id;                                              
};



struct FDiffSpecialMeshStateList : public FAIStateInfoBase
{
	TArray<struct FSpecialMeshState>                   Values;                                                   
	TArray<uint64_t>                                   del_item_id;                                              
};



struct FDiffPlaneInfoList : public FAIStateInfoBase
{
	TArray<struct FPlaneInfo>                          Values;                                                   
	TArray<uint64_t>                                   del_item_id;                                              
};



struct FDiffBRBaseGlobalGameState : public FAIStateInfoBase
{
	struct FDiffAirDropBoxStateList                    air_drop_box_states;                                      
	struct FDiffSpecialMeshStateList                   special_meshes;                                           
	struct FRedZoneState                               red_zone;                                                 
	struct FSafetyAreaState                            safety_area;                                              
	struct FDiffPlaneInfoList                          airplane_list;                                            
	struct FGlobalControlInfo                          control_info;                                             
	TArray<uint32_t>                                   silent_list;                                              
};



struct FWeaponType2Range
{
	TEnumAsByte<EWeaponTypeNew>                        WeaponType;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              Range;                                                    
	float                                              NightRange;                                               
};



struct FWeaponTypeToRange
{
	TEnumAsByte<EWeaponTypeNew>                        WeaponType;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              Range;                                                    
};



struct FWeatherToRange
{
	TArray<struct FWeaponTypeToRange>                  Ranges;                                                   
};



struct FShapeRangeParam
{
	float                                              CircleR;                                                  
	float                                              SectorR;                                                  
	float                                              SectorDegree;                                             
};



struct FWeaponTypeToRangeWithPawnState
{
	TEnumAsByte<EWeaponTypeNew>                        WeaponType;                                               
	unsigned char                                      UnknownData00[0x7];                                       
	TMap<EPawnState, struct FShapeRangeParam>          StateRange;                                               
};



struct FSightFanInfo
{
	float                                              Radius;                                                   
	float                                              Angle;                                                    
};



struct FInTroubleTeleportConfig
{
	float                                              SrcCheckRadius;                                           
	float                                              DstCheckRadius;                                           
	uint32_t                                           TryFindDstLocNum;                                         
	bool                                               OnlyTeleportToLand;                                       
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FAIDistantJudgeNoftify
{
	float                                              RightValue;                                               
	int                                                SetBBValue;                                               
	struct FBlackboardKeySelector                      NotifyBlackBoardKey;                                      
};



struct FBPAISenseGrenadeDistanceConfig
{
	EAISenseGrenadeType                                GrenadeType;                                              
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              GrenadeSenseDistance;                                     
};



struct FAISenseGrenadeClassConfig
{
	TArray<class UClass*>                              IncludeClassArray;                                        
};



struct FAISenseGrenadeBBKeyInfo
{
	EAISenseGrenadeType                                GrenadeType;                                              
	unsigned char                                      UnknownData00[0x7];                                       
	struct FBlackboardKeySelector                      BBKeyGrenadeActor;                                        
};



struct FTaskAddItem
{
	int                                                ItemId;                                                   
	int                                                ItemCount;                                                
};



struct FDifficultyTimeConfig
{
	float                                              WaitTime;                                                 
	float                                              RandomDeviation;                                          
};



struct FGeneralRandLocationRetryRule
{
	float                                              AngleRangeMin;                                            
	float                                              AngleRangeMax;                                            
	float                                              ScanStep;                                                 
};



struct FMobRandLocationRetryRule
{
	float                                              AngleRangeMin;                                            
	float                                              AngleRangeMax;                                            
	int                                                RetryTimes;                                               
};



struct FBlackBoardSubTreeConfig
{
	struct FBlackboardKeySelector                      BBKey;                                                    
	class UBehaviorTree*                               SubBehaviorAsset;                                         
};



struct FLocationRetryRule
{
	float                                              AngleRangeMin;                                            
	float                                              AngleRangeMax;                                            
	float                                              ScanStep;                                                 
};



struct FAITaskNodeThrowGrenadeTargetLocRandomableConfig
{
	float                                              RandomRange;                                              
	int                                                RandomTimes;                                              
};



struct FFindBuildingRatingConfig
{
	int                                                Rating;                                                   
	float                                              SearchRadius;                                             
};



struct FCustomDamageEventRow : public FTableRowBase
{
	bool                                               bProcessedLocally;                                        
	unsigned char                                      UnknownData00[0x3];                                       
	struct FGuid                                       EventID;                                                  
	bool                                               bEnabled;                                                 
	bool                                               bClientOnly;                                              
	bool                                               bReplicate;                                               
	bool                                               bOnlyReplicateWhenRelevant;                               
	unsigned char                                      EventTriggerType;                                         
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              TriggerCooldown;                                          
	float                                              HealthPercentageThreshold;                                
	bool                                               bTriggerWhenDead;                                         
	unsigned char                                      EventReactionType;                                        
	unsigned char                                      UnknownData02[0x2];                                       
	unsigned char                                      UnknownData03[0x28];                                      
	bool                                               bTriggersGlobalCooldown;                                  
	bool                                               bLockedByGlobalCooldown;                                  
	unsigned char                                      UnknownData04[0x6];                                       
	unsigned char                                      UnknownData05[0x28];                                      
	bool                                               bDestroySpawnedParticlesWithOwner;                        
	unsigned char                                      UnknownData06[0x7];                                       
	struct FName                                       AttachComponentTag;                                       
	struct FName                                       SpawnSocketName;                                          
	struct FName                                       CustomSpawnTransformTag;                                  
	bool                                               bSpawnAtRandomPointInBoundingBox;                         
	bool                                               bUseCustomSpawnRotation;                                  
	unsigned char                                      MinToSpawn;                                               
	unsigned char                                      MaxToSpawn;                                               
	unsigned char                                      UnknownData07[0x4];                                       
	struct FName                                       ActorSpawnTag;                                            
	struct FName                                       MeshComponentTag;                                         
	int                                                MeshInstanceIndex;                                        
	unsigned char                                      UnknownData08[0x4];                                       
	struct FName                                       BoneName;                                                 
	struct FName                                       PhysicsAssetProfileName;                                  
	struct FName                                       CollisionPrimitiveTag;                                    
	unsigned char                                      UnknownData09[0x8];                                       
};



struct FTriggeredCustomDamageEvent
{
	struct FCustomDamageEventRow                       Event;                                                    
	float                                              TimeTriggered;                                            
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FJumpObstacleInfo : public FAIStateInfoBase
{
	struct FAIStateXYZ                                 ObstacleCenter;                                           
	struct FAIStateXYZ                                 ObstacleNearest;                                          
	struct FAIStateXYZ                                 ObstacleHighest;                                          
	struct FAIStateXYZ                                 JumpV;                                                    
	struct FAIStateXYZ                                 LandSpot;                                                 
	bool                                               is_valid_jump;                                            
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FMercenaryJumpObstacleAIStateInfo : public FUniqueStateInfo
{
	struct FJumpObstacleInfo                           jump_obstacle_info;                                       
};



struct FDiffMercenaryJumpObstacleAllPlayerInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FMercenaryJumpObstacleAIStateInfo> AllAIStateInfo;                                           
	TMap<uint32_t, struct FMercenaryJumpObstacleAIStateInfo> AllDiffAIStateInfo;                                       
	TMap<uint32_t, struct FMercenaryJumpObstacleAIStateInfo> DebugAllAIStateInfo;                                      
};



struct FDestructibleItemAIStateInfo : public FUniqueStateInfo
{
	unsigned char                                      UnknownData00[0x10];                                      
	TArray<uint64_t>                                   destructible_items_index;                                 
};



struct FDiffDestructibleItemAllPlayersInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FDestructibleItemAIStateInfo> AllAIStateInfo;                                           
	TMap<uint32_t, struct FDestructibleItemAIStateInfo> AllDiffAIStateInfo;                                       
	TMap<uint32_t, struct FDestructibleItemAIStateInfo> DebugAllAIStateInfo;                                      
};



struct FDestructibleItem : public FUniqueStateInfo
{
	int                                                Category;                                                 
	uint32_t                                           ID;                                                       
	struct FAIStateXYZ                                 Center;                                                   
	struct FAIStateXYZ                                 Rotation;                                                 
	TArray<bool>                                       fragment_states;                                          
	struct FAIStateXYZ                                 Scale;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FDestructibleItemGlobalNearbyInfo : public FAIStateInfoBase
{
	TArray<struct FDestructibleItem>                   destructible_items;                                       
};



struct FDestructibleItemGlobalGameState : public FAIStateInfoBase
{
	struct FDestructibleItemGlobalNearbyInfo           global_nearby_info;                                       
};



struct FDiffDestructibleItemStateList : public FAIStateInfoBase
{
	TArray<struct FDestructibleItem>                   Values;                                                   
	TArray<uint64_t>                                   del_item_id;                                              
};



struct FDiffDestructibleItemGlobalNearbyInfo : public FAIStateInfoBase
{
	struct FDiffDestructibleItemStateList              destructible_items;                                       
};



struct FDiffDestructibleItemGlobalGameState : public FAIStateInfoBase
{
	struct FDiffDestructibleItemGlobalNearbyInfo       global_nearby_info;                                       
};



struct FDynamicItemAIStateInfo : public FUniqueStateInfo
{
	unsigned char                                      UnknownData00[0x10];                                      
	TArray<uint64_t>                                   dynamic_items_index;                                      
};



struct FDiffDynamicItemAllPlayersInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FDynamicItemAIStateInfo>     AllAIStateInfo;                                           
	TMap<uint32_t, struct FDynamicItemAIStateInfo>     AllDiffAIStateInfo;                                       
	TMap<uint32_t, struct FDynamicItemAIStateInfo>     DebugAllAIStateInfo;                                      
};



struct FDynamicItem : public FUniqueStateInfo
{
	int                                                Category;                                                 
	uint32_t                                           ID;                                                       
	struct FAIStateXYZ                                 Center;                                                   
	struct FAIStateXYZ                                 Rotation;                                                 
	float                                              Durability;                                               
	uint32_t                                           Custom;                                                   
	struct FAIStateXYZ                                 Scale;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FAIAttribute>                        custom_attribute_list;                                    
	TArray<struct FIntAIAttribute>                     int_custom_attribute_list;                                
	int                                                parallel_world_id;                                        
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FDynamicItemGlobalNearbyInfo : public FAIStateInfoBase
{
	TArray<struct FDynamicItem>                        dynamic_items;                                            
};



struct FDynamicItemGlobalGameState : public FAIStateInfoBase
{
	struct FDynamicItemGlobalNearbyInfo                global_nearby_info;                                       
};



struct FDiffDynamicItemStateList : public FAIStateInfoBase
{
	TArray<struct FDynamicItem>                        Values;                                                   
	TArray<uint64_t>                                   del_item_id;                                              
};



struct FDiffDynamicItemGlobalNearbyInfo : public FAIStateInfoBase
{
	struct FDiffDynamicItemStateList                   dynamic_items;                                            
};



struct FDiffDynamicItemGlobalGameState : public FAIStateInfoBase
{
	struct FDiffDynamicItemGlobalNearbyInfo            global_nearby_info;                                       
};



struct FLandScapeDestroyState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       
	struct FAIStateXYZ                                 Location;                                                 
	int                                                Radius;                                                   
	int                                                Depth;                                                    
};



struct FLandScapeAIStateInfo : public FUniqueStateInfo
{
	TArray<struct FLandScapeDestroyState>              landscape_destroy_info;                                   
};



struct FDiffLandScapeDestroyStateList : public FAIStateInfoBase
{
	TArray<struct FLandScapeDestroyState>              Values;                                                   
	TArray<uint32_t>                                   del_item_id;                                              
};



struct FDiffLandScapeAIStateInfo : public FUniqueStateInfo
{
	struct FDiffLandScapeDestroyStateList              landscape_destroy_info;                                   
};



struct FDiffLandScapeAllPlayerInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FLandScapeAIStateInfo>       AllAIStateInfo;                                           
	TMap<uint32_t, struct FDiffLandScapeAIStateInfo>   AllDiffAIStateInfo;                                       
	TMap<uint32_t, struct FLandScapeAIStateInfo>       DebugAllAIStateInfo;                                      
};



struct FLandScapeChange : public FUniqueStateInfo
{
	int                                                component_index_x;                                        
	int                                                component_index_y;                                        
	int                                                component_x1;                                             
	int                                                component_y1;                                             
	int                                                component_x2;                                             
	int                                                component_y2;                                             
	TArray<uint16_t>                                   heights_data;                                             
};



struct FLandScapeChangeState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FLandScapeChange>                    changes;                                                  
};



struct FLandScapeGlobalGameInfo : public FAIStateInfoBase
{
	TArray<struct FLandScapeChangeState>               landscape_change_info;                                    
};



struct FDiffLandScapeChangeStateList : public FAIStateInfoBase
{
	TArray<struct FLandScapeChangeState>               Values;                                                   
	TArray<uint64_t>                                   del_item_id;                                              
};



struct FDiffLandScapeGlobalGameInfo : public FAIStateInfoBase
{
	struct FDiffLandScapeChangeStateList               landscape_change_info;                                    
};



struct FNearbyDoorAIStateInfo : public FUniqueStateInfo
{
	unsigned char                                      UnknownData00[0x10];                                      
	TArray<uint64_t>                                   nearby_door_index;                                        
};



struct FDiffNearbyDoorAllPlayersInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FNearbyDoorAIStateInfo>      AllAIStateInfo;                                           
	TMap<uint32_t, struct FNearbyDoorAIStateInfo>      AllDiffAIStateInfo;                                       
	TMap<uint32_t, struct FNearbyDoorAIStateInfo>      DebugAllAIStateInfo;                                      
};



struct FDoorState : public FUniqueStateInfo
{
	struct FAIStateXYZ                                 Position;                                                 
	int                                                State;                                                    
	uint32_t                                           ID;                                                       
	struct FAIStateXYZ                                 Rotation;                                                 
	int                                                Type;                                                     
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FDoorGlobalNearbyInfo : public FAIStateInfoBase
{
	TArray<struct FDoorState>                          nearby_door;                                              
};



struct FNearbyDoorGlobalGameState : public FAIStateInfoBase
{
	struct FDoorGlobalNearbyInfo                       global_nearby_info;                                       
};



struct FDiffDoorStateList : public FAIStateInfoBase
{
	TArray<struct FDoorState>                          Values;                                                   
	TArray<uint64_t>                                   del_item_id;                                              
};



struct FDiffDoorGlobalNearbyInfo : public FAIStateInfoBase
{
	struct FDiffDoorStateList                          nearby_door;                                              
};



struct FDiffNearbyDoorGlobalGameState : public FAIStateInfoBase
{
	struct FDiffDoorGlobalNearbyInfo                   global_nearby_info;                                       
};



struct FNearbyMonsterAIStateInfo : public FUniqueStateInfo
{
	unsigned char                                      UnknownData00[0x10];                                      
	TArray<uint64_t>                                   monster_states_index;                                     
};



struct FDiffNearbyMonsterAllPlayersInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FNearbyMonsterAIStateInfo>   AllAIStateInfo;                                           
	TMap<uint32_t, struct FNearbyMonsterAIStateInfo>   AllDiffAIStateInfo;                                       
	TMap<uint32_t, struct FNearbyMonsterAIStateInfo>   DebugAllAIStateInfo;                                      
};



struct FMonsterState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       
	int                                                Category;                                                 
	struct FAIStateXYZ                                 Position;                                                 
	struct FAIStateXYZ                                 Rotation;                                                 
	struct FAIStateXYZ                                 Speed;                                                    
	float                                              Hp;                                                       
	float                                              hp_max;                                                   
	int                                                using_skill_id;                                           
	int                                                skill_phase_index;                                        
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FAIAttribute>                        Attributes;                                               
	TArray<struct FIntAIAttribute>                     int_attributes;                                           
};



struct FMonsterGlobalNearbyInfo : public FAIStateInfoBase
{
	TArray<struct FMonsterState>                       monster_states;                                           
};



struct FNearbyMonsterGlobalGameState : public FAIStateInfoBase
{
	struct FMonsterGlobalNearbyInfo                    global_nearby_info;                                       
};



struct FDiffMonsterStates : public FAIStateInfoBase
{
	TArray<struct FMonsterState>                       Values;                                                   
	TArray<uint64_t>                                   del_item_id;                                              
};



struct FDiffMonsterGlobalNearbyInfo : public FAIStateInfoBase
{
	struct FDiffMonsterStates                          monster_states;                                           
};



struct FDiffNearbyMonsterGlobalGameState : public FAIStateInfoBase
{
	struct FDiffMonsterGlobalNearbyInfo                global_nearby_info;                                       
};



struct FAISimplifyState : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       
	bool                                               has_smoke;                                                
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FAINearbyPlayer : public FUniqueStateInfo
{
	struct FAISimplifyState                            State;                                                    
};



struct FNearbyPlayerAIStateInfo : public FUniqueStateInfo
{
	TArray<struct FAINearbyPlayer>                     nearby_player;                                            
};



struct FDiffAINearbyPlayerList : public FAIStateInfoBase
{
	TArray<struct FAINearbyPlayer>                     Values;                                                   
	TArray<uint64_t>                                   del_item_id;                                              
};



struct FDiffNearbyPlayerAIStateInfo : public FUniqueStateInfo
{
	struct FDiffAINearbyPlayerList                     nearby_player;                                            
};



struct FDiffNearbyPlayerAllPlayersInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FNearbyPlayerAIStateInfo>    AllAIStateInfo;                                           
	TMap<uint32_t, struct FDiffNearbyPlayerAIStateInfo> AllDiffAIStateInfo;                                       
	TMap<uint32_t, struct FNearbyPlayerAIStateInfo>    DebugAllAIStateInfo;                                      
};



struct FBaseNearbyAIStateInfo : public FUniqueStateInfo
{
	TArray<uint64_t>                                   nearby_item_index;                                        
	TArray<uint64_t>                                   nearby_thrown_index;                                      
	unsigned char                                      UnknownData00[0x48];                                      
};



struct FDiffBaseNearbyAllPlayersInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FBaseNearbyAIStateInfo>      AllAIStateInfo;                                           
	TMap<uint32_t, struct FBaseNearbyAIStateInfo>      AllDiffAIStateInfo;                                       
	TMap<uint32_t, struct FBaseNearbyAIStateInfo>      DebugAllAIStateInfo;                                      
};



struct FAINearbyThrown : public FUniqueStateInfo
{
	int                                                Type;                                                     
	struct FAIStateXYZ                                 Position;                                                 
	float                                              remain_time;                                              
	float                                              explode_time;                                             
	bool                                               is_held;                                                  
	unsigned char                                      UnknownData00[0x3];                                       
	uint32_t                                           ActorId;                                                  
	uint32_t                                           sourceid;                                                 
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FBaseGlobalNearbyInfo : public FAIStateInfoBase
{
	TArray<struct FItemStateData>                      nearby_item;                                              
	TArray<struct FAINearbyThrown>                     nearby_thrown;                                            
};



struct FNearbyBaseGlobalGameState : public FAIStateInfoBase
{
	struct FBaseGlobalNearbyInfo                       global_nearby_info;                                       
};



struct FDiffItemStateDataList : public FAIStateInfoBase
{
	TArray<struct FItemStateData>                      Values;                                                   
	TArray<uint64_t>                                   del_item_id;                                              
};



struct FDiffAINearbyThrownList : public FAIStateInfoBase
{
	TArray<struct FAINearbyThrown>                     Values;                                                   
	TArray<uint64_t>                                   del_item_id;                                              
};



struct FDiffBaseGlobalNearbyInfo : public FAIStateInfoBase
{
	struct FDiffItemStateDataList                      nearby_item;                                              
	struct FDiffAINearbyThrownList                     nearby_thrown;                                            
};



struct FDiffBaseNearbyGlobalGameState : public FAIStateInfoBase
{
	struct FDiffBaseGlobalNearbyInfo                   global_nearby_info;                                       
};



struct FCollectorArray
{
	TArray<class UStateInfoCollectorBase*>             Collectors;                                               
};



struct FDiffListIDMap
{
	TMap<uint64_t, uint32_t>                           ListIDMap;                                                
};



struct FPropertyNameListIDMap
{
	TMap<struct FString, struct FDiffListIDMap>        PropertyNameListIDMap;                                    
};



struct FCollectorInitInfo
{
	struct FString                                     CollectorName;                                            
	TArray<EStatePlayerType>                           CollectPlayerType;                                        
};



struct FVehicleDamageInfoContainer
{
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FBulletHole
{
	struct FVector                                     ImpactPoint;                                              
	struct FVector                                     SourcePoint;                                              
};



struct FBulletHoleRecordInfo : public FBulletHole
{
	class APawn*                                       ShootPawn;                                                
	uint32_t                                           ShooterId;                                                
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FMPBaseAIPlayerState : public FAIStateInfoBase
{
	uint32_t                                           ID;                                                       
	bool                                               is_invincible;                                            
	bool                                               in_shoveling;                                             
	unsigned char                                      UnknownData00[0x2];                                       
	int                                                death_count;                                              
	float                                              survive_time;                                             
	float                                              kd_ratio;                                                 
	int                                                continue_kill;                                            
	int                                                revenge;                                                  
	int                                                top_spot_end;                                             
};



struct FAIGameModePlayerWeaponSchemeSlotInfo : public FAIStateInfoBase
{
	int                                                slot_index;                                               
	int                                                item_id;                                                  
	int                                                Count;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<int>                                        attach_list;                                              
};



struct FAIGameModePlayerWeaponSchemeInfo : public FAIStateInfoBase
{
	int                                                scheme_index;                                             
	bool                                               is_locked;                                                
	unsigned char                                      UnknownData00[0x3];                                       
	TArray<struct FAIGameModePlayerWeaponSchemeSlotInfo> slot_list;                                                
};



struct FDeathMatchAIPlayerEquipment : public FAIStateInfoBase
{
	TArray<struct FAIGameModePlayerWeaponSchemeInfo>   weapon_scheme_info_list;                                  
	int                                                cur_weapon_scheme_index;                                  
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FMPBaseAIStateInfo : public FUniqueStateInfo
{
	struct FMPBaseAIPlayerState                        State;                                                    
	struct FDeathMatchAIPlayerEquipment                deathmatch_backpack;                                      
};



struct FDiffMPBaseAllPlayersInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FMPBaseAIStateInfo>          AllAIStateInfo;                                           
	TMap<uint32_t, struct FMPBaseAIStateInfo>          AllDiffAIStateInfo;                                       
	TMap<uint32_t, struct FMPBaseAIStateInfo>          DebugAllAIStateInfo;                                      
	TArray<uint64_t>                                   del_item_id;                                              
};



struct FTeamScoreData : public FUniqueStateInfo
{
	int                                                team_id;                                                  
	int                                                team_score;                                               
};



struct FMPBaseAIGameState : public FAIStateInfoBase
{
	TArray<struct FTeamScoreData>                      team_score_datas;                                         
};



struct FMPBaseGlobalGameState : public FAIStateInfoBase
{
	struct FMPBaseAIGameState                          Game;                                                     
};



struct FDiffTeamScoreDataList : public FAIStateInfoBase
{
	TArray<struct FTeamScoreData>                      Values;                                                   
	TArray<uint64_t>                                   del_item_id;                                              
};



struct FDiffMPBaseAIGameState : public FAIStateInfoBase
{
	struct FDiffTeamScoreDataList                      team_score_datas;                                         
};



struct FDiffMPBaseGlobalGameState : public FAIStateInfoBase
{
	struct FDiffMPBaseAIGameState                      Game;                                                     
};



struct FAIVehicleStateData
{
	unsigned char                                      UnknownData00[0x80];                                      
};



struct FVehicleAIPlayerState : public FAIStateInfoBase
{
	int                                                vehicle_role;                                             
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FVehicleDamageInfo : public FAIStateInfoBase
{
	uint32_t                                           vehicle_id;                                               
	uint32_t                                           PlayerKey;                                                
	float                                              Damage;                                                   
	int                                                damage_type;                                              
	bool                                               is_kill;                                                  
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FVehicleState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       
	struct FAIStateXYZ                                 Position;                                                 
	struct FAIStateXYZ                                 Rotation;                                                 
	float                                              Hp;                                                       
	float                                              gas;                                                      
	struct FAIStateXYZ                                 Speed;                                                    
	uint32_t                                           damaged_num;                                              
	uint32_t                                           Category;                                                 
	bool                                               is_reverse;                                               
	bool                                               has_player;                                               
	bool                                               is_full;                                                  
	unsigned char                                      UnknownData00[0x5];                                       
	struct FCameraState                                Camera;                                                   
	int                                                location_state;                                           
	bool                                               is_attached;                                              
	unsigned char                                      UnknownData01[0x3];                                       
	uint32_t                                           special_states;                                           
	unsigned char                                      UnknownData02[0x4];                                       
	TArray<float>                                      wheels_hp;                                                
	TArray<struct FVehicleDamageInfo>                  damage_info;                                              
	bool                                               is_has_collision;                                         
	bool                                               is_using_horn;                                            
	unsigned char                                      UnknownData03[0x2];                                       
	uint32_t                                           born_island_owner_id;                                     
	uint32_t                                           vehicle_avatar_id;                                        
	uint32_t                                           custom_state;                                             
	float                                              special_energy;                                           
	unsigned char                                      UnknownData04[0x4];                                       
};



struct FVehicleAIStateInfo : public FUniqueStateInfo
{
	struct FVehicleAIPlayerState                       State;                                                    
	struct FVehicleState                               vehicle_state;                                            
	unsigned char                                      UnknownData00[0x10];                                      
	TArray<uint64_t>                                   nearby_vehicles_index;                                    
};



struct FDiffVehicleAllPlayersInfo : public FAIStateInfoBase
{
	TMap<uint32_t, struct FVehicleAIStateInfo>         AllAIStateInfo;                                           
	TMap<uint32_t, struct FVehicleAIStateInfo>         AllDiffAIStateInfo;                                       
	TMap<uint32_t, struct FVehicleAIStateInfo>         DebugAllAIStateInfo;                                      
};



struct FVehicleGlobalNearbyInfo : public FAIStateInfoBase
{
	TArray<struct FVehicleState>                       nearby_vehicles;                                          
};



struct FVehicleGlobalGameState : public FAIStateInfoBase
{
	struct FVehicleGlobalNearbyInfo                    global_nearby_info;                                       
	TArray<struct FAIStateXYZ>                         vehicle_spot_position;                                    
};



struct FDiffVehicleStateList : public FAIStateInfoBase
{
	TArray<struct FVehicleState>                       Values;                                                   
	TArray<uint64_t>                                   del_item_id;                                              
};



struct FDiffVehicleGlobalNearbyInfo : public FAIStateInfoBase
{
	struct FDiffVehicleStateList                       nearby_vehicles;                                          
};



struct FDiffVehicleGlobalGameState : public FAIStateInfoBase
{
	struct FDiffVehicleGlobalNearbyInfo                global_nearby_info;                                       
	TArray<struct FAIStateXYZ>                         vehicle_spot_position;                                    
};



struct FActionMoveData
{
	bool                                               IsStop;                                                   
	bool                                               IsRun;                                                    
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              DirectionX;                                               
	float                                              DirectionY;                                               
	float                                              DirectionZ;                                               
};



struct FAIVehicleHatredInfo
{
	unsigned char                                      UnknownData00[0xC];                                       
};



struct FBTTaskMobOnceMemory
{
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FShootingAimConfig
{
	EAIWeaponShootType                                 WeaponShotType;                                           
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              AimDeviationScale;                                        
	float                                              MinAimDeviationScale;                                     
	struct FVector2D                                   RandomShootFreqRange;                                     
};



struct FShootingAimConfigContainer
{
	TMap<float, struct FShootingAimConfig>             AimConfig;                                                
};



struct FDifficultyShootingConfig
{
	EAIWeaponShootType                                 WeaponShotType;                                           
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              DeviationScale;                                           
	struct FVector2D                                   RandomShootFreqRange;                                     
};



struct FBTAICheckInAIBehaviorRegionMemory
{
	unsigned char                                      UnknownData00[0x4];                                       
	struct FVector                                     SpawnLocation;                                            
	struct FBox                                        MaxMoveDistanceVolumeBox;                                 
};



struct FBTAICheckMaxDistanceFromSpawnPointMemory
{
	unsigned char                                      UnknownData00[0x4];                                       
	struct FVector                                     SpawnLocation;                                            
	struct FBox                                        MaxMoveDistanceVolumeBox;                                 
};



struct FBTFlyingChooseEnemyMemory
{
	unsigned char                                      UnknownData00[0xC];                                       
};



struct FBTMobAddHpMemory
{
	bool                                               HPBuffAdded;                                              
};



struct FBTMobCheckLoseTargetMemory
{
	bool                                               LastLoseTarget;                                           
	bool                                               bHadValidTarget;                                          
	unsigned char                                      UnknownData00[0x2];                                       
	TWeakObjectPtr<class ASTExtraBaseCharacter>        LastValidEnemy;                                           
	float                                              LoseTargetElapsedTime;                                    
};



struct FBTMobHearingMemory
{
	struct FNoiseInfo                                  LastChosenNoiseInfo;                                      
	float                                              LockNoiseElapsedTime;                                     
};



struct FBTMobMoveBlockTimerMemory
{
	float                                              BlockElapsedTime;                                         
};



struct FBTMobSearchStateMemory
{
	float                                              SearchElapsedTime;                                        
	float                                              LastHatredProgressPercent;                                
	bool                                               bHasConsumedHeardSound;                                   
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     LastConsumedHeardSoundPos;                                
};



struct FBTAISenseGrenadeMemory
{
	TMap<EAISenseGrenadeType, float>                   GrenadeSensedDistance;                                    
	TMap<EAISenseGrenadeType, float>                   GrenadeSensedDistanceSquared;                             
	float                                              fMaxSenseDistance;                                        
	unsigned char                                      UnknownData00[0x11C];                                     
	TMap<EAISenseGrenadeType, struct FAISenseGrenadeBBKeyInfo> GrenadeBBKeyInfo;                                         
	TMap<class UClass*, EAISenseGrenadeType>           GrenadeClassesMap;                                        
};



struct FBTTaskCrowdMoveMemory
{
	unsigned char                                      UnknownData00[0x78];                                      
};



struct FBTTaskFlyAlongSplineMemory
{
	unsigned char                                      UnknownData00[0x1C];                                      
};



struct FBTTaskForceIdleMemory
{
	unsigned char                                      UnknownData00[0xC];                                       
};



struct FBTLaunchMoveSpeedCurve
{
	float                                              DistanceThreshold;                                        
};



struct FBTTaskMobExplodeMemory
{
	unsigned char                                      UnknownData00[0x1];                                       
};



struct FBTTaskGetNearDeathCharNearbyMemory
{
	unsigned char                                      UnknownData00[0xC];                                       
};



struct FBTTaskMobGetRandomAttackTargetInRadius
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FBTTaskGetVehicleNearbyMemory
{
	unsigned char                                      UnknownData00[0xC];                                       
};



struct FBTTaskMoveAroundMemory
{
	unsigned char                                      UnknownData00[0x68];                                      
	class AActor*                                      FocusActor;                                               
	unsigned char                                      UnknownData01[0x30];                                      
};



struct FBTTaskRotateToTargetMemory
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FBTAICharacterCastSkillMemory
{
	unsigned char                                      UnknownData00[0x4];                                       
	struct FVector                                     FocusLocation;                                            
	TWeakObjectPtr<class AActor>                       FocusActor;                                               
	struct FVector                                     TossTargetLoc;                                            
	unsigned char                                      UnknownData01[0x4];                                       
	struct FVector                                     GrenadeThrowStartLoc;                                     
};



struct FBTTaskParachuteJumpBaseMemory
{
	unsigned char                                      UnknownData00[0x20];                                      
};



struct FDiffDynamicItem : public FUniqueStateInfo
{
	int                                                Category;                                                 
	uint32_t                                           ID;                                                       
	struct FAIStateXYZ                                 Center;                                                   
	struct FAIStateXYZ                                 Rotation;                                                 
	float                                              Durability;                                               
	uint32_t                                           Custom;                                                   
	struct FAIStateXYZ                                 Scale;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	struct FDiffAIAttributeList                        custom_attribute_list;                                    
	struct FDiffIntAIAttributeList                     int_custom_attribute_list;                                
	int                                                parallel_world_id;                                        
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FDiffSpecialZoneState : public FUniqueStateInfo
{
	uint32_t                                           ID;                                                       
	struct FAIStateXYZ                                 Center;                                                   
	float                                              Radius;                                                   
	uint32_t                                           Type;                                                     
	struct FAIStateXYZ                                 Position;                                                 
	struct FAIStateXYZ                                 Rotation;                                                 
	int                                                custom_state;                                             
	struct FAIStateXYZ                                 Scale;                                                    
	uint32_t                                           extra_state;                                              
	float                                              Health;                                                   
	struct FDiffAIAttributeList                        custom_attribute_list;                                    
	struct FDiffIntAIAttributeList                     int_custom_attribute_list;                                
};



struct FGlobalGameStateMPBase : public FAIStateInfoBase
{
	struct FMPBaseAIGameState                          Game;                                                     
};



struct FAIDamageSources : public FAIStateInfoBase
{
	TArray<struct FAIStateXYZ>                         damage_source;                                            
	TArray<int>                                        damage_type;                                              
	TArray<int>                                        damage_weapon_type;                                       
};



struct FDebugAIParamConfig
{
	int                                                DistMin;                                                  
	int                                                DistMax;                                                  
	struct FString                                     NameAndDegree;                                            
};



struct FDiffCmd
{
	class UProperty*                                   Property;                                                 
	class UProperty*                                   DiffProperty;                                             
	class UProperty*                                   ValueProperty;                                            
	class UProperty*                                   DelItemProperty;                                          
	class UProperty*                                   UnChangedProperty;                                        
	class UProperty*                                   DiffUnChangedProperty;                                    
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FAIAttribute_CastEnergyWithCount
{
	unsigned char                                      UnknownData00[0x1C];                                      
};

}

