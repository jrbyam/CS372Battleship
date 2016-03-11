#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Core.SequenceNumberGenerator
struct  SequenceNumberGenerator_t2013183440  : public Il2CppObject
{
public:
	// System.Int64 NSubstitute.Core.SequenceNumberGenerator::current
	int64_t ___current_0;

public:
	inline static int32_t get_offset_of_current_0() { return static_cast<int32_t>(offsetof(SequenceNumberGenerator_t2013183440, ___current_0)); }
	inline int64_t get_current_0() const { return ___current_0; }
	inline int64_t* get_address_of_current_0() { return &___current_0; }
	inline void set_current_0(int64_t value)
	{
		___current_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
