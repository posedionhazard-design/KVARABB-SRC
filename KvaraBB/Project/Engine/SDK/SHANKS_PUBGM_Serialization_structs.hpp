#pragma once


 
namespace SDK
{






struct FStructSerializerNumericTestStruct
{
	int8_t                                             Int8;                                                     
	unsigned char                                      UnknownData00[0x1];                                       
	int16_t                                            Int16;                                                    
	int                                                Int32;                                                    
	int64_t                                            Int64;                                                    
	unsigned char                                      UInt8;                                                    
	unsigned char                                      UnknownData01[0x1];                                       
	uint16_t                                           UInt16;                                                   
	uint32_t                                           UInt32;                                                   
	uint64_t                                           UInt64;                                                   
	float                                              Float;                                                    
	unsigned char                                      UnknownData02[0x4];                                       
	double                                             Double;                                                   
};



struct FStructSerializerBooleanTestStruct
{
	bool                                               BoolFalse;                                                
	bool                                               BoolTrue;                                                 
	unsigned char                                      UnknownData00[0x2];                                       
	uint32_t                                           Bitfield;                                                 
};



struct FStructSerializerObjectTestStruct
{
	class UClass*                                      Class;                                                    
	class UObject*                                     ObjectPtr;                                                
};



struct FStructSerializerBuiltinTestStruct
{
	struct FGuid                                       Guid;                                                     
	struct FName                                       Name;                                                     
	struct FString                                     String;                                                   
	struct FRotator                                    Rotator;                                                  
	unsigned char                                      UnknownData00[0x4];                                       
	struct FText                                       Text;                                                     
	struct FVector                                     Vector;                                                   
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FStructSerializerArrayTestStruct
{
	TArray<int>                                        Int32Array;                                               
	int                                                StaticSingleElement;                                      
	int                                                StaticInt32Array[0x3];                                    
	float                                              StaticFloatArray[0x3];                                    
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FVector>                             VectorArray;                                              
};



struct FStructSerializerMapTestStruct
{
	TMap<int, struct FString>                          IntToStr;                                                 
	TMap<struct FString, struct FString>               StrToStr;                                                 
	TMap<struct FString, struct FVector>               StrToVec;                                                 
};



struct FStructSerializerTestStruct
{
	struct FStructSerializerNumericTestStruct          Numerics;                                                 
	struct FStructSerializerBooleanTestStruct          Booleans;                                                 
	struct FStructSerializerObjectTestStruct           Objects;                                                  
	struct FStructSerializerBuiltinTestStruct          Builtins;                                                 
	struct FStructSerializerArrayTestStruct            Arrays;                                                   
	struct FStructSerializerMapTestStruct              Maps;                                                     
};

}

