#pragma once


 
namespace SDK
{






class ABP_LobbyRefitVehicle_C : public ABP_LobbyVehicle_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           
	class UVehicleAdvanceAvatarComp_BP_C*              VehicleAdvanceAvatarComp_BP;                              
	class UStaticMeshComponent*                        DefaultStaticMesh;                                        
	class UCameraComponent*                            Camera;                                                   
	class USpringArmComponent*                         SpringArm;                                                
	float                                              TimeLine_LerpPosition_degree_BC84527D4F1E3F8A299259BA82D05CD5;
	TEnumAsByte<ETimelineDirection>                    TimeLine_LerpPosition__Direction_BC84527D4F1E3F8A299259BA82D05CD5;
	unsigned char                                      UnknownData01[0x3];                                       
	class UTimelineComponent*                          TimeLine_LerpPosition;                                    
	float                                              Timeline_AutoPlay_yaw_87093ECB435381EB481155BD1C007A5B;   
	float                                              Timeline_AutoPlay_pitch_87093ECB435381EB481155BD1C007A5B; 
	TEnumAsByte<ETimelineDirection>                    Timeline_AutoPlay__Direction_87093ECB435381EB481155BD1C007A5B;
	unsigned char                                      UnknownData02[0x7];                                       
	class UTimelineComponent*                          Timeline_AutoPlay;                                        
	float                                              TimeLine_BlendCamera_time_16B4579C4F72C1371A81BFBE1D6CF40B;
	TEnumAsByte<ETimelineDirection>                    TimeLine_BlendCamera__Direction_16B4579C4F72C1371A81BFBE1D6CF40B;
	unsigned char                                      UnknownData03[0x3];                                       
	class UTimelineComponent*                          TimeLine_BlendCamera;                                     
	float                                              Timeline_Vehicle_Update_Zoom_in_cameraX_4617DA274820636AAC83688C648EE214;
	TEnumAsByte<ETimelineDirection>                    Timeline_Vehicle_Update_Zoom_in__Direction_4617DA274820636AAC83688C648EE214;
	unsigned char                                      UnknownData04[0x3];                                       
	class UTimelineComponent*                          Timeline_Vehicle_Update_Zoom_in;                          
	float                                              Timeline_Vehicle_Update_Zoom_out_cameraX_C9815D554EBF979651AC3BA48613EE7F;
	TEnumAsByte<ETimelineDirection>                    Timeline_Vehicle_Update_Zoom_out__Direction_C9815D554EBF979651AC3BA48613EE7F;
	unsigned char                                      UnknownData05[0x3];                                       
	class UTimelineComponent*                          Timeline_Vehicle_Update_Zoom_out;                         
	float                                              TimeLine_LerpRotator_time_88CF9F274BE419FD7F606D9F8C5776A8;
	TEnumAsByte<ETimelineDirection>                    TimeLine_LerpRotator__Direction_88CF9F274BE419FD7F606D9F8C5776A8;
	unsigned char                                      UnknownData06[0x3];                                       
	class UTimelineComponent*                          TimeLine_LerpRotator;                                     
	TEnumAsByte<ETouchIndex>                           inputFingerIndex;                                         
	unsigned char                                      UnknownData07[0x3];                                       
	float                                              initX;                                                    
	float                                              initY;                                                    
	float                                              tempX;                                                    
	float                                              tempY;                                                    
	bool                                               isCloseUp;                                                
	bool                                               isTickRefitTips;                                          
	unsigned char                                      UnknownData08[0xA];                                       
	struct FTransform                                  tempTransform_ForBlendCameraActor;                        
	struct FTransform                                  initTransform;                                            
	struct FTransform                                  TargetTransform;                                          
	float                                              shortRadius;                                              
	float                                              longRadius;                                               
	class ABP_LobbyRefitCloseUp_C*                     cameraCloseUp;                                            
	struct FVector                                     CenterPoint;                                              
	struct FVector                                     shortVector;                                              
	struct FVector                                     longVector;                                               
	int                                                ellipseRotateDirection;                                   
	int                                                targetCloseUpSlotId;                                      
	bool                                               canAutoPlay;                                              
	unsigned char                                      UnknownData09[0x3];                                       
	float                                              lastAutoPlayTime;                                         
	bool                                               showAllTips;                                              
	unsigned char                                      UnknownData10[0x3];                                       
	float                                              autoPlayInitRotateYaw;                                    
	bool                                               isPlayingUpgradeEffect;                                   
	bool                                               isAutoPlaying;                                            
	bool                                               isResetingCloseUpCamera;                                  
	bool                                               isSwitchCameraEllipse;                                    
	bool                                               isAllMeshLoaded;                                          
	unsigned char                                      UnknownData11[0x3];                                       
	float                                              MeshScale;                                                
	class URefitVehicleHandle*                         vehicleHandle;                                            
	struct FSoftObjectPath                             vehicleGroundMaterialInterface;                           
	unsigned char                                      UnknownData12[0x10];                                      
	int                                                TryTime;                                                  
	bool                                               HightlightSuccess;                                        
	bool                                               NeedCastShadow;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_LobbyRefitVehicle.BP_LobbyRefitVehicle_C");
		return pStaticClass;
	}


	void SetPostProcessSettingsWrap(float Length, bool bIsReverse, bool bIsClosing);
	void HideAllRefitTipsByTipState();
	void HideAllRefitTips();
	void CanAutoPlayLua(bool* Param);
	void CheckRefitTipsFadeLua(float Yaw, bool showAllTips);
	void ShowLoading(bool Show);
	void ResetCameraRotation();
	void CreateDefaultRefitVehicleMesh();
	void HasRefitVehicleDownloaded(bool* HasDownloaded);
	void GetRefitVehicleHandle(int VehicleID);
	void InitSlotSocket(TMap<int, struct FString> slotSocket);
	void TryResetCloseUp();
	void SetCastShadow(bool CastShadow);
	void EnableCameraRotationLag(bool Enable);
	void UpdateLastAutoPlayTime();
	void CheckAutoPlay();
	void TryRotateSceneByTouch(bool* rotated);
	void TryStopAutoPlay();
	struct FTransform GetSlotSocketTransform(int inInt);
	void GetVectorAngle(float* Degree);
	void DestroyFreeCamera();
	float GetYawToMesh(const struct FVector& Location);
	void CheckRefitTipsFade(bool forceShowAll);
	void InterpVelocity(float New, float Old, float* Velocity);
	void UserConstructionScript();
	void TimeLine_LerpRotator__FinishedFunc();
	void TimeLine_LerpRotator__UpdateFunc();
	void TimeLine_LerpPosition__FinishedFunc();
	void TimeLine_LerpPosition__UpdateFunc();
	void Timeline_AutoPlay__FinishedFunc();
	void Timeline_AutoPlay__UpdateFunc();
	void TimeLine_BlendCamera__FinishedFunc();
	void TimeLine_BlendCamera__UpdateFunc();
	void Timeline_Vehicle_Update_Zoom_out__FinishedFunc();
	void Timeline_Vehicle_Update_Zoom_out__UpdateFunc();
	void Timeline_Vehicle_Update_Zoom_in__FinishedFunc();
	void Timeline_Vehicle_Update_Zoom_in__UpdateFunc();
	void ReceiveTick(float* DeltaSeconds);
	void ReceivePossessed(class AController** NewController);
	void SwitchCloseupCameraEllipse(int SlotID);
	void AutoPlay();
	void BlendCameraActor(class USceneComponent* CameraActor, const struct FTransform& toTransform);
	void SwitchCloseUpCameraLinear(int SlotID);
	void OnVehicleUpgradeSuccess();
	void ResetCloseUpCamera();
	void EventOnAllMeshLoad();
	void ShowLoadingForTime(float Time);
	void SetHighLight(float* invincible, float* FreExp, float* Speed);
	void TrySetHilight(float invincible, float Freq, float Speed);
	void LuaBeginPlay();
	void ExecuteUbergraph_BP_LobbyRefitVehicle(int EntryPoint);
};


}

