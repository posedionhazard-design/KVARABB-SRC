#pragma once


 
namespace SDK
{






class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AudioMixer.AudioMixerBlueprintLibrary");
		return pStaticClass;
	}


	static void SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex, bool bBypassed);
	static void RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex);
	static void RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static int GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
	static void ClearMasterSubmixEffects(class UObject* WorldContextObject);
	static void AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& entry);
	static void AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
};




class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x68];                                      
	struct FSubmixEffectDynamicsProcessorSettings      Settings;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AudioMixer.SubmixEffectDynamicsProcessorPreset");
		return pStaticClass;
	}


	void SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& InSettings);
};




class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      
	struct FSubmixEffectSubmixEQSettings               Settings;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AudioMixer.SubmixEffectSubmixEQPreset");
		return pStaticClass;
	}


	void SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings);
};




class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x70];                                      
	struct FSubmixEffectReverbSettings                 Settings;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AudioMixer.SubmixEffectReverbPreset");
		return pStaticClass;
	}


	void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel);
	void SetSettings(const struct FSubmixEffectReverbSettings& InSettings);
};




class USynthSound : public USoundWaveProcedural
{
public:
	unsigned char                                      UnknownData00[0x20];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AudioMixer.SynthSound");
		return pStaticClass;
	}

};




class USynthComponent : public USceneComponent
{
public:
	class USoundAttenuation*                           AttenuationSettings;                                      
	struct FSoundAttenuationSettings                   AttenuationOverrides;                                     
	class USoundConcurrency*                           ConcurrencySettings;                                      
	class USoundClass*                                 SoundClass;                                               
	class USoundEffectSourcePresetChain*               SourceEffectChain;                                        
	class USoundSubmix*                                SoundSubmix;                                              
	TArray<struct FSoundSubmixSendInfo>                SoundSubmixSends;                                         
	unsigned char                                      bIsUISound : 1;                                           
	unsigned char                                      UnknownData00[0x7];                                       
	class USynthSound*                                 Synth;                                                    
	class UAudioComponent*                             AudioComponent;                                           
	unsigned char                                      UnknownData01[0x28];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AudioMixer.SynthComponent");
		return pStaticClass;
	}


	void Stop();
	void Start();
	void SetSubmixSend(class USoundSubmix* Submix, float SendLevel);
	bool IsPlaying();
};


}

