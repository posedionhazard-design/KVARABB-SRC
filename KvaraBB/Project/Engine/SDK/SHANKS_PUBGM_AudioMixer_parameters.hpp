#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Params
{
	class UObject*                                     WorldContextObject;                                       
	class USoundEffectSourcePresetChain*               PresetChain;                                              
	int                                                EntryIndex;                                               
	bool                                               bBypassed;                                                
};


struct UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Params
{
	class UObject*                                     WorldContextObject;                                       
	class USoundEffectSourcePresetChain*               PresetChain;                                              
	int                                                EntryIndex;                                               
};


struct UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Params
{
	class UObject*                                     WorldContextObject;                                       
	class USoundEffectSubmixPreset*                    SubmixEffectPreset;                                       
};


struct UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Params
{
	class UObject*                                     WorldContextObject;                                       
	class USoundEffectSourcePresetChain*               PresetChain;                                              
	int                                                ReturnValue;                                              
};


struct UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Params
{
	class UObject*                                     WorldContextObject;                                       
};


struct UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Params
{
	class UObject*                                     WorldContextObject;                                       
	class USoundEffectSourcePresetChain*               PresetChain;                                              
	struct FSourceEffectChainEntry                     entry;                                                    
};


struct UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Params
{
	class UObject*                                     WorldContextObject;                                       
	class USoundEffectSubmixPreset*                    SubmixEffectPreset;                                       
};


struct USubmixEffectDynamicsProcessorPreset_SetSettings_Params
{
	struct FSubmixEffectDynamicsProcessorSettings      InSettings;                                               
};


struct USubmixEffectSubmixEQPreset_SetSettings_Params
{
	struct FSubmixEffectSubmixEQSettings               InSettings;                                               
};


struct USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Params
{
	class UReverbEffect*                               InReverbEffect;                                           
	float                                              WetLevel;                                                 
};


struct USubmixEffectReverbPreset_SetSettings_Params
{
	struct FSubmixEffectReverbSettings                 InSettings;                                               
};


struct USynthComponent_Stop_Params
{
};


struct USynthComponent_Start_Params
{
};


struct USynthComponent_SetSubmixSend_Params
{
	class USoundSubmix*                                Submix;                                                   
	float                                              SendLevel;                                                
};


struct USynthComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                              
};

}

