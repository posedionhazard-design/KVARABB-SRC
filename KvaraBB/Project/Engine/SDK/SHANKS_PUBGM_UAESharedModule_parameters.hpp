#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UOwnBlackboardInterface_GetOwnBlackboardParameter_Params
{
	TArray<struct FUAEBlackboardParameter>             ReturnValue;                                              
};


struct UOwnBlackboardInterface_GetOwnBlackboard_Params
{
	class UUAEBlackboard*                              ReturnValue;                                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_SetValueAsWeakObject_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	class UObject*                                     ObjectValue;                                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_SetValueAsVector_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	struct FVector                                     VectorValue;                                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_SetValueAsString_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	struct FString                                     StringValue;                                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_SetValueAsRotator_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	struct FRotator                                    RotatorValue;                                             
};


struct UUAEBlackboardBlueprintFunctionLibrary_SetValueAsObject_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	class UObject*                                     ObjectValue;                                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_SetValueAsName_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	struct FName                                       NameValue;                                                
};


struct UUAEBlackboardBlueprintFunctionLibrary_SetValueAsInt_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	int                                                IntValue;                                                 
};


struct UUAEBlackboardBlueprintFunctionLibrary_SetValueAsFloat_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	float                                              FloatValue;                                               
};


struct UUAEBlackboardBlueprintFunctionLibrary_SetValueAsEnum_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	unsigned char                                      EnumValue;                                                
};


struct UUAEBlackboardBlueprintFunctionLibrary_SetValueAsClass_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	class UClass*                                      ClassValue;                                               
};


struct UUAEBlackboardBlueprintFunctionLibrary_SetValueAsBool_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	bool                                               BoolValue;                                                
};


struct UUAEBlackboardBlueprintFunctionLibrary_IsExistWeakObject_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_IsExistVector_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_IsExistString_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_IsExistRotator_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_IsExistObject_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_IsExistName_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_IsExistInt_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_IsExistFloat_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_IsExistEnum_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_IsExistClass_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_IsExistBool_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_GetValueAsWeakObject_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	class UObject*                                     ReturnValue;                                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_GetValueAsWeakActor_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	class AActor*                                      ReturnValue;                                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_GetValueAsVector_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	struct FVector                                     ReturnValue;                                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_GetValueAsString_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_GetValueAsRotator_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	struct FRotator                                    ReturnValue;                                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_GetValueAsObject_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	class UObject*                                     ReturnValue;                                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_GetValueAsName_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	struct FName                                       ReturnValue;                                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_GetValueAsInt_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	int                                                ReturnValue;                                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_GetValueAsFloat_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	float                                              ReturnValue;                                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_GetValueAsEnum_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	unsigned char                                      ReturnValue;                                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_GetValueAsClass_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	class UClass*                                      ReturnValue;                                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_GetValueAsBool_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_GetValueAsActor_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardKeySelector                   Key;                                                      
	class AActor*                                      ReturnValue;                                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_FillBlackboardByBlackboard_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardContainer                     OtherUAEBlackboardContainer;                              
};


struct UUAEBlackboardBlueprintFunctionLibrary_FillBlackboard_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	TArray<struct FUAEBlackboardParameter>             ParamList;                                                
};


struct UUAEBlackboardBlueprintFunctionLibrary_AddValueByParam_Params
{
	struct FUAEBlackboardContainer                     UAEBlackboardContainer;                                   
	struct FUAEBlackboardParameter                     NewParam;                                                 
};


struct UUAEBlackboard_SetValueAsWeakObject_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	class UObject*                                     ObjectValue;                                              
};


struct UUAEBlackboard_SetValueAsVector_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	struct FVector                                     VectorValue;                                              
};


struct UUAEBlackboard_SetValueAsString_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	struct FString                                     StringValue;                                              
};


struct UUAEBlackboard_SetValueAsRotator_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	struct FRotator                                    VectorValue;                                              
};


struct UUAEBlackboard_SetValueAsObject_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	class UObject*                                     ObjectValue;                                              
};


struct UUAEBlackboard_SetValueAsName_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	struct FName                                       NameValue;                                                
};


struct UUAEBlackboard_SetValueAsInt_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	int                                                IntValue;                                                 
};


struct UUAEBlackboard_SetValueAsFloat_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	float                                              FloatValue;                                               
};


struct UUAEBlackboard_SetValueAsEnum_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	unsigned char                                      EnumValue;                                                
};


struct UUAEBlackboard_SetValueAsClass_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	class UClass*                                      ClassValue;                                               
};


struct UUAEBlackboard_SetValueAsBool_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	bool                                               BoolValue;                                                
};


struct UUAEBlackboard_IsExistWeakObject_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UUAEBlackboard_IsExistVector_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UUAEBlackboard_IsExistString_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UUAEBlackboard_IsExistRotator_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UUAEBlackboard_IsExistObject_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UUAEBlackboard_IsExistName_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UUAEBlackboard_IsExistInt_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UUAEBlackboard_IsExistFloat_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UUAEBlackboard_IsExistEnum_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UUAEBlackboard_IsExistClass_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UUAEBlackboard_IsExistBool_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UUAEBlackboard_GetValueAsWeakObject_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	class UObject*                                     ReturnValue;                                              
};


struct UUAEBlackboard_GetValueAsWeakActor_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	class AActor*                                      ReturnValue;                                              
};


struct UUAEBlackboard_GetValueAsVector_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	struct FVector                                     ReturnValue;                                              
};


struct UUAEBlackboard_GetValueAsString_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UUAEBlackboard_GetValueAsRotator_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	struct FRotator                                    ReturnValue;                                              
};


struct UUAEBlackboard_GetValueAsObject_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	class UObject*                                     ReturnValue;                                              
};


struct UUAEBlackboard_GetValueAsName_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	struct FName                                       ReturnValue;                                              
};


struct UUAEBlackboard_GetValueAsInt_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	int                                                ReturnValue;                                              
};


struct UUAEBlackboard_GetValueAsFloat_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	float                                              ReturnValue;                                              
};


struct UUAEBlackboard_GetValueAsEnum_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	unsigned char                                      ReturnValue;                                              
};


struct UUAEBlackboard_GetValueAsClass_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	class UClass*                                      ReturnValue;                                              
};


struct UUAEBlackboard_GetValueAsBool_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UUAEBlackboard_GetValueAsActor_Params
{
	struct FUAEBlackboardKeySelector                   Key;                                                      
	class AActor*                                      ReturnValue;                                              
};


struct UUAEBlackboard_AddValueByParam_Params
{
	struct FUAEBlackboardParameter                     NewParam;                                                 
};

}

