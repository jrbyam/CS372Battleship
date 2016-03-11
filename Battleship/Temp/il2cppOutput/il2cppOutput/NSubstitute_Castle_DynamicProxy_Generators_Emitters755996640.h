#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.IILEmitter
struct IILEmitter_t3887433830;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference
struct Reference_t1588091119;

#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters707291260.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.IfNullExpression
struct  IfNullExpression_t755996640  : public Expression_t707291260
{
public:
	// Castle.DynamicProxy.Generators.Emitters.SimpleAST.IILEmitter Castle.DynamicProxy.Generators.Emitters.SimpleAST.IfNullExpression::ifNotNull
	Il2CppObject * ___ifNotNull_0;
	// Castle.DynamicProxy.Generators.Emitters.SimpleAST.IILEmitter Castle.DynamicProxy.Generators.Emitters.SimpleAST.IfNullExpression::ifNull
	Il2CppObject * ___ifNull_1;
	// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference Castle.DynamicProxy.Generators.Emitters.SimpleAST.IfNullExpression::reference
	Reference_t1588091119 * ___reference_2;

public:
	inline static int32_t get_offset_of_ifNotNull_0() { return static_cast<int32_t>(offsetof(IfNullExpression_t755996640, ___ifNotNull_0)); }
	inline Il2CppObject * get_ifNotNull_0() const { return ___ifNotNull_0; }
	inline Il2CppObject ** get_address_of_ifNotNull_0() { return &___ifNotNull_0; }
	inline void set_ifNotNull_0(Il2CppObject * value)
	{
		___ifNotNull_0 = value;
		Il2CppCodeGenWriteBarrier(&___ifNotNull_0, value);
	}

	inline static int32_t get_offset_of_ifNull_1() { return static_cast<int32_t>(offsetof(IfNullExpression_t755996640, ___ifNull_1)); }
	inline Il2CppObject * get_ifNull_1() const { return ___ifNull_1; }
	inline Il2CppObject ** get_address_of_ifNull_1() { return &___ifNull_1; }
	inline void set_ifNull_1(Il2CppObject * value)
	{
		___ifNull_1 = value;
		Il2CppCodeGenWriteBarrier(&___ifNull_1, value);
	}

	inline static int32_t get_offset_of_reference_2() { return static_cast<int32_t>(offsetof(IfNullExpression_t755996640, ___reference_2)); }
	inline Reference_t1588091119 * get_reference_2() const { return ___reference_2; }
	inline Reference_t1588091119 ** get_address_of_reference_2() { return &___reference_2; }
	inline void set_reference_2(Reference_t1588091119 * value)
	{
		___reference_2 = value;
		Il2CppCodeGenWriteBarrier(&___reference_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
