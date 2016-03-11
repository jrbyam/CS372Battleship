#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// Castle.DynamicProxy.Generators.MetaProperty
struct MetaProperty_t2675851725;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Reflection.PropertyInfo,Castle.DynamicProxy.Generators.MetaProperty>
struct  KeyValuePair_2_t2193790024 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	PropertyInfo_t * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	MetaProperty_t2675851725 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2193790024, ___key_0)); }
	inline PropertyInfo_t * get_key_0() const { return ___key_0; }
	inline PropertyInfo_t ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(PropertyInfo_t * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2193790024, ___value_1)); }
	inline MetaProperty_t2675851725 * get_value_1() const { return ___value_1; }
	inline MetaProperty_t2675851725 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(MetaProperty_t2675851725 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
