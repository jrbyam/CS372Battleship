#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NSubstitute.Core.IDefaultForType
struct IDefaultForType_t2817081650;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Core.Arguments.DefaultChecker
struct  DefaultChecker_t521292563  : public Il2CppObject
{
public:
	// NSubstitute.Core.IDefaultForType NSubstitute.Core.Arguments.DefaultChecker::_defaultForType
	Il2CppObject * ____defaultForType_0;

public:
	inline static int32_t get_offset_of__defaultForType_0() { return static_cast<int32_t>(offsetof(DefaultChecker_t521292563, ____defaultForType_0)); }
	inline Il2CppObject * get__defaultForType_0() const { return ____defaultForType_0; }
	inline Il2CppObject ** get_address_of__defaultForType_0() { return &____defaultForType_0; }
	inline void set__defaultForType_0(Il2CppObject * value)
	{
		____defaultForType_0 = value;
		Il2CppCodeGenWriteBarrier(&____defaultForType_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
