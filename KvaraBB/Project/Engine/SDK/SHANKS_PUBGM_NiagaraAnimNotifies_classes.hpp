#pragma once


 
namespace SDK
{






class UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{
public:
	class UNiagaraSystem*                              Template;                                                 
	struct FVector                                     LocationOffset;                                           
	struct FRotator                                    RotationOffset;                                           
	struct FVector                                     Scale;                                                    
	unsigned char                                      UnknownData00[0x1C];                                      
	unsigned char                                      Attached : 1;                                             
	unsigned char                                      UnknownData01[0x7];                                       
	struct FName                                       SocketName;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect");
		return pStaticClass;
	}

};




class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState
{
public:
	class UNiagaraSystem*                              Template;                                                 
	bool                                               bAttachToCharacter;                                       
	unsigned char                                      UnknownData00[0x7];                                       
	struct FName                                       SocketName;                                               
	struct FVector                                     LocationOffset;                                           
	struct FRotator                                    RotationOffset;                                           
	struct FVector                                     Scale;                                                    
	bool                                               bDestroyAtEnd;                                            
	bool                                               bNeedSetTranslucencySort;                                 
	unsigned char                                      UnknownData01[0x2];                                       
	int                                                TranslucencySortPriority;                                 
	unsigned char                                      UnknownData02[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect");
		return pStaticClass;
	}


	class ACharacter* GetParentCharacter(class USkeletalMeshComponent* MeshComp);
};


}

