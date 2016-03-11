#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.TypeReference[]
struct TypeReferenceU5BU5D_t2018303544;

#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters707291260.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ReferencesToObjectArrayExpression
struct  ReferencesToObjectArrayExpression_t677498579  : public Expression_t707291260
{
public:
	// Castle.DynamicProxy.Generators.Emitters.SimpleAST.TypeReference[] Castle.DynamicProxy.Generators.Emitters.SimpleAST.ReferencesToObjectArrayExpression::args
	TypeReferenceU5BU5D_t2018303544* ___args_0;

public:
	inline static int32_t get_offset_of_args_0() { return static_cast<int32_t>(offsetof(ReferencesToObjectArrayExpression_t677498579, ___args_0)); }
	inline TypeReferenceU5BU5D_t2018303544* get_args_0() const { return ___args_0; }
	inline TypeReferenceU5BU5D_t2018303544** get_address_of_args_0() { return &___args_0; }
	inline void set_args_0(TypeReferenceU5BU5D_t2018303544* value)
	{
		___args_0 = value;
		Il2CppCodeGenWriteBarrier(&___args_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
