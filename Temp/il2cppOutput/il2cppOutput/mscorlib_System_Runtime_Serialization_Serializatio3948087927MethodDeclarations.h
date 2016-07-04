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

// System.Runtime.Serialization.SerializationObjectManager
struct SerializationObjectManager_t3948087927;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Runtime.Serialization.SerializationObjectManager::.ctor(System.Runtime.Serialization.StreamingContext)
extern "C"  void SerializationObjectManager__ctor_m1459970863 (SerializationObjectManager_t3948087927 * __this, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationObjectManager::RegisterObject(System.Object)
extern "C"  void SerializationObjectManager_RegisterObject_m337810129 (SerializationObjectManager_t3948087927 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationObjectManager::RaiseOnSerializedEvent()
extern "C"  void SerializationObjectManager_RaiseOnSerializedEvent_m3729458860 (SerializationObjectManager_t3948087927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
