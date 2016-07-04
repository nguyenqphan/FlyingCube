#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// UnityEngine.Transform
struct Transform_t284553113;
// Spawner
struct Spawner_t3948062024;
// CameraMove
struct CameraMove_t4276106422;
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

// Player
struct  Player_t2393081601  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Rigidbody Player::playerRigid
	Rigidbody_t1972007546 * ___playerRigid_2;
	// UnityEngine.Transform Player::playerTrans
	Transform_t284553113 * ___playerTrans_3;
	// Spawner Player::spawner
	Spawner_t3948062024 * ___spawner_4;
	// CameraMove Player::cameraMove
	CameraMove_t4276106422 * ___cameraMove_5;
	// PanelController Player::panelController
	PanelController_t2622049440 * ___panelController_6;
	// UpdateScore Player::updateScore
	UpdateScore_t1082839849 * ___updateScore_7;
	// System.Boolean Player::tap
	bool ___tap_8;

public:
	inline static int32_t get_offset_of_playerRigid_2() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___playerRigid_2)); }
	inline Rigidbody_t1972007546 * get_playerRigid_2() const { return ___playerRigid_2; }
	inline Rigidbody_t1972007546 ** get_address_of_playerRigid_2() { return &___playerRigid_2; }
	inline void set_playerRigid_2(Rigidbody_t1972007546 * value)
	{
		___playerRigid_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerRigid_2, value);
	}

	inline static int32_t get_offset_of_playerTrans_3() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___playerTrans_3)); }
	inline Transform_t284553113 * get_playerTrans_3() const { return ___playerTrans_3; }
	inline Transform_t284553113 ** get_address_of_playerTrans_3() { return &___playerTrans_3; }
	inline void set_playerTrans_3(Transform_t284553113 * value)
	{
		___playerTrans_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerTrans_3, value);
	}

	inline static int32_t get_offset_of_spawner_4() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___spawner_4)); }
	inline Spawner_t3948062024 * get_spawner_4() const { return ___spawner_4; }
	inline Spawner_t3948062024 ** get_address_of_spawner_4() { return &___spawner_4; }
	inline void set_spawner_4(Spawner_t3948062024 * value)
	{
		___spawner_4 = value;
		Il2CppCodeGenWriteBarrier(&___spawner_4, value);
	}

	inline static int32_t get_offset_of_cameraMove_5() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___cameraMove_5)); }
	inline CameraMove_t4276106422 * get_cameraMove_5() const { return ___cameraMove_5; }
	inline CameraMove_t4276106422 ** get_address_of_cameraMove_5() { return &___cameraMove_5; }
	inline void set_cameraMove_5(CameraMove_t4276106422 * value)
	{
		___cameraMove_5 = value;
		Il2CppCodeGenWriteBarrier(&___cameraMove_5, value);
	}

	inline static int32_t get_offset_of_panelController_6() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___panelController_6)); }
	inline PanelController_t2622049440 * get_panelController_6() const { return ___panelController_6; }
	inline PanelController_t2622049440 ** get_address_of_panelController_6() { return &___panelController_6; }
	inline void set_panelController_6(PanelController_t2622049440 * value)
	{
		___panelController_6 = value;
		Il2CppCodeGenWriteBarrier(&___panelController_6, value);
	}

	inline static int32_t get_offset_of_updateScore_7() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___updateScore_7)); }
	inline UpdateScore_t1082839849 * get_updateScore_7() const { return ___updateScore_7; }
	inline UpdateScore_t1082839849 ** get_address_of_updateScore_7() { return &___updateScore_7; }
	inline void set_updateScore_7(UpdateScore_t1082839849 * value)
	{
		___updateScore_7 = value;
		Il2CppCodeGenWriteBarrier(&___updateScore_7, value);
	}

	inline static int32_t get_offset_of_tap_8() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___tap_8)); }
	inline bool get_tap_8() const { return ___tap_8; }
	inline bool* get_address_of_tap_8() { return &___tap_8; }
	inline void set_tap_8(bool value)
	{
		___tap_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
