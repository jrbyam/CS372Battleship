#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NSubstitute.Core.IProxyFactory
struct IProxyFactory_t1430189068;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Proxies.ProxyFactory
struct  ProxyFactory_t2750726398  : public Il2CppObject
{
public:
	// NSubstitute.Core.IProxyFactory NSubstitute.Proxies.ProxyFactory::_delegateFactory
	Il2CppObject * ____delegateFactory_0;
	// NSubstitute.Core.IProxyFactory NSubstitute.Proxies.ProxyFactory::_dynamicProxyFactory
	Il2CppObject * ____dynamicProxyFactory_1;

public:
	inline static int32_t get_offset_of__delegateFactory_0() { return static_cast<int32_t>(offsetof(ProxyFactory_t2750726398, ____delegateFactory_0)); }
	inline Il2CppObject * get__delegateFactory_0() const { return ____delegateFactory_0; }
	inline Il2CppObject ** get_address_of__delegateFactory_0() { return &____delegateFactory_0; }
	inline void set__delegateFactory_0(Il2CppObject * value)
	{
		____delegateFactory_0 = value;
		Il2CppCodeGenWriteBarrier(&____delegateFactory_0, value);
	}

	inline static int32_t get_offset_of__dynamicProxyFactory_1() { return static_cast<int32_t>(offsetof(ProxyFactory_t2750726398, ____dynamicProxyFactory_1)); }
	inline Il2CppObject * get__dynamicProxyFactory_1() const { return ____dynamicProxyFactory_1; }
	inline Il2CppObject ** get_address_of__dynamicProxyFactory_1() { return &____dynamicProxyFactory_1; }
	inline void set__dynamicProxyFactory_1(Il2CppObject * value)
	{
		____dynamicProxyFactory_1 = value;
		Il2CppCodeGenWriteBarrier(&____dynamicProxyFactory_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
