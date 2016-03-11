#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference
struct FieldReference_t994901333;
// Castle.DynamicProxy.Contributors.GetTargetExpressionDelegate
struct GetTargetExpressionDelegate_t2473372959;

#include "NSubstitute_Castle_DynamicProxy_Generators_BasePro3677225993.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.InterfaceProxyWithTargetGenerator
struct  InterfaceProxyWithTargetGenerator_t2334169658  : public BaseProxyGenerator_t3677225993
{
public:
	// Castle.DynamicProxy.Generators.Emitters.SimpleAST.FieldReference Castle.DynamicProxy.Generators.InterfaceProxyWithTargetGenerator::targetField
	FieldReference_t994901333 * ___targetField_4;

public:
	inline static int32_t get_offset_of_targetField_4() { return static_cast<int32_t>(offsetof(InterfaceProxyWithTargetGenerator_t2334169658, ___targetField_4)); }
	inline FieldReference_t994901333 * get_targetField_4() const { return ___targetField_4; }
	inline FieldReference_t994901333 ** get_address_of_targetField_4() { return &___targetField_4; }
	inline void set_targetField_4(FieldReference_t994901333 * value)
	{
		___targetField_4 = value;
		Il2CppCodeGenWriteBarrier(&___targetField_4, value);
	}
};

struct InterfaceProxyWithTargetGenerator_t2334169658_StaticFields
{
public:
	// Castle.DynamicProxy.Contributors.GetTargetExpressionDelegate Castle.DynamicProxy.Generators.InterfaceProxyWithTargetGenerator::CS$<>9__CachedAnonymousMethodDelegate6
	GetTargetExpressionDelegate_t2473372959 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate6_5;

public:
	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate6_5() { return static_cast<int32_t>(offsetof(InterfaceProxyWithTargetGenerator_t2334169658_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate6_5)); }
	inline GetTargetExpressionDelegate_t2473372959 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate6_5() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate6_5; }
	inline GetTargetExpressionDelegate_t2473372959 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate6_5() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate6_5; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate6_5(GetTargetExpressionDelegate_t2473372959 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate6_5 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate6_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
