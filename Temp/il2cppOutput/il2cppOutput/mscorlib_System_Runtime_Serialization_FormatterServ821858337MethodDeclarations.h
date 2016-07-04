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

// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Object
struct Il2CppObject;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t3813794579;
// System.Type
struct Type_t;
// System.Collections.ArrayList
struct ArrayList_t2121638921;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Collections_ArrayList2121638921.h"

// System.Object[] System.Runtime.Serialization.FormatterServices::GetObjectData(System.Object,System.Reflection.MemberInfo[])
extern "C"  ObjectU5BU5D_t11523773* FormatterServices_GetObjectData_m3974152299 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj, MemberInfoU5BU5D_t3813794579* ___members, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo[] System.Runtime.Serialization.FormatterServices::GetSerializableMembers(System.Type,System.Runtime.Serialization.StreamingContext)
extern "C"  MemberInfoU5BU5D_t3813794579* FormatterServices_GetSerializableMembers_m1124071069 (Il2CppObject * __this /* static, unused */, Type_t * ___type, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.FormatterServices::GetFields(System.Type,System.Type,System.Collections.ArrayList)
extern "C"  void FormatterServices_GetFields_m1400403013 (Il2CppObject * __this /* static, unused */, Type_t * ___reflectedType, Type_t * ___type, ArrayList_t2121638921 * ___fields, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.FormatterServices::GetUninitializedObject(System.Type)
extern "C"  Il2CppObject * FormatterServices_GetUninitializedObject_m113523001 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.FormatterServices::GetSafeUninitializedObject(System.Type)
extern "C"  Il2CppObject * FormatterServices_GetSafeUninitializedObject_m133866342 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
