#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.MeshRenderer
struct MeshRenderer_t1217738301;
// UnityEngine.Material
struct Material_t1886596500;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PrimitivePlus.PrimitivePlusMaterial
struct  PrimitivePlusMaterial_t2347675427  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.MeshRenderer PrimitivePlus.PrimitivePlusMaterial::m_Renderer
	MeshRenderer_t1217738301 * ___m_Renderer_2;
	// UnityEngine.Material PrimitivePlus.PrimitivePlusMaterial::m_Material
	Material_t1886596500 * ___m_Material_3;

public:
	inline static int32_t get_offset_of_m_Renderer_2() { return static_cast<int32_t>(offsetof(PrimitivePlusMaterial_t2347675427, ___m_Renderer_2)); }
	inline MeshRenderer_t1217738301 * get_m_Renderer_2() const { return ___m_Renderer_2; }
	inline MeshRenderer_t1217738301 ** get_address_of_m_Renderer_2() { return &___m_Renderer_2; }
	inline void set_m_Renderer_2(MeshRenderer_t1217738301 * value)
	{
		___m_Renderer_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Renderer_2, value);
	}

	inline static int32_t get_offset_of_m_Material_3() { return static_cast<int32_t>(offsetof(PrimitivePlusMaterial_t2347675427, ___m_Material_3)); }
	inline Material_t1886596500 * get_m_Material_3() const { return ___m_Material_3; }
	inline Material_t1886596500 ** get_address_of_m_Material_3() { return &___m_Material_3; }
	inline void set_m_Material_3(Material_t1886596500 * value)
	{
		___m_Material_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Material_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
