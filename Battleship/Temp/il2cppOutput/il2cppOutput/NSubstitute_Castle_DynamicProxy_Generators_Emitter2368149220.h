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
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference
struct Reference_t1588091119;

#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters428098323.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.AssignStatement
struct  AssignStatement_t2368149220  : public Statement_t428098323
{
public:
	// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression Castle.DynamicProxy.Generators.Emitters.SimpleAST.AssignStatement::expression
	Expression_t707291260 * ___expression_0;
	// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference Castle.DynamicProxy.Generators.Emitters.SimpleAST.AssignStatement::target
	Reference_t1588091119 * ___target_1;

public:
	inline static int32_t get_offset_of_expression_0() { return static_cast<int32_t>(offsetof(AssignStatement_t2368149220, ___expression_0)); }
	inline Expression_t707291260 * get_expression_0() const { return ___expression_0; }
	inline Expression_t707291260 ** get_address_of_expression_0() { return &___expression_0; }
	inline void set_expression_0(Expression_t707291260 * value)
	{
		___expression_0 = value;
		Il2CppCodeGenWriteBarrier(&___expression_0, value);
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(AssignStatement_t2368149220, ___target_1)); }
	inline Reference_t1588091119 * get_target_1() const { return ___target_1; }
	inline Reference_t1588091119 ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Reference_t1588091119 * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier(&___target_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
