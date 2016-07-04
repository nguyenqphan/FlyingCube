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

// System.Threading.RegisteredWaitHandle
struct RegisteredWaitHandle_t690682146;
// System.Threading.WaitHandle
struct WaitHandle_t361062656;
// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t4215077909;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_WaitHandle361062656.h"
#include "mscorlib_System_Threading_WaitOrTimerCallback4215077909.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_TimeSpan763862892.h"

// System.Void System.Threading.RegisteredWaitHandle::.ctor(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.TimeSpan,System.Boolean)
extern "C"  void RegisteredWaitHandle__ctor_m3130282384 (RegisteredWaitHandle_t690682146 * __this, WaitHandle_t361062656 * ___waitObject, WaitOrTimerCallback_t4215077909 * ___callback, Il2CppObject * ___state, TimeSpan_t763862892  ___timeout, bool ___executeOnlyOnce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.RegisteredWaitHandle::Wait(System.Object)
extern "C"  void RegisteredWaitHandle_Wait_m4214353403 (RegisteredWaitHandle_t690682146 * __this, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.RegisteredWaitHandle::DoCallBack(System.Object)
extern "C"  void RegisteredWaitHandle_DoCallBack_m3198153280 (RegisteredWaitHandle_t690682146 * __this, Il2CppObject * ___timedOut, const MethodInfo* method) IL2CPP_METHOD_ATTR;
