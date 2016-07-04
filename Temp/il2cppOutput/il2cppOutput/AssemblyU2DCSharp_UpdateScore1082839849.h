#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpdateScore
struct  UpdateScore_t1082839849  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean UpdateScore::isCountingScore
	bool ___isCountingScore_2;
	// UnityEngine.UI.Text UpdateScore::liveScoreLable
	Text_t3286458198 * ___liveScoreLable_3;
	// UnityEngine.UI.Text UpdateScore::goldLabel
	Text_t3286458198 * ___goldLabel_4;
	// UnityEngine.UI.Text UpdateScore::bestScoreLable
	Text_t3286458198 * ___bestScoreLable_5;
	// UnityEngine.UI.Text UpdateScore::curScoreLabel
	Text_t3286458198 * ___curScoreLabel_6;

public:
	inline static int32_t get_offset_of_isCountingScore_2() { return static_cast<int32_t>(offsetof(UpdateScore_t1082839849, ___isCountingScore_2)); }
	inline bool get_isCountingScore_2() const { return ___isCountingScore_2; }
	inline bool* get_address_of_isCountingScore_2() { return &___isCountingScore_2; }
	inline void set_isCountingScore_2(bool value)
	{
		___isCountingScore_2 = value;
	}

	inline static int32_t get_offset_of_liveScoreLable_3() { return static_cast<int32_t>(offsetof(UpdateScore_t1082839849, ___liveScoreLable_3)); }
	inline Text_t3286458198 * get_liveScoreLable_3() const { return ___liveScoreLable_3; }
	inline Text_t3286458198 ** get_address_of_liveScoreLable_3() { return &___liveScoreLable_3; }
	inline void set_liveScoreLable_3(Text_t3286458198 * value)
	{
		___liveScoreLable_3 = value;
		Il2CppCodeGenWriteBarrier(&___liveScoreLable_3, value);
	}

	inline static int32_t get_offset_of_goldLabel_4() { return static_cast<int32_t>(offsetof(UpdateScore_t1082839849, ___goldLabel_4)); }
	inline Text_t3286458198 * get_goldLabel_4() const { return ___goldLabel_4; }
	inline Text_t3286458198 ** get_address_of_goldLabel_4() { return &___goldLabel_4; }
	inline void set_goldLabel_4(Text_t3286458198 * value)
	{
		___goldLabel_4 = value;
		Il2CppCodeGenWriteBarrier(&___goldLabel_4, value);
	}

	inline static int32_t get_offset_of_bestScoreLable_5() { return static_cast<int32_t>(offsetof(UpdateScore_t1082839849, ___bestScoreLable_5)); }
	inline Text_t3286458198 * get_bestScoreLable_5() const { return ___bestScoreLable_5; }
	inline Text_t3286458198 ** get_address_of_bestScoreLable_5() { return &___bestScoreLable_5; }
	inline void set_bestScoreLable_5(Text_t3286458198 * value)
	{
		___bestScoreLable_5 = value;
		Il2CppCodeGenWriteBarrier(&___bestScoreLable_5, value);
	}

	inline static int32_t get_offset_of_curScoreLabel_6() { return static_cast<int32_t>(offsetof(UpdateScore_t1082839849, ___curScoreLabel_6)); }
	inline Text_t3286458198 * get_curScoreLabel_6() const { return ___curScoreLabel_6; }
	inline Text_t3286458198 ** get_address_of_curScoreLabel_6() { return &___curScoreLabel_6; }
	inline void set_curScoreLabel_6(Text_t3286458198 * value)
	{
		___curScoreLabel_6 = value;
		Il2CppCodeGenWriteBarrier(&___curScoreLabel_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
