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

// System.Runtime.Remoting.Lifetime.LeaseManager
struct LeaseManager_t2820278776;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t571418633;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan763862892.h"
#include "mscorlib_System_Runtime_Remoting_ServerIdentity571418633.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::.ctor()
extern "C"  void LeaseManager__ctor_m2522116882 (LeaseManager_t2820278776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::SetPollTime(System.TimeSpan)
extern "C"  void LeaseManager_SetPollTime_m4066717374 (LeaseManager_t2820278776 * __this, TimeSpan_t763862892  ___timeSpan, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::TrackLifetime(System.Runtime.Remoting.ServerIdentity)
extern "C"  void LeaseManager_TrackLifetime_m1439053293 (LeaseManager_t2820278776 * __this, ServerIdentity_t571418633 * ___identity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::StartManager()
extern "C"  void LeaseManager_StartManager_m4134605085 (LeaseManager_t2820278776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::StopManager()
extern "C"  void LeaseManager_StopManager_m1415465851 (LeaseManager_t2820278776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::ManageLeases(System.Object)
extern "C"  void LeaseManager_ManageLeases_m1070826756 (LeaseManager_t2820278776 * __this, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
