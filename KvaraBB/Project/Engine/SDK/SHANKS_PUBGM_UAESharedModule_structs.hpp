#pragma once


 
namespace SDK
{





enum class EUAEBlackboardType : uint8_t
{
	EBT_Object                     = 0,
	EBT_WeakObjectPtr              = 1,
	EBT_Class                      = 2,
	EBT_Enum                       = 3,
	EBT_Int                        = 4,
	EBT_UInt                       = 5,
	EBT_Float                      = 6,
	EBT_Bool                       = 7,
	EBT_String                     = 8,
	EBT_Name                       = 9,
	EBT_Vector                     = 10,
	EBT_Rotator                    = 11,
	EBT_MAX                        = 12
};









struct FUAEBlackboardParameterDefaultValue
{
	unsigned char                                      UnknownData00[0x28];                                      
	unsigned char                                      UnknownData01[0x28];                                      
	unsigned char                                      DefaultEnum;                                              
	unsigned char                                      UnknownData02[0x3];                                       
	int                                                DefaultInt;                                               
	float                                              DefaultFloat;                                             
	bool                                               DefaultBool;                                              
	unsigned char                                      UnknownData03[0x3];                                       
	struct FString                                     DefaultString;                                            
	struct FName                                       DefaultName;                                              
	struct FVector                                     DefaultVector;                                            
	unsigned char                                      UnknownData04[0x4];                                       
};



struct FUAEBlackboardParameter
{
	struct FName                                       Name;                                                     
	TEnumAsByte<EUAEBlackboardType>                    Type;                                                     
	unsigned char                                      UnknownData00[0x7];                                       
	struct FUAEBlackboardParameterDefaultValue         DefaultValue;                                             
};



struct FUAEBlackboardContainer
{
	TMap<struct FName, class UObject*>                 ObjectParamMap;                                           
	TMap<struct FName, TWeakObjectPtr<class UObject>>  WeakObjectParamMap;                                       
	TMap<struct FName, class UClass*>                  ClassParamMap;                                            
	TMap<struct FName, unsigned char>                  EnumParamMap;                                             
	TMap<struct FName, int>                            IntParamMap;                                              
	TMap<struct FName, uint32_t>                       UIntParamMap;                                             
	TMap<struct FName, float>                          FloatParamMap;                                            
	TMap<struct FName, bool>                           BoolParamMap;                                             
	TMap<struct FName, struct FString>                 StringParamMap;                                           
	TMap<struct FName, struct FName>                   NameParamMap;                                             
	TMap<struct FName, struct FVector>                 VectorParamMap;                                           
	TMap<struct FName, struct FRotator>                RotatorParamMap;                                          
};



struct FUAEBlackboardKeySelector
{
	struct FName                                       SelectedKeyName;                                          
};



struct FUAEBlackboardKeySelectorIndex : public FUAEBlackboardKeySelector
{
	int                                                Index;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};

}

