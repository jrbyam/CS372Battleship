#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Castle.DynamicProxy.Generators.Emitters.LdcOpCodesDictionary
struct LdcOpCodesDictionary_t3968609950;

#include "mscorlib_System_Collections_Generic_Dictionary_2_g1846558398.h"
#include "mscorlib_System_Reflection_Emit_OpCode4028977979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.LdcOpCodesDictionary
struct  LdcOpCodesDictionary_t3968609950  : public Dictionary_2_t1846558398
{
public:

public:
};

struct LdcOpCodesDictionary_t3968609950_StaticFields
{
public:
	// Castle.DynamicProxy.Generators.Emitters.LdcOpCodesDictionary Castle.DynamicProxy.Generators.Emitters.LdcOpCodesDictionary::dict
	LdcOpCodesDictionary_t3968609950 * ___dict_16;
	// System.Reflection.Emit.OpCode Castle.DynamicProxy.Generators.Emitters.LdcOpCodesDictionary::emptyOpCode
	OpCode_t4028977979  ___emptyOpCode_17;

public:
	inline static int32_t get_offset_of_dict_16() { return static_cast<int32_t>(offsetof(LdcOpCodesDictionary_t3968609950_StaticFields, ___dict_16)); }
	inline LdcOpCodesDictionary_t3968609950 * get_dict_16() const { return ___dict_16; }
	inline LdcOpCodesDictionary_t3968609950 ** get_address_of_dict_16() { return &___dict_16; }
	inline void set_dict_16(LdcOpCodesDictionary_t3968609950 * value)
	{
		___dict_16 = value;
		Il2CppCodeGenWriteBarrier(&___dict_16, value);
	}

	inline static int32_t get_offset_of_emptyOpCode_17() { return static_cast<int32_t>(offsetof(LdcOpCodesDictionary_t3968609950_StaticFields, ___emptyOpCode_17)); }
	inline OpCode_t4028977979  get_emptyOpCode_17() const { return ___emptyOpCode_17; }
	inline OpCode_t4028977979 * get_address_of_emptyOpCode_17() { return &___emptyOpCode_17; }
	inline void set_emptyOpCode_17(OpCode_t4028977979  value)
	{
		___emptyOpCode_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
