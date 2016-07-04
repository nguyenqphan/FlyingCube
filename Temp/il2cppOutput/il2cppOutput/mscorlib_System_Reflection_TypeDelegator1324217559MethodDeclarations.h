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

// System.Reflection.TypeDelegator
struct TypeDelegator_t1324217559;
// System.Reflection.Assembly
struct Assembly_t1882292308;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t206139610;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;
// System.Reflection.Binder
struct Binder_t4180926488;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t3379147067;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t3572023667;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t1144794227;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1668237648;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Il2CppObject;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_RuntimeTypeHandle1864875887.h"
#include "mscorlib_System_Reflection_TypeAttributes104824479.h"
#include "mscorlib_System_Reflection_BindingFlags2090192240.h"
#include "mscorlib_System_Reflection_Binder4180926488.h"
#include "mscorlib_System_Reflection_CallingConventions3959446060.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"

// System.Void System.Reflection.TypeDelegator::.ctor()
extern "C"  void TypeDelegator__ctor_m3978235567 (TypeDelegator_t1324217559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.TypeDelegator::get_Assembly()
extern "C"  Assembly_t1882292308 * TypeDelegator_get_Assembly_m793822499 (TypeDelegator_t1324217559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.TypeDelegator::get_AssemblyQualifiedName()
extern "C"  String_t* TypeDelegator_get_AssemblyQualifiedName_m1620996616 (TypeDelegator_t1324217559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.TypeDelegator::get_BaseType()
extern "C"  Type_t * TypeDelegator_get_BaseType_m2734895567 (TypeDelegator_t1324217559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.TypeDelegator::get_FullName()
extern "C"  String_t* TypeDelegator_get_FullName_m3758650933 (TypeDelegator_t1324217559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.TypeDelegator::get_Module()
extern "C"  Module_t206139610 * TypeDelegator_get_Module_m945912623 (TypeDelegator_t1324217559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.TypeDelegator::get_Name()
extern "C"  String_t* TypeDelegator_get_Name_m2498747334 (TypeDelegator_t1324217559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.TypeDelegator::get_Namespace()
extern "C"  String_t* TypeDelegator_get_Namespace_m767650018 (TypeDelegator_t1324217559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.TypeDelegator::get_TypeHandle()
extern "C"  RuntimeTypeHandle_t1864875887  TypeDelegator_get_TypeHandle_m2316493264 (TypeDelegator_t1324217559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.TypeDelegator::get_UnderlyingSystemType()
extern "C"  Type_t * TypeDelegator_get_UnderlyingSystemType_m3809794602 (TypeDelegator_t1324217559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.TypeDelegator::GetAttributeFlagsImpl()
extern "C"  int32_t TypeDelegator_GetAttributeFlagsImpl_m239890692 (TypeDelegator_t1324217559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.TypeDelegator::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t3542137334 * TypeDelegator_GetConstructorImpl_m1507578863 (TypeDelegator_t1324217559 * __this, int32_t ___bindingAttr, Binder_t4180926488 * ___binder, int32_t ___callConvention, TypeU5BU5D_t3431720054* ___types, ParameterModifierU5BU5D_t3379147067* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.TypeDelegator::GetConstructors(System.Reflection.BindingFlags)
extern "C"  ConstructorInfoU5BU5D_t3572023667* TypeDelegator_GetConstructors_m1969957987 (TypeDelegator_t1324217559 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.TypeDelegator::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t11523773* TypeDelegator_GetCustomAttributes_m1964226805 (TypeDelegator_t1324217559 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.TypeDelegator::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t11523773* TypeDelegator_GetCustomAttributes_m2738817378 (TypeDelegator_t1324217559 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.TypeDelegator::GetElementType()
extern "C"  Type_t * TypeDelegator_GetElementType_m3058042619 (TypeDelegator_t1324217559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.TypeDelegator::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C"  EventInfo_t * TypeDelegator_GetEvent_m939809480 (TypeDelegator_t1324217559 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.TypeDelegator::GetField(System.String,System.Reflection.BindingFlags)
extern "C"  FieldInfo_t * TypeDelegator_GetField_m967065480 (TypeDelegator_t1324217559 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.TypeDelegator::GetFields(System.Reflection.BindingFlags)
extern "C"  FieldInfoU5BU5D_t1144794227* TypeDelegator_GetFields_m4208158627 (TypeDelegator_t1324217559 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.TypeDelegator::GetInterfaces()
extern "C"  TypeU5BU5D_t3431720054* TypeDelegator_GetInterfaces_m1212899157 (TypeDelegator_t1324217559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.TypeDelegator::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * TypeDelegator_GetMethodImpl_m1514695301 (TypeDelegator_t1324217559 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t4180926488 * ___binder, int32_t ___callConvention, TypeU5BU5D_t3431720054* ___types, ParameterModifierU5BU5D_t3379147067* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.TypeDelegator::GetMethods(System.Reflection.BindingFlags)
extern "C"  MethodInfoU5BU5D_t1668237648* TypeDelegator_GetMethods_m3579300117 (TypeDelegator_t1324217559 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.TypeDelegator::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * TypeDelegator_GetPropertyImpl_m162740912 (TypeDelegator_t1324217559 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t4180926488 * ___binder, Type_t * ___returnType, TypeU5BU5D_t3431720054* ___types, ParameterModifierU5BU5D_t3379147067* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::HasElementTypeImpl()
extern "C"  bool TypeDelegator_HasElementTypeImpl_m454977167 (TypeDelegator_t1324217559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.TypeDelegator::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C"  Il2CppObject * TypeDelegator_InvokeMember_m4150481760 (TypeDelegator_t1324217559 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t4180926488 * ___binder, Il2CppObject * ___target, ObjectU5BU5D_t11523773* ___args, ParameterModifierU5BU5D_t3379147067* ___modifiers, CultureInfo_t3603717042 * ___culture, StringU5BU5D_t2956870243* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsArrayImpl()
extern "C"  bool TypeDelegator_IsArrayImpl_m3068003486 (TypeDelegator_t1324217559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsByRefImpl()
extern "C"  bool TypeDelegator_IsByRefImpl_m598031553 (TypeDelegator_t1324217559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsDefined(System.Type,System.Boolean)
extern "C"  bool TypeDelegator_IsDefined_m2954211570 (TypeDelegator_t1324217559 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsPointerImpl()
extern "C"  bool TypeDelegator_IsPointerImpl_m3273979010 (TypeDelegator_t1324217559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsPrimitiveImpl()
extern "C"  bool TypeDelegator_IsPrimitiveImpl_m951679660 (TypeDelegator_t1324217559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsValueTypeImpl()
extern "C"  bool TypeDelegator_IsValueTypeImpl_m1433978640 (TypeDelegator_t1324217559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
