#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IDictionary`2<System.Object,NSubstitute.Core.ICallRouter>
struct IDictionary_2_t904457500;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Core.CallRouterResolver
struct  CallRouterResolver_t542089972  : public Il2CppObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.Object,NSubstitute.Core.ICallRouter> NSubstitute.Core.CallRouterResolver::_callRouterMappings
	Il2CppObject* ____callRouterMappings_0;

public:
	inline static int32_t get_offset_of__callRouterMappings_0() { return static_cast<int32_t>(offsetof(CallRouterResolver_t542089972, ____callRouterMappings_0)); }
	inline Il2CppObject* get__callRouterMappings_0() const { return ____callRouterMappings_0; }
	inline Il2CppObject** get_address_of__callRouterMappings_0() { return &____callRouterMappings_0; }
	inline void set__callRouterMappings_0(Il2CppObject* value)
	{
		____callRouterMappings_0 = value;
		Il2CppCodeGenWriteBarrier(&____callRouterMappings_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
