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

// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t1058295580;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t3642540642;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t4287691406;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Reflection.Emit.TypeBuilder[]
struct TypeBuilderU5BU5D_t2520789883;
// System.Object
struct Il2CppObject;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.Emit.TokenGenerator
struct TokenGenerator_t1614283943;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_AssemblyBuilder3642540642.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Reflection_Emit_ModuleBuilder1058295580.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_TypeAttributes104824479.h"
#include "mscorlib_System_Reflection_Emit_TypeBuilder4287691406.h"
#include "mscorlib_System_Reflection_Emit_PackingSize2950865495.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "mscorlib_System_Reflection_MemberInfo2843033814.h"

// System.Void System.Reflection.Emit.ModuleBuilder::.ctor(System.Reflection.Emit.AssemblyBuilder,System.String,System.String,System.Boolean,System.Boolean)
extern "C"  void ModuleBuilder__ctor_m2747545556 (ModuleBuilder_t1058295580 * __this, AssemblyBuilder_t3642540642 * ___assb, String_t* ___name, String_t* ___fullyqname, bool ___emitSymbolInfo, bool ___transient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::.cctor()
extern "C"  void ModuleBuilder__cctor_m1218472467 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::basic_init(System.Reflection.Emit.ModuleBuilder)
extern "C"  void ModuleBuilder_basic_init_m2717692595 (Il2CppObject * __this /* static, unused */, ModuleBuilder_t1058295580 * ___ab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::set_wrappers_type(System.Reflection.Emit.ModuleBuilder,System.Type)
extern "C"  void ModuleBuilder_set_wrappers_type_m3721446447 (Il2CppObject * __this /* static, unused */, ModuleBuilder_t1058295580 * ___mb, Type_t * ___ab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ModuleBuilder::IsTransient()
extern "C"  bool ModuleBuilder_IsTransient_m233883382 (ModuleBuilder_t1058295580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::DefineType(System.String,System.Reflection.TypeAttributes,System.Type)
extern "C"  TypeBuilder_t4287691406 * ModuleBuilder_DefineType_m1318627618 (ModuleBuilder_t1058295580 * __this, String_t* ___name, int32_t ___attr, Type_t * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::AddType(System.Reflection.Emit.TypeBuilder)
extern "C"  void ModuleBuilder_AddType_m2719739433 (ModuleBuilder_t1058295580 * __this, TypeBuilder_t4287691406 * ___tb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::DefineType(System.String,System.Reflection.TypeAttributes,System.Type,System.Type[],System.Reflection.Emit.PackingSize,System.Int32)
extern "C"  TypeBuilder_t4287691406 * ModuleBuilder_DefineType_m913734295 (ModuleBuilder_t1058295580 * __this, String_t* ___name, int32_t ___attr, Type_t * ___parent, TypeU5BU5D_t3431720054* ___interfaces, int32_t ___packingSize, int32_t ___typesize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::DefineType(System.String,System.Reflection.TypeAttributes,System.Type,System.Type[])
extern "C"  TypeBuilder_t4287691406 * ModuleBuilder_DefineType_m4205468467 (ModuleBuilder_t1058295580 * __this, String_t* ___name, int32_t ___attr, Type_t * ___parent, TypeU5BU5D_t3431720054* ___interfaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ModuleBuilder::GetType(System.String)
extern "C"  Type_t * ModuleBuilder_GetType_m624865332 (ModuleBuilder_t1058295580 * __this, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::search_in_array(System.Reflection.Emit.TypeBuilder[],System.Int32,System.String)
extern "C"  TypeBuilder_t4287691406 * ModuleBuilder_search_in_array_m695084018 (ModuleBuilder_t1058295580 * __this, TypeBuilderU5BU5D_t2520789883* ___arr, int32_t ___validElementsInArray, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::search_nested_in_array(System.Reflection.Emit.TypeBuilder[],System.Int32,System.String)
extern "C"  TypeBuilder_t4287691406 * ModuleBuilder_search_nested_in_array_m2114996452 (ModuleBuilder_t1058295580 * __this, TypeBuilderU5BU5D_t2520789883* ___arr, int32_t ___validElementsInArray, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ModuleBuilder::create_modified_type(System.Reflection.Emit.TypeBuilder,System.String)
extern "C"  Type_t * ModuleBuilder_create_modified_type_m337888899 (Il2CppObject * __this /* static, unused */, TypeBuilder_t4287691406 * ___tb, String_t* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::GetMaybeNested(System.Reflection.Emit.TypeBuilder,System.String)
extern "C"  TypeBuilder_t4287691406 * ModuleBuilder_GetMaybeNested_m2935224806 (ModuleBuilder_t1058295580 * __this, TypeBuilder_t4287691406 * ___t, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ModuleBuilder::GetType(System.String,System.Boolean,System.Boolean)
extern "C"  Type_t * ModuleBuilder_GetType_m3034338196 (ModuleBuilder_t1058295580 * __this, String_t* ___className, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C"  int32_t ModuleBuilder_get_next_table_index_m3600803990 (ModuleBuilder_t1058295580 * __this, Il2CppObject * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.ModuleBuilder::GetTypes()
extern "C"  TypeU5BU5D_t3431720054* ModuleBuilder_GetTypes_m2017043429 (ModuleBuilder_t1058295580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::getUSIndex(System.Reflection.Emit.ModuleBuilder,System.String)
extern "C"  int32_t ModuleBuilder_getUSIndex_m2438061448 (Il2CppObject * __this /* static, unused */, ModuleBuilder_t1058295580 * ___mb, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::getToken(System.Reflection.Emit.ModuleBuilder,System.Object)
extern "C"  int32_t ModuleBuilder_getToken_m242473055 (Il2CppObject * __this /* static, unused */, ModuleBuilder_t1058295580 * ___mb, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::getMethodToken(System.Reflection.Emit.ModuleBuilder,System.Reflection.MethodInfo,System.Type[])
extern "C"  int32_t ModuleBuilder_getMethodToken_m628227796 (Il2CppObject * __this /* static, unused */, ModuleBuilder_t1058295580 * ___mb, MethodInfo_t * ___method, TypeU5BU5D_t3431720054* ___opt_param_types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::GetToken(System.String)
extern "C"  int32_t ModuleBuilder_GetToken_m2742869337 (ModuleBuilder_t1058295580 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::GetToken(System.Reflection.MemberInfo)
extern "C"  int32_t ModuleBuilder_GetToken_m1580574749 (ModuleBuilder_t1058295580 * __this, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::GetToken(System.Reflection.MethodInfo,System.Type[])
extern "C"  int32_t ModuleBuilder_GetToken_m1483830599 (ModuleBuilder_t1058295580 * __this, MethodInfo_t * ___method, TypeU5BU5D_t3431720054* ___opt_param_types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::RegisterToken(System.Object,System.Int32)
extern "C"  void ModuleBuilder_RegisterToken_m2593402065 (ModuleBuilder_t1058295580 * __this, Il2CppObject * ___obj, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TokenGenerator System.Reflection.Emit.ModuleBuilder::GetTokenGenerator()
extern "C"  Il2CppObject * ModuleBuilder_GetTokenGenerator_m4211747974 (ModuleBuilder_t1058295580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ModuleBuilder::get_FileName()
extern "C"  String_t* ModuleBuilder_get_FileName_m1846030717 (ModuleBuilder_t1058295580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::CreateGlobalType()
extern "C"  void ModuleBuilder_CreateGlobalType_m3592496387 (ModuleBuilder_t1058295580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
