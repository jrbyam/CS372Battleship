#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NSubstitute.Core.ICall
struct ICall_t4180500654;
// System.Collections.Concurrent.ConcurrentStack`1/Node<NSubstitute.Core.ICall>
struct Node_t2240193797;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Concurrent.ConcurrentStack`1/Node<NSubstitute.Core.ICall>
struct  Node_t2240193797  : public Il2CppObject
{
public:
	// T System.Collections.Concurrent.ConcurrentStack`1/Node::Value
	Il2CppObject * ___Value_0;
	// System.Collections.Concurrent.ConcurrentStack`1/Node<T> System.Collections.Concurrent.ConcurrentStack`1/Node::Next
	Node_t2240193797 * ___Next_1;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Node_t2240193797, ___Value_0)); }
	inline Il2CppObject * get_Value_0() const { return ___Value_0; }
	inline Il2CppObject ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(Il2CppObject * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier(&___Value_0, value);
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Node_t2240193797, ___Next_1)); }
	inline Node_t2240193797 * get_Next_1() const { return ___Next_1; }
	inline Node_t2240193797 ** get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(Node_t2240193797 * value)
	{
		___Next_1 = value;
		Il2CppCodeGenWriteBarrier(&___Next_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
