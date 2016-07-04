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
// UnityEngine.Transform
struct Transform_t284553113;
// UpdateScore
struct UpdateScore_t1082839849;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gold
struct  Gold_t2225280  : public MonoBehaviour_t3012272455
{
public:
	// Spawner Gold::spawner
	Spawner_t3948062024 * ___spawner_2;
	// UnityEngine.Transform Gold::trans
	Transform_t284553113 * ___trans_3;
	// UpdateScore Gold::updateScore
	UpdateScore_t1082839849 * ___updateScore_4;

public:
	inline static int32_t get_offset_of_spawner_2() { return static_cast<int32_t>(offsetof(Gold_t2225280, ___spawner_2)); }
	inline Spawner_t3948062024 * get_spawner_2() const { return ___spawner_2; }
	inline Spawner_t3948062024 ** get_address_of_spawner_2() { return &___spawner_2; }
	inline void set_spawner_2(Spawner_t3948062024 * value)
	{
		___spawner_2 = value;
		Il2CppCodeGenWriteBarrier(&___spawner_2, value);
	}

	inline static int32_t get_offset_of_trans_3() { return static_cast<int32_t>(offsetof(Gold_t2225280, ___trans_3)); }
	inline Transform_t284553113 * get_trans_3() const { return ___trans_3; }
	inline Transform_t284553113 ** get_address_of_trans_3() { return &___trans_3; }
	inline void set_trans_3(Transform_t284553113 * value)
	{
		___trans_3 = value;
		Il2CppCodeGenWriteBarrier(&___trans_3, value);
	}

	inline static int32_t get_offset_of_updateScore_4() { return static_cast<int32_t>(offsetof(Gold_t2225280, ___updateScore_4)); }
	inline UpdateScore_t1082839849 * get_updateScore_4() const { return ___updateScore_4; }
	inline UpdateScore_t1082839849 ** get_address_of_updateScore_4() { return &___updateScore_4; }
	inline void set_updateScore_4(UpdateScore_t1082839849 * value)
	{
		___updateScore_4 = value;
		Il2CppCodeGenWriteBarrier(&___updateScore_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
