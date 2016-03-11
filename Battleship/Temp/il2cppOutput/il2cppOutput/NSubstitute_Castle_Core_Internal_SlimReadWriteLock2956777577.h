#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t2580547393;

#include "NSubstitute_Castle_Core_Internal_Lock4015335261.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.Core.Internal.SlimReadWriteLock
struct  SlimReadWriteLock_t2956777577  : public Lock_t4015335261
{
public:
	// System.Threading.ReaderWriterLockSlim Castle.Core.Internal.SlimReadWriteLock::locker
	ReaderWriterLockSlim_t2580547393 * ___locker_0;

public:
	inline static int32_t get_offset_of_locker_0() { return static_cast<int32_t>(offsetof(SlimReadWriteLock_t2956777577, ___locker_0)); }
	inline ReaderWriterLockSlim_t2580547393 * get_locker_0() const { return ___locker_0; }
	inline ReaderWriterLockSlim_t2580547393 ** get_address_of_locker_0() { return &___locker_0; }
	inline void set_locker_0(ReaderWriterLockSlim_t2580547393 * value)
	{
		___locker_0 = value;
		Il2CppCodeGenWriteBarrier(&___locker_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
