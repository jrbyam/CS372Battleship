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

#include "System_Core_System_Linq_Expressions_MemberBinding3905900687.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberAssignment
struct  MemberAssignment_t3954892619  : public MemberBinding_t3905900687
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.MemberAssignment::expression
	Expression_t647304412 * ___expression_2;

public:
	inline static int32_t get_offset_of_expression_2() { return static_cast<int32_t>(offsetof(MemberAssignment_t3954892619, ___expression_2)); }
	inline Expression_t647304412 * get_expression_2() const { return ___expression_2; }
	inline Expression_t647304412 ** get_address_of_expression_2() { return &___expression_2; }
	inline void set_expression_2(Expression_t647304412 * value)
	{
		___expression_2 = value;
		Il2CppCodeGenWriteBarrier(&___expression_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
