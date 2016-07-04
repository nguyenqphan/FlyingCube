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

// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t4287691406;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t1058295580;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Reflection.Assembly
struct Assembly_t1882292308;
// System.Reflection.Module
struct Module_t206139610;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;
// System.Reflection.Binder
struct Binder_t4180926488;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t3379147067;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Reflection.Emit.ConstructorBuilder
struct ConstructorBuilder_t1859087886;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t2239438067;
// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t765486855;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t3572023667;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t1144794227;
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
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_ModuleBuilder1058295580.h"
#include "mscorlib_System_Reflection_TypeAttributes104824479.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_Emit_PackingSize2950865495.h"
#include "mscorlib_System_Reflection_Emit_TypeBuilder4287691406.h"
#include "mscorlib_System_Reflection_BindingFlags2090192240.h"
#include "mscorlib_System_Reflection_Binder4180926488.h"
#include "mscorlib_System_Reflection_CallingConventions3959446060.h"
#include "mscorlib_System_Reflection_MethodAttributes455054214.h"
#include "mscorlib_System_Reflection_Emit_MethodBuilder765486855.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "mscorlib_System_RuntimeTypeHandle1864875887.h"

// System.Void System.Reflection.Emit.TypeBuilder::.ctor(System.Reflection.Emit.ModuleBuilder,System.Reflection.TypeAttributes,System.Int32)
extern "C"  void TypeBuilder__ctor_m2701930902 (TypeBuilder_t4287691406 * __this, ModuleBuilder_t1058295580 * ___mb, int32_t ___attr, int32_t ___table_idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::.ctor(System.Reflection.Emit.ModuleBuilder,System.String,System.Reflection.TypeAttributes,System.Type,System.Type[],System.Reflection.Emit.PackingSize,System.Int32,System.Type)
extern "C"  void TypeBuilder__ctor_m2838836864 (TypeBuilder_t4287691406 * __this, ModuleBuilder_t1058295580 * ___mb, String_t* ___name, int32_t ___attr, Type_t * ___parent, TypeU5BU5D_t3431720054* ___interfaces, int32_t ___packing_size, int32_t ___type_size, Type_t * ___nesting_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::GetAttributeFlagsImpl()
extern "C"  int32_t TypeBuilder_GetAttributeFlagsImpl_m2415994065 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::setup_internal_class(System.Reflection.Emit.TypeBuilder)
extern "C"  void TypeBuilder_setup_internal_class_m1841540458 (TypeBuilder_t4287691406 * __this, TypeBuilder_t4287691406 * ___tb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::create_generic_class()
extern "C"  void TypeBuilder_create_generic_class_m1633445577 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.TypeBuilder::get_Assembly()
extern "C"  Assembly_t1882292308 * TypeBuilder_get_Assembly_m870988588 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_AssemblyQualifiedName()
extern "C"  String_t* TypeBuilder_get_AssemblyQualifiedName_m750470747 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_BaseType()
extern "C"  Type_t * TypeBuilder_get_BaseType_m1785398826 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_DeclaringType()
extern "C"  Type_t * TypeBuilder_get_DeclaringType_m1033527492 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_UnderlyingSystemType()
extern "C"  Type_t * TypeBuilder_get_UnderlyingSystemType_m301071877 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::GetFullName()
extern "C"  String_t* TypeBuilder_GetFullName_m2368980531 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_FullName()
extern "C"  String_t* TypeBuilder_get_FullName_m1311381250 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module()
extern "C"  Module_t206139610 * TypeBuilder_get_Module_m1380149676 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Name()
extern "C"  String_t* TypeBuilder_get_Name_m225700627 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Namespace()
extern "C"  String_t* TypeBuilder_get_Namespace_m2211701173 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_ReflectedType()
extern "C"  Type_t * TypeBuilder_get_ReflectedType_m263974265 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.TypeBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t3542137334 * TypeBuilder_GetConstructorImpl_m4034724308 (TypeBuilder_t4287691406 * __this, int32_t ___bindingAttr, Binder_t4180926488 * ___binder, int32_t ___callConvention, TypeU5BU5D_t3431720054* ___types, ParameterModifierU5BU5D_t3379147067* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsDefined(System.Type,System.Boolean)
extern "C"  bool TypeBuilder_IsDefined_m3802777959 (TypeBuilder_t4287691406 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t11523773* TypeBuilder_GetCustomAttributes_m425271400 (TypeBuilder_t4287691406 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t11523773* TypeBuilder_GetCustomAttributes_m3833453653 (TypeBuilder_t4287691406 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ConstructorBuilder System.Reflection.Emit.TypeBuilder::DefineConstructor(System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[])
extern "C"  ConstructorBuilder_t1859087886 * TypeBuilder_DefineConstructor_m2901130055 (TypeBuilder_t4287691406 * __this, int32_t ___attributes, int32_t ___callingConvention, TypeU5BU5D_t3431720054* ___parameterTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ConstructorBuilder System.Reflection.Emit.TypeBuilder::DefineConstructor(System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[],System.Type[][],System.Type[][])
extern "C"  ConstructorBuilder_t1859087886 * TypeBuilder_DefineConstructor_m467278373 (TypeBuilder_t4287691406 * __this, int32_t ___attributes, int32_t ___callingConvention, TypeU5BU5D_t3431720054* ___parameterTypes, TypeU5BU5DU5BU5D_t2239438067* ___requiredCustomModifiers, TypeU5BU5DU5BU5D_t2239438067* ___optionalCustomModifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ConstructorBuilder System.Reflection.Emit.TypeBuilder::DefineDefaultConstructor(System.Reflection.MethodAttributes)
extern "C"  ConstructorBuilder_t1859087886 * TypeBuilder_DefineDefaultConstructor_m4180060431 (TypeBuilder_t4287691406 * __this, int32_t ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::append_method(System.Reflection.Emit.MethodBuilder)
extern "C"  void TypeBuilder_append_method_m2404188841 (TypeBuilder_t4287691406 * __this, MethodBuilder_t765486855 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.TypeBuilder::DefineMethod(System.String,System.Reflection.MethodAttributes,System.Type,System.Type[])
extern "C"  MethodBuilder_t765486855 * TypeBuilder_DefineMethod_m1271641900 (TypeBuilder_t4287691406 * __this, String_t* ___name, int32_t ___attributes, Type_t * ___returnType, TypeU5BU5D_t3431720054* ___parameterTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.TypeBuilder::DefineMethod(System.String,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type,System.Type[])
extern "C"  MethodBuilder_t765486855 * TypeBuilder_DefineMethod_m1021339424 (TypeBuilder_t4287691406 * __this, String_t* ___name, int32_t ___attributes, int32_t ___callingConvention, Type_t * ___returnType, TypeU5BU5D_t3431720054* ___parameterTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.TypeBuilder::DefineMethod(System.String,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type,System.Type[],System.Type[],System.Type[],System.Type[][],System.Type[][])
extern "C"  MethodBuilder_t765486855 * TypeBuilder_DefineMethod_m775963488 (TypeBuilder_t4287691406 * __this, String_t* ___name, int32_t ___attributes, int32_t ___callingConvention, Type_t * ___returnType, TypeU5BU5D_t3431720054* ___returnTypeRequiredCustomModifiers, TypeU5BU5D_t3431720054* ___returnTypeOptionalCustomModifiers, TypeU5BU5D_t3431720054* ___parameterTypes, TypeU5BU5DU5BU5D_t2239438067* ___parameterTypeRequiredCustomModifiers, TypeU5BU5DU5BU5D_t2239438067* ___parameterTypeOptionalCustomModifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::DefineMethodOverride(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
extern "C"  void TypeBuilder_DefineMethodOverride_m608613282 (TypeBuilder_t4287691406 * __this, MethodInfo_t * ___methodInfoBody, MethodInfo_t * ___methodInfoDeclaration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::create_runtime_class(System.Reflection.Emit.TypeBuilder)
extern "C"  Type_t * TypeBuilder_create_runtime_class_m3021676378 (TypeBuilder_t4287691406 * __this, TypeBuilder_t4287691406 * ___tb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::is_nested_in(System.Type)
extern "C"  bool TypeBuilder_is_nested_in_m2129219235 (TypeBuilder_t4287691406 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::has_ctor_method()
extern "C"  bool TypeBuilder_has_ctor_method_m2530448875 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::CreateType()
extern "C"  Type_t * TypeBuilder_CreateType_m1359739084 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C"  ConstructorInfoU5BU5D_t3572023667* TypeBuilder_GetConstructors_m3659149026 (TypeBuilder_t4287691406 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructorsInternal(System.Reflection.BindingFlags)
extern "C"  ConstructorInfoU5BU5D_t3572023667* TypeBuilder_GetConstructorsInternal_m731270847 (TypeBuilder_t4287691406 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetElementType()
extern "C"  Type_t * TypeBuilder_GetElementType_m1124741270 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.TypeBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C"  EventInfo_t * TypeBuilder_GetEvent_m1147005997 (TypeBuilder_t4287691406 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.TypeBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C"  FieldInfo_t * TypeBuilder_GetField_m950073389 (TypeBuilder_t4287691406 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.TypeBuilder::GetFields(System.Reflection.BindingFlags)
extern "C"  FieldInfoU5BU5D_t1144794227* TypeBuilder_GetFields_m3934792546 (TypeBuilder_t4287691406 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetInterfaces()
extern "C"  TypeU5BU5D_t3431720054* TypeBuilder_GetInterfaces_m1695120734 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C"  MethodInfoU5BU5D_t1668237648* TypeBuilder_GetMethodsByName_m2328060642 (TypeBuilder_t4287691406 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C"  MethodInfoU5BU5D_t1668237648* TypeBuilder_GetMethods_m3761501928 (TypeBuilder_t4287691406 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.TypeBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * TypeBuilder_GetMethodImpl_m2675220686 (TypeBuilder_t4287691406 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t4180926488 * ___binder, int32_t ___callConvention, TypeU5BU5D_t3431720054* ___types, ParameterModifierU5BU5D_t3379147067* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.TypeBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * TypeBuilder_GetPropertyImpl_m2672120863 (TypeBuilder_t4287691406 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t4180926488 * ___binder, Type_t * ___returnType, TypeU5BU5D_t3431720054* ___types, ParameterModifierU5BU5D_t3379147067* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::HasElementTypeImpl()
extern "C"  bool TypeBuilder_HasElementTypeImpl_m3001033082 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.TypeBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C"  Il2CppObject * TypeBuilder_InvokeMember_m1599102929 (TypeBuilder_t4287691406 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t4180926488 * ___binder, Il2CppObject * ___target, ObjectU5BU5D_t11523773* ___args, ParameterModifierU5BU5D_t3379147067* ___modifiers, CultureInfo_t3603717042 * ___culture, StringU5BU5D_t2956870243* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsArrayImpl()
extern "C"  bool TypeBuilder_IsArrayImpl_m1759767571 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsByRefImpl()
extern "C"  bool TypeBuilder_IsByRefImpl_m3584762934 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPointerImpl()
extern "C"  bool TypeBuilder_IsPointerImpl_m189715127 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPrimitiveImpl()
extern "C"  bool TypeBuilder_IsPrimitiveImpl_m501522337 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsValueTypeImpl()
extern "C"  bool TypeBuilder_IsValueTypeImpl_m983821317 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::MakeGenericType(System.Type[])
extern "C"  Type_t * TypeBuilder_MakeGenericType_m740236136 (TypeBuilder_t4287691406 * __this, TypeU5BU5D_t3431720054* ___typeArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.TypeBuilder::get_TypeHandle()
extern "C"  RuntimeTypeHandle_t1864875887  TypeBuilder_get_TypeHandle_m2527260375 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::SetParent(System.Type)
extern "C"  void TypeBuilder_SetParent_m2226876871 (TypeBuilder_t4287691406 * __this, Type_t * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.TypeBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C"  int32_t TypeBuilder_get_next_table_index_m2109425124 (TypeBuilder_t4287691406 * __this, Il2CppObject * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsCompilerContext()
extern "C"  bool TypeBuilder_get_IsCompilerContext_m432935841 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_is_created()
extern "C"  bool TypeBuilder_get_is_created_m695624602 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.TypeBuilder::not_supported()
extern "C"  Exception_t1967233988 * TypeBuilder_not_supported_m2004582477 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_not_created()
extern "C"  void TypeBuilder_check_not_created_m4283406443 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_created()
extern "C"  void TypeBuilder_check_created_m3022374359 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_name(System.String,System.String)
extern "C"  void TypeBuilder_check_name_m566175072 (TypeBuilder_t4287691406 * __this, String_t* ___argName, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::ToString()
extern "C"  String_t* TypeBuilder_ToString_m3882393003 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableFrom(System.Type)
extern "C"  bool TypeBuilder_IsAssignableFrom_m2834740190 (TypeBuilder_t4287691406 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsSubclassOf(System.Type)
extern "C"  bool TypeBuilder_IsSubclassOf_m919862466 (TypeBuilder_t4287691406 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableTo(System.Type)
extern "C"  bool TypeBuilder_IsAssignableTo_m3927127213 (TypeBuilder_t4287691406 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetGenericArguments()
extern "C"  TypeU5BU5D_t3431720054* TypeBuilder_GetGenericArguments_m1892425923 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetGenericTypeDefinition()
extern "C"  Type_t * TypeBuilder_GetGenericTypeDefinition_m4229681124 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_ContainsGenericParameters()
extern "C"  bool TypeBuilder_get_ContainsGenericParameters_m446053341 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()
extern "C"  bool TypeBuilder_get_IsGenericParameter_m78451587 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericTypeDefinition()
extern "C"  bool TypeBuilder_get_IsGenericTypeDefinition_m582825077 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericType()
extern "C"  bool TypeBuilder_get_IsGenericType_m226951426 (TypeBuilder_t4287691406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
