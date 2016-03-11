#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.ThreadLocal`1<System.Object>
struct ThreadLocal_1_t4115952518;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Core.RobustThreadLocal`1<System.Object>
struct  RobustThreadLocal_1_t3117739105  : public Il2CppObject
{
public:
	// System.Threading.ThreadLocal`1<T> NSubstitute.Core.RobustThreadLocal`1::_threadLocal
	ThreadLocal_1_t4115952518 * ____threadLocal_0;

public:
	inline static int32_t get_offset_of__threadLocal_0() { return static_cast<int32_t>(offsetof(RobustThreadLocal_1_t3117739105, ____threadLocal_0)); }
	inline ThreadLocal_1_t4115952518 * get__threadLocal_0() const { return ____threadLocal_0; }
	inline ThreadLocal_1_t4115952518 ** get_address_of__threadLocal_0() { return &____threadLocal_0; }
	inline void set__threadLocal_0(ThreadLocal_1_t4115952518 * value)
	{
		____threadLocal_0 = value;
		Il2CppCodeGenWriteBarrier(&____threadLocal_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
