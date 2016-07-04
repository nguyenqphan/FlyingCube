#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PanelController
struct PanelController_t2622049440;
// CameraMove
struct CameraMove_t4276106422;
// UpdateScore
struct UpdateScore_t1082839849;
// Spawner
struct Spawner_t3948062024;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t2782302542  : public MonoBehaviour_t3012272455
{
public:
	// PanelController GameController::panelController
	PanelController_t2622049440 * ___panelController_2;
	// CameraMove GameController::cameraMove
	CameraMove_t4276106422 * ___cameraMove_3;
	// UpdateScore GameController::updateScore
	UpdateScore_t1082839849 * ___updateScore_4;
	// Spawner GameController::spawner
	Spawner_t3948062024 * ___spawner_5;

public:
	inline static int32_t get_offset_of_panelController_2() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___panelController_2)); }
	inline PanelController_t2622049440 * get_panelController_2() const { return ___panelController_2; }
	inline PanelController_t2622049440 ** get_address_of_panelController_2() { return &___panelController_2; }
	inline void set_panelController_2(PanelController_t2622049440 * value)
	{
		___panelController_2 = value;
		Il2CppCodeGenWriteBarrier(&___panelController_2, value);
	}

	inline static int32_t get_offset_of_cameraMove_3() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___cameraMove_3)); }
	inline CameraMove_t4276106422 * get_cameraMove_3() const { return ___cameraMove_3; }
	inline CameraMove_t4276106422 ** get_address_of_cameraMove_3() { return &___cameraMove_3; }
	inline void set_cameraMove_3(CameraMove_t4276106422 * value)
	{
		___cameraMove_3 = value;
		Il2CppCodeGenWriteBarrier(&___cameraMove_3, value);
	}

	inline static int32_t get_offset_of_updateScore_4() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___updateScore_4)); }
	inline UpdateScore_t1082839849 * get_updateScore_4() const { return ___updateScore_4; }
	inline UpdateScore_t1082839849 ** get_address_of_updateScore_4() { return &___updateScore_4; }
	inline void set_updateScore_4(UpdateScore_t1082839849 * value)
	{
		___updateScore_4 = value;
		Il2CppCodeGenWriteBarrier(&___updateScore_4, value);
	}

	inline static int32_t get_offset_of_spawner_5() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___spawner_5)); }
	inline Spawner_t3948062024 * get_spawner_5() const { return ___spawner_5; }
	inline Spawner_t3948062024 ** get_address_of_spawner_5() { return &___spawner_5; }
	inline void set_spawner_5(Spawner_t3948062024 * value)
	{
		___spawner_5 = value;
		Il2CppCodeGenWriteBarrier(&___spawner_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
