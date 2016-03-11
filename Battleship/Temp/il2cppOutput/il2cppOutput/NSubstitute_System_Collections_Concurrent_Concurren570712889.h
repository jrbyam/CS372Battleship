#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Concurrent.ConcurrentQueue`1/Node<System.Object>
struct Node_t3191766859;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Concurrent.ConcurrentQueue`1<System.Object>
struct  ConcurrentQueue_1_t570712889  : public Il2CppObject
{
public:
	// System.Collections.Concurrent.ConcurrentQueue`1/Node<T> System.Collections.Concurrent.ConcurrentQueue`1::head
	Node_t3191766859 * ___head_0;
	// System.Collections.Concurrent.ConcurrentQueue`1/Node<T> System.Collections.Concurrent.ConcurrentQueue`1::tail
	Node_t3191766859 * ___tail_1;
	// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1::count
	int32_t ___count_2;
	// System.Object System.Collections.Concurrent.ConcurrentQueue`1::syncRoot
	Il2CppObject * ___syncRoot_3;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_t570712889, ___head_0)); }
	inline Node_t3191766859 * get_head_0() const { return ___head_0; }
	inline Node_t3191766859 ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(Node_t3191766859 * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier(&___head_0, value);
	}

	inline static int32_t get_offset_of_tail_1() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_t570712889, ___tail_1)); }
	inline Node_t3191766859 * get_tail_1() const { return ___tail_1; }
	inline Node_t3191766859 ** get_address_of_tail_1() { return &___tail_1; }
	inline void set_tail_1(Node_t3191766859 * value)
	{
		___tail_1 = value;
		Il2CppCodeGenWriteBarrier(&___tail_1, value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_t570712889, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_syncRoot_3() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_t570712889, ___syncRoot_3)); }
	inline Il2CppObject * get_syncRoot_3() const { return ___syncRoot_3; }
	inline Il2CppObject ** get_address_of_syncRoot_3() { return &___syncRoot_3; }
	inline void set_syncRoot_3(Il2CppObject * value)
	{
		___syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier(&___syncRoot_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
