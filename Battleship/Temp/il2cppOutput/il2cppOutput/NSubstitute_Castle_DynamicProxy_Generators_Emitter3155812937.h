#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression[]
struct ExpressionU5BU5D_t1002953237;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;

#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters428098323.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.ConstructorInvocationStatement
struct  ConstructorInvocationStatement_t3155812937  : public Statement_t428098323
{
public:
	// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression[] Castle.DynamicProxy.Generators.Emitters.SimpleAST.ConstructorInvocationStatement::args
	ExpressionU5BU5D_t1002953237* ___args_0;
	// System.Reflection.ConstructorInfo Castle.DynamicProxy.Generators.Emitters.SimpleAST.ConstructorInvocationStatement::cmethod
	ConstructorInfo_t3542137334 * ___cmethod_1;

public:
	inline static int32_t get_offset_of_args_0() { return static_cast<int32_t>(offsetof(ConstructorInvocationStatement_t3155812937, ___args_0)); }
	inline ExpressionU5BU5D_t1002953237* get_args_0() const { return ___args_0; }
	inline ExpressionU5BU5D_t1002953237** get_address_of_args_0() { return &___args_0; }
	inline void set_args_0(ExpressionU5BU5D_t1002953237* value)
	{
		___args_0 = value;
		Il2CppCodeGenWriteBarrier(&___args_0, value);
	}

	inline static int32_t get_offset_of_cmethod_1() { return static_cast<int32_t>(offsetof(ConstructorInvocationStatement_t3155812937, ___cmethod_1)); }
	inline ConstructorInfo_t3542137334 * get_cmethod_1() const { return ___cmethod_1; }
	inline ConstructorInfo_t3542137334 ** get_address_of_cmethod_1() { return &___cmethod_1; }
	inline void set_cmethod_1(ConstructorInfo_t3542137334 * value)
	{
		___cmethod_1 = value;
		Il2CppCodeGenWriteBarrier(&___cmethod_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
