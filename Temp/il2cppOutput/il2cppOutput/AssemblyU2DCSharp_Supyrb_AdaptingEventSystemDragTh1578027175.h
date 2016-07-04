#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t409518532;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Supyrb.AdaptingEventSystemDragThreshold
struct  AdaptingEventSystemDragThreshold_t1578027175  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.EventSystems.EventSystem Supyrb.AdaptingEventSystemDragThreshold::eventSystem
	EventSystem_t409518532 * ___eventSystem_2;
	// System.Int32 Supyrb.AdaptingEventSystemDragThreshold::referenceDPI
	int32_t ___referenceDPI_3;
	// System.Single Supyrb.AdaptingEventSystemDragThreshold::referencePixelDrag
	float ___referencePixelDrag_4;
	// System.Boolean Supyrb.AdaptingEventSystemDragThreshold::runOnAwake
	bool ___runOnAwake_5;

public:
	inline static int32_t get_offset_of_eventSystem_2() { return static_cast<int32_t>(offsetof(AdaptingEventSystemDragThreshold_t1578027175, ___eventSystem_2)); }
	inline EventSystem_t409518532 * get_eventSystem_2() const { return ___eventSystem_2; }
	inline EventSystem_t409518532 ** get_address_of_eventSystem_2() { return &___eventSystem_2; }
	inline void set_eventSystem_2(EventSystem_t409518532 * value)
	{
		___eventSystem_2 = value;
		Il2CppCodeGenWriteBarrier(&___eventSystem_2, value);
	}

	inline static int32_t get_offset_of_referenceDPI_3() { return static_cast<int32_t>(offsetof(AdaptingEventSystemDragThreshold_t1578027175, ___referenceDPI_3)); }
	inline int32_t get_referenceDPI_3() const { return ___referenceDPI_3; }
	inline int32_t* get_address_of_referenceDPI_3() { return &___referenceDPI_3; }
	inline void set_referenceDPI_3(int32_t value)
	{
		___referenceDPI_3 = value;
	}

	inline static int32_t get_offset_of_referencePixelDrag_4() { return static_cast<int32_t>(offsetof(AdaptingEventSystemDragThreshold_t1578027175, ___referencePixelDrag_4)); }
	inline float get_referencePixelDrag_4() const { return ___referencePixelDrag_4; }
	inline float* get_address_of_referencePixelDrag_4() { return &___referencePixelDrag_4; }
	inline void set_referencePixelDrag_4(float value)
	{
		___referencePixelDrag_4 = value;
	}

	inline static int32_t get_offset_of_runOnAwake_5() { return static_cast<int32_t>(offsetof(AdaptingEventSystemDragThreshold_t1578027175, ___runOnAwake_5)); }
	inline bool get_runOnAwake_5() const { return ___runOnAwake_5; }
	inline bool* get_address_of_runOnAwake_5() { return &___runOnAwake_5; }
	inline void set_runOnAwake_5(bool value)
	{
		___runOnAwake_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
