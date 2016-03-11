#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;

#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters707291260.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.MethodTokenExpression
struct  MethodTokenExpression_t2573596660  : public Expression_t707291260
{
public:
	// System.Reflection.MethodInfo Castle.DynamicProxy.Generators.Emitters.SimpleAST.MethodTokenExpression::method
	MethodInfo_t * ___method_0;
	// System.Type Castle.DynamicProxy.Generators.Emitters.SimpleAST.MethodTokenExpression::declaringType
	Type_t * ___declaringType_1;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(MethodTokenExpression_t2573596660, ___method_0)); }
	inline MethodInfo_t * get_method_0() const { return ___method_0; }
	inline MethodInfo_t ** get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(MethodInfo_t * value)
	{
		___method_0 = value;
		Il2CppCodeGenWriteBarrier(&___method_0, value);
	}

	inline static int32_t get_offset_of_declaringType_1() { return static_cast<int32_t>(offsetof(MethodTokenExpression_t2573596660, ___declaringType_1)); }
	inline Type_t * get_declaringType_1() const { return ___declaringType_1; }
	inline Type_t ** get_address_of_declaringType_1() { return &___declaringType_1; }
	inline void set_declaringType_1(Type_t * value)
	{
		___declaringType_1 = value;
		Il2CppCodeGenWriteBarrier(&___declaringType_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
