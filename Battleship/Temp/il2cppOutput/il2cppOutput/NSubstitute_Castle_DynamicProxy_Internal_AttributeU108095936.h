#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IDictionary`2<System.Type,Castle.DynamicProxy.IAttributeDisassembler>
struct IDictionary_2_t3866832170;
// Castle.DynamicProxy.IAttributeDisassembler
struct IAttributeDisassembler_t578618668;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Internal.AttributeUtil
struct  AttributeUtil_t108095936  : public Il2CppObject
{
public:

public:
};

struct AttributeUtil_t108095936_StaticFields
{
public:
	// System.Collections.Generic.IDictionary`2<System.Type,Castle.DynamicProxy.IAttributeDisassembler> Castle.DynamicProxy.Internal.AttributeUtil::disassemblers
	Il2CppObject* ___disassemblers_0;
	// Castle.DynamicProxy.IAttributeDisassembler Castle.DynamicProxy.Internal.AttributeUtil::fallbackDisassembler
	Il2CppObject * ___fallbackDisassembler_1;

public:
	inline static int32_t get_offset_of_disassemblers_0() { return static_cast<int32_t>(offsetof(AttributeUtil_t108095936_StaticFields, ___disassemblers_0)); }
	inline Il2CppObject* get_disassemblers_0() const { return ___disassemblers_0; }
	inline Il2CppObject** get_address_of_disassemblers_0() { return &___disassemblers_0; }
	inline void set_disassemblers_0(Il2CppObject* value)
	{
		___disassemblers_0 = value;
		Il2CppCodeGenWriteBarrier(&___disassemblers_0, value);
	}

	inline static int32_t get_offset_of_fallbackDisassembler_1() { return static_cast<int32_t>(offsetof(AttributeUtil_t108095936_StaticFields, ___fallbackDisassembler_1)); }
	inline Il2CppObject * get_fallbackDisassembler_1() const { return ___fallbackDisassembler_1; }
	inline Il2CppObject ** get_address_of_fallbackDisassembler_1() { return &___fallbackDisassembler_1; }
	inline void set_fallbackDisassembler_1(Il2CppObject * value)
	{
		___fallbackDisassembler_1 = value;
		Il2CppCodeGenWriteBarrier(&___fallbackDisassembler_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
