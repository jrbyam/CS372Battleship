#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NSubstitute.Proxies.CastleDynamicProxy.CastleInvocationMapper
struct CastleInvocationMapper_t3658226302;
// NSubstitute.Core.ICallRouter
struct ICallRouter_t1036440279;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Proxies.CastleDynamicProxy.CastleForwardingInterceptor
struct  CastleForwardingInterceptor_t3698607877  : public Il2CppObject
{
public:
	// NSubstitute.Proxies.CastleDynamicProxy.CastleInvocationMapper NSubstitute.Proxies.CastleDynamicProxy.CastleForwardingInterceptor::_invocationMapper
	CastleInvocationMapper_t3658226302 * ____invocationMapper_0;
	// NSubstitute.Core.ICallRouter NSubstitute.Proxies.CastleDynamicProxy.CastleForwardingInterceptor::_callRouter
	Il2CppObject * ____callRouter_1;
	// System.Boolean NSubstitute.Proxies.CastleDynamicProxy.CastleForwardingInterceptor::_isIntercepting
	bool ____isIntercepting_2;

public:
	inline static int32_t get_offset_of__invocationMapper_0() { return static_cast<int32_t>(offsetof(CastleForwardingInterceptor_t3698607877, ____invocationMapper_0)); }
	inline CastleInvocationMapper_t3658226302 * get__invocationMapper_0() const { return ____invocationMapper_0; }
	inline CastleInvocationMapper_t3658226302 ** get_address_of__invocationMapper_0() { return &____invocationMapper_0; }
	inline void set__invocationMapper_0(CastleInvocationMapper_t3658226302 * value)
	{
		____invocationMapper_0 = value;
		Il2CppCodeGenWriteBarrier(&____invocationMapper_0, value);
	}

	inline static int32_t get_offset_of__callRouter_1() { return static_cast<int32_t>(offsetof(CastleForwardingInterceptor_t3698607877, ____callRouter_1)); }
	inline Il2CppObject * get__callRouter_1() const { return ____callRouter_1; }
	inline Il2CppObject ** get_address_of__callRouter_1() { return &____callRouter_1; }
	inline void set__callRouter_1(Il2CppObject * value)
	{
		____callRouter_1 = value;
		Il2CppCodeGenWriteBarrier(&____callRouter_1, value);
	}

	inline static int32_t get_offset_of__isIntercepting_2() { return static_cast<int32_t>(offsetof(CastleForwardingInterceptor_t3698607877, ____isIntercepting_2)); }
	inline bool get__isIntercepting_2() const { return ____isIntercepting_2; }
	inline bool* get_address_of__isIntercepting_2() { return &____isIntercepting_2; }
	inline void set__isIntercepting_2(bool value)
	{
		____isIntercepting_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
