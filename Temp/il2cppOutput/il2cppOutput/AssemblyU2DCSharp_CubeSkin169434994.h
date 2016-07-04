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
// UnityEngine.Material[]
struct MaterialU5BU5D_t3353847197;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CubeSkin
struct  CubeSkin_t169434994  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Renderer CubeSkin::render
	Renderer_t1092684080 * ___render_2;
	// UnityEngine.Material[] CubeSkin::materials
	MaterialU5BU5D_t3353847197* ___materials_3;

public:
	inline static int32_t get_offset_of_render_2() { return static_cast<int32_t>(offsetof(CubeSkin_t169434994, ___render_2)); }
	inline Renderer_t1092684080 * get_render_2() const { return ___render_2; }
	inline Renderer_t1092684080 ** get_address_of_render_2() { return &___render_2; }
	inline void set_render_2(Renderer_t1092684080 * value)
	{
		___render_2 = value;
		Il2CppCodeGenWriteBarrier(&___render_2, value);
	}

	inline static int32_t get_offset_of_materials_3() { return static_cast<int32_t>(offsetof(CubeSkin_t169434994, ___materials_3)); }
	inline MaterialU5BU5D_t3353847197* get_materials_3() const { return ___materials_3; }
	inline MaterialU5BU5D_t3353847197** get_address_of_materials_3() { return &___materials_3; }
	inline void set_materials_3(MaterialU5BU5D_t3353847197* value)
	{
		___materials_3 = value;
		Il2CppCodeGenWriteBarrier(&___materials_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
