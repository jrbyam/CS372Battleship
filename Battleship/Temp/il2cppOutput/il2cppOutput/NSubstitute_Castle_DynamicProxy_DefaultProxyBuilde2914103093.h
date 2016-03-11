#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Castle.DynamicProxy.ModuleScope
struct ModuleScope_t3833971791;
// Castle.Core.Logging.ILogger
struct ILogger_t1490187963;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.DefaultProxyBuilder
struct  DefaultProxyBuilder_t2914103093  : public Il2CppObject
{
public:
	// Castle.DynamicProxy.ModuleScope Castle.DynamicProxy.DefaultProxyBuilder::scope
	ModuleScope_t3833971791 * ___scope_0;
	// Castle.Core.Logging.ILogger Castle.DynamicProxy.DefaultProxyBuilder::logger
	Il2CppObject * ___logger_1;

public:
	inline static int32_t get_offset_of_scope_0() { return static_cast<int32_t>(offsetof(DefaultProxyBuilder_t2914103093, ___scope_0)); }
	inline ModuleScope_t3833971791 * get_scope_0() const { return ___scope_0; }
	inline ModuleScope_t3833971791 ** get_address_of_scope_0() { return &___scope_0; }
	inline void set_scope_0(ModuleScope_t3833971791 * value)
	{
		___scope_0 = value;
		Il2CppCodeGenWriteBarrier(&___scope_0, value);
	}

	inline static int32_t get_offset_of_logger_1() { return static_cast<int32_t>(offsetof(DefaultProxyBuilder_t2914103093, ___logger_1)); }
	inline Il2CppObject * get_logger_1() const { return ___logger_1; }
	inline Il2CppObject ** get_address_of_logger_1() { return &___logger_1; }
	inline void set_logger_1(Il2CppObject * value)
	{
		___logger_1 = value;
		Il2CppCodeGenWriteBarrier(&___logger_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
