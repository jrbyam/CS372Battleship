#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference
struct ArgumentReference_t4040130226;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression
struct Expression_t707291260;

#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters428098323.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.AssignArgumentStatement
struct  AssignArgumentStatement_t3500792743  : public Statement_t428098323
{
public:
	// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ArgumentReference Castle.DynamicProxy.Generators.Emitters.SimpleAST.AssignArgumentStatement::argument
	ArgumentReference_t4040130226 * ___argument_0;
	// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression Castle.DynamicProxy.Generators.Emitters.SimpleAST.AssignArgumentStatement::expression
	Expression_t707291260 * ___expression_1;

public:
	inline static int32_t get_offset_of_argument_0() { return static_cast<int32_t>(offsetof(AssignArgumentStatement_t3500792743, ___argument_0)); }
	inline ArgumentReference_t4040130226 * get_argument_0() const { return ___argument_0; }
	inline ArgumentReference_t4040130226 ** get_address_of_argument_0() { return &___argument_0; }
	inline void set_argument_0(ArgumentReference_t4040130226 * value)
	{
		___argument_0 = value;
		Il2CppCodeGenWriteBarrier(&___argument_0, value);
	}

	inline static int32_t get_offset_of_expression_1() { return static_cast<int32_t>(offsetof(AssignArgumentStatement_t3500792743, ___expression_1)); }
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
