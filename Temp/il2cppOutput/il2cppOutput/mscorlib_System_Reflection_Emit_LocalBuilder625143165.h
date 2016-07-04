#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;

#include "mscorlib_System_Reflection_LocalVariableInfo721262211.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.LocalBuilder
struct  LocalBuilder_t625143165  : public LocalVariableInfo_t721262211
{
public:
	// System.Reflection.Emit.ILGenerator System.Reflection.Emit.LocalBuilder::ilgen
	ILGenerator_t3869071517 * ___ilgen_3;

public:
	inline static int32_t get_offset_of_ilgen_3() { return static_cast<int32_t>(offsetof(LocalBuilder_t625143165, ___ilgen_3)); }
	inline ILGenerator_t3869071517 * get_ilgen_3() const { return ___ilgen_3; }
	inline ILGenerator_t3869071517 ** get_address_of_ilgen_3() { return &___ilgen_3; }
	inline void set_ilgen_3(ILGenerator_t3869071517 * value)
	{
		___ilgen_3 = value;
		Il2CppCodeGenWriteBarrier(&___ilgen_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
