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
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Shop/PlayerCollection
struct  PlayerCollection_t487785599  : public Il2CppObject
{
public:
	// System.String Shop/PlayerCollection::nameOfPlayer
	String_t* ___nameOfPlayer_0;
	// System.Int32 Shop/PlayerCollection::priceOfPlayer
	int32_t ___priceOfPlayer_1;
	// System.Boolean Shop/PlayerCollection::isUnlocked
	bool ___isUnlocked_2;
	// UnityEngine.GameObject Shop/PlayerCollection::lockImage
	GameObject_t4012695102 * ___lockImage_3;
	// UnityEngine.GameObject Shop/PlayerCollection::checkImage
	GameObject_t4012695102 * ___checkImage_4;

public:
	inline static int32_t get_offset_of_nameOfPlayer_0() { return static_cast<int32_t>(offsetof(PlayerCollection_t487785599, ___nameOfPlayer_0)); }
	inline String_t* get_nameOfPlayer_0() const { return ___nameOfPlayer_0; }
	inline String_t** get_address_of_nameOfPlayer_0() { return &___nameOfPlayer_0; }
	inline void set_nameOfPlayer_0(String_t* value)
	{
		___nameOfPlayer_0 = value;
		Il2CppCodeGenWriteBarrier(&___nameOfPlayer_0, value);
	}

	inline static int32_t get_offset_of_priceOfPlayer_1() { return static_cast<int32_t>(offsetof(PlayerCollection_t487785599, ___priceOfPlayer_1)); }
	inline int32_t get_priceOfPlayer_1() const { return ___priceOfPlayer_1; }
	inline int32_t* get_address_of_priceOfPlayer_1() { return &___priceOfPlayer_1; }
	inline void set_priceOfPlayer_1(int32_t value)
	{
		___priceOfPlayer_1 = value;
	}

	inline static int32_t get_offset_of_isUnlocked_2() { return static_cast<int32_t>(offsetof(PlayerCollection_t487785599, ___isUnlocked_2)); }
	inline bool get_isUnlocked_2() const { return ___isUnlocked_2; }
	inline bool* get_address_of_isUnlocked_2() { return &___isUnlocked_2; }
	inline void set_isUnlocked_2(bool value)
	{
		___isUnlocked_2 = value;
	}

	inline static int32_t get_offset_of_lockImage_3() { return static_cast<int32_t>(offsetof(PlayerCollection_t487785599, ___lockImage_3)); }
	inline GameObject_t4012695102 * get_lockImage_3() const { return ___lockImage_3; }
	inline GameObject_t4012695102 ** get_address_of_lockImage_3() { return &___lockImage_3; }
	inline void set_lockImage_3(GameObject_t4012695102 * value)
	{
		___lockImage_3 = value;
		Il2CppCodeGenWriteBarrier(&___lockImage_3, value);
	}

	inline static int32_t get_offset_of_checkImage_4() { return static_cast<int32_t>(offsetof(PlayerCollection_t487785599, ___checkImage_4)); }
	inline GameObject_t4012695102 * get_checkImage_4() const { return ___checkImage_4; }
	inline GameObject_t4012695102 ** get_address_of_checkImage_4() { return &___checkImage_4; }
	inline void set_checkImage_4(GameObject_t4012695102 * value)
	{
		___checkImage_4 = value;
		Il2CppCodeGenWriteBarrier(&___checkImage_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
