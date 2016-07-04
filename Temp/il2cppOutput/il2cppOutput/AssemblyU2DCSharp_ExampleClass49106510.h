#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Renderer
struct Renderer_t1092684080;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExampleClass
struct  ExampleClass_t49106510  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Color ExampleClass::colorStart
	Color_t1588175760  ___colorStart_2;
	// UnityEngine.Color ExampleClass::colorEnd
	Color_t1588175760  ___colorEnd_3;
	// System.Single ExampleClass::duration
	float ___duration_4;
	// UnityEngine.Renderer ExampleClass::rend
	Renderer_t1092684080 * ___rend_5;

public:
	inline static int32_t get_offset_of_colorStart_2() { return static_cast<int32_t>(offsetof(ExampleClass_t49106510, ___colorStart_2)); }
	inline Color_t1588175760  get_colorStart_2() const { return ___colorStart_2; }
	inline Color_t1588175760 * get_address_of_colorStart_2() { return &___colorStart_2; }
	inline void set_colorStart_2(Color_t1588175760  value)
	{
		___colorStart_2 = value;
	}

	inline static int32_t get_offset_of_colorEnd_3() { return static_cast<int32_t>(offsetof(ExampleClass_t49106510, ___colorEnd_3)); }
	inline Color_t1588175760  get_colorEnd_3() const { return ___colorEnd_3; }
	inline Color_t1588175760 * get_address_of_colorEnd_3() { return &___colorEnd_3; }
	inline void set_colorEnd_3(Color_t1588175760  value)
	{
		___colorEnd_3 = value;
	}

	inline static int32_t get_offset_of_duration_4() { return static_cast<int32_t>(offsetof(ExampleClass_t49106510, ___duration_4)); }
	inline float get_duration_4() const { return ___duration_4; }
	inline float* get_address_of_duration_4() { return &___duration_4; }
	inline void set_duration_4(float value)
	{
		___duration_4 = value;
	}

	inline static int32_t get_offset_of_rend_5() { return static_cast<int32_t>(offsetof(ExampleClass_t49106510, ___rend_5)); }
	inline Renderer_t1092684080 * get_rend_5() const { return ___rend_5; }
	inline Renderer_t1092684080 ** get_address_of_rend_5() { return &___rend_5; }
	inline void set_rend_5(Renderer_t1092684080 * value)
	{
		___rend_5 = value;
		Il2CppCodeGenWriteBarrier(&___rend_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
