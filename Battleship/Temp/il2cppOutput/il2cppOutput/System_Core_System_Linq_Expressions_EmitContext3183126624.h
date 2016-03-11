#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Linq.Expressions.CompilationContext
struct CompilationContext_t1096990896;
// System.Linq.Expressions.EmitContext
struct EmitContext_t3183126624;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t262791171;
// System.Reflection.Emit.DynamicMethod
struct DynamicMethod_t2778460557;
// System.Reflection.Emit.LocalBuilder
struct LocalBuilder_t625143165;
// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1136554526;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.EmitContext
struct  EmitContext_t3183126624  : public Il2CppObject
{
public:
	// System.Linq.Expressions.CompilationContext System.Linq.Expressions.EmitContext::context
	CompilationContext_t1096990896 * ___context_0;
	// System.Linq.Expressions.EmitContext System.Linq.Expressions.EmitContext::parent
	EmitContext_t3183126624 * ___parent_1;
	// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.EmitContext::lambda
	LambdaExpression_t262791171 * ___lambda_2;
	// System.Reflection.Emit.DynamicMethod System.Linq.Expressions.EmitContext::method
	DynamicMethod_t2778460557 * ___method_3;
	// System.Reflection.Emit.LocalBuilder System.Linq.Expressions.EmitContext::hoisted_store
	LocalBuilder_t625143165 * ___hoisted_store_4;
	// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.EmitContext::hoisted
	List_1_t1136554526 * ___hoisted_5;
	// System.Reflection.Emit.ILGenerator System.Linq.Expressions.EmitContext::ig
	ILGenerator_t3869071517 * ___ig_6;

public:
	inline static int32_t get_offset_of_context_0() { return static_cast<int32_t>(offsetof(EmitContext_t3183126624, ___context_0)); }
	inline CompilationContext_t1096990896 * get_context_0() const { return ___context_0; }
	inline CompilationContext_t1096990896 ** get_address_of_context_0() { return &___context_0; }
	inline void set_context_0(CompilationContext_t1096990896 * value)
	{
		___context_0 = value;
		Il2CppCodeGenWriteBarrier(&___context_0, value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(EmitContext_t3183126624, ___parent_1)); }
	inline EmitContext_t3183126624 * get_parent_1() const { return ___parent_1; }
	inline EmitContext_t3183126624 ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(EmitContext_t3183126624 * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier(&___parent_1, value);
	}

	inline static int32_t get_offset_of_lambda_2() { return static_cast<int32_t>(offsetof(EmitContext_t3183126624, ___lambda_2)); }
	inline LambdaExpression_t262791171 * get_lambda_2() const { return ___lambda_2; }
	inline LambdaExpression_t262791171 ** get_address_of_lambda_2() { return &___lambda_2; }
	inline void set_lambda_2(LambdaExpression_t262791171 * value)
	{
		___lambda_2 = value;
		Il2CppCodeGenWriteBarrier(&___lambda_2, value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(EmitContext_t3183126624, ___method_3)); }
	inline DynamicMethod_t2778460557 * get_method_3() const { return ___method_3; }
	inline DynamicMethod_t2778460557 ** get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(DynamicMethod_t2778460557 * value)
	{
		___method_3 = value;
		Il2CppCodeGenWriteBarrier(&___method_3, value);
	}

	inline static int32_t get_offset_of_hoisted_store_4() { return static_cast<int32_t>(offsetof(EmitContext_t3183126624, ___hoisted_store_4)); }
	inline LocalBuilder_t625143165 * get_hoisted_store_4() const { return ___hoisted_store_4; }
	inline LocalBuilder_t625143165 ** get_address_of_hoisted_store_4() { return &___hoisted_store_4; }
	inline void set_hoisted_store_4(LocalBuilder_t625143165 * value)
	{
		___hoisted_store_4 = value;
		Il2CppCodeGenWriteBarrier(&___hoisted_store_4, value);
	}

	inline static int32_t get_offset_of_hoisted_5() { return static_cast<int32_t>(offsetof(EmitContext_t3183126624, ___hoisted_5)); }
	inline List_1_t1136554526 * get_hoisted_5() const { return ___hoisted_5; }
	inline List_1_t1136554526 ** get_address_of_hoisted_5() { return &___hoisted_5; }
	inline void set_hoisted_5(List_1_t1136554526 * value)
	{
		___hoisted_5 = value;
		Il2CppCodeGenWriteBarrier(&___hoisted_5, value);
	}

	inline static int32_t get_offset_of_ig_6() { return static_cast<int32_t>(offsetof(EmitContext_t3183126624, ___ig_6)); }
	inline ILGenerator_t3869071517 * get_ig_6() const { return ___ig_6; }
	inline ILGenerator_t3869071517 ** get_address_of_ig_6() { return &___ig_6; }
	inline void set_ig_6(ILGenerator_t3869071517 * value)
	{
		___ig_6 = value;
		Il2CppCodeGenWriteBarrier(&___ig_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
