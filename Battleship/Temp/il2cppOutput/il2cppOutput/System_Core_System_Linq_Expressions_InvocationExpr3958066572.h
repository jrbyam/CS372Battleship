﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Linq.Expressions.Expression
struct Expression_t647304412;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t3810449760;

#include "System_Core_System_Linq_Expressions_Expression647304412.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.InvocationExpression
struct  InvocationExpression_t3958066572  : public Expression_t647304412
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression::expression
	Expression_t647304412 * ___expression_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.InvocationExpression::arguments
	ReadOnlyCollection_1_t3810449760 * ___arguments_3;

public:
	inline static int32_t get_offset_of_expression_2() { return static_cast<int32_t>(offsetof(InvocationExpression_t3958066572, ___expression_2)); }
	inline Expression_t647304412 * get_expression_2() const { return ___expression_2; }
	inline Expression_t647304412 ** get_address_of_expression_2() { return &___expression_2; }
	inline void set_expression_2(Expression_t647304412 * value)
	{
		___expression_2 = value;
		Il2CppCodeGenWriteBarrier(&___expression_2, value);
	}

	inline static int32_t get_offset_of_arguments_3() { return static_cast<int32_t>(offsetof(InvocationExpression_t3958066572, ___arguments_3)); }
	inline ReadOnlyCollection_1_t3810449760 * get_arguments_3() const { return ___arguments_3; }
	inline ReadOnlyCollection_1_t3810449760 ** get_address_of_arguments_3() { return &___arguments_3; }
	inline void set_arguments_3(ReadOnlyCollection_1_t3810449760 * value)
	{
		___arguments_3 = value;
		Il2CppCodeGenWriteBarrier(&___arguments_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
