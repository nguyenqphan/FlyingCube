#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "AssemblyU2DCSharp_Singleton_1_gen2622404444.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2369589051  : public Singleton_1_t2622404444
{
public:
	// System.String GameManager::curPlayerName
	String_t* ___curPlayerName_3;
	// System.Int32 GameManager::numSpawnedCube
	int32_t ___numSpawnedCube_4;
	// System.Int32 GameManager::smallCubeColorNum
	int32_t ___smallCubeColorNum_5;
	// System.Int32 GameManager::tinyCubeColorNum
	int32_t ___tinyCubeColorNum_6;
	// System.Int32 GameManager::numOfGame
	int32_t ___numOfGame_7;
	// System.Boolean GameManager::isDouble
	bool ___isDouble_8;
	// System.Boolean GameManager::isSlowScore
	bool ___isSlowScore_9;
	// System.Boolean GameManager::isStarted
	bool ___isStarted_10;
	// System.Boolean GameManager::isCameraMoved
	bool ___isCameraMoved_11;
	// System.Boolean GameManager::isStartButtonPressed
	bool ___isStartButtonPressed_12;
	// System.Int32 GameManager::score
	int32_t ___score_13;
	// System.Int32 GameManager::bestScore
	int32_t ___bestScore_14;
	// System.Int32 GameManager::gold
	int32_t ___gold_15;
	// System.Int32 GameManager::curPlayerIndex
	int32_t ___curPlayerIndex_16;
	// System.Int32 GameManager::curPrice
	int32_t ___curPrice_17;
	// System.Int32 GameManager::curPlayerAvail
	int32_t ___curPlayerAvail_18;
	// System.Int32 GameManager::curPlayerAvailSB
	int32_t ___curPlayerAvailSB_19;
	// System.Int32 GameManager::curPlayerAvailSC
	int32_t ___curPlayerAvailSC_20;
	// System.Int32 GameManager::amountOfDiamond
	int32_t ___amountOfDiamond_21;

public:
	inline static int32_t get_offset_of_curPlayerName_3() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___curPlayerName_3)); }
	inline String_t* get_curPlayerName_3() const { return ___curPlayerName_3; }
	inline String_t** get_address_of_curPlayerName_3() { return &___curPlayerName_3; }
	inline void set_curPlayerName_3(String_t* value)
	{
		___curPlayerName_3 = value;
		Il2CppCodeGenWriteBarrier(&___curPlayerName_3, value);
	}

	inline static int32_t get_offset_of_numSpawnedCube_4() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___numSpawnedCube_4)); }
	inline int32_t get_numSpawnedCube_4() const { return ___numSpawnedCube_4; }
	inline int32_t* get_address_of_numSpawnedCube_4() { return &___numSpawnedCube_4; }
	inline void set_numSpawnedCube_4(int32_t value)
	{
		___numSpawnedCube_4 = value;
	}

	inline static int32_t get_offset_of_smallCubeColorNum_5() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___smallCubeColorNum_5)); }
	inline int32_t get_smallCubeColorNum_5() const { return ___smallCubeColorNum_5; }
	inline int32_t* get_address_of_smallCubeColorNum_5() { return &___smallCubeColorNum_5; }
	inline void set_smallCubeColorNum_5(int32_t value)
	{
		___smallCubeColorNum_5 = value;
	}

	inline static int32_t get_offset_of_tinyCubeColorNum_6() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___tinyCubeColorNum_6)); }
	inline int32_t get_tinyCubeColorNum_6() const { return ___tinyCubeColorNum_6; }
	inline int32_t* get_address_of_tinyCubeColorNum_6() { return &___tinyCubeColorNum_6; }
	inline void set_tinyCubeColorNum_6(int32_t value)
	{
		___tinyCubeColorNum_6 = value;
	}

	inline static int32_t get_offset_of_numOfGame_7() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___numOfGame_7)); }
	inline int32_t get_numOfGame_7() const { return ___numOfGame_7; }
	inline int32_t* get_address_of_numOfGame_7() { return &___numOfGame_7; }
	inline void set_numOfGame_7(int32_t value)
	{
		___numOfGame_7 = value;
	}

	inline static int32_t get_offset_of_isDouble_8() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___isDouble_8)); }
	inline bool get_isDouble_8() const { return ___isDouble_8; }
	inline bool* get_address_of_isDouble_8() { return &___isDouble_8; }
	inline void set_isDouble_8(bool value)
	{
		___isDouble_8 = value;
	}

	inline static int32_t get_offset_of_isSlowScore_9() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___isSlowScore_9)); }
	inline bool get_isSlowScore_9() const { return ___isSlowScore_9; }
	inline bool* get_address_of_isSlowScore_9() { return &___isSlowScore_9; }
	inline void set_isSlowScore_9(bool value)
	{
		___isSlowScore_9 = value;
	}

	inline static int32_t get_offset_of_isStarted_10() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___isStarted_10)); }
	inline bool get_isStarted_10() const { return ___isStarted_10; }
	inline bool* get_address_of_isStarted_10() { return &___isStarted_10; }
	inline void set_isStarted_10(bool value)
	{
		___isStarted_10 = value;
	}

	inline static int32_t get_offset_of_isCameraMoved_11() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___isCameraMoved_11)); }
	inline bool get_isCameraMoved_11() const { return ___isCameraMoved_11; }
	inline bool* get_address_of_isCameraMoved_11() { return &___isCameraMoved_11; }
	inline void set_isCameraMoved_11(bool value)
	{
		___isCameraMoved_11 = value;
	}

	inline static int32_t get_offset_of_isStartButtonPressed_12() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___isStartButtonPressed_12)); }
	inline bool get_isStartButtonPressed_12() const { return ___isStartButtonPressed_12; }
	inline bool* get_address_of_isStartButtonPressed_12() { return &___isStartButtonPressed_12; }
	inline void set_isStartButtonPressed_12(bool value)
	{
		___isStartButtonPressed_12 = value;
	}

	inline static int32_t get_offset_of_score_13() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___score_13)); }
	inline int32_t get_score_13() const { return ___score_13; }
	inline int32_t* get_address_of_score_13() { return &___score_13; }
	inline void set_score_13(int32_t value)
	{
		___score_13 = value;
	}

	inline static int32_t get_offset_of_bestScore_14() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___bestScore_14)); }
	inline int32_t get_bestScore_14() const { return ___bestScore_14; }
	inline int32_t* get_address_of_bestScore_14() { return &___bestScore_14; }
	inline void set_bestScore_14(int32_t value)
	{
		___bestScore_14 = value;
	}

	inline static int32_t get_offset_of_gold_15() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___gold_15)); }
	inline int32_t get_gold_15() const { return ___gold_15; }
	inline int32_t* get_address_of_gold_15() { return &___gold_15; }
	inline void set_gold_15(int32_t value)
	{
		___gold_15 = value;
	}

	inline static int32_t get_offset_of_curPlayerIndex_16() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___curPlayerIndex_16)); }
	inline int32_t get_curPlayerIndex_16() const { return ___curPlayerIndex_16; }
	inline int32_t* get_address_of_curPlayerIndex_16() { return &___curPlayerIndex_16; }
	inline void set_curPlayerIndex_16(int32_t value)
	{
		___curPlayerIndex_16 = value;
	}

	inline static int32_t get_offset_of_curPrice_17() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___curPrice_17)); }
	inline int32_t get_curPrice_17() const { return ___curPrice_17; }
	inline int32_t* get_address_of_curPrice_17() { return &___curPrice_17; }
	inline void set_curPrice_17(int32_t value)
	{
		___curPrice_17 = value;
	}

	inline static int32_t get_offset_of_curPlayerAvail_18() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___curPlayerAvail_18)); }
	inline int32_t get_curPlayerAvail_18() const { return ___curPlayerAvail_18; }
	inline int32_t* get_address_of_curPlayerAvail_18() { return &___curPlayerAvail_18; }
	inline void set_curPlayerAvail_18(int32_t value)
	{
		___curPlayerAvail_18 = value;
	}

	inline static int32_t get_offset_of_curPlayerAvailSB_19() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___curPlayerAvailSB_19)); }
	inline int32_t get_curPlayerAvailSB_19() const { return ___curPlayerAvailSB_19; }
	inline int32_t* get_address_of_curPlayerAvailSB_19() { return &___curPlayerAvailSB_19; }
	inline void set_curPlayerAvailSB_19(int32_t value)
	{
		___curPlayerAvailSB_19 = value;
	}

	inline static int32_t get_offset_of_curPlayerAvailSC_20() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___curPlayerAvailSC_20)); }
	inline int32_t get_curPlayerAvailSC_20() const { return ___curPlayerAvailSC_20; }
	inline int32_t* get_address_of_curPlayerAvailSC_20() { return &___curPlayerAvailSC_20; }
	inline void set_curPlayerAvailSC_20(int32_t value)
	{
		___curPlayerAvailSC_20 = value;
	}

	inline static int32_t get_offset_of_amountOfDiamond_21() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___amountOfDiamond_21)); }
	inline int32_t get_amountOfDiamond_21() const { return ___amountOfDiamond_21; }
	inline int32_t* get_address_of_amountOfDiamond_21() { return &___amountOfDiamond_21; }
	inline void set_amountOfDiamond_21(int32_t value)
	{
		___amountOfDiamond_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
