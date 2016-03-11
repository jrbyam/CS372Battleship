#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Object>
struct List_1_t1634065389;
// System.Collections.Generic.List`1<System.Linq.Expressions.EmitContext>
struct List_1_t3980085593;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.LambdaExpression,System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>>
struct Dictionary_2_t4062183869;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.CompilationContext
struct  CompilationContext_t1096990896  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.Object> System.Linq.Expressions.CompilationContext::globals
	List_1_t1634065389 * ___globals_0;
	// System.Collections.Generic.List`1<System.Linq.Expressions.EmitContext> System.Linq.Expressions.CompilationContext::units
	List_1_t3980085593 * ___units_1;
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.LambdaExpression,System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>> System.Linq.Expressions.CompilationContext::hoisted_map
	Dictionary_2_t4062183869 * ___hoisted_map_2;

public:
	inline static int32_t get_offset_of_globals_0() { return static_cast<int32_t>(offsetof(CompilationContext_t1096990896, ___globals_0)); }
	inline List_1_t1634065389 * get_globals_0() const { return ___globals_0; }
	inline List_1_t1634065389 ** get_address_of_globals_0() { return &___globals_0; }
	inline void set_globals_0(List_1_t1634065389 * value)
	{
		___globals_0 = value;
		Il2CppCodeGenWriteBarrier(&___globals_0, value);
	}

	inline static int32_t get_offset_of_units_1() { return static_cast<int32_t>(offsetof(CompilationContext_t1096990896, ___units_1)); }
	inline List_1_t3980085593 * get_units_1() const { return ___units_1; }
	inline List_1_t3980085593 ** get_address_of_units_1() { return &___units_1; }
	inline void set_units_1(List_1_t3980085593 * value)
	{
		___units_1 = value;
		Il2CppCodeGenWriteBarrier(&___units_1, value);
	}

	inline static int32_t get_offset_of_hoisted_map_2() { return static_cast<int32_t>(offsetof(CompilationContext_t1096990896, ___hoisted_map_2)); }
	inline Dictionary_2_t4062183869 * get_hoisted_map_2() const { return ___hoisted_map_2; }
	inline Dictionary_2_t4062183869 ** get_address_of_hoisted_map_2() { return &___hoisted_map_2; }
	inline void set_hoisted_map_2(Dictionary_2_t4062183869 * value)
	{
		___hoisted_map_2 = value;
		Il2CppCodeGenWriteBarrier(&___hoisted_map_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
