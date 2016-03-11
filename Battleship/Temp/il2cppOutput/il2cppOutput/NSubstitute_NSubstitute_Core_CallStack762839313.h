#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Concurrent.ConcurrentStack`1<NSubstitute.Core.ICall>
struct ConcurrentStack_1_t481458322;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Core.CallStack
struct  CallStack_t762839313  : public Il2CppObject
{
public:
	// System.Collections.Concurrent.ConcurrentStack`1<NSubstitute.Core.ICall> NSubstitute.Core.CallStack::_stack
	ConcurrentStack_1_t481458322 * ____stack_0;

public:
	inline static int32_t get_offset_of__stack_0() { return static_cast<int32_t>(offsetof(CallStack_t762839313, ____stack_0)); }
	inline ConcurrentStack_1_t481458322 * get__stack_0() const { return ____stack_0; }
	inline ConcurrentStack_1_t481458322 ** get_address_of__stack_0() { return &____stack_0; }
	inline void set__stack_0(ConcurrentStack_1_t481458322 * value)
	{
		____stack_0 = value;
		Il2CppCodeGenWriteBarrier(&____stack_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
