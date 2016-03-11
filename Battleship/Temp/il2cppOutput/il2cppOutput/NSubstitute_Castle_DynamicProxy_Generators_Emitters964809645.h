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
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference
struct Reference_t1588091119;

#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters707291260.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.MethodInvocationExpression
struct  MethodInvocationExpression_t964809645  : public Expression_t707291260
{
public:
	// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression[] Castle.DynamicProxy.Generators.Emitters.SimpleAST.MethodInvocationExpression::args
	ExpressionU5BU5D_t1002953237* ___args_0;
	// System.Reflection.MethodInfo Castle.DynamicProxy.Generators.Emitters.SimpleAST.MethodInvocationExpression::method
	MethodInfo_t * ___method_1;
	// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference Castle.DynamicProxy.Generators.Emitters.SimpleAST.MethodInvocationExpression::owner
	Reference_t1588091119 * ___owner_2;
	// System.Boolean Castle.DynamicProxy.Generators.Emitters.SimpleAST.MethodInvocationExpression::<VirtualCall>k__BackingField
	bool ___U3CVirtualCallU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_args_0() { return static_cast<int32_t>(offsetof(MethodInvocationExpression_t964809645, ___args_0)); }
	inline ExpressionU5BU5D_t1002953237* get_args_0() const { return ___args_0; }
	inline ExpressionU5BU5D_t1002953237** get_address_of_args_0() { return &___args_0; }
	inline void set_args_0(ExpressionU5BU5D_t1002953237* value)
	{
		___args_0 = value;
		Il2CppCodeGenWriteBarrier(&___args_0, value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(MethodInvocationExpression_t964809645, ___method_1)); }
	inline MethodInfo_t * get_method_1() const { return ___method_1; }
	inline MethodInfo_t ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MethodInfo_t * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier(&___method_1, value);
	}

	inline static int32_t get_offset_of_owner_2() { return static_cast<int32_t>(offsetof(MethodInvocationExpression_t964809645, ___owner_2)); }
	inline Reference_t1588091119 * get_owner_2() const { return ___owner_2; }
	inline Reference_t1588091119 ** get_address_of_owner_2() { return &___owner_2; }
	inline void set_owner_2(Reference_t1588091119 * value)
	{
		___owner_2 = value;
		Il2CppCodeGenWriteBarrier(&___owner_2, value);
	}

	inline static int32_t get_offset_of_U3CVirtualCallU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MethodInvocationExpression_t964809645, ___U3CVirtualCallU3Ek__BackingField_3)); }
	inline bool get_U3CVirtualCallU3Ek__BackingField_3() const { return ___U3CVirtualCallU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CVirtualCallU3Ek__BackingField_3() { return &___U3CVirtualCallU3Ek__BackingField_3; }
	inline void set_U3CVirtualCallU3Ek__BackingField_3(bool value)
	{
		___U3CVirtualCallU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
