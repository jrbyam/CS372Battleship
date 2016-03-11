#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Castle.Core.Internal.ILockHolder
struct ILockHolder_t4250695154;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.Core.Internal.NoOpLock
struct  NoOpLock_t314418687  : public Il2CppObject
{
public:

public:
};

struct NoOpLock_t314418687_StaticFields
{
public:
	// Castle.Core.Internal.ILockHolder Castle.Core.Internal.NoOpLock::Lock
	Il2CppObject * ___Lock_0;

public:
	inline static int32_t get_offset_of_Lock_0() { return static_cast<int32_t>(offsetof(NoOpLock_t314418687_StaticFields, ___Lock_0)); }
	inline Il2CppObject * get_Lock_0() const { return ___Lock_0; }
	inline Il2CppObject ** get_address_of_Lock_0() { return &___Lock_0; }
	inline void set_Lock_0(Il2CppObject * value)
	{
		___Lock_0 = value;
		Il2CppCodeGenWriteBarrier(&___Lock_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
