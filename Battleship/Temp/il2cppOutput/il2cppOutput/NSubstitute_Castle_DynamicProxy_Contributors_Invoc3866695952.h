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
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference
struct Reference_t1588091119;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Contributors.InvocationWithGenericDelegateContributor
struct  InvocationWithGenericDelegateContributor_t3866695952  : public Il2CppObject
{
public:
	// System.Type Castle.DynamicProxy.Contributors.InvocationWithGenericDelegateContributor::delegateType
	Type_t * ___delegateType_0;
	// Castle.DynamicProxy.Generators.MetaMethod Castle.DynamicProxy.Contributors.InvocationWithGenericDelegateContributor::method
	MetaMethod_t2289943065 * ___method_1;
	// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference Castle.DynamicProxy.Contributors.InvocationWithGenericDelegateContributor::targetReference
	Reference_t1588091119 * ___targetReference_2;

public:
	inline static int32_t get_offset_of_delegateType_0() { return static_cast<int32_t>(offsetof(InvocationWithGenericDelegateContributor_t3866695952, ___delegateType_0)); }
	inline Type_t * get_delegateType_0() const { return ___delegateType_0; }
	inline Type_t ** get_address_of_delegateType_0() { return &___delegateType_0; }
	inline void set_delegateType_0(Type_t * value)
	{
		___delegateType_0 = value;
		Il2CppCodeGenWriteBarrier(&___delegateType_0, value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(InvocationWithGenericDelegateContributor_t3866695952, ___method_1)); }
	inline MetaMethod_t2289943065 * get_method_1() const { return ___method_1; }
	inline MetaMethod_t2289943065 ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MetaMethod_t2289943065 * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier(&___method_1, value);
	}

	inline static int32_t get_offset_of_targetReference_2() { return static_cast<int32_t>(offsetof(InvocationWithGenericDelegateContributor_t3866695952, ___targetReference_2)); }
	inline Reference_t1588091119 * get_targetReference_2() const { return ___targetReference_2; }
	inline Reference_t1588091119 ** get_address_of_targetReference_2() { return &___targetReference_2; }
	inline void set_targetReference_2(Reference_t1588091119 * value)
	{
		___targetReference_2 = value;
		Il2CppCodeGenWriteBarrier(&___targetReference_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
