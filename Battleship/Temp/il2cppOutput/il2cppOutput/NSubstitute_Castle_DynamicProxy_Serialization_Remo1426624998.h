#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Castle.DynamicProxy.IInvocation
struct IInvocation_t481271520;

#include "mscorlib_System_MarshalByRefObject2055500882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.DynamicProxy.Serialization.RemotableInvocation
struct  RemotableInvocation_t1426624998  : public MarshalByRefObject_t2055500882
{
public:
	// Castle.DynamicProxy.IInvocation Castle.DynamicProxy.Serialization.RemotableInvocation::parent
	Il2CppObject * ___parent_1;

public:
	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(RemotableInvocation_t1426624998, ___parent_1)); }
	inline Il2CppObject * get_parent_1() const { return ___parent_1; }
	inline Il2CppObject ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(Il2CppObject * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier(&___parent_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
