#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// Castle.DynamicProxy.ModuleScope
struct ModuleScope_t3833971791;
// Castle.Core.Logging.ILogger
struct ILogger_t1490187963;
// Castle.DynamicProxy.ProxyGenerationOptions
struct ProxyGenerationOptions_t351299295;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Generators.BaseProxyGenerator
struct  BaseProxyGenerator_t3677225993  : public Il2CppObject
{
public:
	// System.Type Castle.DynamicProxy.Generators.BaseProxyGenerator::targetType
	Type_t * ___targetType_0;
	// Castle.DynamicProxy.ModuleScope Castle.DynamicProxy.Generators.BaseProxyGenerator::scope
	ModuleScope_t3833971791 * ___scope_1;
	// Castle.Core.Logging.ILogger Castle.DynamicProxy.Generators.BaseProxyGenerator::logger
	Il2CppObject * ___logger_2;
	// Castle.DynamicProxy.ProxyGenerationOptions Castle.DynamicProxy.Generators.BaseProxyGenerator::proxyGenerationOptions
	ProxyGenerationOptions_t351299295 * ___proxyGenerationOptions_3;

public:
	inline static int32_t get_offset_of_targetType_0() { return static_cast<int32_t>(offsetof(BaseProxyGenerator_t3677225993, ___targetType_0)); }
	inline Type_t * get_targetType_0() const { return ___targetType_0; }
	inline Type_t ** get_address_of_targetType_0() { return &___targetType_0; }
	inline void set_targetType_0(Type_t * value)
	{
		___targetType_0 = value;
		Il2CppCodeGenWriteBarrier(&___targetType_0, value);
	}

	inline static int32_t get_offset_of_scope_1() { return static_cast<int32_t>(offsetof(BaseProxyGenerator_t3677225993, ___scope_1)); }
	inline ModuleScope_t3833971791 * get_scope_1() const { return ___scope_1; }
	inline ModuleScope_t3833971791 ** get_address_of_scope_1() { return &___scope_1; }
	inline void set_scope_1(ModuleScope_t3833971791 * value)
	{
		___scope_1 = value;
		Il2CppCodeGenWriteBarrier(&___scope_1, value);
	}

	inline static int32_t get_offset_of_logger_2() { return static_cast<int32_t>(offsetof(BaseProxyGenerator_t3677225993, ___logger_2)); }
	inline Il2CppObject * get_logger_2() const { return ___logger_2; }
	inline Il2CppObject ** get_address_of_logger_2() { return &___logger_2; }
	inline void set_logger_2(Il2CppObject * value)
	{
		___logger_2 = value;
		Il2CppCodeGenWriteBarrier(&___logger_2, value);
	}

	inline static int32_t get_offset_of_proxyGenerationOptions_3() { return static_cast<int32_t>(offsetof(BaseProxyGenerator_t3677225993, ___proxyGenerationOptions_3)); }
	inline ProxyGenerationOptions_t351299295 * get_proxyGenerationOptions_3() const { return ___proxyGenerationOptions_3; }
	inline ProxyGenerationOptions_t351299295 ** get_address_of_proxyGenerationOptions_3() { return &___proxyGenerationOptions_3; }
	inline void set_proxyGenerationOptions_3(ProxyGenerationOptions_t351299295 * value)
	{
		___proxyGenerationOptions_3 = value;
		Il2CppCodeGenWriteBarrier(&___proxyGenerationOptions_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
