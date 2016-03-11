﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.Thread
struct Thread_t1674723085;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t1233883898;
// System.Threading.ReaderWriterLockSlim/LockDetails[]
struct LockDetailsU5BU5D_t1625834958;

#include "mscorlib_System_Object837106420.h"
#include "System_Core_System_Threading_LockRecursionPolicy1727596364.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ReaderWriterLockSlim
struct  ReaderWriterLockSlim_t2580547393  : public Il2CppObject
{
public:
	// System.Int32 System.Threading.ReaderWriterLockSlim::myLock
	int32_t ___myLock_1;
	// System.Int32 System.Threading.ReaderWriterLockSlim::owners
	int32_t ___owners_2;
	// System.Threading.Thread System.Threading.ReaderWriterLockSlim::upgradable_thread
	Thread_t1674723085 * ___upgradable_thread_3;
	// System.Threading.Thread System.Threading.ReaderWriterLockSlim::write_thread
	Thread_t1674723085 * ___write_thread_4;
	// System.UInt32 System.Threading.ReaderWriterLockSlim::numWriteWaiters
	uint32_t ___numWriteWaiters_5;
	// System.UInt32 System.Threading.ReaderWriterLockSlim::numReadWaiters
	uint32_t ___numReadWaiters_6;
	// System.UInt32 System.Threading.ReaderWriterLockSlim::numUpgradeWaiters
	uint32_t ___numUpgradeWaiters_7;
	// System.Threading.EventWaitHandle System.Threading.ReaderWriterLockSlim::writeEvent
	EventWaitHandle_t1233883898 * ___writeEvent_8;
	// System.Threading.EventWaitHandle System.Threading.ReaderWriterLockSlim::readEvent
	EventWaitHandle_t1233883898 * ___readEvent_9;
	// System.Threading.EventWaitHandle System.Threading.ReaderWriterLockSlim::upgradeEvent
	EventWaitHandle_t1233883898 * ___upgradeEvent_10;
	// System.Threading.LockRecursionPolicy System.Threading.ReaderWriterLockSlim::recursionPolicy
	int32_t ___recursionPolicy_11;
	// System.Threading.ReaderWriterLockSlim/LockDetails[] System.Threading.ReaderWriterLockSlim::read_locks
	LockDetailsU5BU5D_t1625834958* ___read_locks_12;

public:
	inline static int32_t get_offset_of_myLock_1() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t2580547393, ___myLock_1)); }
	inline int32_t get_myLock_1() const { return ___myLock_1; }
	inline int32_t* get_address_of_myLock_1() { return &___myLock_1; }
	inline void set_myLock_1(int32_t value)
	{
		___myLock_1 = value;
	}

	inline static int32_t get_offset_of_owners_2() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t2580547393, ___owners_2)); }
	inline int32_t get_owners_2() const { return ___owners_2; }
	inline int32_t* get_address_of_owners_2() { return &___owners_2; }
	inline void set_owners_2(int32_t value)
	{
		___owners_2 = value;
	}

	inline static int32_t get_offset_of_upgradable_thread_3() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t2580547393, ___upgradable_thread_3)); }
	inline Thread_t1674723085 * get_upgradable_thread_3() const { return ___upgradable_thread_3; }
	inline Thread_t1674723085 ** get_address_of_upgradable_thread_3() { return &___upgradable_thread_3; }
	inline void set_upgradable_thread_3(Thread_t1674723085 * value)
	{
		___upgradable_thread_3 = value;
		Il2CppCodeGenWriteBarrier(&___upgradable_thread_3, value);
	}

	inline static int32_t get_offset_of_write_thread_4() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t2580547393, ___write_thread_4)); }
	inline Thread_t1674723085 * get_write_thread_4() const { return ___write_thread_4; }
	inline Thread_t1674723085 ** get_address_of_write_thread_4() { return &___write_thread_4; }
	inline void set_write_thread_4(Thread_t1674723085 * value)
	{
		___write_thread_4 = value;
		Il2CppCodeGenWriteBarrier(&___write_thread_4, value);
	}

	inline static int32_t get_offset_of_numWriteWaiters_5() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t2580547393, ___numWriteWaiters_5)); }
	inline uint32_t get_numWriteWaiters_5() const { return ___numWriteWaiters_5; }
	inline uint32_t* get_address_of_numWriteWaiters_5() { return &___numWriteWaiters_5; }
	inline void set_numWriteWaiters_5(uint32_t value)
	{
		___numWriteWaiters_5 = value;
	}

	inline static int32_t get_offset_of_numReadWaiters_6() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t2580547393, ___numReadWaiters_6)); }
	inline uint32_t get_numReadWaiters_6() const { return ___numReadWaiters_6; }
	inline uint32_t* get_address_of_numReadWaiters_6() { return &___numReadWaiters_6; }
	inline void set_numReadWaiters_6(uint32_t value)
	{
		___numReadWaiters_6 = value;
	}

	inline static int32_t get_offset_of_numUpgradeWaiters_7() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t2580547393, ___numUpgradeWaiters_7)); }
	inline uint32_t get_numUpgradeWaiters_7() const { return ___numUpgradeWaiters_7; }
	inline uint32_t* get_address_of_numUpgradeWaiters_7() { return &___numUpgradeWaiters_7; }
	inline void set_numUpgradeWaiters_7(uint32_t value)
	{
		___numUpgradeWaiters_7 = value;
	}

	inline static int32_t get_offset_of_writeEvent_8() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t2580547393, ___writeEvent_8)); }
	inline EventWaitHandle_t1233883898 * get_writeEvent_8() const { return ___writeEvent_8; }
	inline EventWaitHandle_t1233883898 ** get_address_of_writeEvent_8() { return &___writeEvent_8; }
	inline void set_writeEvent_8(EventWaitHandle_t1233883898 * value)
	{
		___writeEvent_8 = value;
		Il2CppCodeGenWriteBarrier(&___writeEvent_8, value);
	}

	inline static int32_t get_offset_of_readEvent_9() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t2580547393, ___readEvent_9)); }
	inline EventWaitHandle_t1233883898 * get_readEvent_9() const { return ___readEvent_9; }
	inline EventWaitHandle_t1233883898 ** get_address_of_readEvent_9() { return &___readEvent_9; }
	inline void set_readEvent_9(EventWaitHandle_t1233883898 * value)
	{
		___readEvent_9 = value;
		Il2CppCodeGenWriteBarrier(&___readEvent_9, value);
	}

	inline static int32_t get_offset_of_upgradeEvent_10() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t2580547393, ___upgradeEvent_10)); }
	inline EventWaitHandle_t1233883898 * get_upgradeEvent_10() const { return ___upgradeEvent_10; }
	inline EventWaitHandle_t1233883898 ** get_address_of_upgradeEvent_10() { return &___upgradeEvent_10; }
	inline void set_upgradeEvent_10(EventWaitHandle_t1233883898 * value)
	{
		___upgradeEvent_10 = value;
		Il2CppCodeGenWriteBarrier(&___upgradeEvent_10, value);
	}

	inline static int32_t get_offset_of_recursionPolicy_11() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t2580547393, ___recursionPolicy_11)); }
	inline int32_t get_recursionPolicy_11() const { return ___recursionPolicy_11; }
	inline int32_t* get_address_of_recursionPolicy_11() { return &___recursionPolicy_11; }
	inline void set_recursionPolicy_11(int32_t value)
	{
		___recursionPolicy_11 = value;
	}

	inline static int32_t get_offset_of_read_locks_12() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t2580547393, ___read_locks_12)); }
	inline LockDetailsU5BU5D_t1625834958* get_read_locks_12() const { return ___read_locks_12; }
	inline LockDetailsU5BU5D_t1625834958** get_address_of_read_locks_12() { return &___read_locks_12; }
	inline void set_read_locks_12(LockDetailsU5BU5D_t1625834958* value)
	{
		___read_locks_12 = value;
		Il2CppCodeGenWriteBarrier(&___read_locks_12, value);
	}
};

struct ReaderWriterLockSlim_t2580547393_StaticFields
{
public:
	// System.Boolean System.Threading.ReaderWriterLockSlim::smp
	bool ___smp_0;

public:
	inline static int32_t get_offset_of_smp_0() { return static_cast<int32_t>(offsetof(ReaderWriterLockSlim_t2580547393_StaticFields, ___smp_0)); }
	inline bool get_smp_0() const { return ___smp_0; }
	inline bool* get_address_of_smp_0() { return &___smp_0; }
	inline void set_smp_0(bool value)
	{
		___smp_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
