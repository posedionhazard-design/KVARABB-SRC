#pragma once


 
namespace SDK
{






struct FActorEditorLargeDataContentSegment
{
	unsigned char                                      Index;                                                    
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<unsigned char>                              SegmentContent;                                           
};



struct FActorEditorLargeDataContent
{
	uint32_t                                           Version;                                                  
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FActorEditorLargeDataContentSegment> ContentSegments;                                          
	TArray<unsigned char>                              OutContent;                                               
	uint32_t                                           LastNotifiedVersion;                                      
	unsigned char                                      UnknownData01[0x54];                                      
};



struct FActorEditorAISightConfig
{
	bool                                               bEnableSight;                                             
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              SightRadius;                                              
	float                                              LoseSightRadius;                                          
	float                                              PeripheralVisionAngleDegrees;                             
	float                                              AutoSuccessRangeFromLastSeenLocation;                     
	float                                              MaxAge;                                                   
	bool                                               bDetectEnemies;                                           
	bool                                               bDetectFriendlies;                                        
	bool                                               bDetectNeutrals;                                          
	unsigned char                                      UnknownData01[0x1];                                       
};



struct FActorEditorAIHearingConfig
{
	bool                                               bEnableHearing;                                           
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              HearingRange;                                             
	bool                                               bUseLoSHearing;                                           
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              LoSHearingRange;                                          
	float                                              MaxAge;                                                   
	bool                                               bDetectEnemies;                                           
	bool                                               bDetectFriendlies;                                        
	bool                                               bDetectNeutrals;                                          
	unsigned char                                      UnknownData02[0x1];                                       
};



struct FActorEditorAIPerceptionSetup
{
	struct FActorEditorAISightConfig                   Sight;                                                    
	struct FActorEditorAIHearingConfig                 Hearing;                                                  
	unsigned char                                      UnknownData00[0x4];                                       
	class UClass*                                      DominantSense;                                            
};



struct FActorEditorCharacterMovementSyncData
{
	float                                              MaxAcceleration;                                          
	float                                              BrakingFriction;                                          
	float                                              MaxWalkSpeed;                                             
	float                                              MaxWalkSpeedCrouched;                                     
	float                                              MaxSwimSpeed;                                             
	float                                              MaxFlySpeed;                                              
	float                                              MaxCustomMovementSpeed;                                   
	float                                              JumpZVelocity;                                            
	float                                              GravityScale;                                             
	float                                              AirControl;                                               
	float                                              FallingLateralFriction;                                   
	float                                              BrakingDecelerationWalking;                               
	float                                              BrakingDecelerationFalling;                               
	float                                              BrakingDecelerationFlying;                                
	float                                              BrakingDecelerationSwimming;                              
	float                                              GroundFriction;                                           
	bool                                               bOrientRotationToMovement;                                
	bool                                               bUseControllerDesiredRotation;                            
	unsigned char                                      UnknownData00[0x2];                                       
	struct FRotator                                    RotationRate;                                             
};

}

