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

#include "NSubstitute_Castle_DynamicProxy_Generators_Invocati691015836.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.InheritanceInvocationTypeGenerator
struct  InheritanceInvocationTypeGenerator_t2837933234  : public InvocationTypeGenerator_t691015836
{
public:

public:
};

struct InheritanceInvocationTypeGenerator_t2837933234_StaticFields
{
public:
	// System.Type Castle.DynamicProxy.Generators.InheritanceInvocationTypeGenerator::BaseType
	Type_t * ___BaseType_5;

public:
	inline static int32_t get_offset_of_BaseType_5() { return static_cast<int32_t>(offsetof(InheritanceInvocationTypeGenerator_t2837933234_StaticFields, ___BaseType_5)); }
	inline Type_t * get_BaseType_5() const { return ___BaseType_5; }
	inline Type_t ** get_address_of_BaseType_5() { return &___BaseType_5; }
	inline void set_BaseType_5(Type_t * value)
	{
		___BaseType_5 = value;
		Il2CppCodeGenWriteBarrier(&___BaseType_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
