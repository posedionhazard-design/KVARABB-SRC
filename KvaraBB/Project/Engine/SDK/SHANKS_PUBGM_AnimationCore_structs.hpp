#pragma once


 
namespace SDK
{





enum class ETransformConstraintType : uint8_t
{
	ETransformConstraintType__Translation = 0,
	ETransformConstraintType__Rotation = 1,
	ETransformConstraintType__Scale = 2,
	ETransformConstraintType__Parent = 3,
	ETransformConstraintType__ETransformConstraintType_MAX = 4
};



enum class EConstraintType : uint8_t
{
	EConstraintType__Transform     = 0,
	EConstraintType__Aim           = 1,
	EConstraintType__MAX           = 2
};









struct FAxis
{
	struct FVector                                     Axis;                                                     
	bool                                               bInLocalSpace;                                            
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FConstraintDescriptor
{
	EConstraintType                                    Type;                                                     
	unsigned char                                      UnknownData00[0xF];                                       
};



struct FConstraintData
{
	struct FConstraintDescriptor                       Constraint;                                               
	struct FName                                       TargetNode;                                               
	float                                              Weight;                                                   
	bool                                               bMaintainOffset;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	struct FTransform                                  Offset;                                                   
	struct FTransform                                  CurrentTransform;                                         
};



struct FFilterOptionPerAxis
{
	bool                                               bX;                                                       
	bool                                               bY;                                                       
	bool                                               bZ;                                                       
};



struct FConstraintDescriptionEx
{
	unsigned char                                      UnknownData00[0x8];                                       
	struct FFilterOptionPerAxis                        AxesFilterOption;                                         
	unsigned char                                      UnknownData01[0x5];                                       
};



struct FAimConstraintDescription : public FConstraintDescriptionEx
{
	struct FAxis                                       LookAt_Axis;                                              
	struct FAxis                                       LookUp_Axis;                                              
	bool                                               bUseLookUp;                                               
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FTransformConstraintDescription : public FConstraintDescriptionEx
{
	ETransformConstraintType                           TransformType;                                            
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FConstraintDescription
{
	bool                                               bTranslation;                                             
	bool                                               bRotation;                                                
	bool                                               bScale;                                                   
	bool                                               bParent;                                                  
	struct FFilterOptionPerAxis                        TranslationAxes;                                          
	struct FFilterOptionPerAxis                        RotationAxes;                                             
	struct FFilterOptionPerAxis                        ScaleAxes;                                                
};



struct FTransformConstraint
{
	struct FConstraintDescription                      Operator;                                                 
	unsigned char                                      UnknownData00[0x3];                                       
	struct FName                                       SourceNode;                                               
	struct FName                                       TargetNode;                                               
	float                                              Weight;                                                   
	bool                                               bMaintainOffset;                                          
	unsigned char                                      UnknownData01[0x3];                                       
};



struct FConstraintOffset
{
	struct FVector                                     Translation;                                              
	unsigned char                                      UnknownData00[0x4];                                       
	struct FQuat                                       Rotation;                                                 
	struct FVector                                     Scale;                                                    
	unsigned char                                      UnknownData01[0x4];                                       
	struct FTransform                                  Parent;                                                   
};



struct FNodeChain
{
	TArray<struct FName>                               Nodes;                                                    
};



struct FNodeObject
{
	struct FName                                       Name;                                                     
	struct FName                                       ParentName;                                               
};



struct FNodeHierarchyData
{
	TArray<struct FNodeObject>                         Nodes;                                                    
	TArray<struct FTransform>                          Transforms;                                               
	TMap<struct FName, int>                            NodeNameToIndexMapping;                                   
};



struct FNodeHierarchyWithUserData
{
	unsigned char                                      UnknownData00[0x8];                                       
	struct FNodeHierarchyData                          Hierarchy;                                                
};

}

