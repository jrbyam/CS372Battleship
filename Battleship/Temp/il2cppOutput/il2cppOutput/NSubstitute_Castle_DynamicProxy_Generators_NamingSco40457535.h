#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t1365811182;
// Castle.DynamicProxy.Generators.INamingScope
struct INamingScope_t873561430;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.NamingScope
struct  NamingScope_t40457535  : public Il2CppObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,System.Int32> Castle.DynamicProxy.Generators.NamingScope::names
	Il2CppObject* ___names_0;
	// Castle.DynamicProxy.Generators.INamingScope Castle.DynamicProxy.Generators.NamingScope::parentScope
	Il2CppObject * ___parentScope_1;

public:
	inline static int32_t get_offset_of_names_0() { return static_cast<int32_t>(offsetof(NamingScope_t40457535, ___names_0)); }
	inline Il2CppObject* get_names_0() const { return ___names_0; }
	inline Il2CppObject** get_address_of_names_0() { return &___names_0; }
	inline void set_names_0(Il2CppObject* value)
	{
		___names_0 = value;
		Il2CppCodeGenWriteBarrier(&___names_0, value);
	}

	inline static int32_t get_offset_of_parentScope_1() { return static_cast<int32_t>(offsetof(NamingScope_t40457535, ___parentScope_1)); }
	inline Il2CppObject * get_parentScope_1() const { return ___parentScope_1; }
	inline Il2CppObject ** get_address_of_parentScope_1() { return &___parentScope_1; }
	inline void set_parentScope_1(Il2CppObject * value)
	{
		___parentScope_1 = value;
		Il2CppCodeGenWriteBarrier(&___parentScope_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
