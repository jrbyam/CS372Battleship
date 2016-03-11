#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Castle.DynamicProxy.Generators.Emitters.IMemberEmitter
struct IMemberEmitter_t4173917593;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.MultiStatementExpression/<>c__DisplayClass1
struct  U3CU3Ec__DisplayClass1_t2826400219  : public Il2CppObject
{
public:
	// Castle.DynamicProxy.Generators.Emitters.IMemberEmitter Castle.DynamicProxy.Generators.Emitters.SimpleAST.MultiStatementExpression/<>c__DisplayClass1::member
	Il2CppObject * ___member_0;
	// System.Reflection.Emit.ILGenerator Castle.DynamicProxy.Generators.Emitters.SimpleAST.MultiStatementExpression/<>c__DisplayClass1::gen
	ILGenerator_t3869071517 * ___gen_1;

public:
	inline static int32_t get_offset_of_member_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_t2826400219, ___member_0)); }
	inline Il2CppObject * get_member_0() const { return ___member_0; }
	inline Il2CppObject ** get_address_of_member_0() { return &___member_0; }
	inline void set_member_0(Il2CppObject * value)
	{
		___member_0 = value;
		Il2CppCodeGenWriteBarrier(&___member_0, value);
	}

	inline static int32_t get_offset_of_gen_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_t2826400219, ___gen_1)); }
	inline ILGenerator_t3869071517 * get_gen_1() const { return ___gen_1; }
	inline ILGenerator_t3869071517 ** get_address_of_gen_1() { return &___gen_1; }
	inline void set_gen_1(ILGenerator_t3869071517 * value)
	{
		___gen_1 = value;
		Il2CppCodeGenWriteBarrier(&___gen_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
