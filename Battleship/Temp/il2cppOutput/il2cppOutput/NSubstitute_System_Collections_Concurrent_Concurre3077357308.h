#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NSubstitute.Core.CallResults/ResultForCallSpec
struct ResultForCallSpec_t722696869;
// System.Collections.Concurrent.ConcurrentQueue`1/Node<NSubstitute.Core.CallResults/ResultForCallSpec>
struct Node_t3077357308;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Concurrent.ConcurrentQueue`1/Node<NSubstitute.Core.CallResults/ResultForCallSpec>
struct  Node_t3077357308  : public Il2CppObject
{
public:
	// T System.Collections.Concurrent.ConcurrentQueue`1/Node::Value
	ResultForCallSpec_t722696869 * ___Value_0;
	// System.Collections.Concurrent.ConcurrentQueue`1/Node<T> System.Collections.Concurrent.ConcurrentQueue`1/Node::Next
	Node_t3077357308 * ___Next_1;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Node_t3077357308, ___Value_0)); }
	inline ResultForCallSpec_t722696869 * get_Value_0() const { return ___Value_0; }
	inline ResultForCallSpec_t722696869 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ResultForCallSpec_t722696869 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier(&___Value_0, value);
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Node_t3077357308, ___Next_1)); }
	inline Node_t3077357308 * get_Next_1() const { return ___Next_1; }
	inline Node_t3077357308 ** get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(Node_t3077357308 * value)
	{
		___Next_1 = value;
		Il2CppCodeGenWriteBarrier(&___Next_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
