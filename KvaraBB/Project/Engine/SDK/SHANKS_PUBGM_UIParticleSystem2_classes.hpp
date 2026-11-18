#pragma once


 
namespace SDK
{






class UParticleSystemWidget2 : public UWidget
{
public:
	class UObject*                                     ParticleSystemTemplate;                                   
	TEnumAsByte<EUIMeshProjectionMethod>               ProjectionMethod;                                         
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              FieldOfView;                                              
	float                                              DistanceToCamera;                                         
	bool                                               NoNeedsToSwitchVerticalAxis;                              
	bool                                               bAutoActivate;                                            
	bool                                               bActivate;                                                
	unsigned char                                      UnknownData01[0x1];                                       
	class UFXSystemComponent*                          WorldParticleComponent;                                   
	class AActor*                                      WorldParticleActor;                                       
	unsigned char                                      UnknownData02[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UIParticleSystem2.ParticleSystemWidget2");
		return pStaticClass;
	}


	void SetParticleSystem(class UParticleSystem* ParticleSystem);
	void SetNiagaraSystem(class UNiagaraSystem* ParticleSystem);
	void SetActivate(bool bIsActivate);
	class UParticleSystemComponent* GetParticleComponent();
	class UNiagaraComponent* GetNiagaraComponent();
};




class UUIParticleSystemComponent : public UParticleSystemComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UIParticleSystem2.UIParticleSystemComponent");
		return pStaticClass;
	}

};




class UUINiagaraComponent : public UNiagaraComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UIParticleSystem2.UINiagaraComponent");
		return pStaticClass;
	}

};


}

