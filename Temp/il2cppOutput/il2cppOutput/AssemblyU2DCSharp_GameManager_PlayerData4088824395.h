#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager/PlayerData
struct  PlayerData_t4088824395  : public Il2CppObject
{
public:
	// System.String GameManager/PlayerData::name
	String_t* ___name_0;
	// System.Int32 GameManager/PlayerData::playerIndex
	int32_t ___playerIndex_1;
	// System.Int32 GameManager/PlayerData::price
	int32_t ___price_2;
	// System.Int32 GameManager/PlayerData::playerAvailability
	int32_t ___playerAvailability_3;
	// System.Int32 GameManager/PlayerData::playerAvailabilitySB
	int32_t ___playerAvailabilitySB_4;
	// System.Int32 GameManager/PlayerData::playerAvailabilitySC
	int32_t ___playerAvailabilitySC_5;
	// System.Int32 GameManager/PlayerData::amountDiamond
	int32_t ___amountDiamond_6;
	// System.Int32 GameManager/PlayerData::highestScore
	int32_t ___highestScore_7;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(PlayerData_t4088824395, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_playerIndex_1() { return static_cast<int32_t>(offsetof(PlayerData_t4088824395, ___playerIndex_1)); }
	inline int32_t get_playerIndex_1() const { return ___playerIndex_1; }
	inline int32_t* get_address_of_playerIndex_1() { return &___playerIndex_1; }
	inline void set_playerIndex_1(int32_t value)
	{
		___playerIndex_1 = value;
	}

	inline static int32_t get_offset_of_price_2() { return static_cast<int32_t>(offsetof(PlayerData_t4088824395, ___price_2)); }
	inline int32_t get_price_2() const { return ___price_2; }
	inline int32_t* get_address_of_price_2() { return &___price_2; }
	inline void set_price_2(int32_t value)
	{
		___price_2 = value;
	}

	inline static int32_t get_offset_of_playerAvailability_3() { return static_cast<int32_t>(offsetof(PlayerData_t4088824395, ___playerAvailability_3)); }
	inline int32_t get_playerAvailability_3() const { return ___playerAvailability_3; }
	inline int32_t* get_address_of_playerAvailability_3() { return &___playerAvailability_3; }
	inline void set_playerAvailability_3(int32_t value)
	{
		___playerAvailability_3 = value;
	}

	inline static int32_t get_offset_of_playerAvailabilitySB_4() { return static_cast<int32_t>(offsetof(PlayerData_t4088824395, ___playerAvailabilitySB_4)); }
	inline int32_t get_playerAvailabilitySB_4() const { return ___playerAvailabilitySB_4; }
	inline int32_t* get_address_of_playerAvailabilitySB_4() { return &___playerAvailabilitySB_4; }
	inline void set_playerAvailabilitySB_4(int32_t value)
	{
		___playerAvailabilitySB_4 = value;
	}

	inline static int32_t get_offset_of_playerAvailabilitySC_5() { return static_cast<int32_t>(offsetof(PlayerData_t4088824395, ___playerAvailabilitySC_5)); }
	inline int32_t get_playerAvailabilitySC_5() const { return ___playerAvailabilitySC_5; }
	inline int32_t* get_address_of_playerAvailabilitySC_5() { return &___playerAvailabilitySC_5; }
	inline void set_playerAvailabilitySC_5(int32_t value)
	{
		___playerAvailabilitySC_5 = value;
	}

	inline static int32_t get_offset_of_amountDiamond_6() { return static_cast<int32_t>(offsetof(PlayerData_t4088824395, ___amountDiamond_6)); }
	inline int32_t get_amountDiamond_6() const { return ___amountDiamond_6; }
	inline int32_t* get_address_of_amountDiamond_6() { return &___amountDiamond_6; }
	inline void set_amountDiamond_6(int32_t value)
	{
		___amountDiamond_6 = value;
	}

	inline static int32_t get_offset_of_highestScore_7() { return static_cast<int32_t>(offsetof(PlayerData_t4088824395, ___highestScore_7)); }
	inline int32_t get_highestScore_7() const { return ___highestScore_7; }
	inline int32_t* get_address_of_highestScore_7() { return &___highestScore_7; }
	inline void set_highestScore_7(int32_t value)
	{
		___highestScore_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
