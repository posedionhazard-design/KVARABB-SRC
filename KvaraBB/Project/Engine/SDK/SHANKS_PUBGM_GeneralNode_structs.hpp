#pragma once


 
namespace SDK
{





enum class EGNActionState : uint8_t
{
	EGNActionState__Uninitialized  = 0,
	EGNActionState__DelayRun       = 1,
	EGNActionState__Running        = 2,
	EGNActionState__Finished       = 3,
	EGNActionState__EGNActionState_MAX = 4
};



enum class EGNRunRole : uint8_t
{
	EGNRunRole__All                = 0,
	EGNRunRole__Authority          = 1,
	EGNRunRole__Autonomous         = 2,
	EGNRunRole__Simulated          = 3,
	EGNRunRole__AutonomousSimulated = 4,
	EGNRunRole__AutonomousAuthority = 5,
	EGNRunRole__AuthoritySimulated = 6,
	EGNRunRole__EGNRunRole_MAX     = 7
};









struct FGNUniqueInstancedNodeKey
{
	class UObject*                                     Object;                                                   
	struct FName                                       Key;                                                      
};



struct FGNContext
{
	class AActor*                                      Owner;                                                    
	class UObject*                                     SourceObject;                                             
};



struct FGNTargetContext
{
	TArray<class UObject*>                             Targets;                                                  
	TArray<struct FVector>                             TargetLocations;                                          
};



struct FGNActionInstance
{
	class UGNAction*                                   Action;                                                   
	struct FGNContext                                  Context;                                                  
	struct FGNTargetContext                            TargetContext;                                            
	unsigned char                                      UnknownData00[0x30];                                      
};



struct FGNSharedDelegateWrap
{
	unsigned char                                      UnknownData00[0x8];                                       
	class UObject*                                     Outer;                                                    
	unsigned char                                      UnknownData01[0x8];                                       
};



struct FGNMultiSharedDelegateWrap
{
	unsigned char                                      UnknownData00[0x8];                                       
	class UObject*                                     Outer;                                                    
	unsigned char                                      UnknownData01[0x8];                                       
};



struct FGNComponentPicker
{
	class UClass*                                      ComponentClass;                                           
	struct FName                                       ComponentTag;                                             
};



struct FGNActionRunData
{
	class UGNAction*                                   Action;                                                   
	TArray<class UGNCondition*>                        Conditions;                                               
	TArray<class UGNTargetPicker*>                     TargetPickers;                                            
	TArray<class UGNTargetFilter*>                     TargetFilters;                                            
	struct FGNContext                                  Context;                                                  
};

}

