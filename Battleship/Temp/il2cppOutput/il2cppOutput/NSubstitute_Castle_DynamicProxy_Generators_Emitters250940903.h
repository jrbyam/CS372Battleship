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

#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters707291260.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ReferenceExpression
struct  ReferenceExpression_t250940903  : public Expression_t707291260
{
public:
	// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference Castle.DynamicProxy.Generators.Emitters.SimpleAST.ReferenceExpression::reference
	Reference_t1588091119 * ___reference_0;

public:
	inline static int32_t get_offset_of_reference_0() { return static_cast<int32_t>(offsetof(ReferenceExpression_t250940903, ___reference_0)); }
	inline Reference_t1588091119 * get_reference_0() const { return ___reference_0; }
	inline Reference_t1588091119 ** get_address_of_reference_0() { return &___reference_0; }
	inline void set_reference_0(Reference_t1588091119 * value)
	{
		___reference_0 = value;
		Il2CppCodeGenWriteBarrier(&___reference_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
