#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3383065301.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ConstReference
struct  ConstReference_t3369897228  : public TypeReference_t3383065301
{
public:
	// System.Object Castle.DynamicProxy.Generators.Emitters.SimpleAST.ConstReference::value
	Il2CppObject * ___value_2;

public:
	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(ConstReference_t3369897228, ___value_2)); }
	inline Il2CppObject * get_value_2() const { return ___value_2; }
	inline Il2CppObject ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(Il2CppObject * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier(&___value_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
