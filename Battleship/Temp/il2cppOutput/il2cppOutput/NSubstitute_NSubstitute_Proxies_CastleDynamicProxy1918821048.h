#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Castle.DynamicProxy.ProxyGenerator
struct ProxyGenerator_t3039422796;
// NSubstitute.Proxies.CastleDynamicProxy.CastleDynamicProxyFactory/AllMethodsExceptCallRouterCallsHook
struct AllMethodsExceptCallRouterCallsHook_t1649409351;
// System.Func`2<System.Type,System.Boolean>
struct Func_2_t634911258;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Proxies.CastleDynamicProxy.CastleDynamicProxyFactory
struct  CastleDynamicProxyFactory_t1918821048  : public Il2CppObject
{
public:
	// Castle.DynamicProxy.ProxyGenerator NSubstitute.Proxies.CastleDynamicProxy.CastleDynamicProxyFactory::_proxyGenerator
	ProxyGenerator_t3039422796 * ____proxyGenerator_0;
	// NSubstitute.Proxies.CastleDynamicProxy.CastleDynamicProxyFactory/AllMethodsExceptCallRouterCallsHook NSubstitute.Proxies.CastleDynamicProxy.CastleDynamicProxyFactory::_allMethodsExceptCallRouterCallsHook
	AllMethodsExceptCallRouterCallsHook_t1649409351 * ____allMethodsExceptCallRouterCallsHook_1;

public:
	inline static int32_t get_offset_of__proxyGenerator_0() { return static_cast<int32_t>(offsetof(CastleDynamicProxyFactory_t1918821048, ____proxyGenerator_0)); }
	inline ProxyGenerator_t3039422796 * get__proxyGenerator_0() const { return ____proxyGenerator_0; }
	inline ProxyGenerator_t3039422796 ** get_address_of__proxyGenerator_0() { return &____proxyGenerator_0; }
	inline void set__proxyGenerator_0(ProxyGenerator_t3039422796 * value)
	{
		____proxyGenerator_0 = value;
		Il2CppCodeGenWriteBarrier(&____proxyGenerator_0, value);
	}

	inline static int32_t get_offset_of__allMethodsExceptCallRouterCallsHook_1() { return static_cast<int32_t>(offsetof(CastleDynamicProxyFactory_t1918821048, ____allMethodsExceptCallRouterCallsHook_1)); }
	inline AllMethodsExceptCallRouterCallsHook_t1649409351 * get__allMethodsExceptCallRouterCallsHook_1() const { return ____allMethodsExceptCallRouterCallsHook_1; }
	inline AllMethodsExceptCallRouterCallsHook_t1649409351 ** get_address_of__allMethodsExceptCallRouterCallsHook_1() { return &____allMethodsExceptCallRouterCallsHook_1; }
	inline void set__allMethodsExceptCallRouterCallsHook_1(AllMethodsExceptCallRouterCallsHook_t1649409351 * value)
	{
		____allMethodsExceptCallRouterCallsHook_1 = value;
		Il2CppCodeGenWriteBarrier(&____allMethodsExceptCallRouterCallsHook_1, value);
	}
};

struct CastleDynamicProxyFactory_t1918821048_StaticFields
{
public:
	// System.Func`2<System.Type,System.Boolean> NSubstitute.Proxies.CastleDynamicProxy.CastleDynamicProxyFactory::CS$<>9__CachedAnonymousMethodDelegate1
	Func_2_t634911258 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2;

public:
	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2() { return static_cast<int32_t>(offsetof(CastleDynamicProxyFactory_t1918821048_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2)); }
	inline Func_2_t634911258 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2; }
	inline Func_2_t634911258 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2(Func_2_t634911258 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2 = value;
		Il2CppCodeGenWriteBarrier(&___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
