#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Castle.Core.Logging.ILogger
struct ILogger_t1490187963;
// Castle.DynamicProxy.IProxyBuilder
struct IProxyBuilder_t2014528861;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.ProxyGenerator
struct  ProxyGenerator_t3039422796  : public Il2CppObject
{
public:
	// Castle.Core.Logging.ILogger Castle.DynamicProxy.ProxyGenerator::logger
	Il2CppObject * ___logger_0;
	// Castle.DynamicProxy.IProxyBuilder Castle.DynamicProxy.ProxyGenerator::proxyBuilder
	Il2CppObject * ___proxyBuilder_1;

public:
	inline static int32_t get_offset_of_logger_0() { return static_cast<int32_t>(offsetof(ProxyGenerator_t3039422796, ___logger_0)); }
	inline Il2CppObject * get_logger_0() const { return ___logger_0; }
	inline Il2CppObject ** get_address_of_logger_0() { return &___logger_0; }
	inline void set_logger_0(Il2CppObject * value)
	{
		___logger_0 = value;
		Il2CppCodeGenWriteBarrier(&___logger_0, value);
	}

	inline static int32_t get_offset_of_proxyBuilder_1() { return static_cast<int32_t>(offsetof(ProxyGenerator_t3039422796, ___proxyBuilder_1)); }
	inline Il2CppObject * get_proxyBuilder_1() const { return ___proxyBuilder_1; }
	inline Il2CppObject ** get_address_of_proxyBuilder_1() { return &___proxyBuilder_1; }
	inline void set_proxyBuilder_1(Il2CppObject * value)
	{
		___proxyBuilder_1 = value;
		Il2CppCodeGenWriteBarrier(&___proxyBuilder_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
