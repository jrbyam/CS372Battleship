#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<NSubstitute.Core.ICallSpecification>
struct List_1_t1988647260;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Core.CallBaseExclusions
struct  CallBaseExclusions_t2060161691  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<NSubstitute.Core.ICallSpecification> NSubstitute.Core.CallBaseExclusions::_excludedCallSpecs
	List_1_t1988647260 * ____excludedCallSpecs_0;

public:
	inline static int32_t get_offset_of__excludedCallSpecs_0() { return static_cast<int32_t>(offsetof(CallBaseExclusions_t2060161691, ____excludedCallSpecs_0)); }
	inline List_1_t1988647260 * get__excludedCallSpecs_0() const { return ____excludedCallSpecs_0; }
	inline List_1_t1988647260 ** get_address_of__excludedCallSpecs_0() { return &____excludedCallSpecs_0; }
	inline void set__excludedCallSpecs_0(List_1_t1988647260 * value)
	{
		____excludedCallSpecs_0 = value;
		Il2CppCodeGenWriteBarrier(&____excludedCallSpecs_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
