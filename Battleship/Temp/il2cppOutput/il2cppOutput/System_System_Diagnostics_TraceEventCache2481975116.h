#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Diagnostics.CorrelationManager
struct CorrelationManager_t1869977386;
// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_DateTime339033936.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceEventCache
struct  TraceEventCache_t2481975116  : public Il2CppObject
{
public:
	// System.DateTime System.Diagnostics.TraceEventCache::started
	DateTime_t339033936  ___started_0;
	// System.Diagnostics.CorrelationManager System.Diagnostics.TraceEventCache::manager
	CorrelationManager_t1869977386 * ___manager_1;
	// System.String System.Diagnostics.TraceEventCache::callstack
	String_t* ___callstack_2;
	// System.String System.Diagnostics.TraceEventCache::thread
	String_t* ___thread_3;
	// System.Int32 System.Diagnostics.TraceEventCache::process
	int32_t ___process_4;
	// System.Int64 System.Diagnostics.TraceEventCache::timestamp
	int64_t ___timestamp_5;

public:
	inline static int32_t get_offset_of_started_0() { return static_cast<int32_t>(offsetof(TraceEventCache_t2481975116, ___started_0)); }
	inline DateTime_t339033936  get_started_0() const { return ___started_0; }
	inline DateTime_t339033936 * get_address_of_started_0() { return &___started_0; }
	inline void set_started_0(DateTime_t339033936  value)
	{
		___started_0 = value;
	}

	inline static int32_t get_offset_of_manager_1() { return static_cast<int32_t>(offsetof(TraceEventCache_t2481975116, ___manager_1)); }
	inline CorrelationManager_t1869977386 * get_manager_1() const { return ___manager_1; }
	inline CorrelationManager_t1869977386 ** get_address_of_manager_1() { return &___manager_1; }
	inline void set_manager_1(CorrelationManager_t1869977386 * value)
	{
		___manager_1 = value;
		Il2CppCodeGenWriteBarrier(&___manager_1, value);
	}

	inline static int32_t get_offset_of_callstack_2() { return static_cast<int32_t>(offsetof(TraceEventCache_t2481975116, ___callstack_2)); }
	inline String_t* get_callstack_2() const { return ___callstack_2; }
	inline String_t** get_address_of_callstack_2() { return &___callstack_2; }
	inline void set_callstack_2(String_t* value)
	{
		___callstack_2 = value;
		Il2CppCodeGenWriteBarrier(&___callstack_2, value);
	}

	inline static int32_t get_offset_of_thread_3() { return static_cast<int32_t>(offsetof(TraceEventCache_t2481975116, ___thread_3)); }
	inline String_t* get_thread_3() const { return ___thread_3; }
	inline String_t** get_address_of_thread_3() { return &___thread_3; }
	inline void set_thread_3(String_t* value)
	{
		___thread_3 = value;
		Il2CppCodeGenWriteBarrier(&___thread_3, value);
	}

	inline static int32_t get_offset_of_process_4() { return static_cast<int32_t>(offsetof(TraceEventCache_t2481975116, ___process_4)); }
	inline int32_t get_process_4() const { return ___process_4; }
	inline int32_t* get_address_of_process_4() { return &___process_4; }
	inline void set_process_4(int32_t value)
	{
		___process_4 = value;
	}

	inline static int32_t get_offset_of_timestamp_5() { return static_cast<int32_t>(offsetof(TraceEventCache_t2481975116, ___timestamp_5)); }
	inline int64_t get_timestamp_5() const { return ___timestamp_5; }
	inline int64_t* get_address_of_timestamp_5() { return &___timestamp_5; }
	inline void set_timestamp_5(int64_t value)
	{
		___timestamp_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
