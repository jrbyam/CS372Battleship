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
// System.Type
struct Type_t;

#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters707291260.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ConvertExpression
struct  ConvertExpression_t3419243087  : public Expression_t707291260
{
public:
	// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression Castle.DynamicProxy.Generators.Emitters.SimpleAST.ConvertExpression::right
	Expression_t707291260 * ___right_0;
	// System.Type Castle.DynamicProxy.Generators.Emitters.SimpleAST.ConvertExpression::fromType
	Type_t * ___fromType_1;
	// System.Type Castle.DynamicProxy.Generators.Emitters.SimpleAST.ConvertExpression::target
	Type_t * ___target_2;

public:
	inline static int32_t get_offset_of_right_0() { return static_cast<int32_t>(offsetof(ConvertExpression_t3419243087, ___right_0)); }
	inline Expression_t707291260 * get_right_0() const { return ___right_0; }
	inline Expression_t707291260 ** get_address_of_right_0() { return &___right_0; }
	inline void set_right_0(Expression_t707291260 * value)
	{
		___right_0 = value;
		Il2CppCodeGenWriteBarrier(&___right_0, value);
	}

	inline static int32_t get_offset_of_fromType_1() { return static_cast<int32_t>(offsetof(ConvertExpression_t3419243087, ___fromType_1)); }
	inline Type_t * get_fromType_1() const { return ___fromType_1; }
	inline Type_t ** get_address_of_fromType_1() { return &___fromType_1; }
	inline void set_fromType_1(Type_t * value)
	{
		___fromType_1 = value;
		Il2CppCodeGenWriteBarrier(&___fromType_1, value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(ConvertExpression_t3419243087, ___target_2)); }
	inline Type_t * get_target_2() const { return ___target_2; }
	inline Type_t ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Type_t * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
