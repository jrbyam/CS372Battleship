#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NSubstitute.Core.ICallInfoFactory
struct ICallInfoFactory_t3961505308;
// System.Collections.Concurrent.ConcurrentQueue`1<NSubstitute.Core.CallResults/ResultForCallSpec>
struct ConcurrentQueue_1_t456303338;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Core.CallResults
struct  CallResults_t2167994879  : public Il2CppObject
{
public:
	// NSubstitute.Core.ICallInfoFactory NSubstitute.Core.CallResults::_callInfoFactory
	Il2CppObject * ____callInfoFactory_0;
	// System.Collections.Concurrent.ConcurrentQueue`1<NSubstitute.Core.CallResults/ResultForCallSpec> NSubstitute.Core.CallResults::_results
	ConcurrentQueue_1_t456303338 * ____results_1;

public:
	inline static int32_t get_offset_of__callInfoFactory_0() { return static_cast<int32_t>(offsetof(CallResults_t2167994879, ____callInfoFactory_0)); }
	inline Il2CppObject * get__callInfoFactory_0() const { return ____callInfoFactory_0; }
	inline Il2CppObject ** get_address_of__callInfoFactory_0() { return &____callInfoFactory_0; }
	inline void set__callInfoFactory_0(Il2CppObject * value)
	{
		____callInfoFactory_0 = value;
		Il2CppCodeGenWriteBarrier(&____callInfoFactory_0, value);
	}

	inline static int32_t get_offset_of__results_1() { return static_cast<int32_t>(offsetof(CallResults_t2167994879, ____results_1)); }
	inline ConcurrentQueue_1_t456303338 * get__results_1() const { return ____results_1; }
	inline ConcurrentQueue_1_t456303338 ** get_address_of__results_1() { return &____results_1; }
	inline void set__results_1(ConcurrentQueue_1_t456303338 * value)
	{
		____results_1 = value;
		Il2CppCodeGenWriteBarrier(&____results_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
