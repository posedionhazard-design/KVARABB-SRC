#pragma once


 
namespace SDK
{






class UUIParticle : public UWidget
{
public:
	class UUIParticleAsset*                            Asset;                                                    
	struct FScriptMulticastDelegate                    EventOnEnd;                                               
	unsigned char                                      bPlayParticle : 1;                                        
	bool                                               IsPlaying;                                                
	unsigned char                                      UnknownData00[0x16];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UIParticle.UIParticle");
		return pStaticClass;
	}


	void StopEmit();
	void Stop();
	void SetPlayParticle(bool InPlayParticle);
	void Play();
};




class UUIParticleAsset : public UObject
{
public:
	TArray<struct FUIParticleEmitterInfo>              Emitters;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UIParticle.UIParticleAsset");
		return pStaticClass;
	}

};




class UUIParticleEmitter : public UWidget
{
public:
	class UUIParticleEmitterAsset*                     Asset;                                                    
	struct FScriptMulticastDelegate                    EventOnEnd;                                               
	unsigned char                                      bPlayParticle : 1;                                        
	bool                                               IsPlaying;                                                
	unsigned char                                      UnknownData00[0x16];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UIParticle.UIParticleEmitter");
		return pStaticClass;
	}


	void StopEmit();
	void Stop();
	void SetPlayParticle(bool InPlayParticle);
	void Play();
};




class UUIParticleEmitterAsset : public UObject
{
public:
	EEmitterType                                       EmitterType;                                              
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              EmitSeconds;                                              
	struct FUIParticleProperty                         MaxParticleCount;                                         
	struct FUIParticleProperty                         SpawnParticlePerSecond;                                   
	struct FUIParticleProperty                         ParticleEmitAngle;                                        
	struct FRange_Vector2D                             EmitPosRange;                                             
	unsigned char                                      UnknownData01[0x4];                                       
	struct FPosotion_Vector2DCurve                     EmitPosition;                                             
	bool                                               AutoEmitPosRange;                                         
	bool                                               AutoScale;                                                
	bool                                               ScaleByX;                                                 
	unsigned char                                      UnknownData02[0x1];                                       
	struct FVector2D                                   DesignSize;                                               
	EPositionType                                      PositionType;                                             
	unsigned char                                      UnknownData03[0x3];                                       
	struct FUIParticleProperty                         LifeSpan;                                                 
	struct FUIParticleProperty                         Size;                                                     
	struct FUIParticleProperty                         Pivot;                                                    
	struct FUIParticleProperty                         RotationStart;                                            
	struct FUIParticleProperty                         RotationSpeed;                                            
	struct FUIParticleProperty                         Color;                                                    
	class UObject*                                     ResourceObject;                                           
	bool                                               RotationFollowSpeed;                                      
	bool                                               UseSeparateSize;                                          
	unsigned char                                      UnknownData04[0x6];                                       
	struct FUIParticleProperty                         Gravity;                                                  
	struct FUIParticleProperty                         StartSpeed;                                               
	struct FUIParticleProperty                         AirResistance;                                            
	struct FUIParticleProperty                         RadialAcceleration;                                       
	struct FUIParticleProperty                         TangentialAcceleration;                                   
	struct FUIParticleProperty                         Radius;                                                   
	struct FUIParticleProperty                         DegreePerSecond;                                          
	struct FUIParticleProperty                         PositionX;                                                
	struct FUIParticleProperty                         PositionY;                                                
	TArray<struct FChildEmitter>                       ChildrenEmitters;                                         
	TArray<struct FScalarParamCurve>                   ScalarParams;                                             
	TArray<struct FScalarParamCurve>                   ScalarParamsWhenStart;                                    
	EParticleDrawEffect                                DrawEffect;                                               
	bool                                               UseScaleFollowSpeedDirection;                             
	unsigned char                                      UnknownData05[0x6];                                       
	struct FUIParticleProperty                         ScaleFollowSpeedDirection;                                
	bool                                               UseScaleFollowSpeedVertical;                              
	unsigned char                                      UnknownData06[0x7];                                       
	struct FUIParticleProperty                         ScaleFollowSpeedVertical;                                 
	struct FUIParticleProperty                         DirectionScale;                                           
	struct FUIParticleProperty                         VerticalDirectionScale;                                   
	struct FUIParticleProperty                         SineDirectionStart;                                       
	struct FUIParticleProperty                         SineDirectionSpeed;                                       
	struct FUIParticleProperty                         SineDirectionRange;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UIParticle.UIParticleEmitterAsset");
		return pStaticClass;
	}

};


}

