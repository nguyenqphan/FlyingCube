#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t729687770;
// UnityEngine.UI.Button
struct Button_t990034267;
// Shop/PlayerCollection[]
struct PlayerCollectionU5BU5D_t807614118;
// UpdateScore
struct UpdateScore_t1082839849;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Shop
struct  Shop_t2576150  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 Shop::stateIndexSB
	int32_t ___stateIndexSB_2;
	// System.Int32 Shop::stateIndexSC
	int32_t ___stateIndexSC_3;
	// UnityEngine.GameObject Shop::content
	GameObject_t4012695102 * ___content_4;
	// UnityEngine.UI.Button[] Shop::buttons
	ButtonU5BU5D_t729687770* ___buttons_5;
	// UnityEngine.UI.Button Shop::curButton
	Button_t990034267 * ___curButton_6;
	// Shop/PlayerCollection[] Shop::playerCollections
	PlayerCollectionU5BU5D_t807614118* ___playerCollections_7;
	// System.Int32 Shop::buttonIndex
	int32_t ___buttonIndex_8;
	// System.Int32 Shop::tempIndex
	int32_t ___tempIndex_9;
	// System.Int32 Shop::shopIndex
	int32_t ___shopIndex_10;
	// UpdateScore Shop::updateScore
	UpdateScore_t1082839849 * ___updateScore_11;

public:
	inline static int32_t get_offset_of_stateIndexSB_2() { return static_cast<int32_t>(offsetof(Shop_t2576150, ___stateIndexSB_2)); }
	inline int32_t get_stateIndexSB_2() const { return ___stateIndexSB_2; }
	inline int32_t* get_address_of_stateIndexSB_2() { return &___stateIndexSB_2; }
	inline void set_stateIndexSB_2(int32_t value)
	{
		___stateIndexSB_2 = value;
	}

	inline static int32_t get_offset_of_stateIndexSC_3() { return static_cast<int32_t>(offsetof(Shop_t2576150, ___stateIndexSC_3)); }
	inline int32_t get_stateIndexSC_3() const { return ___stateIndexSC_3; }
	inline int32_t* get_address_of_stateIndexSC_3() { return &___stateIndexSC_3; }
	inline void set_stateIndexSC_3(int32_t value)
	{
		___stateIndexSC_3 = value;
	}

	inline static int32_t get_offset_of_content_4() { return static_cast<int32_t>(offsetof(Shop_t2576150, ___content_4)); }
	inline GameObject_t4012695102 * get_content_4() const { return ___content_4; }
	inline GameObject_t4012695102 ** get_address_of_content_4() { return &___content_4; }
	inline void set_content_4(GameObject_t4012695102 * value)
	{
		___content_4 = value;
		Il2CppCodeGenWriteBarrier(&___content_4, value);
	}

	inline static int32_t get_offset_of_buttons_5() { return static_cast<int32_t>(offsetof(Shop_t2576150, ___buttons_5)); }
	inline ButtonU5BU5D_t729687770* get_buttons_5() const { return ___buttons_5; }
	inline ButtonU5BU5D_t729687770** get_address_of_buttons_5() { return &___buttons_5; }
	inline void set_buttons_5(ButtonU5BU5D_t729687770* value)
	{
		___buttons_5 = value;
		Il2CppCodeGenWriteBarrier(&___buttons_5, value);
	}

	inline static int32_t get_offset_of_curButton_6() { return static_cast<int32_t>(offsetof(Shop_t2576150, ___curButton_6)); }
	inline Button_t990034267 * get_curButton_6() const { return ___curButton_6; }
	inline Button_t990034267 ** get_address_of_curButton_6() { return &___curButton_6; }
	inline void set_curButton_6(Button_t990034267 * value)
	{
		___curButton_6 = value;
		Il2CppCodeGenWriteBarrier(&___curButton_6, value);
	}

	inline static int32_t get_offset_of_playerCollections_7() { return static_cast<int32_t>(offsetof(Shop_t2576150, ___playerCollections_7)); }
	inline PlayerCollectionU5BU5D_t807614118* get_playerCollections_7() const { return ___playerCollections_7; }
	inline PlayerCollectionU5BU5D_t807614118** get_address_of_playerCollections_7() { return &___playerCollections_7; }
	inline void set_playerCollections_7(PlayerCollectionU5BU5D_t807614118* value)
	{
		___playerCollections_7 = value;
		Il2CppCodeGenWriteBarrier(&___playerCollections_7, value);
	}

	inline static int32_t get_offset_of_buttonIndex_8() { return static_cast<int32_t>(offsetof(Shop_t2576150, ___buttonIndex_8)); }
	inline int32_t get_buttonIndex_8() const { return ___buttonIndex_8; }
	inline int32_t* get_address_of_buttonIndex_8() { return &___buttonIndex_8; }
	inline void set_buttonIndex_8(int32_t value)
	{
		___buttonIndex_8 = value;
	}

	inline static int32_t get_offset_of_tempIndex_9() { return static_cast<int32_t>(offsetof(Shop_t2576150, ___tempIndex_9)); }
	inline int32_t get_tempIndex_9() const { return ___tempIndex_9; }
	inline int32_t* get_address_of_tempIndex_9() { return &___tempIndex_9; }
	inline void set_tempIndex_9(int32_t value)
	{
		___tempIndex_9 = value;
	}

	inline static int32_t get_offset_of_shopIndex_10() { return static_cast<int32_t>(offsetof(Shop_t2576150, ___shopIndex_10)); }
	inline int32_t get_shopIndex_10() const { return ___shopIndex_10; }
	inline int32_t* get_address_of_shopIndex_10() { return &___shopIndex_10; }
	inline void set_shopIndex_10(int32_t value)
	{
		___shopIndex_10 = value;
	}

	inline static int32_t get_offset_of_updateScore_11() { return static_cast<int32_t>(offsetof(Shop_t2576150, ___updateScore_11)); }
	inline UpdateScore_t1082839849 * get_updateScore_11() const { return ___updateScore_11; }
	inline UpdateScore_t1082839849 ** get_address_of_updateScore_11() { return &___updateScore_11; }
	inline void set_updateScore_11(UpdateScore_t1082839849 * value)
	{
		___updateScore_11 = value;
		Il2CppCodeGenWriteBarrier(&___updateScore_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
