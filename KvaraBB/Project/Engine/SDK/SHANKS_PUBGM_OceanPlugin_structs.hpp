#pragma once


 
namespace SDK
{





enum class EFollowMethod : uint8_t
{
	LookAtLocation                 = 0,
	FollowCamera                   = 1,
	FollowPawn                     = 2,
	Stationary                     = 3,
	EFollowMethod_MAX              = 4
};









struct FForceTriangle
{
	unsigned char                                      UnknownData00[0x6C];                                      
};



struct FBuoyancyVertex
{
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FStructBoneOverride
{
	struct FName                                       BoneName;                                                 
	float                                              Density;                                                  
	float                                              TestRadius;                                               
};



struct FWaveParameter
{
	float                                              Rotation;                                                 
	float                                              Length;                                                   
	float                                              Amplitude;                                                
	float                                              Steepness;                                                
	float                                              TimeScale;                                                
};



struct FWaveSetParameters
{
	struct FWaveParameter                              Wave01;                                                   
	struct FWaveParameter                              Wave02;                                                   
	struct FWaveParameter                              Wave03;                                                   
	struct FWaveParameter                              Wave04;                                                   
	struct FWaveParameter                              Wave05;                                                   
	struct FWaveParameter                              Wave06;                                                   
	struct FWaveParameter                              Wave07;                                                   
	struct FWaveParameter                              Wave08;                                                   
};



struct FWaveAdjust
{
	float                                              TimeScaleOffset;                                          
	float                                              Offset;                                                   
};



struct FTrippleWaveParameter
{
	struct FWaveParameter                              WaveCluster0;                                             
	struct FWaveAdjust                                 WaveAdjust0;                                              
	struct FWaveParameter                              WaveCluster1;                                             
	struct FWaveAdjust                                 WaveAdjust1;                                              
	struct FWaveParameter                              WaveCluster2;                                             
	struct FWaveAdjust                                 WaveAdjust2;                                              
};



struct FSegmentWaterBox
{
	struct FBox                                        WaterBox;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
	struct FTransform                                  WaterTransform;                                           
	struct FVector                                     WaterBoxExtend;                                           
	float                                              WaterBoxAcceptZValue;                                     
	struct FVector2D                                   Direction;                                                
	float                                              SpeedValue;                                               
	bool                                               UseSplineZ;                                               
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              WaveForceMultiplier;                                      
	unsigned char                                      UnknownData02[0x4];                                       
	TArray<struct FTrippleWaveParameter>               WaveClusters;                                             
	class USplineComponent*                            DirectionSpline;                                          
};



struct FTimeDate
{
	int                                                Millisecond;                                              
	int                                                Second;                                                   
	int                                                Minute;                                                   
	int                                                Hour;                                                     
	int                                                Day;                                                      
	int                                                Month;                                                    
	int                                                Year;                                                     
};



struct FWaterBoxCell
{
	struct FVector                                     WaveDirection;                                            
	float                                              WaveZ;                                                    
	struct FVector                                     PushForceDirection;                                       
	float                                              Speed;                                                    
};

}

