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
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Type
struct Type_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;

#include "NSubstitute_Castle_DynamicProxy_Generators_Emitters707291260.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.NewInstanceExpression
struct  NewInstanceExpression_t2308805745  : public Expression_t707291260
{
public:
	// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression[] Castle.DynamicProxy.Generators.Emitters.SimpleAST.NewInstanceExpression::arguments
	ExpressionU5BU5D_t1002953237* ___arguments_0;
	// System.Type[] Castle.DynamicProxy.Generators.Emitters.SimpleAST.NewInstanceExpression::constructorArgs
	TypeU5BU5D_t3431720054* ___constructorArgs_1;
	// System.Type Castle.DynamicProxy.Generators.Emitters.SimpleAST.NewInstanceExpression::type
	Type_t * ___type_2;
	// System.Reflection.ConstructorInfo Castle.DynamicProxy.Generators.Emitters.SimpleAST.NewInstanceExpression::constructor
	ConstructorInfo_t3542137334 * ___constructor_3;

public:
	inline static int32_t get_offset_of_arguments_0() { return static_cast<int32_t>(offsetof(NewInstanceExpression_t2308805745, ___arguments_0)); }
	inline ExpressionU5BU5D_t1002953237* get_arguments_0() const { return ___arguments_0; }
	inline ExpressionU5BU5D_t1002953237** get_address_of_arguments_0() { return &___arguments_0; }
	inline void set_arguments_0(ExpressionU5BU5D_t1002953237* value)
	{
		___arguments_0 = value;
		Il2CppCodeGenWriteBarrier(&___arguments_0, value);
	}

	inline static int32_t get_offset_of_constructorArgs_1() { return static_cast<int32_t>(offsetof(NewInstanceExpression_t2308805745, ___constructorArgs_1)); }
	inline TypeU5BU5D_t3431720054* get_constructorArgs_1() const { return ___constructorArgs_1; }
	inline TypeU5BU5D_t3431720054** get_address_of_constructorArgs_1() { return &___constructorArgs_1; }
	inline void set_constructorArgs_1(TypeU5BU5D_t3431720054* value)
	{
		___constructorArgs_1 = value;
		Il2CppCodeGenWriteBarrier(&___constructorArgs_1, value);
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(NewInstanceExpression_t2308805745, ___type_2)); }
	inline Type_t * get_type_2() const { return ___type_2; }
	inline Type_t ** get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(Type_t * value)
	{
		___type_2 = value;
		Il2CppCodeGenWriteBarrier(&___type_2, value);
	}

	inline static int32_t get_offset_of_constructor_3() { return static_cast<int32_t>(offsetof(NewInstanceExpression_t2308805745, ___constructor_3)); }
	inline ConstructorInfo_t3542137334 * get_constructor_3() const { return ___constructor_3; }
	inline ConstructorInfo_t3542137334 ** get_address_of_constructor_3() { return &___constructor_3; }
	inline void set_constructor_3(ConstructorInfo_t3542137334 * value)
	{
		___constructor_3 = value;
		Il2CppCodeGenWriteBarrier(&___constructor_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
