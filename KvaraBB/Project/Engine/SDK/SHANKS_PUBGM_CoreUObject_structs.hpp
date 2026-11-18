#pragma once


 
namespace SDK
{





enum class EInterpCurveMode : uint8_t
{
    CIM_Linear                     = 0,
    CIM_CurveAuto                  = 1,
    CIM_Constant                   = 2,
    CIM_CurveUser                  = 3,
    CIM_CurveBreak                 = 4,
    CIM_CurveAutoClamped           = 5,
    CIM_MAX                        = 6
};



enum class ERangeBoundTypes : uint8_t
{
    ERangeBoundTypes__Exclusive    = 0,
    ERangeBoundTypes__Inclusive    = 1,
    ERangeBoundTypes__Open         = 2,
    ERangeBoundTypes__ERangeBoundTypes_MAX = 3
};



enum class EAutomationEventType : uint8_t
{
    EAutomationEventType__Info     = 0,
    EAutomationEventType__Warning  = 1,
    EAutomationEventType__Error    = 2,
    EAutomationEventType__EAutomationEventType_MAX = 3
};



enum class EMouseCursor : uint8_t
{
    EMouseCursor__None             = 0,
    EMouseCursor__Default          = 1,
    EMouseCursor__TextEditBeam     = 2,
    EMouseCursor__ResizeLeftRight  = 3,
    EMouseCursor__ResizeUpDown     = 4,
    EMouseCursor__ResizeSouthEast  = 5,
    EMouseCursor__ResizeSouthWest  = 6,
    EMouseCursor__CardinalCross    = 7,
    EMouseCursor__Crosshairs       = 8,
    EMouseCursor__Hand             = 9,
    EMouseCursor__GrabHand         = 10,
    EMouseCursor__GrabHandClosed   = 11,
    EMouseCursor__SlashedCircle    = 12,
    EMouseCursor__EyeDropper       = 13,
    EMouseCursor__EMouseCursor_MAX = 14
};



enum class ELifetimeCondition : uint8_t
{
    COND_None                      = 0,
    COND_InitialOnly               = 1,
    COND_OwnerOnly                 = 2,
    COND_SkipOwner                 = 3,
    COND_SimulatedOnly             = 4,
    COND_AutonomousOnly            = 5,
    COND_SimulatedOrPhysics        = 6,
    COND_InitialOrOwner            = 7,
    COND_Custom                    = 8,
    COND_ReplayOrOwner             = 9,
    COND_ReplayOnly                = 10,
    COND_SimulatedOnlyNoReplay     = 11,
    COND_SimulatedOrPhysicsNoReplay = 12,
    COND_SkipReplay                = 13,
    COND_Max                       = 14
};



enum class EUnit : uint8_t
{
    EUnit__Micrometers             = 0,
    EUnit__Millimeters             = 1,
    EUnit__Centimeters             = 2,
    EUnit__Meters                  = 3,
    EUnit__Kilometers              = 4,
    EUnit__Inches                  = 5,
    EUnit__Feet                    = 6,
    EUnit__Yards                   = 7,
    EUnit__Miles                   = 8,
    EUnit__Lightyears              = 9,
    EUnit__Degrees                 = 10,
    EUnit__Radians                 = 11,
    EUnit__MetersPerSecond         = 12,
    EUnit__KilometersPerHour       = 13,
    EUnit__MilesPerHour            = 14,
    EUnit__Celsius                 = 15,
    EUnit__Farenheit               = 16,
    EUnit__Kelvin                  = 17,
    EUnit__Micrograms              = 18,
    EUnit__Milligrams              = 19,
    EUnit__Grams                   = 20,
    EUnit__Kilograms               = 21,
    EUnit__MetricTons              = 22,
    EUnit__Ounces                  = 23,
    EUnit__Pounds                  = 24,
    EUnit__Stones                  = 25,
    EUnit__Newtons                 = 26,
    EUnit__PoundsForce             = 27,
    EUnit__KilogramsForce          = 28,
    EUnit__Hertz                   = 29,
    EUnit__Kilohertz               = 30,
    EUnit__Megahertz               = 31,
    EUnit__Gigahertz               = 32,
    EUnit__RevolutionsPerMinute    = 33,
    EUnit__Bytes                   = 34,
    EUnit__Kilobytes               = 35,
    EUnit__Megabytes               = 36,
    EUnit__Gigabytes               = 37,
    EUnit__Terabytes               = 38,
    EUnit__Lumens                  = 39,
    EUnit__Milliseconds            = 40,
    EUnit__Seconds                 = 41,
    EUnit__Minutes                 = 42,
    EUnit__Hours                   = 43,
    EUnit__Days                    = 44,
    EUnit__Months                  = 45,
    EUnit__Years                   = 46,
    EUnit__Multiplier              = 47,
    EUnit__Percentage              = 48,
    EUnit__Unspecified             = 49,
    EUnit__EUnit_MAX               = 50
};



enum class EPixelFormat : uint8_t
{
    PF_Unknown                     = 0,
    PF_A32B32G32R32F               = 1,
    PF_B8G8R8A8                    = 2,
    PF_G8                          = 3,
    PF_G16                         = 4,
    PF_DXT1                        = 5,
    PF_DXT3                        = 6,
    PF_DXT5                        = 7,
    PF_UYVY                        = 8,
    PF_FloatRGB                    = 9,
    PF_FloatRGBA                   = 10,
    PF_DepthStencil                = 11,
    PF_ShadowDepth                 = 12,
    PF_R32_FLOAT                   = 13,
    PF_G16R16                      = 14,
    PF_G16R16F                     = 15,
    PF_G16R16F_FILTER              = 16,
    PF_G32R32F                     = 17,
    PF_A2B10G10R10                 = 18,
    PF_A16B16G16R16                = 19,
    PF_D24                         = 20,
    PF_R16F                        = 21,
    PF_R16F_FILTER                 = 22,
    PF_BC5                         = 23,
    PF_V8U8                        = 24,
    PF_A1                          = 25,
    PF_FloatR11G11B10              = 26,
    PF_A8                          = 27,
    PF_R32_UINT                    = 28,
    PF_R32_SINT                    = 29,
    PF_PVRTC2                      = 30,
    PF_PVRTC4                      = 31,
    PF_R16_UINT                    = 32,
    PF_R16_SINT                    = 33,
    PF_R16G16B16A16_UINT           = 34,
    PF_R16G16B16A16_SINT           = 35,
    PF_R5G6B5_UNORM                = 36,
    PF_R8G8B8A8                    = 37,
    PF_A8R8G8B8                    = 38,
    PF_BC4                         = 39,
    PF_R8G8                        = 40,
    PF_ATC_RGB                     = 41,
    PF_ATC_RGBA_E                  = 42,
    PF_ATC_RGBA_I                  = 43,
    PF_X24_G8                      = 44,
    PF_ETC1                        = 45,
    PF_ETC2_RGB                    = 46,
    PF_ETC2_RGBA                   = 47,
    PF_R32G32B32A32_UINT           = 48,
    PF_R16G16_UINT                 = 49,
    PF_ASTC_4x4                    = 50,
    PF_ASTC_6x6                    = 51,
    PF_ASTC_8x8                    = 52,
    PF_ASTC_10x10                  = 53,
    PF_ASTC_12x12                  = 54,
    PF_BC6H                        = 55,
    PF_BC7                         = 56,
    PF_R8_UINT                     = 57,
    PF_L8                          = 58,
    PF_XGXR8                       = 59,
    PF_R8G8B8A8_UINT               = 60,
    PF_R8G8B8A8_SNORM              = 61,
    PF_ETC2_R11                    = 62,
    PF_ETC2_SIGNED_R11             = 63,
    PF_ETC2_RG11                   = 64,
    PF_ETC2_SIGNED_RG11            = 65,
    PF_ETC2_RGB_PUNCHTHROUGH_ALPHA1 = 66,
    PF_R8                          = 67,
    PF_MAXX
                         = 68
};



enum class EAxis : uint8_t
{
    EAxis__None                    = 0,
    EAxis__X                       = 1,
    EAxis__Y                       = 2,
    EAxis__Z                       = 3,
    EAxis__EAxis_MAX               = 4
};



enum class ELogTimes : uint8_t
{
    ELogTimes__None                = 0,
    ELogTimes__UTC                 = 1,
    ELogTimes__SinceGStartTime     = 2,
    ELogTimes__Local               = 3,
    ELogTimes__ELogTimes_MAX       = 4
};



enum class ESearchDir : uint8_t
{
    ESearchDir__FromStart          = 0,
    ESearchDir__FromEnd            = 1,
    ESearchDir__ESearchDir_MAX     = 2
};



enum class ESearchCase : uint8_t
{
    ESearchCase__CaseSensitive     = 0,
    ESearchCase__IgnoreCase        = 1,
    ESearchCase__ESearchCase_MAX   = 2
};









struct FJoinabilitySettings
{
    struct FName                                       SessionName;                                              
    bool                                               bPublicSearchable;                                        
    bool                                               bAllowInvites;                                            
    bool                                               bJoinViaPresence;                                         
    bool                                               bJoinViaPresenceFriendsOnly;                              
    int                                                MaxPlayers;                                               
    int                                                MaxPartySize;                                             
    unsigned char                                      UnknownData00[0x4];                                       
};



struct FUniqueNetIdWrapper
{
    unsigned char                                      UnknownData00[0x1];                                       
};



struct FGuid
{
    int                                                A;                                                        
    int                                                B;                                                        
    int                                                C;                                                        
    int                                                D;                                                        
};




struct FVector
{
    union
    {
        struct
        {
            float X;
            float Y;
            float Z;
        };
        float data[3];
    };


    


    inline FVector();
    inline FVector(float data[]);
    inline FVector(float value);
    inline FVector(float x, float y);
    inline FVector(float x, float y, float z);


    


    static inline FVector Zero();
    static inline FVector One();
    static inline FVector Right();
    static inline FVector Left();
    static inline FVector Up();
    static inline FVector Down();
    static inline FVector Forward();
    static inline FVector Backward();


    





    static inline float Angle(FVector a, FVector b);

    





    static inline FVector ClampMagnitude(FVector vector, float maxLength);

    





    static inline float Component(FVector a, FVector b);

    





    static inline FVector Cross(FVector lhs, FVector rhs);

    





    static inline float Distance(FVector a, FVector b);

    static inline char ToChar(FVector a);

    





    static inline float Dot(FVector lhs, FVector rhs);
    static inline float Size ();
    








    static inline FVector FromSpherical(float rad, float theta, float phi);

    







    static inline FVector Lerp(FVector a, FVector b, float t);

    







    static inline FVector LerpUnclamped(FVector a, FVector b, float t);

    




    static inline float Magnitude(FVector v);

    





    static inline FVector Max(FVector a, FVector b);

    





    static inline FVector Min(FVector a, FVector b);

    







    static inline FVector MoveTowards(FVector current, FVector target,
                                      float maxDistanceDelta);

    




    static inline FVector Normalized(FVector v);

    





    static inline FVector Orthogonal(FVector v);

    








    static inline void OrthoNormalize(FVector &normal, FVector &tangent,
                                      FVector &binormal);

    





    static inline FVector Project(FVector a, FVector b);

    







    static inline FVector ProjectOnPlane(FVector vector, FVector planeNormal);

    








    static inline FVector Reflect(FVector vector, FVector planeNormal);

    





    static inline FVector Reject(FVector a, FVector b);

    












    static inline FVector RotateTowards(FVector current, FVector target,
                                        float maxRadiansDelta,
                                        float maxMagnitudeDelta);

    





    static inline FVector Scale(FVector a, FVector b);

    







    static inline FVector Slerp(FVector a, FVector b, float t);

    







    static inline FVector SlerpUnclamped(FVector a, FVector b, float t);

    







    static inline float SqrMagnitude(FVector v);

    







    static inline void ToSpherical(FVector vector, float &rad, float &theta,
                                   float &phi);


    


    inline struct FVector& operator+=(const float rhs);
    inline struct FVector& operator-=(const float rhs);
    inline struct FVector& operator*=(const float rhs);
    inline struct FVector& operator/=(const float rhs);
    inline struct FVector& operator+=(const FVector rhs);
    inline struct FVector& operator-=(const FVector rhs);
};

inline FVector operator-(FVector rhs);
inline FVector operator+(FVector lhs, const float rhs);
inline FVector operator-(FVector lhs, const float rhs);
inline FVector operator*(FVector lhs, const float rhs);
inline FVector operator/(FVector lhs, const float rhs);
inline FVector operator+(const float lhs, FVector rhs);
inline FVector operator-(const float lhs, FVector rhs);
inline FVector operator*(const float lhs, FVector rhs);
inline FVector operator/(const float lhs, FVector rhs);
inline FVector operator+(FVector lhs, const FVector rhs);
inline FVector operator-(FVector lhs, const FVector rhs);
inline bool operator==(const FVector lhs, const FVector rhs);
inline bool operator!=(const FVector lhs, const FVector rhs);
float Size ();






FVector::FVector() : X(0), Y(0), Z(0) {}
FVector::FVector(float data[]) : X(data[0]), Y(data[1]), Z(data[2]) {}
FVector::FVector(float value) : X(value), Y(value), Z(value) {}
FVector::FVector(float x, float y) : X(x), Y(y), Z(0) {}
FVector::FVector(float x, float y, float z) : X(x), Y(y), Z(z) {}


FVector FVector::Zero() { return FVector(0, 0, 0); }
FVector FVector::One() { return FVector(1, 1, 1); }
FVector FVector::Right() { return FVector(1, 0, 0); }
FVector FVector::Left() { return FVector(-1, 0, 0); }
FVector FVector::Up() { return FVector(0, 1, 0); }
FVector FVector::Down() { return FVector(0, -1, 0); }
FVector FVector::Forward() { return FVector(0, 0, 1); }
FVector FVector::Backward() { return FVector(0, 0, -1); }


float FVector::Angle(FVector a, FVector b)
{
    float v = Dot(a, b) / (Magnitude(a) * Magnitude(b));
    v = fmax(v, -1.0);
    v = fmin(v, 1.0);
    return acos(v);
}

FVector FVector::ClampMagnitude(FVector vector, float maxLength)
{
    float length = Magnitude(vector);
    if (length > maxLength)
        vector *= maxLength / length;
    return vector;
}

float FVector::Component(FVector a, FVector b)
{
    return Dot(a, b) / Magnitude(b);
}

FVector FVector::Cross(FVector lhs, FVector rhs)
{
    float x = lhs.Y * rhs.Z - lhs.Z * rhs.Y;
    float y = lhs.Z * rhs.X - lhs.X * rhs.Z;
    float z = lhs.X * rhs.Y - lhs.Y * rhs.X;
    return FVector(x, y, z);
}

float FVector::Distance(FVector a, FVector b)
{
    return FVector::Magnitude(a - b);
}


float FVector::Dot(FVector lhs, FVector rhs)
{
    return lhs.X * rhs.X + lhs.Y * rhs.Y + lhs.Z * rhs.Z;
}
float FVector::Size ()
{
    FVector ee;
    return sqrt( (ee.X * ee.X ) + ( ee.Y * ee.Y ) + ( ee.Z * ee.Z ) );
}

FVector FVector::FromSpherical(float rad, float theta, float phi)
{
    FVector v;
    v.X = rad * sin(theta) * cos(phi);
    v.Y = rad * sin(theta) * sin(phi);
    v.Z = rad * cos(theta);
    return v;
}

FVector FVector::Lerp(FVector a, FVector b, float t)
{
    if (t < 0) return a;
    else if (t > 1) return b;
    return LerpUnclamped(a, b, t);
}

FVector FVector::LerpUnclamped(FVector a, FVector b, float t)
{
    return (b - a) * t + a;
}

float FVector::Magnitude(FVector v)
{
    return sqrt(SqrMagnitude(v));
}

FVector FVector::Max(FVector a, FVector b)
{
    float x = a.X > b.X ? a.X : b.X;
    float y = a.Y > b.Y ? a.Y : b.Y;
    float z = a.Z > b.Z ? a.Z : b.Z;
    return FVector(x, y, z);
}

FVector FVector::Min(FVector a, FVector b)
{
    float x = a.X > b.X ? b.X : a.X;
    float y = a.Y > b.Y ? b.Y : a.Y;
    float z = a.Z > b.Z ? b.Z : a.Z;
    return FVector(x, y, z);
}

FVector FVector::MoveTowards(FVector current, FVector target,
                             float maxDistanceDelta)
{
    FVector d = target - current;
    float m = Magnitude(d);
    if (m < maxDistanceDelta || m == 0)
    return target;
    return current + (d * maxDistanceDelta / m);
}

FVector FVector::Normalized(FVector v)
{
    float mag = Magnitude(v);
    if (mag == 0)
        return FVector::Zero();
    return v / mag;
}

FVector FVector::Orthogonal(FVector v)
{
    return v.Z < v.X ? FVector(v.Y, -v.X, 0) : FVector(0, -v.Z, v.Y);
}

void FVector::OrthoNormalize(FVector &normal, FVector &tangent,
                             FVector &binormal)
{
    normal = Normalized(normal);
    tangent = ProjectOnPlane(tangent, normal);
    tangent = Normalized(tangent);
    binormal = ProjectOnPlane(binormal, tangent);
    binormal = ProjectOnPlane(binormal, normal);
    binormal = Normalized(binormal);
}

FVector FVector::Project(FVector a, FVector b)
{
    float m = Magnitude(b);
    return Dot(a, b) / (m * m) * b;
}

FVector FVector::ProjectOnPlane(FVector vector, FVector planeNormal)
{
    return Reject(vector, planeNormal);
}

FVector FVector::Reflect(FVector vector, FVector planeNormal)
{
    return vector - 2 * Project(vector, planeNormal);
}

FVector FVector::Reject(FVector a, FVector b)
{
    return a - Project(a, b);
}

FVector FVector::RotateTowards(FVector current, FVector target,
                               float maxRadiansDelta,
                               float maxMagnitudeDelta)
{
    float magCur = Magnitude(current);
    float magTar = Magnitude(target);
    float newMag = magCur + maxMagnitudeDelta *
                            ((magTar > magCur) - (magCur > magTar));
    newMag = fmin(newMag, fmax(magCur, magTar));
    newMag = fmax(newMag, fmin(magCur, magTar));

    float totalAngle = Angle(current, target) - maxRadiansDelta;
    if (totalAngle <= 0)
        return Normalized(target) * newMag;
    else if (totalAngle >= M_PI)
        return Normalized(-target) * newMag;

    FVector axis = Cross(current, target);
    float magAxis = Magnitude(axis);
    if (magAxis == 0)
        axis = Normalized(Cross(current, current + FVector(3.95, 5.32, -4.24)));
    else
        axis /= magAxis;
    current = Normalized(current);
    FVector newVector = current * cos(maxRadiansDelta) +
                        Cross(axis, current) * sin(maxRadiansDelta);
    return newVector * newMag;
}

FVector FVector::Scale(FVector a, FVector b)
{
    return FVector(a.X * b.X, a.Y * b.Y, a.Z * b.Z);
}

FVector FVector::Slerp(FVector a, FVector b, float t)
{
    if (t < 0) return a;
    else if (t > 1) return b;
    return SlerpUnclamped(a, b, t);
}

FVector FVector::SlerpUnclamped(FVector a, FVector b, float t)
{
    float magA = Magnitude(a);
    float magB = Magnitude(b);
    a /= magA;
    b /= magB;
    float dot = Dot(a, b);
    dot = fmax(dot, -1.0);
    dot = fmin(dot, 1.0);
    float theta = acos(dot) * t;
    FVector relativeVec = Normalized(b - a * dot);
    FVector newVec = a * cos(theta) + relativeVec * sin(theta);
    return newVec * (magA + (magB - magA) * t);
}

float FVector::SqrMagnitude(FVector v)
{
    return v.X * v.X + v.Y * v.Y + v.Z * v.Z;
}

void FVector::ToSpherical(FVector vector, float &rad, float &theta,
                          float &phi)
{
    rad = Magnitude(vector);
    float v = vector.Z / rad;
    v = fmax(v, -1.0);
    v = fmin(v, 1.0);
    theta = acos(v);
    phi = atan2(vector.Y, vector.X);
}


struct FVector& FVector::operator+=(const float rhs)
{
    X += rhs;
    Y += rhs;
    Z += rhs;
    return *this;
}

struct FVector& FVector::operator-=(const float rhs)
{
    X -= rhs;
    Y -= rhs;
    Z -= rhs;
    return *this;
}

struct FVector& FVector::operator*=(const float rhs)
{
    X *= rhs;
    Y *= rhs;
    Z *= rhs;
    return *this;
}

struct FVector& FVector::operator/=(const float rhs)
{
    X /= rhs;
    Y /= rhs;
    Z /= rhs;
    return *this;
}

struct FVector& FVector::operator+=(const FVector rhs)
{
    X += rhs.X;
    Y += rhs.Y;
    Z += rhs.Z;
    return *this;
}

struct FVector& FVector::operator-=(const FVector rhs)
{
    X -= rhs.X;
    Y -= rhs.Y;
    Z -= rhs.Z;
    return *this;
}

char FVector::ToChar(FVector a) {
    return static_cast<char>(static_cast<int>(a.X));
}

FVector operator-(FVector rhs) { return rhs * -1; }
FVector operator+(FVector lhs, const float rhs) { return lhs += rhs; }
FVector operator-(FVector lhs, const float rhs) { return lhs -= rhs; }
FVector operator*(FVector lhs, const float rhs) { return lhs *= rhs; }
FVector operator/(FVector lhs, const float rhs) { return lhs /= rhs; }
FVector operator+(const float lhs, FVector rhs) { return rhs += lhs; }
FVector operator-(const float lhs, FVector rhs) { return rhs -= lhs; }
FVector operator*(const float lhs, FVector rhs) { return rhs *= lhs; }
FVector operator/(const float lhs, FVector rhs) { return rhs /= lhs; }
FVector operator+(FVector lhs, const FVector rhs) { return lhs += rhs; }
FVector operator-(FVector lhs, const FVector rhs) { return lhs -= rhs; }

bool operator==(const FVector lhs, const FVector rhs)
{
    return lhs.X == rhs.X && lhs.Y == rhs.Y && lhs.Z == rhs.Z;
}

bool operator!=(const FVector lhs, const FVector rhs)
{
    return !(lhs == rhs);
}




struct alignas(16) FVector4
{
    float                                              X;                                                        
    float                                              Y;                                                        
    float                                              Z;                                                        
    float                                              W;                                                        
};



 
struct FVector2D
{
    union
    {
        struct
        {
            float X;
            float Y;
        };
        float data[2];
    };


    


    inline FVector2D();
    inline FVector2D(float data[]);
    inline FVector2D(float value);
    inline FVector2D(float x, float y);


    


    static inline FVector2D Zero();
    static inline FVector2D One();
    static inline FVector2D Right();
    static inline FVector2D Left();
    static inline FVector2D Up();
    static inline FVector2D Down();


    





    static inline float Angle(FVector2D a, FVector2D b);

    





    static inline FVector2D ClampMagnitude(FVector2D vector, float maxLength);

    





    static inline float Component(FVector2D a, FVector2D b);

    





    static inline float Distance(FVector2D a, FVector2D b);

    





    static inline float Dot(FVector2D lhs, FVector2D rhs);

    






    static inline FVector2D FromPolar(float rad, float theta);

    







    static inline FVector2D Lerp(FVector2D a, FVector2D b, float t);

    







    static inline FVector2D LerpUnclamped(FVector2D a, FVector2D b, float t);

    




    static inline float Magnitude(FVector2D v);

    





    static inline FVector2D Max(FVector2D a, FVector2D b);

    





    static inline FVector2D Min(FVector2D a, FVector2D b);

    







    static inline FVector2D MoveTowards(FVector2D current, FVector2D target,
                               float maxDistanceDelta);

    




    static inline FVector2D Normalized(FVector2D v);

    






    static inline void OrthoNormalize(FVector2D &normal, FVector2D &tangent);

    





    static inline FVector2D Project(FVector2D a, FVector2D b);

    







    static inline FVector2D Reflect(FVector2D vector, FVector2D line);

    





    static inline FVector2D Reject(FVector2D a, FVector2D b);

    












    static inline FVector2D RotateTowards(FVector2D current, FVector2D target,
                                 float maxRadiansDelta,
                                 float maxMagnitudeDelta);

    





    static inline FVector2D Scale(FVector2D a, FVector2D b);

    







    static inline FVector2D Slerp(FVector2D a, FVector2D b, float t);

    







    static inline FVector2D SlerpUnclamped(FVector2D a, FVector2D b, float t);

    







    static inline float SqrMagnitude(FVector2D v);

    





    static inline void ToPolar(FVector2D vector, float &rad, float &theta);


    


    inline struct FVector2D& operator+=(const float rhs);
    inline struct FVector2D& operator-=(const float rhs);
    inline struct FVector2D& operator*=(const float rhs);
    inline struct FVector2D& operator/=(const float rhs);
    inline struct FVector2D& operator+=(const FVector2D rhs);
    inline struct FVector2D& operator-=(const FVector2D rhs);
};

inline FVector2D operator-(FVector2D rhs);
inline FVector2D operator+(FVector2D lhs, const float rhs);
inline FVector2D operator-(FVector2D lhs, const float rhs);
inline FVector2D operator*(FVector2D lhs, const float rhs);
inline FVector2D operator/(FVector2D lhs, const float rhs);
inline FVector2D operator+(const float lhs, FVector2D rhs);
inline FVector2D operator-(const float lhs, FVector2D rhs);
inline FVector2D operator*(const float lhs, FVector2D rhs);
inline FVector2D operator/(const float lhs, FVector2D rhs);
inline FVector2D operator+(FVector2D lhs, const FVector2D rhs);
inline FVector2D operator-(FVector2D lhs, const FVector2D rhs);
inline bool operator==(const FVector2D lhs, const FVector2D rhs);
inline bool operator!=(const FVector2D lhs, const FVector2D rhs);







FVector2D::FVector2D() : X(0), Y(0) {}
FVector2D::FVector2D(float data[]) : X(data[0]), Y(data[1]) {}
FVector2D::FVector2D(float value) : X(value), Y(value) {}
FVector2D::FVector2D(float x, float y) : X(x), Y(y) {}


FVector2D FVector2D::Zero() { return FVector2D(0, 0); }
FVector2D FVector2D::One() { return FVector2D(1, 1); }
FVector2D FVector2D::Right() { return FVector2D(1, 0); }
FVector2D FVector2D::Left() { return FVector2D(-1, 0); }
FVector2D FVector2D::Up() { return FVector2D(0, 1); }
FVector2D FVector2D::Down() { return FVector2D(0, -1); }


float FVector2D::Angle(FVector2D a, FVector2D b)
{
    float v = Dot(a, b) / (Magnitude(a) * Magnitude(b));
    v = fmax(v, -1.0);
    v = fmin(v, 1.0);
    return acos(v);
}

FVector2D FVector2D::ClampMagnitude(FVector2D vector, float maxLength)
{
    float length = Magnitude(vector);
    if (length > maxLength)
        vector *= maxLength / length;
    return vector;
}

float FVector2D::Component(FVector2D a, FVector2D b)
{
    return Dot(a, b) / Magnitude(b);
}

float FVector2D::Distance(FVector2D a, FVector2D b)
{
    return FVector2D::Magnitude(a - b);
}

float FVector2D::Dot(FVector2D lhs, FVector2D rhs)
{
    return lhs.X * rhs.X + lhs.Y * rhs.Y;
}

FVector2D FVector2D::FromPolar(float rad, float theta)
{
    FVector2D v = FVector2D();
    v.X = rad * cos(theta);
    v.Y = rad * sin(theta);
    return v;
}

FVector2D FVector2D::Lerp(FVector2D a, FVector2D b, float t)
{
    if (t < 0) return a;
    else if (t > 1) return b;
    return LerpUnclamped(a, b, t);
}

FVector2D FVector2D::LerpUnclamped(FVector2D a, FVector2D b, float t)
{
    return (b - a) * t + a;
}

float FVector2D::Magnitude(FVector2D v)
{
    return sqrt(SqrMagnitude(v));
}

FVector2D FVector2D::Max(FVector2D a, FVector2D b)
{
    float x = a.X > b.X ? a.X : b.X;
    float y = a.Y > b.Y ? a.Y : b.Y;
    return FVector2D(x, y);
}

FVector2D FVector2D::Min(FVector2D a, FVector2D b)
{
    float x = a.X > b.X ? b.X : a.X;
    float y = a.Y > b.Y ? b.Y : a.Y;
    return FVector2D(x, y);
}

FVector2D FVector2D::MoveTowards(FVector2D current, FVector2D target,
                             float maxDistanceDelta)
{
    FVector2D d = target - current;
    float m = Magnitude(d);
    if (m < maxDistanceDelta || m == 0)
    return target;
    return current + (d * maxDistanceDelta / m);
}

FVector2D FVector2D::Normalized(FVector2D v)
{
    float mag = Magnitude(v);
    if (mag == 0)
        return FVector2D::Zero();
    return v / mag;
}

void FVector2D::OrthoNormalize(FVector2D &normal, FVector2D &tangent)
{
    normal = Normalized(normal);
    tangent = Reject(tangent, normal);
    tangent = Normalized(tangent);
}

FVector2D FVector2D::Project(FVector2D a, FVector2D b)
{
    float m = Magnitude(b);
    return Dot(a, b) / (m * m) * b;
}

FVector2D FVector2D::Reflect(FVector2D vector, FVector2D planeNormal)
{
    return vector - 2 * Project(vector, planeNormal);
}

FVector2D FVector2D::Reject(FVector2D a, FVector2D b)
{
    return a - Project(a, b);
}

FVector2D FVector2D::RotateTowards(FVector2D current, FVector2D target,
                               float maxRadiansDelta,
                               float maxMagnitudeDelta)
{
    float magCur = Magnitude(current);
    float magTar = Magnitude(target);
    float newMag = magCur + maxMagnitudeDelta *
        ((magTar > magCur) - (magCur > magTar));
    newMag = fmin(newMag, fmax(magCur, magTar));
    newMag = fmax(newMag, fmin(magCur, magTar));

    float totalAngle = Angle(current, target) - maxRadiansDelta;
    if (totalAngle <= 0)
        return Normalized(target) * newMag;
    else if (totalAngle >= M_PI)
        return Normalized(-target) * newMag;

    float axis = current.X * target.Y - current.Y * target.X;
    axis = axis / fabs(axis);
    if (!(1 - fabs(axis) < 0.00001))
        axis = 1;
    current = Normalized(current);
    FVector2D newVector = current * cos(maxRadiansDelta) +
        FVector2D(-current.Y, current.X) * sin(maxRadiansDelta) * axis;
    return newVector * newMag;
}

FVector2D FVector2D::Scale(FVector2D a, FVector2D b)
{
    return FVector2D(a.X * b.X, a.Y * b.Y);
}

FVector2D FVector2D::Slerp(FVector2D a, FVector2D b, float t)
{
    if (t < 0) return a;
    else if (t > 1) return b;
    return SlerpUnclamped(a, b, t);
}

FVector2D FVector2D::SlerpUnclamped(FVector2D a, FVector2D b, float t)
{
    float magA = Magnitude(a);
    float magB = Magnitude(b);
    a /= magA;
    b /= magB;
    float dot = Dot(a, b);
    dot = fmax(dot, -1.0);
    dot = fmin(dot, 1.0);
    float theta = acos(dot) * t;
    FVector2D relativeVec = Normalized(b - a * dot);
    FVector2D newVec = a * cos(theta) + relativeVec * sin(theta);
    return newVec * (magA + (magB - magA) * t);
}

float FVector2D::SqrMagnitude(FVector2D v)
{
    return v.X * v.X + v.Y * v.Y;
}

void FVector2D::ToPolar(FVector2D vector, float &rad, float &theta)
{
    rad = Magnitude(vector);
    theta = atan2(vector.Y, vector.X);
}


struct FVector2D& FVector2D::operator+=(const float rhs)
{
    X += rhs;
    Y += rhs;
    return *this;
}

struct FVector2D& FVector2D::operator-=(const float rhs)
{
    X -= rhs;
    Y -= rhs;
    return *this;
}

struct FVector2D& FVector2D::operator*=(const float rhs)
{
    X *= rhs;
    Y *= rhs;
    return *this;
}

struct FVector2D& FVector2D::operator/=(const float rhs)
{
    X /= rhs;
    Y /= rhs;
    return *this;
}

struct FVector2D& FVector2D::operator+=(const FVector2D rhs)
{
    X += rhs.X;
    Y += rhs.Y;
    return *this;
}

struct FVector2D& FVector2D::operator-=(const FVector2D rhs)
{
    X -= rhs.X;
    Y -= rhs.Y;
    return *this;
}

FVector2D operator-(FVector2D rhs) { return rhs * -1; }
FVector2D operator+(FVector2D lhs, const float rhs) { return lhs += rhs; }
FVector2D operator-(FVector2D lhs, const float rhs) { return lhs -= rhs; }
FVector2D operator*(FVector2D lhs, const float rhs) { return lhs *= rhs; }
FVector2D operator/(FVector2D lhs, const float rhs) { return lhs /= rhs; }
FVector2D operator+(const float lhs, FVector2D rhs) { return rhs += lhs; }
FVector2D operator-(const float lhs, FVector2D rhs) { return rhs -= lhs; }
FVector2D operator*(const float lhs, FVector2D rhs) { return rhs *= lhs; }
FVector2D operator/(const float lhs, FVector2D rhs) { return rhs /= lhs; }
FVector2D operator+(FVector2D lhs, const FVector2D rhs) { return lhs += rhs; }
FVector2D operator-(FVector2D lhs, const FVector2D rhs) { return lhs -= rhs; }

bool operator==(const FVector2D lhs, const FVector2D rhs)
{
    return lhs.X == rhs.X && lhs.Y == rhs.Y;
}

bool operator!=(const FVector2D lhs, const FVector2D rhs)
{
    return !(lhs == rhs);
};




struct FTwoVectors
{
    struct FVector                                     v1;                                                       
    struct FVector                                     v2;                                                       
};



struct alignas(16) FPlane : public FVector
{
    float                                              W;                                                        
};



struct FRotator
{
    float                                              Pitch;                                                    
    float                                              Yaw;                                                      
    float                                              Roll;                                                     
};



struct alignas(16) FQuat
{
    float                                              X;                                                        
    float                                              Y;                                                        
    float                                              Z;                                                        
    float                                              W;                                                        
};



struct FPackedNormal
{
    unsigned char                                      X;                                                        
    unsigned char                                      Y;                                                        
    unsigned char                                      Z;                                                        
    unsigned char                                      W;                                                        
};



struct FPackedRGB10A2N
{
    int                                                Packed;                                                   
};



struct FPackedRGBA16N
{
    int                                                XY;                                                       
    int                                                ZW;                                                       
};



struct FIntPoint
{
    int                                                X;                                                        
    int                                                Y;                                                        
};



struct FIntVector
{
    int                                                X;                                                        
    int                                                Y;                                                        
    int                                                Z;                                                        
};



struct FColor
{
    unsigned char                                      B;                                                        
    unsigned char                                      G;                                                        
    unsigned char                                      R;                                                        
    unsigned char                                      A;                                                        
};



struct FLinearColor
{
    float                                              R;                                                        
    float                                              G;                                                        
    float                                              B;                                                        
    float                                              A;                                                        

    inline FLinearColor()
        : R(0), G(0), B(0), A(0)
    { }

    inline FLinearColor(float r, float g, float b, float a)
        : R(r),
          G(g),
          B(b),
          A(a)
    { }

        inline FLinearColor GetRandomBackgroundHealth(int index, float alpha = 180) {
            srand(index);
            
            uint32_t ColorRand[] = {0xF0F8FF, 0x00FFFF, 0x7FFFD4, 0xFFEBCD, 0xA9A9A9,0xB0C4DE, 0x7B68EE, 0x00FF7F, 0xFFD700, 0xF0FFFF, 0xFF1493, 0x00BFFF, 0xE9967A, 0x6495ED, 0x7FFF00,0x7FFFD4, 0x48D1CC, 0x9370D8, 0xFFFFE0, 0x87CEFA,0x1E90FF, 0xFFD700, 0x808080, 0xF0E68C, 0xADD8E6};

            int a = alpha;
            int r = ((ColorRand[rand() % sizeof(ColorRand)] & 0xFF0000) >> 16);
            int g = ((ColorRand[rand() % sizeof(ColorRand)] & 0x00FF00) >> 8);
            int b = (ColorRand[rand() % sizeof(ColorRand)] & 0x0000FF);

            return FLinearColor((float)r, (float)g, (float)b, (float)a);
        }

};



struct FBox
{
    struct FVector                                     Min;                                                      
    struct FVector                                     Max;                                                      
    unsigned char                                      IsValid;                                                  
    unsigned char                                      UnknownData00[0x3];                                       
};



struct FBox2D
{
    struct FVector2D                                   Min;                                                      
    struct FVector2D                                   Max;                                                      
    unsigned char                                      bIsValid;                                                 
    unsigned char                                      UnknownData00[0x3];                                       
};



struct FBoxSphereBounds
{
    struct FVector                                     Origin;                                                   
    struct FVector                                     BoxExtent;                                                
    float                                              SphereRadius;                                             
};



struct FOrientedBox
{
    struct FVector                                     Center;                                                   
    struct FVector                                     AxisX;                                                    
    struct FVector                                     AxisY;                                                    
    struct FVector                                     AxisZ;                                                    
    float                                              ExtentX;                                                  
    float                                              ExtentY;                                                  
    float                                              ExtentZ;                                                  
};



struct FMatrix
{
    struct FPlane                                      XPlane;                                                   
    struct FPlane                                      YPlane;                                                   
    struct FPlane                                      ZPlane;                                                   
    struct FPlane                                      WPlane;                                                   

        float M[4][4];
        float _11, _12, _13, _14;
        float _21, _22, _23, _24;
        float _31, _32, _33, _34;
        float _41, _42, _43, _44;

};



struct FInterpCurvePointFloat
{
    float                                              InVal;                                                    
    float                                              OutVal;                                                   
    float                                              ArriveTangent;                                            
    float                                              LeaveTangent;                                             
    TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               
    unsigned char                                      UnknownData00[0x3];                                       
};



struct FInterpCurveFloat
{
    TArray<struct FInterpCurvePointFloat>              Points;                                                   
    bool                                               bIsLooped;                                                
    unsigned char                                      UnknownData00[0x3];                                       
    float                                              LoopKeyOffset;                                            
};



struct FInterpCurvePointVector2D
{
    float                                              InVal;                                                    
    struct FVector2D                                   OutVal;                                                   
    struct FVector2D                                   ArriveTangent;                                            
    struct FVector2D                                   LeaveTangent;                                             
    TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               
    unsigned char                                      UnknownData00[0x3];                                       
};



struct FInterpCurveVector2D
{
    TArray<struct FInterpCurvePointVector2D>           Points;                                                   
    bool                                               bIsLooped;                                                
    unsigned char                                      UnknownData00[0x3];                                       
    float                                              LoopKeyOffset;                                            
};



struct FInterpCurvePointVector
{
    float                                              InVal;                                                    
    struct FVector                                     OutVal;                                                   
    struct FVector                                     ArriveTangent;                                            
    struct FVector                                     LeaveTangent;                                             
    TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               
    unsigned char                                      UnknownData00[0x3];                                       
};



struct FInterpCurveVector
{
    TArray<struct FInterpCurvePointVector>             Points;                                                   
    bool                                               bIsLooped;                                                
    unsigned char                                      UnknownData00[0x3];                                       
    float                                              LoopKeyOffset;                                            
};



struct FInterpCurvePointQuat
{
    float                                              InVal;                                                    
    unsigned char                                      UnknownData00[0xC];                                       
    struct FQuat                                       OutVal;                                                   
    struct FQuat                                       ArriveTangent;                                            
    struct FQuat                                       LeaveTangent;                                             
    TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               
    unsigned char                                      UnknownData01[0xF];                                       
};



struct FInterpCurveQuat
{
    TArray<struct FInterpCurvePointQuat>               Points;                                                   
    bool                                               bIsLooped;                                                
    unsigned char                                      UnknownData00[0x3];                                       
    float                                              LoopKeyOffset;                                            
};



struct FInterpCurvePointTwoVectors
{
    float                                              InVal;                                                    
    struct FTwoVectors                                 OutVal;                                                   
    struct FTwoVectors                                 ArriveTangent;                                            
    struct FTwoVectors                                 LeaveTangent;                                             
    TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               
    unsigned char                                      UnknownData00[0x3];                                       
};



struct FInterpCurveTwoVectors
{
    TArray<struct FInterpCurvePointTwoVectors>         Points;                                                   
    bool                                               bIsLooped;                                                
    unsigned char                                      UnknownData00[0x3];                                       
    float                                              LoopKeyOffset;                                            
};



struct FInterpCurvePointLinearColor
{
    float                                              InVal;                                                    
    struct FLinearColor                                OutVal;                                                   
    struct FLinearColor                                ArriveTangent;                                            
    struct FLinearColor                                LeaveTangent;                                             
    TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               
    unsigned char                                      UnknownData00[0x3];                                       
};



struct FInterpCurveLinearColor
{
    TArray<struct FInterpCurvePointLinearColor>        Points;                                                   
    bool                                               bIsLooped;                                                
    unsigned char                                      UnknownData00[0x3];                                       
    float                                              LoopKeyOffset;                                            
};



struct alignas(16) FTransform
{
    struct FQuat                                       Rotation;                                                 
    struct FVector                                     Translation;                                              
    unsigned char                                      UnknownData00[0x4];                                       
    struct FVector                                     Scale3D;                                                  
    unsigned char                                      UnknownData01[0x4];                                       

        FMatrix ToMatrixWithScale()
        {
            FMatrix D3D;
            D3D._41 = Translation.X;
            D3D._42 = Translation.Y;
            D3D._43 = Translation.Z;

            float x2 = Rotation.X + Rotation.X;
            float y2 = Rotation.Y + Rotation.Y;
            float z2 = Rotation.Z + Rotation.Z;

            float xx2 = Rotation.X * x2;
            float yy2 = Rotation.Y * y2;
            float zz2 = Rotation.Z * z2;
            D3D._11 = (1.0f - (yy2 + zz2)) * Scale3D.X;
            D3D._22 = (1.0f - (xx2 + zz2)) * Scale3D.Y;
            D3D._33 = (1.0f - (xx2 + yy2)) * Scale3D.Z;

            float yz2 = Rotation.Y * z2;
            float wx2 = Rotation.W * x2;
            D3D._32 = (yz2 - wx2) * Scale3D.Z;
            D3D._23 = (yz2 + wx2) * Scale3D.Y;

            float xy2 = Rotation.X * y2;
            float wz2 = Rotation.W * z2;
            D3D._21 = (xy2 - wz2) * Scale3D.Y;
            D3D._12 = (xy2 + wz2) * Scale3D.X;

            float xz2 = Rotation.X * z2;
            float wy2 = Rotation.W * y2;
            D3D._31 = (xz2 + wy2) * Scale3D.Z;
            D3D._13 = (xz2 - wy2) * Scale3D.X;

            D3D._14 = 0.0f;
            D3D._24 = 0.0f;
            D3D._34 = 0.0f;
            D3D._44 = 1.0f;

            return D3D;
        }

};



struct FRandomStream
{
    int                                                InitialSeed;                                              
    int                                                Seed;                                                     
};



struct FDateTime
{
    unsigned char                                      UnknownData00[0x8];                                       
};



struct FTimespan
{
    unsigned char                                      UnknownData00[0x8];                                       
};



struct FSoftObjectPath
{
    struct FName                                       AssetPathName;                                            
    struct FString                                     SubPathString;                                            
};



struct FSoftClassPath : public FSoftObjectPath
{

};



struct FPrimaryAssetType
{
    struct FName                                       Name;                                                     
};



struct FPrimaryAssetId
{
    struct FPrimaryAssetType                           PrimaryAssetType;                                         
    struct FName                                       PrimaryAssetName;                                         
};



struct FFallbackStruct
{
    unsigned char                                      UnknownData00[0x1];                                       
};



struct FFloatRangeBound
{
    TEnumAsByte<ERangeBoundTypes>                      Type;                                                     
    unsigned char                                      UnknownData00[0x3];                                       
    float                                              Value;                                                    
};



struct FFloatRange
{
    struct FFloatRangeBound                            LowerBound;                                               
    struct FFloatRangeBound                            UpperBound;                                               
};



struct FInt32RangeBound
{
    TEnumAsByte<ERangeBoundTypes>                      Type;                                                     
    unsigned char                                      UnknownData00[0x3];                                       
    int                                                Value;                                                    
};



struct FInt32Range
{
    struct FInt32RangeBound                            LowerBound;                                               
    struct FInt32RangeBound                            UpperBound;                                               
};



struct FFloatInterval
{
    float                                              Min;                                                      
    float                                              Max;                                                      
};



struct FInt32Interval
{
    int                                                Min;                                                      
    int                                                Max;                                                      
};



struct FAutomationEvent
{
    EAutomationEventType                               Type;                                                     
    unsigned char                                      UnknownData00[0x7];                                       
    struct FString                                     Message;                                                  
    struct FString                                     Context;                                                  
    struct FString                                     Filename;                                                 
    int                                                LineNumber;                                               
    unsigned char                                      UnknownData01[0x4];                                       
    struct FDateTime                                   TimeStamp;                                                
};

}


