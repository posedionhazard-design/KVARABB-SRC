#pragma once


 
namespace SDK
{






class ALightningActor : public AActor
{
public:
	class ULightningComponent*                         LightningComponent;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LightningComponent.LightningActor");
		return pStaticClass;
	}

};




class ULightningComponent : public UMeshComponent
{
public:
	int                                                MaxFractalTime;                                           
	int                                                PatternMask;                                              
	float                                              LightningWidth;                                           
	float                                              WidthDecay;                                               
	float                                              BrightnessDecay;                                          
	bool                                               bShrinkWidth;                                             
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                AtlasNum;                                                 
	struct FVector                                     SeedStart;                                                
	struct FVector                                     SeedEnd;                                                  
	struct FVector2D                                   ZigZagFraction;                                           
	struct FVector2D                                   ZigZagDeviationRight;                                     
	struct FVector2D                                   ZigZagDeviationUp;                                        
	float                                              ZigZagDeviationDecay;                                     
	struct FVector2D                                   ForkFraction;                                             
	struct FVector2D                                   ForkZigZagDeviationRight;                                 
	struct FVector2D                                   ForkZigZagDeviationUp;                                    
	float                                              ForkZigZagDeviationDecay;                                 
	struct FVector2D                                   ForkDeviationRight;                                       
	struct FVector2D                                   ForkDeviationUp;                                          
	struct FVector2D                                   ForkDeviationForward;                                     
	float                                              ForkDeviationDecay;                                       
	struct FVector2D                                   ForkLength;                                               
	float                                              ForkLengthDecay;                                          
	unsigned char                                      UnknownData01[0x2C];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LightningComponent.LightningComponent");
		return pStaticClass;
	}


	void SetWidthDecay(float InDecay);
	void SetShrinkWidth(bool InBool);
	void SetPatternMask(int InPatternMask);
	void SetMaxFractalTime(int InMaxFractalTime);
	void SetLightningWidth(float InWidth);
	void SetBrightnessDecay(float InDecay);
	void SetAtlasNum(int InVal);
	void RefreshLightningMesh();
	bool IsShrinkWidth();
	float GetWidthDecay();
	int GetPatternMask();
	int GetMaxFractalTime();
	float GetLightningWidth();
	float GetBrightnessDecay();
	float GetAtlasNum();
};


}

