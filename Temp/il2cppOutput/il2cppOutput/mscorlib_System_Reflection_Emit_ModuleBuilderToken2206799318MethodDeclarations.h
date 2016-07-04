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

// System.Reflection.Emit.ModuleBuilderTokenGenerator
struct ModuleBuilderTokenGenerator_t2206799318;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t1058295580;
// System.String
struct String_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_ModuleBuilder1058295580.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Reflection_MemberInfo2843033814.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"

// System.Void System.Reflection.Emit.ModuleBuilderTokenGenerator::.ctor(System.Reflection.Emit.ModuleBuilder)
extern "C"  void ModuleBuilderTokenGenerator__ctor_m3538557064 (ModuleBuilderTokenGenerator_t2206799318 * __this, ModuleBuilder_t1058295580 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilderTokenGenerator::GetToken(System.String)
extern "C"  int32_t ModuleBuilderTokenGenerator_GetToken_m1745023583 (ModuleBuilderTokenGenerator_t2206799318 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilderTokenGenerator::GetToken(System.Reflection.MemberInfo)
extern "C"  int32_t ModuleBuilderTokenGenerator_GetToken_m2106467927 (ModuleBuilderTokenGenerator_t2206799318 * __this, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilderTokenGenerator::GetToken(System.Reflection.MethodInfo,System.Type[])
extern "C"  int32_t ModuleBuilderTokenGenerator_GetToken_m399214081 (ModuleBuilderTokenGenerator_t2206799318 * __this, MethodInfo_t * ___method, TypeU5BU5D_t3431720054* ___opt_param_types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
