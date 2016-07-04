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
// PanelController
struct PanelController_t2622049440;
// UpdateScore
struct UpdateScore_t1082839849;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIController
struct  UIController_t2684559696  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform UIController::trans
	Transform_t284553113 * ___trans_2;
	// System.Boolean UIController::isClicked
	bool ___isClicked_3;
	// System.Single UIController::startScale
	float ___startScale_4;
	// System.Single UIController::newScale
	float ___newScale_5;
	// System.Single UIController::scale
	float ___scale_6;
	// System.Single UIController::scalingSpeed
	float ___scalingSpeed_7;
	// System.Boolean UIController::isBigger
	bool ___isBigger_8;
	// System.Single UIController::startPosX
	float ___startPosX_9;
	// System.Single UIController::startPosY
	float ___startPosY_10;
	// System.Single UIController::curPosX
	float ___curPosX_11;
	// System.Single UIController::curPosY
	float ___curPosY_12;
	// System.Single UIController::distance
	float ___distance_13;
	// System.Single UIController::movingSpeed
	float ___movingSpeed_14;
	// PanelController UIController::panelController
	PanelController_t2622049440 * ___panelController_15;
	// UpdateScore UIController::updateScore
	UpdateScore_t1082839849 * ___updateScore_16;

public:
	inline static int32_t get_offset_of_trans_2() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___trans_2)); }
	inline Transform_t284553113 * get_trans_2() const { return ___trans_2; }
	inline Transform_t284553113 ** get_address_of_trans_2() { return &___trans_2; }
	inline void set_trans_2(Transform_t284553113 * value)
	{
		___trans_2 = value;
		Il2CppCodeGenWriteBarrier(&___trans_2, value);
	}

	inline static int32_t get_offset_of_isClicked_3() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___isClicked_3)); }
	inline bool get_isClicked_3() const { return ___isClicked_3; }
	inline bool* get_address_of_isClicked_3() { return &___isClicked_3; }
	inline void set_isClicked_3(bool value)
	{
		___isClicked_3 = value;
	}

	inline static int32_t get_offset_of_startScale_4() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___startScale_4)); }
	inline float get_startScale_4() const { return ___startScale_4; }
	inline float* get_address_of_startScale_4() { return &___startScale_4; }
	inline void set_startScale_4(float value)
	{
		___startScale_4 = value;
	}

	inline static int32_t get_offset_of_newScale_5() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___newScale_5)); }
	inline float get_newScale_5() const { return ___newScale_5; }
	inline float* get_address_of_newScale_5() { return &___newScale_5; }
	inline void set_newScale_5(float value)
	{
		___newScale_5 = value;
	}

	inline static int32_t get_offset_of_scale_6() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___scale_6)); }
	inline float get_scale_6() const { return ___scale_6; }
	inline float* get_address_of_scale_6() { return &___scale_6; }
	inline void set_scale_6(float value)
	{
		___scale_6 = value;
	}

	inline static int32_t get_offset_of_scalingSpeed_7() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___scalingSpeed_7)); }
	inline float get_scalingSpeed_7() const { return ___scalingSpeed_7; }
	inline float* get_address_of_scalingSpeed_7() { return &___scalingSpeed_7; }
	inline void set_scalingSpeed_7(float value)
	{
		___scalingSpeed_7 = value;
	}

	inline static int32_t get_offset_of_isBigger_8() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___isBigger_8)); }
	inline bool get_isBigger_8() const { return ___isBigger_8; }
	inline bool* get_address_of_isBigger_8() { return &___isBigger_8; }
	inline void set_isBigger_8(bool value)
	{
		___isBigger_8 = value;
	}

	inline static int32_t get_offset_of_startPosX_9() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___startPosX_9)); }
	inline float get_startPosX_9() const { return ___startPosX_9; }
	inline float* get_address_of_startPosX_9() { return &___startPosX_9; }
	inline void set_startPosX_9(float value)
	{
		___startPosX_9 = value;
	}

	inline static int32_t get_offset_of_startPosY_10() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___startPosY_10)); }
	inline float get_startPosY_10() const { return ___startPosY_10; }
	inline float* get_address_of_startPosY_10() { return &___startPosY_10; }
	inline void set_startPosY_10(float value)
	{
		___startPosY_10 = value;
	}

	inline static int32_t get_offset_of_curPosX_11() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___curPosX_11)); }
	inline float get_curPosX_11() const { return ___curPosX_11; }
	inline float* get_address_of_curPosX_11() { return &___curPosX_11; }
	inline void set_curPosX_11(float value)
	{
		___curPosX_11 = value;
	}

	inline static int32_t get_offset_of_curPosY_12() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___curPosY_12)); }
	inline float get_curPosY_12() const { return ___curPosY_12; }
	inline float* get_address_of_curPosY_12() { return &___curPosY_12; }
	inline void set_curPosY_12(float value)
	{
		___curPosY_12 = value;
	}

	inline static int32_t get_offset_of_distance_13() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___distance_13)); }
	inline float get_distance_13() const { return ___distance_13; }
	inline float* get_address_of_distance_13() { return &___distance_13; }
	inline void set_distance_13(float value)
	{
		___distance_13 = value;
	}

	inline static int32_t get_offset_of_movingSpeed_14() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___movingSpeed_14)); }
	inline float get_movingSpeed_14() const { return ___movingSpeed_14; }
	inline float* get_address_of_movingSpeed_14() { return &___movingSpeed_14; }
	inline void set_movingSpeed_14(float value)
	{
		___movingSpeed_14 = value;
	}

	inline static int32_t get_offset_of_panelController_15() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___panelController_15)); }
	inline PanelController_t2622049440 * get_panelController_15() const { return ___panelController_15; }
	inline PanelController_t2622049440 ** get_address_of_panelController_15() { return &___panelController_15; }
	inline void set_panelController_15(PanelController_t2622049440 * value)
	{
		___panelController_15 = value;
		Il2CppCodeGenWriteBarrier(&___panelController_15, value);
	}

	inline static int32_t get_offset_of_updateScore_16() { return static_cast<int32_t>(offsetof(UIController_t2684559696, ___updateScore_16)); }
	inline UpdateScore_t1082839849 * get_updateScore_16() const { return ___updateScore_16; }
	inline UpdateScore_t1082839849 ** get_address_of_updateScore_16() { return &___updateScore_16; }
	inline void set_updateScore_16(UpdateScore_t1082839849 * value)
	{
		___updateScore_16 = value;
		Il2CppCodeGenWriteBarrier(&___updateScore_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
