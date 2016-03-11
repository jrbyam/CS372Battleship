#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Castle.DynamicProxy.Generators.IInvocationCreationContributor
struct IInvocationCreationContributor_t2813171894;
// Castle.DynamicProxy.Contributors.GetTargetExpressionDelegate
struct GetTargetExpressionDelegate_t2473372959;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference
struct Reference_t1588091119;
// System.Type
struct Type_t;
// System.Predicate`1<System.Type>
struct Predicate_1_t3350193833;

#include "NSubstitute_Castle_DynamicProxy_Generators_MethodG3295115653.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.MethodWithInvocationGenerator
struct  MethodWithInvocationGenerator_t3187752431  : public MethodGenerator_t3295115653
{
public:
	// Castle.DynamicProxy.Generators.IInvocationCreationContributor Castle.DynamicProxy.Generators.MethodWithInvocationGenerator::contributor
	Il2CppObject * ___contributor_2;
	// Castle.DynamicProxy.Contributors.GetTargetExpressionDelegate Castle.DynamicProxy.Generators.MethodWithInvocationGenerator::getTargetExpression
	GetTargetExpressionDelegate_t2473372959 * ___getTargetExpression_3;
	// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference Castle.DynamicProxy.Generators.MethodWithInvocationGenerator::interceptors
	Reference_t1588091119 * ___interceptors_4;
	// System.Type Castle.DynamicProxy.Generators.MethodWithInvocationGenerator::invocation
	Type_t * ___invocation_5;

public:
	inline static int32_t get_offset_of_contributor_2() { return static_cast<int32_t>(offsetof(MethodWithInvocationGenerator_t3187752431, ___contributor_2)); }
	inline Il2CppObject * get_contributor_2() const { return ___contributor_2; }
	inline Il2CppObject ** get_address_of_contributor_2() { return &___contributor_2; }
	inline void set_contributor_2(Il2CppObject * value)
	{
		___contributor_2 = value;
		Il2CppCodeGenWriteBarrier(&___contributor_2, value);
	}

	inline static int32_t get_offset_of_getTargetExpression_3() { return static_cast<int32_t>(offsetof(MethodWithInvocationGenerator_t3187752431, ___getTargetExpression_3)); }
	inline GetTargetExpressionDelegate_t2473372959 * get_getTargetExpression_3() const { return ___getTargetExpression_3; }
	inline GetTargetExpressionDelegate_t2473372959 ** get_address_of_getTargetExpression_3() { return &___getTargetExpression_3; }
	inline void set_getTargetExpression_3(GetTargetExpressionDelegate_t2473372959 * value)
	{
		___getTargetExpression_3 = value;
		Il2CppCodeGenWriteBarrier(&___getTargetExpression_3, value);
	}

	inline static int32_t get_offset_of_interceptors_4() { return static_cast<int32_t>(offsetof(MethodWithInvocationGenerator_t3187752431, ___interceptors_4)); }
	inline Reference_t1588091119 * get_interceptors_4() const { return ___interceptors_4; }
	inline Reference_t1588091119 ** get_address_of_interceptors_4() { return &___interceptors_4; }
	inline void set_interceptors_4(Reference_t1588091119 * value)
	{
		___interceptors_4 = value;
		Il2CppCodeGenWriteBarrier(&___interceptors_4, value);
	}

	inline static int32_t get_offset_of_invocation_5() { return static_cast<int32_t>(offsetof(MethodWithInvocationGenerator_t3187752431, ___invocation_5)); }
	inline Type_t * get_invocation_5() const { return ___invocation_5; }
	inline Type_t ** get_address_of_invocation_5() { return &___invocation_5; }
	inline void set_invocation_5(Type_t * value)
	{
		___invocation_5 = value;
		Il2CppCodeGenWriteBarrier(&___invocation_5, value);
	}
};

struct MethodWithInvocationGenerator_t3187752431_StaticFields
{
public:
	// System.Predicate`1<System.Type> Castle.DynamicProxy.Generators.MethodWithInvocationGenerator::CS$<>9__CachedAnonymousMethodDelegate2
	Predicate_1_t3350193833 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_6;

public:
	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_6() { return static_cast<int32_t>(offsetof(MethodWithInvocationGenerator_t3187752431_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_6)); }
	inline Predicate_1_t3350193833 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_6() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_6; }
	inline Predicate_1_t3350193833 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_6() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_6; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate2_6(Predicate_1_t3350193833 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_6 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate2_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
