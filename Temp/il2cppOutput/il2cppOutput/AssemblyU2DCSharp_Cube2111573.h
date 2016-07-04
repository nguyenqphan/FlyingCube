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

// Cube
struct  Cube_t2111573  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform Cube::cubeTrans
	Transform_t284553113 * ___cubeTrans_2;
	// System.Single Cube::startingY
	float ___startingY_3;
	// System.Single Cube::newY
	float ___newY_4;
	// System.Single Cube::speed
	float ___speed_5;
	// System.Single Cube::direction
	float ___direction_6;
	// System.Boolean Cube::isMoving
	bool ___isMoving_7;

public:
	inline static int32_t get_offset_of_cubeTrans_2() { return static_cast<int32_t>(offsetof(Cube_t2111573, ___cubeTrans_2)); }
	inline Transform_t284553113 * get_cubeTrans_2() const { return ___cubeTrans_2; }
	inline Transform_t284553113 ** get_address_of_cubeTrans_2() { return &___cubeTrans_2; }
	inline void set_cubeTrans_2(Transform_t284553113 * value)
	{
		___cubeTrans_2 = value;
		Il2CppCodeGenWriteBarrier(&___cubeTrans_2, value);
	}

	inline static int32_t get_offset_of_startingY_3() { return static_cast<int32_t>(offsetof(Cube_t2111573, ___startingY_3)); }
	inline float get_startingY_3() const { return ___startingY_3; }
	inline float* get_address_of_startingY_3() { return &___startingY_3; }
	inline void set_startingY_3(float value)
	{
		___startingY_3 = value;
	}

	inline static int32_t get_offset_of_newY_4() { return static_cast<int32_t>(offsetof(Cube_t2111573, ___newY_4)); }
	inline float get_newY_4() const { return ___newY_4; }
	inline float* get_address_of_newY_4() { return &___newY_4; }
	inline void set_newY_4(float value)
	{
		___newY_4 = value;
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(Cube_t2111573, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_direction_6() { return static_cast<int32_t>(offsetof(Cube_t2111573, ___direction_6)); }
	inline float get_direction_6() const { return ___direction_6; }
	inline float* get_address_of_direction_6() { return &___direction_6; }
	inline void set_direction_6(float value)
	{
		___direction_6 = value;
	}

	inline static int32_t get_offset_of_isMoving_7() { return static_cast<int32_t>(offsetof(Cube_t2111573, ___isMoving_7)); }
	inline bool get_isMoving_7() const { return ___isMoving_7; }
	inline bool* get_address_of_isMoving_7() { return &___isMoving_7; }
	inline void set_isMoving_7(bool value)
	{
		___isMoving_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
