#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Spawner
struct Spawner_t3948062024;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityEngine.Transform
struct Transform_t284553113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"

// System.Void Spawner::.ctor()
extern "C"  void Spawner__ctor_m1839725347 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Spawner::currCubePos()
extern "C"  Vector3_t3525329789  Spawner_currCubePos_m1201685096 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spawner::Awake()
extern "C"  void Spawner_Awake_m2077330566 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spawner::Start()
extern "C"  void Spawner_Start_m786863139 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spawner::StartSpawnCube()
extern "C"  void Spawner_StartSpawnCube_m2106435151 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Spawner::SpawnCube()
extern "C"  Il2CppObject * Spawner_SpawnCube_m1117449433 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spawner::ChooseShape()
extern "C"  float Spawner_ChooseShape_m3025109335 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spawner::EmptyShape()
extern "C"  float Spawner_EmptyShape_m2152704457 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spawner::SquareShape()
extern "C"  float Spawner_SquareShape_m1859275665 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spawner::VReverseShape()
extern "C"  float Spawner_VReverseShape_m2805591362 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spawner::VReverseShape2()
extern "C"  float Spawner_VReverseShape2_m1073995922 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spawner::VReverseShape3()
extern "C"  float Spawner_VReverseShape3_m1073996883 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spawner::VShape()
extern "C"  float Spawner_VShape_m1105713280 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spawner::VShape2()
extern "C"  float Spawner_VShape2_m4212350228 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spawner::VShape3()
extern "C"  float Spawner_VShape3_m4212351189 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spawner::BlockShape()
extern "C"  float Spawner_BlockShape_m1496367753 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spawner::BlockShape2()
extern "C"  float Spawner_BlockShape2_m3437737003 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spawner::Spike()
extern "C"  float Spawner_Spike_m2499578771 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spawner::ObstacleShape()
extern "C"  float Spawner_ObstacleShape_m2585672415 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spawner::PatternPosition()
extern "C"  float Spawner_PatternPosition_m4264447142 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spawner::StraigtLine()
extern "C"  float Spawner_StraigtLine_m48847719 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spawner::DeadLine()
extern "C"  float Spawner_DeadLine_m829336045 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spawner::MidLineShape()
extern "C"  float Spawner_MidLineShape_m2491890906 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Spawner::LayoutCube()
extern "C"  Il2CppObject * Spawner_LayoutCube_m154295096 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spawner::StartClearScene()
extern "C"  void Spawner_StartClearScene_m1209969730 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Spawner::ClearScene()
extern "C"  Il2CppObject * Spawner_ClearScene_m616183544 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spawner::YPosition()
extern "C"  float Spawner_YPosition_m1806420815 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Spawner::YSmallPosition()
extern "C"  float Spawner_YSmallPosition_m721391628 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spawner::twoColorSwitch()
extern "C"  int32_t Spawner_twoColorSwitch_m2292284190 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Spawner::RandomOneColor()
extern "C"  int32_t Spawner_RandomOneColor_m183816691 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spawner::PlayPlayerBreaking(UnityEngine.Transform)
extern "C"  void Spawner_PlayPlayerBreaking_m588339268 (Spawner_t3948062024 * __this, Transform_t284553113 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spawner::StartGoldBreaking(UnityEngine.Transform)
extern "C"  void Spawner_StartGoldBreaking_m2883692407 (Spawner_t3948062024 * __this, Transform_t284553113 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Spawner::PlayGoldBreaking(UnityEngine.Transform)
extern "C"  Il2CppObject * Spawner_PlayGoldBreaking_m2773187629 (Spawner_t3948062024 * __this, Transform_t284553113 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
