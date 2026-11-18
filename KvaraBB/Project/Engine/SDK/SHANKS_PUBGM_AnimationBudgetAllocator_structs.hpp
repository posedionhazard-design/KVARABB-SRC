#pragma once


 
namespace SDK
{






struct FAnimationBudgetAllocatorParameters
{
	float                                              BudgetInMs;                                               
	float                                              MinQuality;                                               
	int                                                MaxTickRate;                                              
	float                                              WorkUnitSmoothingSpeed;                                   
	float                                              AlwaysTickFalloffAggression;                              
	float                                              InterpolationFalloffAggression;                           
	int                                                InterpolationMaxRate;                                     
	int                                                MaxInterpolatedComponents;                                
	float                                              InterpolationTickMultiplier;                              
	float                                              InitialEstimatedWorkUnitTimeMs;                           
	int                                                MaxTickedOffsreenComponents;                              
	int                                                StateChangeThrottleInFrames;                              
	float                                              BudgetFactorBeforeReducedWork;                            
	float                                              BudgetFactorBeforeReducedWorkEpsilon;                     
	float                                              BudgetPressureSmoothingSpeed;                             
	int                                                ReducedWorkThrottleMinInFrames;                           
	int                                                ReducedWorkThrottleMaxInFrames;                           
	float                                              BudgetFactorBeforeAggressiveReducedWork;                  
	int                                                ReducedWorkThrottleMaxPerFrame;                           
	float                                              BudgetPressureBeforeEmergencyReducedWork;                 
};

}

