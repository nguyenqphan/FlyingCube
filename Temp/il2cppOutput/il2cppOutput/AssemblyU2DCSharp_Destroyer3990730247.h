#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spawner
struct Spawner_t3948062024;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Destroyer
struct  Destroyer_t3990730247  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean Destroyer::isCollied
	bool ___isCollied_2;
	// Spawner Destroyer::spanwner
	Spawner_t3948062024 * ___spanwner_3;

public:
	inline static int32_t get_offset_of_isCollied_2() { return static_cast<int32_t>(offsetof(Destroyer_t3990730247, ___isCollied_2)); }
	inline bool get_isCollied_2() const { return ___isCollied_2; }
	inline bool* get_address_of_isCollied_2() { return &___isCollied_2; }
	inline void set_isCollied_2(bool value)
	{
		___isCollied_2 = value;
	}

	inline static int32_t get_offset_of_spanwner_3() { return static_cast<int32_t>(offsetof(Destroyer_t3990730247, ___spanwner_3)); }
	inline Spawner_t3948062024 * get_spanwner_3() const { return ___spanwner_3; }
	inline Spawner_t3948062024 ** get_address_of_spanwner_3() { return &___spanwner_3; }
	inline void set_spanwner_3(Spawner_t3948062024 * value)
	{
		___spanwner_3 = value;
		Il2CppCodeGenWriteBarrier(&___spanwner_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
