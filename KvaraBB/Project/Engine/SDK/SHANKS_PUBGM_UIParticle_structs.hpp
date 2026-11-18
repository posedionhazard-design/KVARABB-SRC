#pragma once


 
namespace SDK
{





enum class EUIParticlePropertyType : uint8_t
{
	EUIParticlePropertyType__Float = 0,
	EUIParticlePropertyType__FloatRange = 1,
	EUIParticlePropertyType__FloatCurve = 2,
	EUIParticlePropertyType__FloatCurveRange = 3,
	EUIParticlePropertyType__Vector2D = 4,
	EUIParticlePropertyType__Vector2DRange = 5,
	EUIParticlePropertyType__LinearColorCurve = 6,
	EUIParticlePropertyType__LinearColorCurveRange = 7,
	EUIParticlePropertyType__EUIParticlePropertyType_MAX = 8
};



enum class EParticleDrawEffect : uint8_t
{
	EParticleDrawEffect__None      = 0,
	EParticleDrawEffect__NoBlending = 1,
	EParticleDrawEffect__PreMultipliedAlpha = 2,
	EParticleDrawEffect__NoGamma   = 3,
	EParticleDrawEffect__InvertAlpha = 4,
	EParticleDrawEffect__NoPixelSnapping = 5,
	EParticleDrawEffect__DisabledEffect = 6,
	EParticleDrawEffect__IgnoreTextureAlpha = 7,
	EParticleDrawEffect__ReverseGamma = 8,
	EParticleDrawEffect__EParticleDrawEffect_MAX = 9
};



enum class EPositionType : uint8_t
{
	EPositionType__FREE            = 0,
	EPositionType__RELATIVE        = 1,
	EPositionType__EPositionType_MAX = 2
};



enum class EEmitterType : uint8_t
{
	EEmitterType__Gravity          = 0,
	EEmitterType__Radial           = 1,
	EEmitterType__Curve            = 2,
	EEmitterType__EEmitterType_MAX = 3
};



enum class ECurveType : uint8_t
{
	ECurveType__ParticleLifePercent = 0,
	ECurveType__ParticleLifeTime   = 1,
	ECurveType__EmitLifeTime       = 2,
	ECurveType__ECurveType_MAX     = 3
};









struct FUIParticleEmitterInfo
{
	bool                                               Disable;                                                  
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              ActiveDelay;                                              
	int                                                ZOrder;                                                   
	unsigned char                                      UnknownData01[0x4];                                       
	class UUIParticleEmitterAsset*                     Asset;                                                    
};



struct FRange_Float
{
	float                                              Min;                                                      
	float                                              Max;                                                      
};



struct FUIParticleFloatCurve
{
	struct FRichCurve                                  CurveData;                                                
	ECurveType                                         CurveType;                                                
	bool                                               Loop;                                                     
	unsigned char                                      UnknownData00[0x6];                                       
};



struct FRange_FloatCurve
{
	struct FUIParticleFloatCurve                       Min;                                                      
	struct FUIParticleFloatCurve                       Max;                                                      
};



struct FRange_Vector2D
{
	struct FVector2D                                   Min;                                                      
	struct FVector2D                                   Max;                                                      
	bool                                               RandomKey_X_Y;                                            
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FUIParticleLinearColorCurve
{
	struct FRichCurve                                  ColorCurves[0x4];                                         
	ECurveType                                         CurveType;                                                
	bool                                               Loop;                                                     
	unsigned char                                      UnknownData00[0x6];                                       
};



struct FRange_LinearColorCurve
{
	struct FUIParticleLinearColorCurve                 Min;                                                      
	struct FUIParticleLinearColorCurve                 Max;                                                      
	bool                                               RandomKey_R_G;                                            
	bool                                               RandomKey_R_B;                                            
	bool                                               RandomKey_R_A;                                            
	bool                                               RandomKey_G_B;                                            
	bool                                               RandomKey_G_A;                                            
	bool                                               RandomKey_B_A;                                            
	unsigned char                                      UnknownData00[0x2];                                       
};



struct FUIParticleProperty
{
	EUIParticlePropertyType                            Type;                                                     
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              FloatValue;                                               
	struct FRange_Float                                FloatRangeValue;                                          
	struct FUIParticleFloatCurve                       FloatCurveValue;                                          
	struct FRange_FloatCurve                           FloatCurveRangeValue;                                     
	struct FVector2D                                   Vector2DValue;                                            
	struct FRange_Vector2D                             Vector2DRangeValue;                                       
	unsigned char                                      UnknownData01[0x4];                                       
	struct FUIParticleLinearColorCurve                 LinearColorCurveValue;                                    
	struct FRange_LinearColorCurve                     LinearColorCurveRangeValue;                               
};



struct FPosotion_Vector2DCurve
{
	struct FUIParticleProperty                         X;                                                        
	struct FUIParticleProperty                         Y;                                                        
};



struct FChildEmitter
{
	float                                              ActivityInParentLifeTime;                                 
	bool                                               FollowParentPosition;                                     
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              FollowParentSpeedPercent;                                 
	int                                                ZOrderOffset;                                             
	class UUIParticleEmitterAsset*                     ChildrenAsset;                                            
};



struct FScalarParamCurve
{
	struct FName                                       ScalarParamName;                                          
	struct FUIParticleProperty                         Value;                                                    
};



struct FEasyParticleChildEmitterArray
{
	class UUIParticleEmitterAsset*                     ChildrenAsset;                                            
	struct FDateTime                                   EmitterStartTime;                                         
	unsigned char                                      UnknownData00[0x28];                                      
};



struct FSize_Vector2DCurve
{
	struct FUIParticleProperty                         Min;                                                      
	struct FUIParticleProperty                         Max;                                                      
};



struct FScalarParamFloat
{
	struct FName                                       ScalarParamName;                                          
	struct FRange_Float                                Value;                                                    
};



struct FLerpKeyColor
{
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FLerpKeyVector2D
{
	unsigned char                                      UnknownData00[0x8];                                       
};

}

