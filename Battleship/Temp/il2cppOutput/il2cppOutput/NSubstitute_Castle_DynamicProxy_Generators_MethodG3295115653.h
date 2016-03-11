#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Castle.DynamicProxy.Generators.MetaMethod
struct MetaMethod_t2289943065;
// Castle.DynamicProxy.Contributors.OverrideMethodDelegate
struct OverrideMethodDelegate_t507301037;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.MethodGenerator
struct  MethodGenerator_t3295115653  : public Il2CppObject
{
public:
	// Castle.DynamicProxy.Generators.MetaMethod Castle.DynamicProxy.Generators.MethodGenerator::method
	MetaMethod_t2289943065 * ___method_0;
	// Castle.DynamicProxy.Contributors.OverrideMethodDelegate Castle.DynamicProxy.Generators.MethodGenerator::overrideMethod
	OverrideMethodDelegate_t507301037 * ___overrideMethod_1;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(MethodGenerator_t3295115653, ___method_0)); }
	inline MetaMethod_t2289943065 * get_method_0() const { return ___method_0; }
	inline MetaMethod_t2289943065 ** get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(MetaMethod_t2289943065 * value)
	{
		___method_0 = value;
		Il2CppCodeGenWriteBarrier(&___method_0, value);
	}

	inline static int32_t get_offset_of_overrideMethod_1() { return static_cast<int32_t>(offsetof(MethodGenerator_t3295115653, ___overrideMethod_1)); }
	inline OverrideMethodDelegate_t507301037 * get_overrideMethod_1() const { return ___overrideMethod_1; }
	inline OverrideMethodDelegate_t507301037 ** get_address_of_overrideMethod_1() { return &___overrideMethod_1; }
	inline void set_overrideMethod_1(OverrideMethodDelegate_t507301037 * value)
	{
		___overrideMethod_1 = value;
		Il2CppCodeGenWriteBarrier(&___overrideMethod_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
