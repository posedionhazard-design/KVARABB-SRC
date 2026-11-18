#pragma once


 
namespace SDK
{





enum class ESubmixEffectDynamicsPeakMode : uint8_t
{
	ESubmixEffectDynamicsPeakMode__MeanSquared = 0,
	ESubmixEffectDynamicsPeakMode__RootMeanSquared = 1,
	ESubmixEffectDynamicsPeakMode__Peak = 2,
	ESubmixEffectDynamicsPeakMode__Count = 3,
	ESubmixEffectDynamicsPeakMode__ESubmixEffectDynamicsPeakMode_MAX = 4
};



enum class ESubmixEffectDynamicsProcessorType : uint8_t
{
	ESubmixEffectDynamicsProcessorType__Compressor = 0,
	ESubmixEffectDynamicsProcessorType__Limiter = 1,
	ESubmixEffectDynamicsProcessorType__Expander = 2,
	ESubmixEffectDynamicsProcessorType__Gate = 3,
	ESubmixEffectDynamicsProcessorType__Count = 4,
	ESubmixEffectDynamicsProcessorType__ESubmixEffectDynamicsProcessorType_MAX = 5
};









struct FSubmixEffectDynamicsProcessorSettings
{
	ESubmixEffectDynamicsProcessorType                 DynamicsProcessorType;                                    
	ESubmixEffectDynamicsPeakMode                      PeakMode;                                                 
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              LookAheadMsec;                                            
	float                                              AttackTimeMsec;                                           
	float                                              ReleaseTimeMsec;                                          
	float                                              ThresholdDb;                                              
	float                                              Ratio;                                                    
	float                                              KneeBandwidthDb;                                          
	float                                              InputGainDb;                                              
	float                                              OutputGainDb;                                             
	unsigned char                                      bChannelLinked : 1;                                       
	unsigned char                                      bAnalogMode : 1;                                          
	unsigned char                                      UnknownData01[0x3];                                       
};



struct FSubmixEffectEQBand
{
	float                                              Frequency;                                                
	float                                              Bandwidth;                                                
	float                                              GainDb;                                                   
	unsigned char                                      bEnabled : 1;                                             
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FSubmixEffectSubmixEQSettings
{
	TArray<struct FSubmixEffectEQBand>                 EQBands;                                                  
};



struct FSubmixEffectReverbSettings
{
	float                                              Density;                                                  
	float                                              Diffusion;                                                
	float                                              Gain;                                                     
	float                                              GainHF;                                                   
	float                                              DecayTime;                                                
	float                                              DecayHFRatio;                                             
	float                                              ReflectionsGain;                                          
	float                                              ReflectionsDelay;                                         
	float                                              LateGain;                                                 
	float                                              LateDelay;                                                
	float                                              AirAbsorptionGainHF;                                      
	float                                              WetLevel;                                                 
};

}

