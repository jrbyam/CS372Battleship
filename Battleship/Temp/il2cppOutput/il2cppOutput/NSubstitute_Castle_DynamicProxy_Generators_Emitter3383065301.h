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

#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter1588091119.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.TypeReference
struct  TypeReference_t3383065301  : public Reference_t1588091119
{
public:
	// System.Type Castle.DynamicProxy.Generators.Emitters.SimpleAST.TypeReference::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(TypeReference_t3383065301, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier(&___type_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
