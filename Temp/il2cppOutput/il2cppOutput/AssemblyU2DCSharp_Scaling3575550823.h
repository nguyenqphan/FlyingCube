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

// Scaling
struct  Scaling_t3575550823  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform Scaling::trans
	Transform_t284553113 * ___trans_2;
	// System.Single Scaling::startScale
	float ___startScale_3;
	// System.Single Scaling::newScale
	float ___newScale_4;
	// System.Single Scaling::scale
	float ___scale_5;
	// System.Single Scaling::scalingSpeed
	float ___scalingSpeed_6;
	// System.Boolean Scaling::isBigger
	bool ___isBigger_7;

public:
	inline static int32_t get_offset_of_trans_2() { return static_cast<int32_t>(offsetof(Scaling_t3575550823, ___trans_2)); }
	inline Transform_t284553113 * get_trans_2() const { return ___trans_2; }
	inline Transform_t284553113 ** get_address_of_trans_2() { return &___trans_2; }
	inline void set_trans_2(Transform_t284553113 * value)
	{
		___trans_2 = value;
		Il2CppCodeGenWriteBarrier(&___trans_2, value);
	}

	inline static int32_t get_offset_of_startScale_3() { return static_cast<int32_t>(offsetof(Scaling_t3575550823, ___startScale_3)); }
	inline float get_startScale_3() const { return ___startScale_3; }
	inline float* get_address_of_startScale_3() { return &___startScale_3; }
	inline void set_startScale_3(float value)
	{
		___startScale_3 = value;
	}

	inline static int32_t get_offset_of_newScale_4() { return static_cast<int32_t>(offsetof(Scaling_t3575550823, ___newScale_4)); }
	inline float get_newScale_4() const { return ___newScale_4; }
	inline float* get_address_of_newScale_4() { return &___newScale_4; }
	inline void set_newScale_4(float value)
	{
		___newScale_4 = value;
	}

	inline static int32_t get_offset_of_scale_5() { return static_cast<int32_t>(offsetof(Scaling_t3575550823, ___scale_5)); }
	inline float get_scale_5() const { return ___scale_5; }
	inline float* get_address_of_scale_5() { return &___scale_5; }
	inline void set_scale_5(float value)
	{
		___scale_5 = value;
	}

	inline static int32_t get_offset_of_scalingSpeed_6() { return static_cast<int32_t>(offsetof(Scaling_t3575550823, ___scalingSpeed_6)); }
	inline float get_scalingSpeed_6() const { return ___scalingSpeed_6; }
	inline float* get_address_of_scalingSpeed_6() { return &___scalingSpeed_6; }
	inline void set_scalingSpeed_6(float value)
	{
		___scalingSpeed_6 = value;
	}

	inline static int32_t get_offset_of_isBigger_7() { return static_cast<int32_t>(offsetof(Scaling_t3575550823, ___isBigger_7)); }
	inline bool get_isBigger_7() const { return ___isBigger_7; }
	inline bool* get_address_of_isBigger_7() { return &___isBigger_7; }
	inline void set_isBigger_7(bool value)
	{
		___isBigger_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
