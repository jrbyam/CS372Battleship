#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t262791171;
// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1136554526;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Linq.Expressions.LambdaExpression,System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>>
struct  KeyValuePair_2_t3550715167 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	LambdaExpression_t262791171 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_t1136554526 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3550715167, ___key_0)); }
	inline LambdaExpression_t262791171 * get_key_0() const { return ___key_0; }
	inline LambdaExpression_t262791171 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(LambdaExpression_t262791171 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3550715167, ___value_1)); }
	inline List_1_t1136554526 * get_value_1() const { return ___value_1; }
	inline List_1_t1136554526 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(List_1_t1136554526 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
