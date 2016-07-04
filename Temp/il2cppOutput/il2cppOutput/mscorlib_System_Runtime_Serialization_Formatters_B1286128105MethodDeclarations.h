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

// System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata
struct SerializableTypeMetadata_t1286128105;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct TypeMetadata_t1707658058;
// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t4216897363;
// System.IO.BinaryWriter
struct BinaryWriter_t2314211483;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B1707658058.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B4216897363.h"
#include "mscorlib_System_IO_BinaryWriter2314211483.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::.ctor(System.Type,System.Runtime.Serialization.SerializationInfo)
extern "C"  void SerializableTypeMetadata__ctor_m4014682835 (SerializableTypeMetadata_t1286128105 * __this, Type_t * ___itype, SerializationInfo_t2995724695 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::IsCompatible(System.Runtime.Serialization.Formatters.Binary.TypeMetadata)
extern "C"  bool SerializableTypeMetadata_IsCompatible_m828851263 (SerializableTypeMetadata_t1286128105 * __this, TypeMetadata_t1707658058 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteAssemblies(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter)
extern "C"  void SerializableTypeMetadata_WriteAssemblies_m355185654 (SerializableTypeMetadata_t1286128105 * __this, ObjectWriter_t4216897363 * ___ow, BinaryWriter_t2314211483 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteTypeData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Boolean)
extern "C"  void SerializableTypeMetadata_WriteTypeData_m2677462151 (SerializableTypeMetadata_t1286128105 * __this, ObjectWriter_t4216897363 * ___ow, BinaryWriter_t2314211483 * ___writer, bool ___writeTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteObjectData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Object)
extern "C"  void SerializableTypeMetadata_WriteObjectData_m1813279113 (SerializableTypeMetadata_t1286128105 * __this, ObjectWriter_t4216897363 * ___ow, BinaryWriter_t2314211483 * ___writer, Il2CppObject * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::get_RequiresTypes()
extern "C"  bool SerializableTypeMetadata_get_RequiresTypes_m2353291923 (SerializableTypeMetadata_t1286128105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
