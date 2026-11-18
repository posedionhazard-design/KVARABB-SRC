#pragma once


 
namespace SDK
{





enum class EBlockyEditorShortcutKey : uint8_t
{
	EBlockyEditorShortcutKey__None = 0,
	EBlockyEditorShortcutKey__Clone = 1,
	EBlockyEditorShortcutKey__Copy = 2,
	EBlockyEditorShortcutKey__Cut  = 3,
	EBlockyEditorShortcutKey__Paste = 4,
	EBlockyEditorShortcutKey__Undo = 5,
	EBlockyEditorShortcutKey__Redo = 6,
	EBlockyEditorShortcutKey__Delete = 7,
	EBlockyEditorShortcutKey__Search = 8,
	EBlockyEditorShortcutKey__Save = 9,
	EBlockyEditorShortcutKey__Log  = 10,
	EBlockyEditorShortcutKey__Escape = 11,
	EBlockyEditorShortcutKey__EBlockyEditorShortcutKey_MAX = 12
};



enum class ESearchResultVisibleType : uint8_t
{
	ESearchResultVisibleType__SRVT_ShowAll = 0,
	ESearchResultVisibleType__SRVT_OnlyBlocks = 1,
	ESearchResultVisibleType__SRVT_OnlyGraphs = 2,
	ESearchResultVisibleType__SRVT_OnlyPresets = 3,
	ESearchResultVisibleType__SRVT_MAX = 4
};



enum class EBLOCKYLUA_AUTO_SCROLL_TYPE : uint8_t
{
	BLOCKYLUA_AUTO_SCROLL_TYPE__LEFT_RIGHT = 0,
	BLOCKYLUA_AUTO_SCROLL_TYPE__PING_PONG = 1,
	BLOCKYLUA_AUTO_SCROLL_TYPE__BLOCKYLUA_AUTO_SCROLL_MAX = 2
};









struct FIntArrayWrapper
{
	TArray<int>                                        Values;                                                   
};



struct FSlotData
{
	class UBlockBase*                                  LinkedSlotHost;                                           
	unsigned char                                      UnknownData00[0x18];                                      
};

}

