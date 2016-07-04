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

// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t4215077909;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Threading.WaitOrTimerCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void WaitOrTimerCallback__ctor_m1555455757 (WaitOrTimerCallback_t4215077909 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitOrTimerCallback::Invoke(System.Object,System.Boolean)
extern "C"  void WaitOrTimerCallback_Invoke_m2987100304 (WaitOrTimerCallback_t4215077909 * __this, Il2CppObject * ___state, bool ___timedOut, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_WaitOrTimerCallback_t4215077909(Il2CppObject* delegate, Il2CppObject * ___state, bool ___timedOut);
// System.IAsyncResult System.Threading.WaitOrTimerCallback::BeginInvoke(System.Object,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WaitOrTimerCallback_BeginInvoke_m3309359065 (WaitOrTimerCallback_t4215077909 * __this, Il2CppObject * ___state, bool ___timedOut, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitOrTimerCallback::EndInvoke(System.IAsyncResult)
extern "C"  void WaitOrTimerCallback_EndInvoke_m1912954781 (WaitOrTimerCallback_t4215077909 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
