#pragma once


 
namespace SDK
{





enum class EImGuiWindowDisplayMode : uint8_t
{
	EImGuiWindowDisplayMode__Embedded = 0,
	EImGuiWindowDisplayMode__Standalone = 1,
	EImGuiWindowDisplayMode__EImGuiWindowDisplayMode_MAX = 2
};









struct FPropertyItemData
{
	struct FString                                     PropertyName;                                             
	class UEditableTextBox*                            EditableTextBox;                                          
	class UWidget*                                     ContainerWidget;                                          
	class UButton*                                     NameButton;                                               
};

}

