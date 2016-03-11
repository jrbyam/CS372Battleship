#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression
struct Expression_t707291260;

#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters428098323.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ExpressionStatement
struct  ExpressionStatement_t666624859  : public Statement_t428098323
{
public:
	// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression Castle.DynamicProxy.Generators.Emitters.SimpleAST.ExpressionStatement::expression
	Expression_t707291260 * ___expression_0;

public:
	inline static int32_t get_offset_of_expression_0() { return static_cast<int32_t>(offsetof(ExpressionStatement_t666624859, ___expression_0)); }
	inline Expression_t707291260 * get_expression_0() const { return ___expression_0; }
	inline Expression_t707291260 ** get_address_of_expression_0() { return &___expression_0; }
	inline void set_expression_0(Expression_t707291260 * value)
	{
		___expression_0 = value;
		Il2CppCodeGenWriteBarrier(&___expression_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
