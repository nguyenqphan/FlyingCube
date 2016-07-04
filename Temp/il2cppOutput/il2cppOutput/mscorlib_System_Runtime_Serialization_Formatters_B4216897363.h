#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Runtime.Serialization.ObjectIDGenerator
struct ObjectIDGenerator_t1038861362;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Collections.Queue
struct Queue_t1621224067;
// System.Reflection.Assembly
struct Assembly_t1882292308;
// System.String
struct String_t;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1640433287;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Runtime.Serialization.SerializationObjectManager
struct SerializationObjectManager_t3948087927;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_F3852587989.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Fo125002241.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct  ObjectWriter_t4216897363  : public Il2CppObject
{
public:
	// System.Runtime.Serialization.ObjectIDGenerator System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_idGenerator
	ObjectIDGenerator_t1038861362 * ____idGenerator_0;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_cachedMetadata
	Hashtable_t3875263730 * ____cachedMetadata_1;
	// System.Collections.Queue System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_pendingObjects
	Queue_t1621224067 * ____pendingObjects_2;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_assemblyCache
	Hashtable_t3875263730 * ____assemblyCache_3;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_surrogateSelector
	Il2CppObject * ____surrogateSelector_7;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_context
	StreamingContext_t986364934  ____context_8;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_assemblyFormat
	int32_t ____assemblyFormat_9;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_typeFormat
	int32_t ____typeFormat_10;
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.ObjectWriter::arrayBuffer
	ByteU5BU5D_t58506160* ___arrayBuffer_11;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::ArrayBufferLength
	int32_t ___ArrayBufferLength_12;
	// System.Runtime.Serialization.SerializationObjectManager System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_manager
	SerializationObjectManager_t3948087927 * ____manager_13;

public:
	inline static int32_t get_offset_of__idGenerator_0() { return static_cast<int32_t>(offsetof(ObjectWriter_t4216897363, ____idGenerator_0)); }
	inline ObjectIDGenerator_t1038861362 * get__idGenerator_0() const { return ____idGenerator_0; }
	inline ObjectIDGenerator_t1038861362 ** get_address_of__idGenerator_0() { return &____idGenerator_0; }
	inline void set__idGenerator_0(ObjectIDGenerator_t1038861362 * value)
	{
		____idGenerator_0 = value;
		Il2CppCodeGenWriteBarrier(&____idGenerator_0, value);
	}

	inline static int32_t get_offset_of__cachedMetadata_1() { return static_cast<int32_t>(offsetof(ObjectWriter_t4216897363, ____cachedMetadata_1)); }
	inline Hashtable_t3875263730 * get__cachedMetadata_1() const { return ____cachedMetadata_1; }
	inline Hashtable_t3875263730 ** get_address_of__cachedMetadata_1() { return &____cachedMetadata_1; }
	inline void set__cachedMetadata_1(Hashtable_t3875263730 * value)
	{
		____cachedMetadata_1 = value;
		Il2CppCodeGenWriteBarrier(&____cachedMetadata_1, value);
	}

	inline static int32_t get_offset_of__pendingObjects_2() { return static_cast<int32_t>(offsetof(ObjectWriter_t4216897363, ____pendingObjects_2)); }
	inline Queue_t1621224067 * get__pendingObjects_2() const { return ____pendingObjects_2; }
	inline Queue_t1621224067 ** get_address_of__pendingObjects_2() { return &____pendingObjects_2; }
	inline void set__pendingObjects_2(Queue_t1621224067 * value)
	{
		____pendingObjects_2 = value;
		Il2CppCodeGenWriteBarrier(&____pendingObjects_2, value);
	}

	inline static int32_t get_offset_of__assemblyCache_3() { return static_cast<int32_t>(offsetof(ObjectWriter_t4216897363, ____assemblyCache_3)); }
	inline Hashtable_t3875263730 * get__assemblyCache_3() const { return ____assemblyCache_3; }
	inline Hashtable_t3875263730 ** get_address_of__assemblyCache_3() { return &____assemblyCache_3; }
	inline void set__assemblyCache_3(Hashtable_t3875263730 * value)
	{
		____assemblyCache_3 = value;
		Il2CppCodeGenWriteBarrier(&____assemblyCache_3, value);
	}

	inline static int32_t get_offset_of__surrogateSelector_7() { return static_cast<int32_t>(offsetof(ObjectWriter_t4216897363, ____surrogateSelector_7)); }
	inline Il2CppObject * get__surrogateSelector_7() const { return ____surrogateSelector_7; }
	inline Il2CppObject ** get_address_of__surrogateSelector_7() { return &____surrogateSelector_7; }
	inline void set__surrogateSelector_7(Il2CppObject * value)
	{
		____surrogateSelector_7 = value;
		Il2CppCodeGenWriteBarrier(&____surrogateSelector_7, value);
	}

	inline static int32_t get_offset_of__context_8() { return static_cast<int32_t>(offsetof(ObjectWriter_t4216897363, ____context_8)); }
	inline StreamingContext_t986364934  get__context_8() const { return ____context_8; }
	inline StreamingContext_t986364934 * get_address_of__context_8() { return &____context_8; }
	inline void set__context_8(StreamingContext_t986364934  value)
	{
		____context_8 = value;
	}

	inline static int32_t get_offset_of__assemblyFormat_9() { return static_cast<int32_t>(offsetof(ObjectWriter_t4216897363, ____assemblyFormat_9)); }
	inline int32_t get__assemblyFormat_9() const { return ____assemblyFormat_9; }
	inline int32_t* get_address_of__assemblyFormat_9() { return &____assemblyFormat_9; }
	inline void set__assemblyFormat_9(int32_t value)
	{
		____assemblyFormat_9 = value;
	}

	inline static int32_t get_offset_of__typeFormat_10() { return static_cast<int32_t>(offsetof(ObjectWriter_t4216897363, ____typeFormat_10)); }
	inline int32_t get__typeFormat_10() const { return ____typeFormat_10; }
	inline int32_t* get_address_of__typeFormat_10() { return &____typeFormat_10; }
	inline void set__typeFormat_10(int32_t value)
	{
		____typeFormat_10 = value;
	}

	inline static int32_t get_offset_of_arrayBuffer_11() { return static_cast<int32_t>(offsetof(ObjectWriter_t4216897363, ___arrayBuffer_11)); }
	inline ByteU5BU5D_t58506160* get_arrayBuffer_11() const { return ___arrayBuffer_11; }
	inline ByteU5BU5D_t58506160** get_address_of_arrayBuffer_11() { return &___arrayBuffer_11; }
	inline void set_arrayBuffer_11(ByteU5BU5D_t58506160* value)
	{
		___arrayBuffer_11 = value;
		Il2CppCodeGenWriteBarrier(&___arrayBuffer_11, value);
	}

	inline static int32_t get_offset_of_ArrayBufferLength_12() { return static_cast<int32_t>(offsetof(ObjectWriter_t4216897363, ___ArrayBufferLength_12)); }
	inline int32_t get_ArrayBufferLength_12() const { return ___ArrayBufferLength_12; }
	inline int32_t* get_address_of_ArrayBufferLength_12() { return &___ArrayBufferLength_12; }
	inline void set_ArrayBufferLength_12(int32_t value)
	{
		___ArrayBufferLength_12 = value;
	}

	inline static int32_t get_offset_of__manager_13() { return static_cast<int32_t>(offsetof(ObjectWriter_t4216897363, ____manager_13)); }
	inline SerializationObjectManager_t3948087927 * get__manager_13() const { return ____manager_13; }
	inline SerializationObjectManager_t3948087927 ** get_address_of__manager_13() { return &____manager_13; }
	inline void set__manager_13(SerializationObjectManager_t3948087927 * value)
	{
		____manager_13 = value;
		Il2CppCodeGenWriteBarrier(&____manager_13, value);
	}
};

struct ObjectWriter_t4216897363_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_cachedTypes
	Hashtable_t3875263730 * ____cachedTypes_4;
	// System.Reflection.Assembly System.Runtime.Serialization.Formatters.Binary.ObjectWriter::CorlibAssembly
	Assembly_t1882292308 * ___CorlibAssembly_5;
	// System.String System.Runtime.Serialization.Formatters.Binary.ObjectWriter::CorlibAssemblyName
	String_t* ___CorlibAssemblyName_6;

public:
	inline static int32_t get_offset_of__cachedTypes_4() { return static_cast<int32_t>(offsetof(ObjectWriter_t4216897363_StaticFields, ____cachedTypes_4)); }
	inline Hashtable_t3875263730 * get__cachedTypes_4() const { return ____cachedTypes_4; }
	inline Hashtable_t3875263730 ** get_address_of__cachedTypes_4() { return &____cachedTypes_4; }
	inline void set__cachedTypes_4(Hashtable_t3875263730 * value)
	{
		____cachedTypes_4 = value;
		Il2CppCodeGenWriteBarrier(&____cachedTypes_4, value);
	}

	inline static int32_t get_offset_of_CorlibAssembly_5() { return static_cast<int32_t>(offsetof(ObjectWriter_t4216897363_StaticFields, ___CorlibAssembly_5)); }
	inline Assembly_t1882292308 * get_CorlibAssembly_5() const { return ___CorlibAssembly_5; }
	inline Assembly_t1882292308 ** get_address_of_CorlibAssembly_5() { return &___CorlibAssembly_5; }
	inline void set_CorlibAssembly_5(Assembly_t1882292308 * value)
	{
		___CorlibAssembly_5 = value;
		Il2CppCodeGenWriteBarrier(&___CorlibAssembly_5, value);
	}

	inline static int32_t get_offset_of_CorlibAssemblyName_6() { return static_cast<int32_t>(offsetof(ObjectWriter_t4216897363_StaticFields, ___CorlibAssemblyName_6)); }
	inline String_t* get_CorlibAssemblyName_6() const { return ___CorlibAssemblyName_6; }
	inline String_t** get_address_of_CorlibAssemblyName_6() { return &___CorlibAssemblyName_6; }
	inline void set_CorlibAssemblyName_6(String_t* value)
	{
		___CorlibAssemblyName_6 = value;
		Il2CppCodeGenWriteBarrier(&___CorlibAssemblyName_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
