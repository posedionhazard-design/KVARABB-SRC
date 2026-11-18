#pragma once


 
namespace SDK
{






class UNiagaraSystemWidget : public UWidget
{
public:
	class UNiagaraSystem*                              NiagaraSystemReference;                                   
	TMap<class UMaterialInterface*, class UMaterialInterface*> MaterialRemapList;                                        
	struct FVector2D                                   Offset2D;                                                 
	struct FRotator                                    Rotation3D;                                               
	bool                                               AutoActivate;                                             
	bool                                               TickWhenPaused;                                           
	bool                                               FakeDepthScale;                                           
	unsigned char                                      UnknownData00[0x1];                                       
	float                                              FakeDepthScaleDistance;                                   
	unsigned char                                      bIsActivated : 1;                                         
	unsigned char                                      UnknownData01[0x13];                                      
	class ANiagaraUIActor*                             NiagaraActor;                                             
	class UNiagaraUIComponent*                         NiagaraComponent;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class NiagaraUIRenderer.NiagaraSystemWidget");
		return pStaticClass;
	}


	void SetIsActivated(bool bInIsActive);
	class UNiagaraUIComponent* GetNiagaraComponent();
	bool GetIsActivated();
	void DeactivateSystem();
	void ActivateSystem(bool Reset);
};




class ANiagaraUIActor : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class NiagaraUIRenderer.NiagaraUIActor");
		return pStaticClass;
	}

};




class UNiagaraUIComponent : public UNiagaraComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class NiagaraUIRenderer.NiagaraUIComponent");
		return pStaticClass;
	}

};


}

