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

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.Core.Internal.SlimWriteLockHolder
struct  SlimWriteLockHolder_t1904353003  : public Il2CppObject
{
public:
	// System.Threading.ReaderWriterLockSlim Castle.Core.Internal.SlimWriteLockHolder::locker
	ReaderWriterLockSlim_t2580547393 * ___locker_0;
	// System.Boolean Castle.Core.Internal.SlimWriteLockHolder::lockAcquired
	bool ___lockAcquired_1;

public:
	inline static int32_t get_offset_of_locker_0() { return static_cast<int32_t>(offsetof(SlimWriteLockHolder_t1904353003, ___locker_0)); }
	inline ReaderWriterLockSlim_t2580547393 * get_locker_0() const { return ___locker_0; }
	inline ReaderWriterLockSlim_t2580547393 ** get_address_of_locker_0() { return &___locker_0; }
	inline void set_locker_0(ReaderWriterLockSlim_t2580547393 * value)
	{
		___locker_0 = value;
		Il2CppCodeGenWriteBarrier(&___locker_0, value);
	}

	inline static int32_t get_offset_of_lockAcquired_1() { return static_cast<int32_t>(offsetof(SlimWriteLockHolder_t1904353003, ___lockAcquired_1)); }
	inline bool get_lockAcquired_1() const { return ___lockAcquired_1; }
	inline bool* get_address_of_lockAcquired_1() { return &___lockAcquired_1; }
	inline void set_lockAcquired_1(bool value)
	{
		___lockAcquired_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
