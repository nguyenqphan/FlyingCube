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

// CameraMove
struct  CameraMove_t4276106422  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform CameraMove::thisTransform
	Transform_t284553113 * ___thisTransform_2;
	// System.Boolean CameraMove::isPlaying
	bool ___isPlaying_3;
	// System.Single CameraMove::speed
	float ___speed_4;

public:
	inline static int32_t get_offset_of_thisTransform_2() { return static_cast<int32_t>(offsetof(CameraMove_t4276106422, ___thisTransform_2)); }
	inline Transform_t284553113 * get_thisTransform_2() const { return ___thisTransform_2; }
	inline Transform_t284553113 ** get_address_of_thisTransform_2() { return &___thisTransform_2; }
	inline void set_thisTransform_2(Transform_t284553113 * value)
	{
		___thisTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___thisTransform_2, value);
	}

	inline static int32_t get_offset_of_isPlaying_3() { return static_cast<int32_t>(offsetof(CameraMove_t4276106422, ___isPlaying_3)); }
	inline bool get_isPlaying_3() const { return ___isPlaying_3; }
	inline bool* get_address_of_isPlaying_3() { return &___isPlaying_3; }
	inline void set_isPlaying_3(bool value)
	{
		___isPlaying_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(CameraMove_t4276106422, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
