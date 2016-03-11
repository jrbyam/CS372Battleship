#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference
struct Reference_t1588091119;
// System.Type
struct Type_t;

#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter1588091119.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.AsTypeReference
struct  AsTypeReference_t285018051  : public Reference_t1588091119
{
public:
	// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference Castle.DynamicProxy.Generators.Emitters.SimpleAST.AsTypeReference::reference
	Reference_t1588091119 * ___reference_1;
	// System.Type Castle.DynamicProxy.Generators.Emitters.SimpleAST.AsTypeReference::type
	Type_t * ___type_2;

public:
	inline static int32_t get_offset_of_reference_1() { return static_cast<int32_t>(offsetof(AsTypeReference_t285018051, ___reference_1)); }
	inline Reference_t1588091119 * get_reference_1() const { return ___reference_1; }
	inline Reference_t1588091119 ** get_address_of_reference_1() { return &___reference_1; }
	inline void set_reference_1(Reference_t1588091119 * value)
	{
		___reference_1 = value;
		Il2CppCodeGenWriteBarrier(&___reference_1, value);
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(AsTypeReference_t285018051, ___type_2)); }
	inline Type_t * get_type_2() const { return ___type_2; }
	inline Type_t ** get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(Type_t * value)
	{
		___type_2 = value;
		Il2CppCodeGenWriteBarrier(&___type_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
