#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UI
struct UI_t2708;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Singleton`1<UI>
struct  Singleton_1_t252818101  : public MonoBehaviour_t3012272455
{
public:

public:
};

struct Singleton_1_t252818101_StaticFields
{
public:
	// T Singleton`1::_instance
	UI_t2708 * ____instance_2;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(Singleton_1_t252818101_StaticFields, ____instance_2)); }
	inline UI_t2708 * get__instance_2() const { return ____instance_2; }
	inline UI_t2708 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(UI_t2708 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
