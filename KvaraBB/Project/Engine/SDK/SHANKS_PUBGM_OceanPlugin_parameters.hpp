#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UAdvancedBuoyancyComponent_TriangleArea_Params
{
	struct FVector                                     A;                                                        
	struct FVector                                     B;                                                        
	struct FVector                                     C;                                                        
	float                                              ReturnValue;                                              
};


struct UAdvancedBuoyancyComponent_SplitTriangle_Params
{
	struct FBuoyancyVertex                             H;                                                        
	struct FBuoyancyVertex                             M;                                                        
	struct FBuoyancyVertex                             L;                                                        
	struct FVector                                     InArrow;                                                  
	TArray<struct FForceTriangle>                      ReturnValue;                                              
};


struct UAdvancedBuoyancyComponent_SetMeshDensity_Params
{
	float                                              NewDensity;                                               
	float                                              NewWaterDensity;                                          
};


struct UAdvancedBuoyancyComponent_GetOceanDepthFromGrid_Params
{
	struct FVector                                     Position;                                                 
	bool                                               bJustGetHeightAtLocation;                                 
	float                                              ReturnValue;                                              
};


struct UAdvancedBuoyancyComponent_GetOcean_Params
{
};


struct UAdvancedBuoyancyComponent_DrawDebugStuff_Params
{
	struct FForceTriangle                              TriForce;                                                 
	struct FColor                                      DebugColor;                                               
};


struct UAdvancedBuoyancyComponent_ApplySlamForce_Params
{
	struct FVector                                     SlamForce;                                                
	struct FVector                                     TriCenter;                                                
};


struct UAdvancedBuoyancyComponent_ApplyForce_Params
{
	struct FForceTriangle                              TriForce;                                                 
};


struct UBuoyancyForceComponent_SetUpdatedComponent_Params
{
	class USceneComponent*                             NewUpdatedComponent;                                      
};


struct UBuoyancyForceComponent_OnEnterWaterDelegate__DelegateSignature_Params
{
	bool                                               IsUnderWater;                                             
};


struct UBuoyancyForceComponent_OnContactWaterDelegate__DelegateSignature_Params
{
	bool                                               IsContactingWater;                                        
};


struct UBuoyancyForceComponent_NativeSetEnableCustomWaveForce_Params
{
	bool                                               bEnable;                                                  
};


struct UBuoyancyForceComponent_IsGerstnerWaveEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct UBuoyancyForceComponent_IsFloatingOnWater_Params
{
	bool                                               ReturnValue;                                              
};


struct UBuoyancyForceComponent_IsEntirelyUnderWater_Params
{
	bool                                               ReturnValue;                                              
};


struct UBuoyancyForceComponent_IsContactedWater_Params
{
	bool                                               ReturnValue;                                              
};


struct UBuoyancyForceComponent_GetSeaLevel_Params
{
	float                                              ReturnValue;                                              
};


struct UBuoyancyForceComponent_GetOceanManager_Params
{
	class AOceanManager*                               ReturnValue;                                              
};


struct UBuoyancyForceComponent_EndableUprightConstraint_Params
{
	bool                                               bEnable;                                                  
};


struct UBuoyancyForceComponent_CheckPointInWater_Params
{
	struct FVector                                     Point;                                                    
	bool                                               isWorldPosition;                                          
	bool                                               ReturnValue;                                              
};


struct UBuoyancyForceComponent_CacheDampingProperties_Params
{
};


struct AFlockFish_OnEndOverlap_Params
{
	class UPrimitiveComponent*                         activatedComp;                                            
	class AActor*                                      OtherActor;                                               
	class UPrimitiveComponent*                         OtherComp;                                                
	int                                                OtherBodyIndex;                                           
};


struct AFlockFish_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         activatedComp;                                            
	class AActor*                                      OtherActor;                                               
	class UPrimitiveComponent*                         OtherComp;                                                
	int                                                OtherBodyIndex;                                           
	bool                                               bFromSweep;                                               
	struct FHitResult                                  SweepResult;                                              
};


struct AOceanManager_LoadLandscapeHeightmap_Params
{
	class UTexture2D*                                  Tex2D;                                                    
};


struct AOceanManager_GetHeightmapPixel_Params
{
	float                                              U;                                                        
	float                                              V;                                                        
	struct FLinearColor                                ReturnValue;                                              
};


struct ASegmentOceanManager_RemoveBoxComponent_Params
{
	class UWaterBoxComponent*                          InBoxComponent;                                           
};


struct ASegmentOceanManager_AddBoxComponent_Params
{
	class UWaterBoxComponent*                          InBoxComponent;                                           
	class USplineComponent*                            InDirectionSpline;                                        
};


struct ATimeManager_SetCurrentLocalTime_Params
{
	float                                              Time;                                                     
};


struct ATimeManager_IsLeapYear_Params
{
	int                                                Year;                                                     
	bool                                               ReturnValue;                                              
};


struct ATimeManager_InitializeCalendar_Params
{
	struct FTimeDate                                   Time;                                                     
};


struct ATimeManager_IncrementTime_Params
{
	float                                              DeltaSeconds;                                             
};


struct ATimeManager_GetYearPhase_Params
{
	float                                              ReturnValue;                                              
};


struct ATimeManager_GetElapsedDayInMinutes_Params
{
	float                                              ReturnValue;                                              
};


struct ATimeManager_GetDaysInYear_Params
{
	int                                                Year;                                                     
	int                                                ReturnValue;                                              
};


struct ATimeManager_GetDaysInMonth_Params
{
	int                                                Year;                                                     
	int                                                Month;                                                    
	int                                                ReturnValue;                                              
};


struct ATimeManager_GetDayPhase_Params
{
	float                                              ReturnValue;                                              
};


struct ATimeManager_GetDayOfYear_Params
{
	struct FTimeDate                                   Time;                                                     
	int                                                ReturnValue;                                              
};


struct ATimeManager_CalculateSunAngle_Params
{
	struct FRotator                                    ReturnValue;                                              
};


struct ATimeManager_CalculateMoonPhase_Params
{
	float                                              ReturnValue;                                              
};


struct ATimeManager_CalculateMoonAngle_Params
{
	struct FRotator                                    ReturnValue;                                              
};

}

