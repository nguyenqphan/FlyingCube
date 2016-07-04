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

// System.IO.BinaryWriter
struct BinaryWriter_t2314211483;
// System.IO.Stream
struct Stream_t219029575;
// System.Text.Encoding
struct Encoding_t180559927;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_Text_Encoding180559927.h"
#include "mscorlib_System_Decimal1688557254.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.IO.BinaryWriter::.ctor()
extern "C"  void BinaryWriter__ctor_m3320479349 (BinaryWriter_t2314211483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
extern "C"  void BinaryWriter__ctor_m3820043020 (BinaryWriter_t2314211483 * __this, Stream_t219029575 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void BinaryWriter__ctor_m3271046021 (BinaryWriter_t2314211483 * __this, Stream_t219029575 * ___output, Encoding_t180559927 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.cctor()
extern "C"  void BinaryWriter__cctor_m3668515800 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::System.IDisposable.Dispose()
extern "C"  void BinaryWriter_System_IDisposable_Dispose_m3902299210 (BinaryWriter_t2314211483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Dispose(System.Boolean)
extern "C"  void BinaryWriter_Dispose_m1210247017 (BinaryWriter_t2314211483 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Flush()
extern "C"  void BinaryWriter_Flush_m3404426647 (BinaryWriter_t2314211483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Boolean)
extern "C"  void BinaryWriter_Write_m3041269161 (BinaryWriter_t2314211483 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Byte)
extern "C"  void BinaryWriter_Write_m1743996025 (BinaryWriter_t2314211483 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Byte[])
extern "C"  void BinaryWriter_Write_m942985559 (BinaryWriter_t2314211483 * __this, ByteU5BU5D_t58506160* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void BinaryWriter_Write_m748689399 (BinaryWriter_t2314211483 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Char)
extern "C"  void BinaryWriter_Write_m1744395243 (BinaryWriter_t2314211483 * __this, uint16_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Char[])
extern "C"  void BinaryWriter_Write_m1326634057 (BinaryWriter_t2314211483 * __this, CharU5BU5D_t3416858730* ___chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Decimal)
extern "C"  void BinaryWriter_Write_m1600738208 (BinaryWriter_t2314211483 * __this, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Double)
extern "C"  void BinaryWriter_Write_m2432552144 (BinaryWriter_t2314211483 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Int16)
extern "C"  void BinaryWriter_Write_m2714465021 (BinaryWriter_t2314211483 * __this, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Int32)
extern "C"  void BinaryWriter_Write_m2714466819 (BinaryWriter_t2314211483 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Int64)
extern "C"  void BinaryWriter_Write_m2714469764 (BinaryWriter_t2314211483 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.SByte)
extern "C"  void BinaryWriter_Write_m2960336406 (BinaryWriter_t2314211483 * __this, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Single)
extern "C"  void BinaryWriter_Write_m2682114873 (BinaryWriter_t2314211483 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.String)
extern "C"  void BinaryWriter_Write_m3000791184 (BinaryWriter_t2314211483 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.UInt16)
extern "C"  void BinaryWriter_Write_m3541318530 (BinaryWriter_t2314211483 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.UInt32)
extern "C"  void BinaryWriter_Write_m3541320328 (BinaryWriter_t2314211483 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.UInt64)
extern "C"  void BinaryWriter_Write_m3541323273 (BinaryWriter_t2314211483 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write7BitEncodedInt(System.Int32)
extern "C"  void BinaryWriter_Write7BitEncodedInt_m1552112122 (BinaryWriter_t2314211483 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
