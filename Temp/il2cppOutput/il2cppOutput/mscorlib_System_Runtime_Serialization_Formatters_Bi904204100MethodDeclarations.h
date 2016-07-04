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
// System.Object
struct Il2CppObject;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t3833532446;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1640433287;
// System.IO.BinaryReader
struct BinaryReader_t2158806251;
// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t379822999;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t341659722;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t2352624281;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Type
struct Type_t;
// System.Collections.IDictionary
struct IDictionary_t1654916945;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_BinaryWriter2314211483.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_F3852587989.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Fo125002241.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B2264754748.h"
#include "mscorlib_System_IO_BinaryReader2158806251.h"
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHa379822999.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Bi341659722.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.MessageFormatter::WriteMethodCall(System.IO.BinaryWriter,System.Object,System.Runtime.Remoting.Messaging.Header[],System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.Formatters.FormatterTypeStyle)
extern "C"  void MessageFormatter_WriteMethodCall_m422932223 (Il2CppObject * __this /* static, unused */, BinaryWriter_t2314211483 * ___writer, Il2CppObject * ___obj, HeaderU5BU5D_t3833532446* ___headers, Il2CppObject * ___surrogateSelector, StreamingContext_t986364934  ___context, int32_t ___assemblyFormat, int32_t ___typeFormat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MessageFormatter::WriteMethodResponse(System.IO.BinaryWriter,System.Object,System.Runtime.Remoting.Messaging.Header[],System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.Formatters.FormatterTypeStyle)
extern "C"  void MessageFormatter_WriteMethodResponse_m3855499772 (Il2CppObject * __this /* static, unused */, BinaryWriter_t2314211483 * ___writer, Il2CppObject * ___obj, HeaderU5BU5D_t3833532446* ___headers, Il2CppObject * ___surrogateSelector, StreamingContext_t986364934  ___context, int32_t ___assemblyFormat, int32_t ___typeFormat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodCall(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C"  Il2CppObject * MessageFormatter_ReadMethodCall_m3773075223 (Il2CppObject * __this /* static, unused */, uint8_t ___elem, BinaryReader_t2158806251 * ___reader, bool ___hasHeaders, HeaderHandler_t379822999 * ___headerHandler, BinaryFormatter_t341659722 * ___formatter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodResponse(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Remoting.Messaging.IMethodCallMessage,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C"  Il2CppObject * MessageFormatter_ReadMethodResponse_m1841037205 (Il2CppObject * __this /* static, unused */, uint8_t ___elem, BinaryReader_t2158806251 * ___reader, bool ___hasHeaders, HeaderHandler_t379822999 * ___headerHandler, Il2CppObject * ___methodCallMessage, BinaryFormatter_t341659722 * ___formatter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.MessageFormatter::AllTypesArePrimitive(System.Object[])
extern "C"  bool MessageFormatter_AllTypesArePrimitive_m3926975387 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t11523773* ___objects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.MessageFormatter::IsMethodPrimitive(System.Type)
extern "C"  bool MessageFormatter_IsMethodPrimitive_m3463040103 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Serialization.Formatters.Binary.MessageFormatter::GetExtraProperties(System.Collections.IDictionary,System.String[])
extern "C"  ObjectU5BU5D_t11523773* MessageFormatter_GetExtraProperties_m1259624667 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___properties, StringU5BU5D_t2956870243* ___internalKeys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.MessageFormatter::IsInternalKey(System.String,System.String[])
extern "C"  bool MessageFormatter_IsInternalKey_m2159509102 (Il2CppObject * __this /* static, unused */, String_t* ___key, StringU5BU5D_t2956870243* ___internalKeys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
