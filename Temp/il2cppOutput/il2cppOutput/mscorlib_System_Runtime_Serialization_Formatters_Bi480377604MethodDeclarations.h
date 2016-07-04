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

// System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata
struct MemberTypeMetadata_t480377604;
// System.Type
struct Type_t;
// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t4216897363;
// System.IO.BinaryWriter
struct BinaryWriter_t2314211483;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B4216897363.h"
#include "mscorlib_System_IO_BinaryWriter2314211483.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::.ctor(System.Type,System.Runtime.Serialization.StreamingContext)
extern "C"  void MemberTypeMetadata__ctor_m2555872271 (MemberTypeMetadata_t480377604 * __this, Type_t * ___type, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::WriteAssemblies(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter)
extern "C"  void MemberTypeMetadata_WriteAssemblies_m1974093883 (MemberTypeMetadata_t480377604 * __this, ObjectWriter_t4216897363 * ___ow, BinaryWriter_t2314211483 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::WriteTypeData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Boolean)
extern "C"  void MemberTypeMetadata_WriteTypeData_m2502957154 (MemberTypeMetadata_t480377604 * __this, ObjectWriter_t4216897363 * ___ow, BinaryWriter_t2314211483 * ___writer, bool ___writeTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::WriteObjectData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Object)
extern "C"  void MemberTypeMetadata_WriteObjectData_m698591502 (MemberTypeMetadata_t480377604 * __this, ObjectWriter_t4216897363 * ___ow, BinaryWriter_t2314211483 * ___writer, Il2CppObject * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
