#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.EventInfo
struct EventInfo_t;
// Castle.DynamicProxy.Generators.MetaEvent
struct MetaEvent_t524284456;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Reflection.EventInfo,Castle.DynamicProxy.Generators.MetaEvent>
struct  KeyValuePair_2_t3499713770 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	EventInfo_t * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	MetaEvent_t524284456 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3499713770, ___key_0)); }
	inline EventInfo_t * get_key_0() const { return ___key_0; }
	inline EventInfo_t ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(EventInfo_t * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3499713770, ___value_1)); }
	inline MetaEvent_t524284456 * get_value_1() const { return ___value_1; }
	inline MetaEvent_t524284456 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(MetaEvent_t524284456 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
