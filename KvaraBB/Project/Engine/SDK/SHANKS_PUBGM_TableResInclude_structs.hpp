#pragma once


 
namespace SDK
{






struct FAudioVehicle_TabRes
{
	struct FString                                     ID;                                                       
	int                                                MinValue;                                                 
	int                                                MaxValue;                                                 
	int                                                Distance;                                                 
	int                                                IsOpen;                                                   
	int                                                Value;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FCarMusic_TabRes
{
	int                                                ItemId;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     Music5;                                                   
	int                                                Music1Probability;                                        
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     Music3;                                                   
	int                                                Music7Probability;                                        
	unsigned char                                      UnknownData02[0x4];                                       
	struct FString                                     Music2;                                                   
	int                                                Music2Probability;                                        
	unsigned char                                      UnknownData03[0x4];                                       
	struct FString                                     Music1;                                                   
	int                                                Music4Probability;                                        
	int                                                Music5Probability;                                        
	struct FString                                     Music6;                                                   
	struct FString                                     Music7;                                                   
	struct FString                                     Music8;                                                   
	struct FString                                     Music4;                                                   
	int                                                Music8Probability;                                        
	int                                                Music6Probability;                                        
	int                                                Music3Probability;                                        
	unsigned char                                      UnknownData04[0x4];                                       
};



struct FDropConfig_TabRes
{
	int                                                DropPercent3;                                             
	int                                                DropMode9;                                                
	int                                                MonsterID;                                                
	int                                                DropRuleStart7;                                           
	int                                                DropRuleStart2;                                           
	int                                                DropRuleStart3;                                           
	int                                                DropRuleEnd9;                                             
	int                                                DropMode4;                                                
	int                                                DropPercent10;                                            
	int                                                DropPercent7;                                             
	int                                                DropRuleStart5;                                           
	int                                                DropRuleEnd5;                                             
	int                                                DropRuleStart6;                                           
	int                                                DropRuleStart8;                                           
	int                                                DropRuleEnd8;                                             
	int                                                DropMode8;                                                
	int                                                DropRuleEnd7;                                             
	int                                                DropMode6;                                                
	int                                                DropPercent5;                                             
	int                                                DropMode10;                                               
	int                                                DropRuleEnd2;                                             
	int                                                DropRuleEnd3;                                             
	int                                                DropRuleEnd10;                                            
	int                                                DropMode5;                                                
	int                                                DropPercent8;                                             
	int                                                DropPercent6;                                             
	int                                                DropRuleStart9;                                           
	int                                                DropRuleStart10;                                          
	int                                                DropMode7;                                                
	int                                                DropRuleEnd6;                                             
	int                                                DropRuleIDNumber;                                         
	int                                                DropPercent1;                                             
	int                                                DropPercent9;                                             
	int                                                DropMode1;                                                
	struct FString                                     TreasureBoxName;                                          
	int                                                DropPercent4;                                             
	int                                                TreasureBoxType;                                          
	int                                                DropMode2;                                                
	int                                                DropRuleStart1;                                           
	int                                                DropPercent2;                                             
	int                                                DropRuleStart4;                                           
	int                                                DropMode3;                                                
	int                                                DropRuleEnd4;                                             
	int                                                DropRuleEnd1;                                             
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FEvoBaseMapUIMarkTable : public FTableRowBase
{
	int                                                ID;                                                       
	int                                                UIBPSrcID;                                                
	struct FString                                     UIBPSoftPtr;                                              
	struct FString                                     UIDescription;                                            
};



struct FEvoBaseModTableTestTable : public FTableRowBase
{
	int                                                ID;                                                       
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     TestString;                                               
	int                                                TestNumber;                                               
	bool                                               TestBool;                                                 
	unsigned char                                      UnknownData01[0x3];                                       
};



struct FGrenadeSortPriority_TabRes
{
	int                                                ItemId;                                                   
	int                                                GrenadeEnumValue;                                         
	int                                                Priority;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     BPPath;                                                   
	int                                                SwitchOrder;                                              
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     pressedimagepath;                                         
	struct FString                                     ImagePath;                                                
	int                                                countdown;                                                
	int                                                skillindex;                                               
};



struct FItemSpawnDataSub_TabRes
{
	int                                                Weight;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     CategoryFilter;                                           
	int                                                KeyID;                                                    
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     ItemPath;                                                 
	int                                                CountMin;                                                 
	int                                                StackCount;                                               
	int                                                Count;                                                    
	unsigned char                                      UnknownData02[0x4];                                       
	struct FString                                     ValueFilter;                                              
	int                                                CountMax;                                                 
	unsigned char                                      UnknownData03[0x4];                                       
	struct FString                                     ItemTogetherPath;                                         
	struct FString                                     SubCategoryFilter;                                        
};



struct FItemSpawnData_TabRes
{
	struct FString                                     ItemPath;                                                 
	int                                                Weight;                                                   
	int                                                StackCount;                                               
	struct FString                                     ValueFilter;                                              
	int                                                KeyID;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     CategoryFilter;                                           
	int                                                CountMax;                                                 
	int                                                CountMin;                                                 
	struct FString                                     ItemTogetherPath;                                         
	int                                                Count;                                                    
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FItemTag_TabRes
{
	int                                                TagValue;                                                 
	int                                                ItemId;                                                   
	struct FString                                     TagName;                                                  
	int                                                ID;                                                       
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FItem_TabRes
{
	struct FString                                     ItemBigIcon;                                              
	int                                                MaxCount;                                                 
	int                                                BPID;                                                     
	int                                                itemType;                                                 
	bool                                               AutoEquipandDrop;                                         
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                ItemId;                                                   
	bool                                               Consumable;                                               
	unsigned char                                      UnknownData01[0x3];                                       
	struct FString                                     ItemDesc;                                                 
	struct FString                                     ItemSmallIcon;                                            
	struct FString                                     ItemName;                                                 
	struct FString                                     WardrobeTab;                                              
	int                                                ItemSubType;                                              
	bool                                               Equippable;                                               
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              UnitWeight_f;                                             
	unsigned char                                      UnknownData03[0x4];                                       
	struct FString                                     ItemWhiteIcon;                                            
	int                                                ItemQuality;                                              
	int                                                SellTokenType;                                            
	int                                                SellPrice;                                                
	unsigned char                                      UnknownData04[0x4];                                       
	struct FString                                     PickupSound;                                              
	struct FString                                     UnEquipSound;                                             
	struct FString                                     DropSound;                                                
	struct FString                                     EquipSound;                                               
	struct FString                                     UnEquipBank;                                              
	struct FString                                     EquipBank;                                                
	struct FString                                     DropBank;                                                 
	struct FString                                     PickUpBank;                                               
	struct FString                                     KillWhiteIcon;                                            
	bool                                               NeedShare;                                                
	unsigned char                                      UnknownData05[0x3];                                       
	int                                                WeightforOrder;                                           
	struct FString                                     Preview;                                                  
	struct FString                                     ExTime;                                                   
	struct FString                                     JumpUrl;                                                  
	int                                                SourceBookEnable;                                         
	unsigned char                                      UnknownData06[0x4];                                       
	struct FString                                     PickupDesc;                                               
	int                                                WardrobeMainTab;                                          
	int                                                Durability;                                               
	struct FString                                     JumpExchangeUrl;                                          
	int                                                LongDescID;                                               
	int                                                AIFullVaule;                                              
	struct FString                                     ItemSmallIcon2;                                           
	struct FString                                     ItemBigIcon2;                                             
	struct FString                                     BackpackSimple;                                           
	int                                                useType;                                                  
	int                                                Gender;                                                   
	int                                                ArmoryJumpId;                                             
	int                                                CharmValue;                                               
};



struct FMonsterSpawnData_TabRes
{
	struct FString                                     ValueFilter;                                              
	struct FString                                     ItemTogetherPath;                                         
	struct FString                                     MetaData;                                                 
	int                                                Count;                                                    
	int                                                CountMin;                                                 
	int                                                StackCount;                                               
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     CategoryFilter;                                           
	int                                                Weight;                                                   
	int                                                KeyID;                                                    
	struct FString                                     ItemPath;                                                 
	int                                                CountMax;                                                 
	int                                                MonsterID;                                                
};



struct FPawnStateInvisUI_TabRes
{
	struct FString                                     UIClassName;                                              
	TArray<int>                                        InvisPawnState_a;                                         
};



struct FRoleUpgradeTable_TabRes
{
	int                                                Capacity;                                                 
	int                                                Level;                                                    
	float                                              ZombieInjury_f;                                           
	float                                              MovingSpeed_f;                                            
	int                                                Exp;                                                      
};



struct FVehicleMaxHP_TabRes
{
	int                                                HPNum;                                                    
	int                                                VehicleItemID;                                            
	int                                                ID;                                                       
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     EndTime;                                                  
	struct FString                                     ModuleTypeID;                                             
	struct FString                                     StartTime;                                                
};



struct FVehicleSpawn_TabRes
{
	struct FString                                     VehicleType;                                              
	int                                                KeyID;                                                    
	bool                                               SnapFloor;                                                
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                Weight;                                                   
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     Vehicle;                                                  
};



struct FVibrateAssetsConfig_TabRes
{
	int                                                AssetId;                                                  
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     AssetRelativePath;                                        
	struct FString                                     PlayVibrateParam;                                         
	int                                                TriggerEventType;                                         
	int                                                PlayPriority;                                             
	float                                              PlayDuration_f;                                           
	bool                                               bOnlyMatchMainItemType;                                   
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                TriggerMainItemType;                                      
	unsigned char                                      UnknownData02[0x4];                                       
	struct FString                                     TriggerMainItemData;                                      
	int                                                TriggerSubItem1Type;                                      
	unsigned char                                      UnknownData03[0x4];                                       
	struct FString                                     TriggerSubItem1Data;                                      
	int                                                TriggerSubItem2Type;                                      
	unsigned char                                      UnknownData04[0x4];                                       
	struct FString                                     TriggerSubItem2Data;                                      
	int                                                TriggerSubItem3Type;                                      
	unsigned char                                      UnknownData05[0x4];                                       
	struct FString                                     TriggerSubItem3Data;                                      
	int                                                TriggerSubItem4Type;                                      
	unsigned char                                      UnknownData06[0x4];                                       
	struct FString                                     TriggerSubItem4Data;                                      
	int                                                TriggerSubItem5Type;                                      
	unsigned char                                      UnknownData07[0x4];                                       
	struct FString                                     TriggerSubItem5Data;                                      
	int                                                TriggerSubItem6Type;                                      
	unsigned char                                      UnknownData08[0x4];                                       
	struct FString                                     TriggerSubItem6Data;                                      
	int                                                TriggerSubItem7Type;                                      
	unsigned char                                      UnknownData09[0x4];                                       
	struct FString                                     TriggerSubItem7Data;                                      
	int                                                TriggerSubItem8Type;                                      
	unsigned char                                      UnknownData10[0x4];                                       
	struct FString                                     TriggerSubItem8Data;                                      
	int                                                TriggerSubItem9Type;                                      
	unsigned char                                      UnknownData11[0x4];                                       
	struct FString                                     TriggerSubItem9Data;                                      
	int                                                TriggerSubItem10Type;                                     
	unsigned char                                      UnknownData12[0x4];                                       
	struct FString                                     TriggerSubItem10Data;                                     
};



struct FWeaponAttachments_TabRes
{
	int                                                Magazine1ID;                                              
	int                                                Stock2ID;                                                 
	int                                                Lower1ID;                                                 
	int                                                Lower2ID;                                                 
	int                                                Magazine3ID;                                              
	int                                                Stock1ID;                                                 
	int                                                Magazine2ID;                                              
	int                                                Muzzle2ID;                                                
	int                                                Upper1ID;                                                 
	int                                                Upper2ID;                                                 
	int                                                Muzzle1ID;                                                
	int                                                Upper4ID;                                                 
	int                                                KeyID;                                                    
	int                                                Muzzle3ID;                                                
	int                                                Upper3ID;                                                 
	int                                                Upper5ID;                                                 
	int                                                BulletID;                                                 
	int                                                ProposeBulletNum;                                         
	int                                                Lower3ID;                                                 
	int                                                Lower5ID;                                                 
	int                                                Lower4ID;                                                 
	int                                                Upper7ID;                                                 
	int                                                Muzzle5ID;                                                
	int                                                Muzzle6ID;                                                
	int                                                Muzzle4ID;                                                
	int                                                Magazine6ID;                                              
	int                                                Magazine4ID;                                              
	int                                                Magazine5ID;                                              
	int                                                Upper6ID;                                                 
	int                                                AIMaxAttackDist;                                          
	int                                                AIMinAttackDist;                                          
	int                                                Lower6ID;                                                 
	int                                                UpperSide1ID;                                             
};



struct FZombieTreasureBox_TabRes
{
	struct FString                                     BoxPath;                                                  
	int                                                ID;                                                       
	int                                                BoxHealth;                                                
	int                                                TimeToCount;                                              
	int                                                BoxDropPlan;                                              
};

}

