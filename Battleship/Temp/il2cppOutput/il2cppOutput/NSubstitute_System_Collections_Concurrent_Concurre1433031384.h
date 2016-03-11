#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Concurrent.ConcurrentStack`1/Node<System.Object>
struct Node_t3191766860;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Concurrent.ConcurrentStack`1<System.Object>
struct  ConcurrentStack_1_t1433031384  : public Il2CppObject
{
public:
	// System.Collections.Concurrent.ConcurrentStack`1/Node<T> System.Collections.Concurrent.ConcurrentStack`1::head
	Node_t3191766860 * ___head_0;
	// System.Int32 System.Collections.Concurrent.ConcurrentStack`1::count
	int32_t ___count_1;
	// System.Object System.Collections.Concurrent.ConcurrentStack`1::syncRoot
	Il2CppObject * ___syncRoot_2;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(ConcurrentStack_1_t1433031384, ___head_0)); }
	inline Node_t3191766860 * get_head_0() const { return ___head_0; }
	inline Node_t3191766860 ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(Node_t3191766860 * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier(&___head_0, value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(ConcurrentStack_1_t1433031384, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of_syncRoot_2() { return static_cast<int32_t>(offsetof(ConcurrentStack_1_t1433031384, ___syncRoot_2)); }
	inline Il2CppObject * get_syncRoot_2() const { return ___syncRoot_2; }
	inline Il2CppObject ** get_address_of_syncRoot_2() { return &___syncRoot_2; }
	inline void set_syncRoot_2(Il2CppObject * value)
	{
		___syncRoot_2 = value;
		Il2CppCodeGenWriteBarrier(&___syncRoot_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
