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

#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters707291260.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.NullCoalescingOperatorExpression
struct  NullCoalescingOperatorExpression_t3232713515  : public Expression_t707291260
{
public:
	// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression Castle.DynamicProxy.Generators.Emitters.SimpleAST.NullCoalescingOperatorExpression::default
	Expression_t707291260 * ___default_0;
	// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression Castle.DynamicProxy.Generators.Emitters.SimpleAST.NullCoalescingOperatorExpression::expression
	Expression_t707291260 * ___expression_1;

public:
	inline static int32_t get_offset_of_default_0() { return static_cast<int32_t>(offsetof(NullCoalescingOperatorExpression_t3232713515, ___default_0)); }
	inline Expression_t707291260 * get_default_0() const { return ___default_0; }
	inline Expression_t707291260 ** get_address_of_default_0() { return &___default_0; }
	inline void set_default_0(Expression_t707291260 * value)
	{
		___default_0 = value;
		Il2CppCodeGenWriteBarrier(&___default_0, value);
	}

	inline static int32_t get_offset_of_expression_1() { return static_cast<int32_t>(offsetof(NullCoalescingOperatorExpression_t3232713515, ___expression_1)); }
	inline Expression_t707291260 * get_expression_1() const { return ___expression_1; }
	inline Expression_t707291260 ** get_address_of_expression_1() { return &___expression_1; }
	inline void set_expression_1(Expression_t707291260 * value)
	{
		___expression_1 = value;
		Il2CppCodeGenWriteBarrier(&___expression_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
