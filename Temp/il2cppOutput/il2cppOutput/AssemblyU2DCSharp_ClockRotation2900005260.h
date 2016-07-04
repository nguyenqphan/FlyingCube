#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ClockRotation
struct  ClockRotation_t2900005260  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform ClockRotation::trans
	Transform_t284553113 * ___trans_2;

public:
	inline static int32_t get_offset_of_trans_2() { return static_cast<int32_t>(offsetof(ClockRotation_t2900005260, ___trans_2)); }
	inline Transform_t284553113 * get_trans_2() const { return ___trans_2; }
	inline Transform_t284553113 ** get_address_of_trans_2() { return &___trans_2; }
	inline void set_trans_2(Transform_t284553113 * value)
	{
		___trans_2 = value;
		Il2CppCodeGenWriteBarrier(&___trans_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
