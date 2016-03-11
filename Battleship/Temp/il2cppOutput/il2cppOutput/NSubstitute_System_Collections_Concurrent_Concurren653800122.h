#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Object>
struct ConcurrentQueue_1_t570712889;
// System.Collections.Concurrent.ConcurrentQueue`1/Node<System.Object>
struct Node_t3191766859;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Concurrent.ConcurrentQueue`1/<InternalGetEnumerator>d__0<System.Object>
struct  U3CInternalGetEnumeratorU3Ed__0_t653800122  : public Il2CppObject
{
public:
	// T System.Collections.Concurrent.ConcurrentQueue`1/<InternalGetEnumerator>d__0::<>2__current
	Il2CppObject * ___U3CU3E2__current_0;
	// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1/<InternalGetEnumerator>d__0::<>1__state
	int32_t ___U3CU3E1__state_1;
	// System.Collections.Concurrent.ConcurrentQueue`1<T> System.Collections.Concurrent.ConcurrentQueue`1/<InternalGetEnumerator>d__0::<>4__this
	ConcurrentQueue_1_t570712889 * ___U3CU3E4__this_2;
	// System.Collections.Concurrent.ConcurrentQueue`1/Node<T> System.Collections.Concurrent.ConcurrentQueue`1/<InternalGetEnumerator>d__0::<my_head>5__1
	Node_t3191766859 * ___U3Cmy_headU3E5__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E2__current_0() { return static_cast<int32_t>(offsetof(U3CInternalGetEnumeratorU3Ed__0_t653800122, ___U3CU3E2__current_0)); }
	inline Il2CppObject * get_U3CU3E2__current_0() const { return ___U3CU3E2__current_0; }
	inline Il2CppObject ** get_address_of_U3CU3E2__current_0() { return &___U3CU3E2__current_0; }
	inline void set_U3CU3E2__current_0(Il2CppObject * value)
	{
		___U3CU3E2__current_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3E2__current_0, value);
	}

	inline static int32_t get_offset_of_U3CU3E1__state_1() { return static_cast<int32_t>(offsetof(U3CInternalGetEnumeratorU3Ed__0_t653800122, ___U3CU3E1__state_1)); }
	inline int32_t get_U3CU3E1__state_1() const { return ___U3CU3E1__state_1; }
	inline int32_t* get_address_of_U3CU3E1__state_1() { return &___U3CU3E1__state_1; }
	inline void set_U3CU3E1__state_1(int32_t value)
	{
		___U3CU3E1__state_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CInternalGetEnumeratorU3Ed__0_t653800122, ___U3CU3E4__this_2)); }
	inline ConcurrentQueue_1_t570712889 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ConcurrentQueue_1_t570712889 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ConcurrentQueue_1_t570712889 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3E4__this_2, value);
	}

	inline static int32_t get_offset_of_U3Cmy_headU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CInternalGetEnumeratorU3Ed__0_t653800122, ___U3Cmy_headU3E5__1_3)); }
	inline Node_t3191766859 * get_U3Cmy_headU3E5__1_3() const { return ___U3Cmy_headU3E5__1_3; }
	inline Node_t3191766859 ** get_address_of_U3Cmy_headU3E5__1_3() { return &___U3Cmy_headU3E5__1_3; }
	inline void set_U3Cmy_headU3E5__1_3(Node_t3191766859 * value)
	{
		___U3Cmy_headU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3Cmy_headU3E5__1_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
