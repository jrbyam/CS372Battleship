#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type[]
struct TypeU5BU5D_t3431720054;
// Castle.DynamicProxy.Contributors.GetTargetExpressionDelegate
struct GetTargetExpressionDelegate_t2473372959;

#include "NSubstitute_Castle_DynamicProxy_Generators_BasePro3677225993.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.ClassProxyWithTargetGenerator
struct  ClassProxyWithTargetGenerator_t3451566457  : public BaseProxyGenerator_t3677225993
{
public:
	// System.Type[] Castle.DynamicProxy.Generators.ClassProxyWithTargetGenerator::additionalInterfacesToProxy
	TypeU5BU5D_t3431720054* ___additionalInterfacesToProxy_4;

public:
	inline static int32_t get_offset_of_additionalInterfacesToProxy_4() { return static_cast<int32_t>(offsetof(ClassProxyWithTargetGenerator_t3451566457, ___additionalInterfacesToProxy_4)); }
	inline TypeU5BU5D_t3431720054* get_additionalInterfacesToProxy_4() const { return ___additionalInterfacesToProxy_4; }
	inline TypeU5BU5D_t3431720054** get_address_of_additionalInterfacesToProxy_4() { return &___additionalInterfacesToProxy_4; }
	inline void set_additionalInterfacesToProxy_4(TypeU5BU5D_t3431720054* value)
	{
		___additionalInterfacesToProxy_4 = value;
		Il2CppCodeGenWriteBarrier(&___additionalInterfacesToProxy_4, value);
	}
};

struct ClassProxyWithTargetGenerator_t3451566457_StaticFields
{
public:
	// Castle.DynamicProxy.Contributors.GetTargetExpressionDelegate Castle.DynamicProxy.Generators.ClassProxyWithTargetGenerator::CS$<>9__CachedAnonymousMethodDelegate5
	GetTargetExpressionDelegate_t2473372959 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_5;

public:
	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate5_5() { return static_cast<int32_t>(offsetof(ClassProxyWithTargetGenerator_t3451566457_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_5)); }
	inline GetTargetExpressionDelegate_t2473372959 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate5_5() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_5; }
	inline GetTargetExpressionDelegate_t2473372959 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate5_5() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_5; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate5_5(GetTargetExpressionDelegate_t2473372959 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_5 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
