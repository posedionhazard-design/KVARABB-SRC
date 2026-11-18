#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UBaziState_OnControllerReconnected_Params
{
};


struct UBaziState_AddChori_Params
{
	struct FChori                                      Element;                                                  
};


struct UBaziState_AddBazi_Params
{
	struct FBazi                                       Element;                                                  
};


struct UClientGlueHiaSystem_Vulou_Params
{
	float                                              ReturnValue;                                              
};


struct UClientGlueHiaSystem_LuaFunc9_Params
{
	int                                                Param1;                                                   
};


struct UClientGlueHiaSystem_LuaFunc8_Params
{
	int                                                Param1;                                                   
	bool                                               ReturnValue;                                              
};


struct UClientGlueHiaSystem_LuaFunc7_Params
{
	int                                                Param1;                                                   
	bool                                               ReturnValue;                                              
};


struct UClientGlueHiaSystem_LuaFunc6_Params
{
	int                                                Param1;                                                   
	bool                                               ReturnValue;                                              
};


struct UClientGlueHiaSystem_LuaFunc5_Params
{
	int                                                Param1;                                                   
	bool                                               ReturnValue;                                              
};


struct UClientGlueHiaSystem_LuaFunc4_Params
{
	int                                                Param1;                                                   
	bool                                               ReturnValue;                                              
};


struct UClientGlueHiaSystem_LuaFunc3_Params
{
	int                                                Param1;                                                   
};


struct UClientGlueHiaSystem_LuaFunc2_Params
{
};


struct UClientGlueHiaSystem_LuaFunc1_Params
{
	class AActor*                                      PtrActor;                                                 
	bool                                               ReturnValue;                                              
};


struct UClientGlueHiaSystem_Func9_Params
{
	class AActor*                                      PtrWeapon;                                                
};


struct UClientGlueHiaSystem_Func8_Params
{
	class AActor*                                      PtrWeapon;                                                
	struct FBulletHitInfoUploadData                    UploadData;                                               
	struct FLocalShootHitData                          LocalHitData;                                             
	int                                                ReturnValue;                                              
};


struct UClientGlueHiaSystem_Func7_Params
{
	bool                                               ReturnValue;                                              
};


struct UClientGlueHiaSystem_Func6_Params
{
	class AActor*                                      Param1;                                                   
	float                                              ReturnValue;                                              
};


struct UClientGlueHiaSystem_Func3_Params
{
	float                                              ReturnValue;                                              
};


struct UClientGlueHiaSystem_Func29_Params
{
	class UWorld*                                      World;                                                    
	struct FBulletHitInfoUploadDataInReplay            HitData;                                                  
	float                                              DrawRadius;                                               
	float                                              DisplayTime;                                              
	bool                                               bDrawVictimBound;                                         
};


struct UClientGlueHiaSystem_Func28_Params
{
	class AActor*                                      Weapon;                                                   
	struct FBulletHitInfoUploadData                    BulletHitInfoUploadData;                                  
	struct FLocalShootHitData                          LocalShootHitData;                                        
};


struct UClientGlueHiaSystem_Func27_Params
{
	uint32_t                                           ShootID;                                                  
};


struct UClientGlueHiaSystem_Func26_Params
{
	class AActor*                                      Param4;                                                   
	class AActor*                                      Param5;                                                   
};


struct UClientGlueHiaSystem_Func25_Params
{
	int                                                Param1;                                                   
	float                                              Param2;                                                   
	float                                              Param3;                                                   
	class AActor*                                      Param4;                                                   
	class AActor*                                      Param5;                                                   
};


struct UClientGlueHiaSystem_Func24_Params
{
	int                                                Param1;                                                   
	float                                              Param2;                                                   
	float                                              Param3;                                                   
	float                                              Param4;                                                   
	class AActor*                                      Param5;                                                   
	class AActor*                                      Param6;                                                   
};


struct UClientGlueHiaSystem_Func23_Params
{
	uint32_t                                           Param1;                                                   
	struct FVector                                     Param2;                                                   
	struct FHitResult                                  Param3;                                                   
};


struct UClientGlueHiaSystem_Func22_Params
{
	uint32_t                                           Param1;                                                   
	struct FVector                                     Param2;                                                   
	struct FVector                                     Param3;                                                   
};


struct UClientGlueHiaSystem_Func21_Params
{
	class AActor*                                      Param1;                                                   
};


struct UClientGlueHiaSystem_Func20_Params
{
	class AActor*                                      Param1;                                                   
	struct FVector                                     Param2;                                                   
};


struct UClientGlueHiaSystem_Func2_Params
{
	class AActor*                                      CharacterPtr;                                             
	bool                                               bParam1;                                                  
	bool                                               ReturnValue;                                              
};


struct UClientGlueHiaSystem_Func19_Params
{
	uint32_t                                           Param1;                                                   
	float                                              Param2;                                                   
	float                                              Param3;                                                   
};


struct UClientGlueHiaSystem_Func18_Params
{
	TArray<struct FBazi>                               Bazi;                                                     
	TArray<struct FChori>                              Chori;                                                    
};


struct UClientGlueHiaSystem_Func17_Params
{
	struct FFatalDamageParameter                       Param1;                                                   
};


struct UClientGlueHiaSystem_Func16_Params
{
};


struct UClientGlueHiaSystem_Func15_Params
{
	class AActor*                                      Param1;                                                   
};


struct UClientGlueHiaSystem_Func14_Params
{
	struct FShootTimeData                              InData;                                                   
	class AActor*                                      PtrWeapon;                                                
};


struct UClientGlueHiaSystem_Func11_Params
{
	class AActor*                                      Param1;                                                   
	float                                              ReturnValue;                                              
};


struct UClientGlueHiaSystem_Func10_Params
{
	class AActor*                                      Param1;                                                   
};


struct UClientGlueHiaSystem_Func1_Params
{
	class AActor*                                      CharacterPtr;                                             
	float                                              TimeInSeconds;                                            
	float                                              MarginInSeconds;                                          
	bool                                               ReturnValue;                                              
};


struct UFuzzyObject_SetUInt8ValueByName_Params
{
	int                                                Name;                                                     
	unsigned char                                      Value;                                                    
	bool                                               ReturnValue;                                              
};


struct UFuzzyObject_SetUInt64ValueByName_Params
{
	int                                                Name;                                                     
	uint64_t                                           Value;                                                    
	bool                                               ReturnValue;                                              
};


struct UFuzzyObject_SetUInt32ValueByName_Params
{
	int                                                Name;                                                     
	uint32_t                                           Value;                                                    
	bool                                               ReturnValue;                                              
};


struct UFuzzyObject_SetUInt16ValueByName_Params
{
	int                                                Name;                                                     
	uint16_t                                           Value;                                                    
	bool                                               ReturnValue;                                              
};


struct UFuzzyObject_SetInt8ValueByName_Params
{
	int                                                Name;                                                     
	int8_t                                             Value;                                                    
	bool                                               ReturnValue;                                              
};


struct UFuzzyObject_SetInt64ValueByName_Params
{
	int                                                Name;                                                     
	int64_t                                            Value;                                                    
	bool                                               ReturnValue;                                              
};


struct UFuzzyObject_SetInt32ValueByName_Params
{
	int                                                Name;                                                     
	int                                                Value;                                                    
	bool                                               ReturnValue;                                              
};


struct UFuzzyObject_SetInt16ValueByName_Params
{
	int                                                Name;                                                     
	int16_t                                            Value;                                                    
	bool                                               ReturnValue;                                              
};


struct UFuzzyObject_SetFloatValueByName_Params
{
	int                                                Name;                                                     
	float                                              Value;                                                    
	bool                                               ReturnValue;                                              
};


struct UFuzzyObject_SetBoolValueByName_Params
{
	int                                                Name;                                                     
	bool                                               Value;                                                    
	bool                                               ReturnValue;                                              
};


struct UFuzzyObject_GetUInt8ValueByName_Params
{
	int                                                Name;                                                     
	unsigned char                                      OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UFuzzyObject_GetUInt64ValueByName_Params
{
	int                                                Name;                                                     
	uint64_t                                           OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UFuzzyObject_GetUInt32ValueByName_Params
{
	int                                                Name;                                                     
	uint32_t                                           OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UFuzzyObject_GetUInt16ValueByName_Params
{
	int                                                Name;                                                     
	uint16_t                                           OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UFuzzyObject_GetInt8ValueByName_Params
{
	int                                                Name;                                                     
	int8_t                                             OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UFuzzyObject_GetInt64ValueByName_Params
{
	int                                                Name;                                                     
	int64_t                                            OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UFuzzyObject_GetInt32ValueByName_Params
{
	int                                                Name;                                                     
	int                                                OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UFuzzyObject_GetInt16ValueByName_Params
{
	int                                                Name;                                                     
	int16_t                                            OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UFuzzyObject_GetFloatValueByName_Params
{
	int                                                Name;                                                     
	float                                              OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UFuzzyObject_GetBoolValueByName_Params
{
	int                                                Name;                                                     
	bool                                               OutValue;                                                 
	bool                                               ReturnValue;                                              
};


struct UClientAmaUbaSubsystem_Func1_Params
{
	int                                                IntType;                                                  
	float                                              InTimestamp;                                              
	int                                                IncreaseCount;                                            
	bool                                               bAlertUploadFrequency;                                    
};


struct UCamoyoHelper_MakeRectTu_Params
{
	struct FScriptDelegate                             CamoyoRetDelegate;                                        
	struct FString                                     Filename;                                                 
	int                                                Quality;                                                  
	bool                                               bShowUI;                                                  
};


struct UCamoyoHelper_MakeMemPerform_Params
{
	int                                                InbOpen;                                                  
};


struct UCamoyoHelper_MakeFitRectTu_Params
{
	struct FScriptDelegate                             CamoyoRetDelegate;                                        
	struct FVector4                                    InCutParam;                                               
	int                                                InTuType;                                                 
	bool                                               isShowUI;                                                 
};


struct UHiggsBosonComponent_Zanwu_Params
{
	struct FString                                     Param1;                                                   
};


struct UHiggsBosonComponent_SyncServerParam_Params
{
	bool                                               Param1;                                                   
};


struct UHiggsBosonComponent_SwiftHawk_Params
{
	TArray<unsigned char>                              Hawks;                                                    
	uint32_t                                           Magic;                                                    
};


struct UHiggsBosonComponent_ShowABCD_Params
{
	struct FString                                     Message;                                                  
	bool                                               bIsClientShowWindow;                                      
};


struct UHiggsBosonComponent_SetSchemeForInitialize_Params
{
	int                                                Index;                                                    
	uint32_t                                           VerifyLen;                                                
	TArray<unsigned char>                              VerifyHashArray;                                          
	TArray<struct FPatchPoint>                         PatchPointArray;                                          
};


struct UHiggsBosonComponent_SetSchemeForGet_Params
{
	int                                                Index;                                                    
	uint32_t                                           VerifyLen;                                                
	TArray<unsigned char>                              VerifyHashArray;                                          
	TArray<struct FPatchPoint>                         PatchPointArray;                                          
};


struct UHiggsBosonComponent_ServerPoPo_Params
{
	TArray<unsigned char>                              Array;                                                    
};


struct UHiggsBosonComponent_SendMoveStatusToServer_Params
{
	EPawnState                                         State;                                                    
};


struct UHiggsBosonComponent_S2CNuoro_Params
{
	int                                                Lotion;                                                   
};


struct UHiggsBosonComponent_RPC_ServerGlueHiaPark_Params
{
	int8_t                                             HiaType;                                                  
	TArray<unsigned char>                              GlueHiaParkArr;                                           
	uint32_t                                           HiaStatus;                                                
	TArray<unsigned char>                              GlueArg;                                                  
	TArray<unsigned char>                              GlueHiaParkArr2;                                          
	uint32_t                                           HiaStatus2;                                               
};


struct UHiggsBosonComponent_RPC_ServerCapbo_Params
{
	int8_t                                             BoCapC;                                                   
	int8_t                                             InBoType;                                                 
	TArray<unsigned char>                              BoDataArr;                                                
};


struct UHiggsBosonComponent_RPC_ServerAddInvalidFilesInPakLite_Params
{
	TArray<int>                                        InvalidIndexList;                                         
};


struct UHiggsBosonComponent_RPC_ClientCoronaLab_Params
{
	unsigned char                                      bAllSwitch;                                               
	TArray<unsigned char>                              CoronaLab;                                                
	uint32_t                                           CoronaState;                                              
};


struct UHiggsBosonComponent_OnWeaponAimInput_Params
{
	float                                              InDistToEnemy;                                            
	float                                              InYaw;                                                    
	float                                              InPitch;                                                  
	float                                              InRoll;                                                   
};


struct UHiggsBosonComponent_OnTouchInput_Params
{
	float                                              InYaw;                                                    
	float                                              InPitch;                                                  
	float                                              InRoll;                                                   
};


struct UHiggsBosonComponent_OnStopFireEvent_Params
{
};


struct UHiggsBosonComponent_OnStartFireEvent_Params
{
};


struct UHiggsBosonComponent_OnSkillInteruptVisual_Params
{
	class AActor*                                      InTarget;                                                 
	class AActor*                                      InCauser;                                                 
};


struct UHiggsBosonComponent_OnSkillEndVisual_Params
{
	class AActor*                                      InTarget;                                                 
	class AActor*                                      InCauser;                                                 
};


struct UHiggsBosonComponent_OnSkillEndTrans_Params
{
	class AActor*                                      InTarget;                                                 
	class AActor*                                      InCauser;                                                 
};


struct UHiggsBosonComponent_OnSkillBeginVisual_Params
{
	class AActor*                                      InTarget;                                                 
	class AActor*                                      InCauser;                                                 
};


struct UHiggsBosonComponent_OnSkillBeginTrans_Params
{
	class AActor*                                      InTarget;                                                 
	class AActor*                                      InCauser;                                                 
};


struct UHiggsBosonComponent_OnRecoilCurveCheckFailed_Params
{
	class AActor*                                      Weapon;                                                   
};


struct UHiggsBosonComponent_OnPlayerScopeOut_Params
{
	bool                                               bBegan;                                                   
};


struct UHiggsBosonComponent_OnPlayerScopeIn_Params
{
	bool                                               bBegan;                                                   
};


struct UHiggsBosonComponent_OnMyPawnRespawn_Params
{
	class AUAEPlayerController*                        InPlayerController;                                       
};


struct UHiggsBosonComponent_OnKillSomeOneEvent_Params
{
	class AActor*                                      InSomeOne;                                                
};


struct UHiggsBosonComponent_OnGyroInput_Params
{
	float                                              InYaw;                                                    
	float                                              InPitch;                                                  
	float                                              InRoll;                                                   
};


struct UHiggsBosonComponent_OnClientAdjustPosition_Params
{
	struct FVector                                     NewLoc;                                                   
	ECharacterMoveDragReason                           Reason;                                                   
};


struct UHiggsBosonComponent_OnCapboReturn_Params
{
	int                                                BoCapC;                                                   
	int                                                InBoType;                                                 
	TArray<unsigned char>                              RetData;                                                  
};


struct UHiggsBosonComponent_OnBulletImpactEvent_Params
{
	class AActor*                                      InCauser;                                                 
	struct FHitResult                                  InImpactResult;                                           
};


struct UHiggsBosonComponent_IsCharacterOwnerWerewolf_Params
{
	bool                                               ReturnValue;                                              
};


struct UHiggsBosonComponent_IsCharacterOwnerButcher_Params
{
	bool                                               ReturnValue;                                              
};


struct UHiggsBosonComponent_HandleClientReconnect_Params
{
};


struct UHiggsBosonComponent_FlushGameEnd_Params
{
};


struct UHiggsBosonComponent_Ezio_Params
{
	int                                                Param1;                                                   
	int                                                Param2;                                                   
	int                                                Param3;                                                   
	int                                                Param4;                                                   
};


struct UHiggsBosonComponent_EnableTickEncrypt_Params
{
	int                                                ReturnValue;                                              
};


struct UHiggsBosonComponent_EnablePeekShootVerify_Params
{
	int                                                ReturnValue;                                              
};


struct UHiggsBosonComponent_EnableEnhancedDynamicActors_Params
{
	int                                                Index;                                                    
};


struct UHiggsBosonComponent_EnableCheckFilesInPakLite_Params
{
	TArray<struct FString>                             InFiles;                                                  
	int                                                InVerifyCountSinglePass;                                  
	int                                                ReturnValue;                                              
};


struct UHiggsBosonComponent_DispatchIntegrityCheckItem_Params
{
	uint32_t                                           PlatID;                                                   
	uint32_t                                           AreaID;                                                   
	uint32_t                                           GameBits;                                                 
	uint32_t                                           Index;                                                    
	int                                                Offset;                                                   
	uint32_t                                           Len;                                                      
	uint32_t                                           Type;                                                     
};


struct UHiggsBosonComponent_DevPVSCheckClientLocationC2S_Params
{
	class ASTExtraBaseCharacter*                       PtrOtherCharacter;                                        
	struct FVector                                     D;                                                        
	struct FVector                                     A;                                                        
	struct FVector                                     V;                                                        
	struct FVector                                     C;                                                        
	bool                                               b1;                                                       
};


struct UHiggsBosonComponent_DevPVSCheckClientLocation_Params
{
	class AActor*                                      PtrSimulatedProxy;                                        
	struct FVector                                     D;                                                        
};


struct UHiggsBosonComponent_DevPrintMouke_Params
{
	struct FString                                     Param0;                                                   
	float                                              Param1;                                                   
	struct FString                                     Param3;                                                   
};


struct UHiggsBosonComponent_ControlRoofTouch_Params
{
	int                                                Switch;                                                   
};


struct UHiggsBosonComponent_ControlPalmRest_Params
{
	int                                                Switch;                                                   
};


struct UHiggsBosonComponent_ControlMoveInputRecord_Params
{
	int                                                Switch;                                                   
	float                                              RecordCooldown;                                           
	int                                                BitmapSize;                                               
	int                                                MinValidSampleCount;                                      
	uint32_t                                           InAngleSampleMaxCount;                                    
	uint32_t                                           InAngleDistributionNum;                                   
};


struct UHiggsBosonComponent_ControlMHActive_Params
{
	int                                                Switch;                                                   
};


struct UHiggsBosonComponent_Cofew_Params
{
	uint32_t                                           InIter;                                                   
};


struct UHiggsBosonComponent_ClientSwiftHawkWithParams_Params
{
	TArray<unsigned char>                              Hawks;                                                    
};


struct UHiggsBosonComponent_ClientSwiftHawk_Params
{
	unsigned char                                      Type;                                                     
	int                                                SequenceID;                                               
};


struct UHiggsBosonComponent_ClientReceiveEx_Params
{
	TArray<unsigned char>                              RPCConstArray;                                            
};


struct UHiggsBosonComponent_ClientDoJT_Params
{
	bool                                               bDelayUntilShot;                                          
};


struct UHiggsBosonComponent_ClientCloseBaziUI_Params
{
	TArray<struct FBazi>                               Bazi;                                                     
	TArray<struct FChori>                              Chori;                                                    
};


struct UHiggsBosonComponent_ClientAccom_Params
{
	uint16_t                                           Owea;                                                     
};


struct UHiggsBosonComponent_C2SSendAlert_Params
{
	struct FString                                     Param1;                                                   
};


struct UHiggsBosonScriptHelper_FileCRCGuard_UnregisterFile_Params
{
	struct FString                                     InFilePath;                                               
};


struct UHiggsBosonScriptHelper_FileCRCGuard_RegisterFile_Params
{
	struct FString                                     InFilePath;                                               
	struct FString                                     InTag;                                                    
	bool                                               ReturnValue;                                              
};


struct UMarginIntervalCharacterTicker_Reset_Params
{
};


struct USecurityAvatarSystem_OnAvatarRectifyDataChange_Params
{
	class AUAECharacter*                               CharacterOwner;                                           
	int                                                ItemId;                                                   
};


struct USecurityAvatarSystem_OnAvatarEquipped_Params
{
	class AUAECharacter*                               CharacterOwner;                                           
	int                                                SlotID;                                                   
	struct FItemDefineID                               NewItemID;                                                
	struct FItemDefineID                               OldItemID;                                                
};


struct USecurityImprisonComp_ReleaseTeammate_Params
{
	uint64_t                                           PlayerUID;                                                
};


struct USecurityImprisonComp_ImprisonmentUIUpdate_Params
{
	uint64_t                                           PlayerUID;                                                
	bool                                               bIsImprison;                                              
};


struct USecurityImprisonComp_ImprisonmentTeammate_Params
{
	uint64_t                                           PlayerUID;                                                
	bool                                               bIscomplaint;                                             
};


struct USecurityImprisonComp_ImprisonmentReport_Params
{
	uint64_t                                           PlayerUID;                                                
};


struct UTimeIntervalPawnStateHistorySystem_UpdateParams_Params
{
};


struct UTimeIntervalPawnStateHistorySystem_QueryHistoryMaxVelocity_Params
{
	uint64_t                                           UID;                                                      
	float                                              CenterTime;                                               
	float                                              MarginTime;                                               
	float                                              OutMaxZVelocity;                                          
	float                                              OutMaxXYVelocity;                                         
	bool                                               ReturnValue;                                              
};

}

