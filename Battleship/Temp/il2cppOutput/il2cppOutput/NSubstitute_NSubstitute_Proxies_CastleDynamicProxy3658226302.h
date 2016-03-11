#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NSubstitute.Core.CallFactory
struct CallFactory_t4273532691;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Proxies.CastleDynamicProxy.CastleInvocationMapper
struct  CastleInvocationMapper_t3658226302  : public Il2CppObject
{
public:

public:
};

struct CastleInvocationMapper_t3658226302_StaticFields
{
public:
	// NSubstitute.Core.CallFactory NSubstitute.Proxies.CastleDynamicProxy.CastleInvocationMapper::CallFactory
	CallFactory_t4273532691 * ___CallFactory_0;

public:
	inline static int32_t get_offset_of_CallFactory_0() { return static_cast<int32_t>(offsetof(CastleInvocationMapper_t3658226302_StaticFields, ___CallFactory_0)); }
	inline CallFactory_t4273532691 * get_CallFactory_0() const { return ___CallFactory_0; }
	inline CallFactory_t4273532691 ** get_address_of_CallFactory_0() { return &___CallFactory_0; }
	inline void set_CallFactory_0(CallFactory_t4273532691 * value)
	{
		___CallFactory_0 = value;
		Il2CppCodeGenWriteBarrier(&___CallFactory_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
