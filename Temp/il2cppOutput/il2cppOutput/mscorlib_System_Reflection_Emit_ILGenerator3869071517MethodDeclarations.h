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

// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;
// System.Reflection.Module
struct Module_t206139610;
// System.Reflection.Emit.TokenGenerator
struct TokenGenerator_t1614283943;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.Emit.LocalBuilder
struct LocalBuilder_t625143165;
// System.Type
struct Type_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Module206139610.h"
#include "mscorlib_System_Reflection_MemberInfo2843033814.h"
#include "mscorlib_System_Reflection_Emit_OpCode4028977979.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_Emit_Label1734909569.h"
#include "mscorlib_System_Reflection_ConstructorInfo3542137334.h"
#include "mscorlib_System_Reflection_FieldInfo1164929782.h"
#include "mscorlib_System_Reflection_Emit_LocalBuilder625143165.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator3869071517.h"

// System.Void System.Reflection.Emit.ILGenerator::.ctor(System.Reflection.Module,System.Reflection.Emit.TokenGenerator,System.Int32)
extern "C"  void ILGenerator__ctor_m363767667 (ILGenerator_t3869071517 * __this, Module_t206139610 * ___m, Il2CppObject * ___token_gen, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::.cctor()
extern "C"  void ILGenerator__cctor_m152040660 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::add_token_fixup(System.Reflection.MemberInfo)
extern "C"  void ILGenerator_add_token_fixup_m1030891159 (ILGenerator_t3869071517 * __this, MemberInfo_t * ___mi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::make_room(System.Int32)
extern "C"  void ILGenerator_make_room_m3150005908 (ILGenerator_t3869071517 * __this, int32_t ___nbytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::emit_int(System.Int32)
extern "C"  void ILGenerator_emit_int_m1452131359 (ILGenerator_t3869071517 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::ll_emit(System.Reflection.Emit.OpCode)
extern "C"  void ILGenerator_ll_emit_m2322068804 (ILGenerator_t3869071517 * __this, OpCode_t4028977979  ___opcode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ILGenerator::target_len(System.Reflection.Emit.OpCode)
extern "C"  int32_t ILGenerator_target_len_m3025186431 (Il2CppObject * __this /* static, unused */, OpCode_t4028977979  ___opcode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.LocalBuilder System.Reflection.Emit.ILGenerator::DeclareLocal(System.Type)
extern "C"  LocalBuilder_t625143165 * ILGenerator_DeclareLocal_m431075649 (ILGenerator_t3869071517 * __this, Type_t * ___localType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.LocalBuilder System.Reflection.Emit.ILGenerator::DeclareLocal(System.Type,System.Boolean)
extern "C"  LocalBuilder_t625143165 * ILGenerator_DeclareLocal_m1507842076 (ILGenerator_t3869071517 * __this, Type_t * ___localType, bool ___pinned, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.Label System.Reflection.Emit.ILGenerator::DefineLabel()
extern "C"  Label_t1734909569  ILGenerator_DefineLabel_m2892013666 (ILGenerator_t3869071517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode)
extern "C"  void ILGenerator_Emit_m1513421455 (ILGenerator_t3869071517 * __this, OpCode_t4028977979  ___opcode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Byte)
extern "C"  void ILGenerator_Emit_m1177588532 (ILGenerator_t3869071517 * __this, OpCode_t4028977979  ___opcode, uint8_t ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.ConstructorInfo)
extern "C"  void ILGenerator_Emit_m726728631 (ILGenerator_t3869071517 * __this, OpCode_t4028977979  ___opcode, ConstructorInfo_t3542137334 * ___con, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.FieldInfo)
extern "C"  void ILGenerator_Emit_m899075895 (ILGenerator_t3869071517 * __this, OpCode_t4028977979  ___opcode, FieldInfo_t * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Int32)
extern "C"  void ILGenerator_Emit_m2335703720 (ILGenerator_t3869071517 * __this, OpCode_t4028977979  ___opcode, int32_t ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.Emit.Label)
extern "C"  void ILGenerator_Emit_m628373050 (ILGenerator_t3869071517 * __this, OpCode_t4028977979  ___opcode, Label_t1734909569  ___label, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.Emit.LocalBuilder)
extern "C"  void ILGenerator_Emit_m3548472916 (ILGenerator_t3869071517 * __this, OpCode_t4028977979  ___opcode, LocalBuilder_t625143165 * ___local, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo)
extern "C"  void ILGenerator_Emit_m1087212740 (ILGenerator_t3869071517 * __this, OpCode_t4028977979  ___opcode, MethodInfo_t * ___meth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Int32)
extern "C"  void ILGenerator_Emit_m1535602323 (ILGenerator_t3869071517 * __this, OpCode_t4028977979  ___opcode, MethodInfo_t * ___method, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.String)
extern "C"  void ILGenerator_Emit_m4144037003 (ILGenerator_t3869071517 * __this, OpCode_t4028977979  ___opcode, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Type)
extern "C"  void ILGenerator_Emit_m1194208066 (ILGenerator_t3869071517 * __this, OpCode_t4028977979  ___opcode, Type_t * ___cls, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::EmitCall(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Type[])
extern "C"  void ILGenerator_EmitCall_m3720990163 (ILGenerator_t3869071517 * __this, OpCode_t4028977979  ___opcode, MethodInfo_t * ___methodInfo, TypeU5BU5D_t3431720054* ___optionalParameterTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::MarkLabel(System.Reflection.Emit.Label)
extern "C"  void ILGenerator_MarkLabel_m2628862049 (ILGenerator_t3869071517 * __this, Label_t1734909569  ___loc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::label_fixup()
extern "C"  void ILGenerator_label_fixup_m2969084380 (ILGenerator_t3869071517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ILGenerator::Mono_GetCurrentOffset(System.Reflection.Emit.ILGenerator)
extern "C"  int32_t ILGenerator_Mono_GetCurrentOffset_m436459828 (Il2CppObject * __this /* static, unused */, ILGenerator_t3869071517 * ___ig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
