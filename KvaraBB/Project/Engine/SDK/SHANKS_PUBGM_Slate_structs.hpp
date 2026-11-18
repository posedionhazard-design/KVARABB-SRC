#pragma once


 
namespace SDK
{





enum class ETextFlowDirection : uint8_t
{
	ETextFlowDirection__Auto       = 0,
	ETextFlowDirection__LeftToRight = 1,
	ETextFlowDirection__RightToLeft = 2,
	ETextFlowDirection__ETextFlowDirection_MAX = 3
};



enum class ETextWrappingPolicy : uint8_t
{
	ETextWrappingPolicy__DefaultWrapping = 0,
	ETextWrappingPolicy__AllowPerCharacterWrapping = 1,
	ETextWrappingPolicy__AllowPerWordHyphenWrapping = 2,
	ETextWrappingPolicy__ETextWrappingPolicy_MAX = 3
};



enum class ETextVerticalJustify : uint8_t
{
	ETextVerticalJustify__Top      = 0,
	ETextVerticalJustify__Middle   = 1,
	ETextVerticalJustify__Down     = 2,
	ETextVerticalJustify__ETextVerticalJustify_MAX = 3
};



enum class ETextJustify : uint8_t
{
	ETextJustify__Left             = 0,
	ETextJustify__Center           = 1,
	ETextJustify__Right            = 2,
	ETextJustify__ETextJustify_MAX = 3
};



enum class EJoystickOperatingMode : uint8_t
{
	JSNormal                       = 0,
	JSEightDirection               = 1,
	JSEasyGoStraight               = 2,
	EJoystickOperatingMode_MAX     = 3
};



enum class EDescendantScrollDestination : uint8_t
{
	EDescendantScrollDestination__IntoView = 0,
	EDescendantScrollDestination__TopOrLeft = 1,
	EDescendantScrollDestination__Center = 2,
	EDescendantScrollDestination__EDescendantScrollDestination_MAX = 3
};



enum class ETableViewMode : uint8_t
{
	ETableViewMode__List           = 0,
	ETableViewMode__Tile           = 1,
	ETableViewMode__Tree           = 2,
	ETableViewMode__ETableViewMode_MAX = 3
};



enum class ESelectionMode : uint8_t
{
	ESelectionMode__None           = 0,
	ESelectionMode__Single         = 1,
	ESelectionMode__SingleToggle   = 2,
	ESelectionMode__Multi          = 3,
	ESelectionMode__ESelectionMode_MAX = 4
};



enum class EProgressBarFillType : uint8_t
{
	EProgressBarFillType__LeftToRight = 0,
	EProgressBarFillType__RightToLeft = 1,
	EProgressBarFillType__FillFromCenter = 2,
	EProgressBarFillType__TopToBottom = 3,
	EProgressBarFillType__BottomToTop = 4,
	EProgressBarFillType__EProgressBarFillType_MAX = 5
};



enum class EStretch : uint8_t
{
	EStretch__None                 = 0,
	EStretch__Fill                 = 1,
	EStretch__ScaleToFit           = 2,
	EStretch__ScaleToFitX          = 3,
	EStretch__ScaleToFitY          = 4,
	EStretch__ScaleToFill          = 5,
	EStretch__ScaleBySafeZone      = 6,
	EStretch__UserSpecified        = 7,
	EStretch__EStretch_MAX         = 8
};



enum class EStretchDirection : uint8_t
{
	EStretchDirection__Both        = 0,
	EStretchDirection__DownOnly    = 1,
	EStretchDirection__UpOnly      = 2,
	EStretchDirection__EStretchDirection_MAX = 3
};



enum class EListItemAlignment : uint8_t
{
	EListItemAlignment__EvenlyDistributed = 0,
	EListItemAlignment__EvenlySize = 1,
	EListItemAlignment__EvenlyWide = 2,
	EListItemAlignment__LeftAligned = 3,
	EListItemAlignment__RightAligned = 4,
	EListItemAlignment__CenterAligned = 5,
	EListItemAlignment__Fill       = 6,
	EListItemAlignment__EListItemAlignment_MAX = 7
};



enum class EJoystickIsInside : uint8_t
{
	EJII_LeftAndVisualSize         = 0,
	EJII_VisualSize                = 1,
	EJII_DynamicSize               = 2,
	EJII_MAX                       = 3
};



enum class EMultipleKeyBindingIndex : uint8_t
{
	EMultipleKeyBindingIndex__Primary = 0,
	EMultipleKeyBindingIndex__Secondary = 1,
	EMultipleKeyBindingIndex__NumChords = 2,
	EMultipleKeyBindingIndex__EMultipleKeyBindingIndex_MAX = 3
};









struct FInputChord
{
	struct FKey                                        Key;                                                      
	unsigned char                                      bShift : 1;                                               
	unsigned char                                      bCtrl : 1;                                                
	unsigned char                                      bAlt : 1;                                                 
	unsigned char                                      bCmd : 1;                                                 
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FAnchors
{
	struct FVector2D                                   Minimum;                                                  
	struct FVector2D                                   Maximum;                                                  
};

}

