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

// System.MarshalByRefObject
struct MarshalByRefObject_t2055500882;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t571418633;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t3894317828;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Remoting_ServerIdentity571418633.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void System.MarshalByRefObject::.ctor()
extern "C"  void MarshalByRefObject__ctor_m2306543480 (MarshalByRefObject_t2055500882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::get_ObjectIdentity()
extern "C"  ServerIdentity_t571418633 * MarshalByRefObject_get_ObjectIdentity_m426029982 (MarshalByRefObject_t2055500882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MarshalByRefObject::set_ObjectIdentity(System.Runtime.Remoting.ServerIdentity)
extern "C"  void MarshalByRefObject_set_ObjectIdentity_m3718301103 (MarshalByRefObject_t2055500882 * __this, ServerIdentity_t571418633 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.MarshalByRefObject::CreateObjRef(System.Type)
extern "C"  ObjRef_t3894317828 * MarshalByRefObject_CreateObjRef_m574784494 (MarshalByRefObject_t2055500882 * __this, Type_t * ___requestedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.MarshalByRefObject::InitializeLifetimeService()
extern "C"  Il2CppObject * MarshalByRefObject_InitializeLifetimeService_m3037236935 (MarshalByRefObject_t2055500882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
