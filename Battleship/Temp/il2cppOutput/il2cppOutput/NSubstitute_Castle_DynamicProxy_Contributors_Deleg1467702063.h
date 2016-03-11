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
// System.Type
struct Type_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Contributors.DelegateTypeGenerator
struct  DelegateTypeGenerator_t1467702063  : public Il2CppObject
{
public:
	// Castle.DynamicProxy.Generators.MetaMethod Castle.DynamicProxy.Contributors.DelegateTypeGenerator::method
	MetaMethod_t2289943065 * ___method_0;
	// System.Type Castle.DynamicProxy.Contributors.DelegateTypeGenerator::targetType
	Type_t * ___targetType_1;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(DelegateTypeGenerator_t1467702063, ___method_0)); }
	inline MetaMethod_t2289943065 * get_method_0() const { return ___method_0; }
	inline MetaMethod_t2289943065 ** get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(MetaMethod_t2289943065 * value)
	{
		___method_0 = value;
		Il2CppCodeGenWriteBarrier(&___method_0, value);
	}

	inline static int32_t get_offset_of_targetType_1() { return static_cast<int32_t>(offsetof(DelegateTypeGenerator_t1467702063, ___targetType_1)); }
	inline Type_t * get_targetType_1() const { return ___targetType_1; }
	inline Type_t ** get_address_of_targetType_1() { return &___targetType_1; }
	inline void set_targetType_1(Type_t * value)
	{
		___targetType_1 = value;
		Il2CppCodeGenWriteBarrier(&___targetType_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
