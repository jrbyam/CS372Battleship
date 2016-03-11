#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Castle.DynamicProxy.Generators.Emitters.SimpleAST.Statement>
struct List_1_t1225057292;

#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters707291260.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.MultiStatementExpression
struct  MultiStatementExpression_t1541113170  : public Expression_t707291260
{
public:
	// System.Collections.Generic.List`1<Castle.DynamicProxy.Generators.Emitters.SimpleAST.Statement> Castle.DynamicProxy.Generators.Emitters.SimpleAST.MultiStatementExpression::statements
	List_1_t1225057292 * ___statements_0;

public:
	inline static int32_t get_offset_of_statements_0() { return static_cast<int32_t>(offsetof(MultiStatementExpression_t1541113170, ___statements_0)); }
	inline List_1_t1225057292 * get_statements_0() const { return ___statements_0; }
	inline List_1_t1225057292 ** get_address_of_statements_0() { return &___statements_0; }
	inline void set_statements_0(List_1_t1225057292 * value)
	{
		___statements_0 = value;
		Il2CppCodeGenWriteBarrier(&___statements_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
