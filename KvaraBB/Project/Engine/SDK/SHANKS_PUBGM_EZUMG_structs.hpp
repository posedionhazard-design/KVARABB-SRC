#pragma once


 
namespace SDK
{





enum class EEzItemState : uint8_t
{
	EEzItemState__Normal           = 0,
	EEzItemState__Selected         = 1,
	EEzItemState__Disabled         = 2,
	EEzItemState__EEzItemState_MAX = 3
};



enum class EEzSelectionMode : uint8_t
{
	EEzSelectionMode__None         = 0,
	EEzSelectionMode__Single       = 1,
	EEzSelectionMode__SingleToggle = 2,
	EEzSelectionMode__Multi        = 3,
	EEzSelectionMode__EEzSelectionMode_MAX = 4
};



enum class ESectorSizeRule : uint8_t
{
	ESectorSizeRule__Fixed         = 0,
	ESectorSizeRule__Fill          = 1,
	ESectorSizeRule__ESectorSizeRule_MAX = 2
};



enum class ERadialArrangement : uint8_t
{
	ERadialArrangement__Default    = 0,
	ERadialArrangement__AlignFirst = 1,
	ERadialArrangement__AlignCenter = 2,
	ERadialArrangement__ERadialArrangement_MAX = 3
};









struct FEnhancedButtonConfig
{
	float                                              TapThreshold;                                             
	float                                              LongPressThreshold;                                       
	float                                              DragThreshold;                                            
	float                                              SwipeMinDistance;                                         
};



struct FInputActionEvent
{
	int                                                PointerIndex;                                             
	float                                              HeldDuration;                                             
	struct FVector2D                                   Position;                                                 
	struct FVector2D                                   Delta;                                                    
};

}

