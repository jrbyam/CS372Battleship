#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IDictionary`2<System.Reflection.Assembly,System.Boolean>
struct IDictionary_2_t3550208770;
// Castle.Core.Internal.Lock
struct Lock_t4015335261;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Internal.InternalsUtil
struct  InternalsUtil_t3401376634  : public Il2CppObject
{
public:

public:
};

struct InternalsUtil_t3401376634_StaticFields
{
public:
	// System.Collections.Generic.IDictionary`2<System.Reflection.Assembly,System.Boolean> Castle.DynamicProxy.Internal.InternalsUtil::internalsToDynProxy
	Il2CppObject* ___internalsToDynProxy_0;
	// Castle.Core.Internal.Lock Castle.DynamicProxy.Internal.InternalsUtil::internalsToDynProxyLock
	Lock_t4015335261 * ___internalsToDynProxyLock_1;

public:
	inline static int32_t get_offset_of_internalsToDynProxy_0() { return static_cast<int32_t>(offsetof(InternalsUtil_t3401376634_StaticFields, ___internalsToDynProxy_0)); }
	inline Il2CppObject* get_internalsToDynProxy_0() const { return ___internalsToDynProxy_0; }
	inline Il2CppObject** get_address_of_internalsToDynProxy_0() { return &___internalsToDynProxy_0; }
	inline void set_internalsToDynProxy_0(Il2CppObject* value)
	{
		___internalsToDynProxy_0 = value;
		Il2CppCodeGenWriteBarrier(&___internalsToDynProxy_0, value);
	}

	inline static int32_t get_offset_of_internalsToDynProxyLock_1() { return static_cast<int32_t>(offsetof(InternalsUtil_t3401376634_StaticFields, ___internalsToDynProxyLock_1)); }
	inline Lock_t4015335261 * get_internalsToDynProxyLock_1() const { return ___internalsToDynProxyLock_1; }
	inline Lock_t4015335261 ** get_address_of_internalsToDynProxyLock_1() { return &___internalsToDynProxyLock_1; }
	inline void set_internalsToDynProxyLock_1(Lock_t4015335261 * value)
	{
		___internalsToDynProxyLock_1 = value;
		Il2CppCodeGenWriteBarrier(&___internalsToDynProxyLock_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
