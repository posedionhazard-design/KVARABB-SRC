#pragma once


 
namespace SDK
{






class UGNNode : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GeneralNode.GNNode");
		return pStaticClass;
	}

};




class UGNAction : public UGNNode
{
public:
	EGNRunRole                                         RunRole;                                                  
	bool                                               bActionCanUndo;                                           
	bool                                               bNeedTick;                                                
	unsigned char                                      UnknownData00[0x1];                                       
	float                                              TickInterval;                                             
	bool                                               bTargetOwnerIfNoTarget;                                   
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              RunDelay;                                                 
	bool                                               bNeedUndoOnEnd;                                           
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              ActionDuration;                                           
	unsigned char                                      UnknownData03[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GeneralNode.GNAction");
		return pStaticClass;
	}

};




class UGNCondition : public UGNNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GeneralNode.GNCondition");
		return pStaticClass;
	}

};




class UGNSharedDelegate : public UObject
{
public:
	class UObject*                                     FunctionOuter;                                            
	struct FName                                       FunctionName;                                             
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GeneralNode.GNSharedDelegate");
		return pStaticClass;
	}


	void EventTrigger();
};




class UGNSubsystem : public UBattleSubsystem
{
public:
	TMap<class UGNNode*, class UGNNode*>               InstancedNodes;                                           
	TMap<struct FGNUniqueInstancedNodeKey, class UGNNode*> UniqueInstancedNodes;                                     
	TMap<int, struct FGNActionInstance>                ActionInstances;                                          
	TMap<struct FGNSharedDelegateWrap, class UGNSharedDelegate*> DelegateMap;                                              
	TMap<struct FGNMultiSharedDelegateWrap, class UGNSharedDelegate*> MultiDelegateMap;                                         
	unsigned char                                      UnknownData00[0x50];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GeneralNode.GNSubsystem");
		return pStaticClass;
	}

};




class UGNTargetFilter : public UGNNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GeneralNode.GNTargetFilter");
		return pStaticClass;
	}

};




class UGNTargetPicker : public UGNNode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GeneralNode.GNTargetPicker");
		return pStaticClass;
	}

};


}

