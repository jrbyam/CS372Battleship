#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// Castle.DynamicProxy.Generators.MetaMethod
struct MetaMethod_t2289943065;
// Castle.DynamicProxy.Generators.INamingScope
struct INamingScope_t873561430;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Contributors.InvocationWithDelegateContributor
struct  InvocationWithDelegateContributor_t2893956283  : public Il2CppObject
{
public:
	// System.Type Castle.DynamicProxy.Contributors.InvocationWithDelegateContributor::delegateType
	Type_t * ___delegateType_0;
	// Castle.DynamicProxy.Generators.MetaMethod Castle.DynamicProxy.Contributors.InvocationWithDelegateContributor::method
	MetaMethod_t2289943065 * ___method_1;
	// Castle.DynamicProxy.Generators.INamingScope Castle.DynamicProxy.Contributors.InvocationWithDelegateContributor::namingScope
	Il2CppObject * ___namingScope_2;
	// System.Type Castle.DynamicProxy.Contributors.InvocationWithDelegateContributor::targetType
	Type_t * ___targetType_3;

public:
	inline static int32_t get_offset_of_delegateType_0() { return static_cast<int32_t>(offsetof(InvocationWithDelegateContributor_t2893956283, ___delegateType_0)); }
	inline Type_t * get_delegateType_0() const { return ___delegateType_0; }
	inline Type_t ** get_address_of_delegateType_0() { return &___delegateType_0; }
	inline void set_delegateType_0(Type_t * value)
	{
		___delegateType_0 = value;
		Il2CppCodeGenWriteBarrier(&___delegateType_0, value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(InvocationWithDelegateContributor_t2893956283, ___method_1)); }
	inline MetaMethod_t2289943065 * get_method_1() const { return ___method_1; }
	inline MetaMethod_t2289943065 ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MetaMethod_t2289943065 * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier(&___method_1, value);
	}

	inline static int32_t get_offset_of_namingScope_2() { return static_cast<int32_t>(offsetof(InvocationWithDelegateContributor_t2893956283, ___namingScope_2)); }
	inline Il2CppObject * get_namingScope_2() const { return ___namingScope_2; }
	inline Il2CppObject ** get_address_of_namingScope_2() { return &___namingScope_2; }
	inline void set_namingScope_2(Il2CppObject * value)
	{
		___namingScope_2 = value;
		Il2CppCodeGenWriteBarrier(&___namingScope_2, value);
	}

	inline static int32_t get_offset_of_targetType_3() { return static_cast<int32_t>(offsetof(InvocationWithDelegateContributor_t2893956283, ___targetType_3)); }
	inline Type_t * get_targetType_3() const { return ___targetType_3; }
	inline Type_t ** get_address_of_targetType_3() { return &___targetType_3; }
	inline void set_targetType_3(Type_t * value)
	{
		___targetType_3 = value;
		Il2CppCodeGenWriteBarrier(&___targetType_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
