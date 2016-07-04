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

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t341659722;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1640433287;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t3161036435;
// System.Object
struct Il2CppObject;
// System.IO.Stream
struct Stream_t219029575;
// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t379822999;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t3833532446;
// System.IO.BinaryWriter
struct BinaryWriter_t2314211483;
// System.IO.BinaryReader
struct BinaryReader_t2158806251;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_F3852587989.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Ty612045862.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHa379822999.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IO_BinaryWriter2314211483.h"
#include "mscorlib_System_IO_BinaryReader2158806251.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
extern "C"  void BinaryFormatter__ctor_m1913171908 (BinaryFormatter_t341659722 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern "C"  void BinaryFormatter__ctor_m203421689 (BinaryFormatter_t341659722 * __this, Il2CppObject * ___selector, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_DefaultSurrogateSelector()
extern "C"  Il2CppObject * BinaryFormatter_get_DefaultSurrogateSelector_m2270608689 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::set_AssemblyFormat(System.Runtime.Serialization.Formatters.FormatterAssemblyStyle)
extern "C"  void BinaryFormatter_set_AssemblyFormat_m2535395303 (BinaryFormatter_t341659722 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Binder()
extern "C"  SerializationBinder_t3161036435 * BinaryFormatter_get_Binder_m2433428471 (BinaryFormatter_t341659722 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Context()
extern "C"  StreamingContext_t986364934  BinaryFormatter_get_Context_m888837013 (BinaryFormatter_t341659722 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_SurrogateSelector()
extern "C"  Il2CppObject * BinaryFormatter_get_SurrogateSelector_m862097470 (BinaryFormatter_t341659722 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_FilterLevel()
extern "C"  int32_t BinaryFormatter_get_FilterLevel_m123523474 (BinaryFormatter_t341659722 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
extern "C"  Il2CppObject * BinaryFormatter_Deserialize_m3942088227 (BinaryFormatter_t341659722 * __this, Stream_t219029575 * ___serializationStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::NoCheckDeserialize(System.IO.Stream,System.Runtime.Remoting.Messaging.HeaderHandler)
extern "C"  Il2CppObject * BinaryFormatter_NoCheckDeserialize_m2451994899 (BinaryFormatter_t341659722 * __this, Stream_t219029575 * ___serializationStream, HeaderHandler_t379822999 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object)
extern "C"  void BinaryFormatter_Serialize_m2138605799 (BinaryFormatter_t341659722 * __this, Stream_t219029575 * ___serializationStream, Il2CppObject * ___graph, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object,System.Runtime.Remoting.Messaging.Header[])
extern "C"  void BinaryFormatter_Serialize_m982420848 (BinaryFormatter_t341659722 * __this, Stream_t219029575 * ___serializationStream, Il2CppObject * ___graph, HeaderU5BU5D_t3833532446* ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::WriteBinaryHeader(System.IO.BinaryWriter,System.Boolean)
extern "C"  void BinaryFormatter_WriteBinaryHeader_m244536491 (BinaryFormatter_t341659722 * __this, BinaryWriter_t2314211483 * ___writer, bool ___hasHeaders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::ReadBinaryHeader(System.IO.BinaryReader,System.Boolean&)
extern "C"  void BinaryFormatter_ReadBinaryHeader_m258242310 (BinaryFormatter_t341659722 * __this, BinaryReader_t2158806251 * ___reader, bool* ___hasHeaders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
