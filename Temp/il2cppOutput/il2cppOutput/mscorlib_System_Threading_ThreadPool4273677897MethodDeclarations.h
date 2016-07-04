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

// System.Threading.WaitCallback
struct WaitCallback_t827025885;
// System.Object
struct Il2CppObject;
// System.Threading.RegisteredWaitHandle
struct RegisteredWaitHandle_t690682146;
// System.Threading.WaitHandle
struct WaitHandle_t361062656;
// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t4215077909;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_WaitCallback827025885.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Threading_WaitHandle361062656.h"
#include "mscorlib_System_Threading_WaitOrTimerCallback4215077909.h"
#include "mscorlib_System_TimeSpan763862892.h"

// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
extern "C"  bool ThreadPool_QueueUserWorkItem_m3855506648 (Il2CppObject * __this /* static, unused */, WaitCallback_t827025885 * ___callBack, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.RegisteredWaitHandle System.Threading.ThreadPool::RegisterWaitForSingleObject(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.Int64,System.Boolean)
extern "C"  RegisteredWaitHandle_t690682146 * ThreadPool_RegisterWaitForSingleObject_m2307848074 (Il2CppObject * __this /* static, unused */, WaitHandle_t361062656 * ___waitObject, WaitOrTimerCallback_t4215077909 * ___callBack, Il2CppObject * ___state, int64_t ___millisecondsTimeOutInterval, bool ___executeOnlyOnce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.RegisteredWaitHandle System.Threading.ThreadPool::RegisterWaitForSingleObject(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.TimeSpan,System.Boolean)
extern "C"  RegisteredWaitHandle_t690682146 * ThreadPool_RegisterWaitForSingleObject_m3955614434 (Il2CppObject * __this /* static, unused */, WaitHandle_t361062656 * ___waitObject, WaitOrTimerCallback_t4215077909 * ___callBack, Il2CppObject * ___state, TimeSpan_t763862892  ___timeout, bool ___executeOnlyOnce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
