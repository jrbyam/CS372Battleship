#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NSubstitute.Core.ISubstituteFactory
struct ISubstituteFactory_t3278511150;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Routing.AutoValues.AutoSubstituteProvider
struct  AutoSubstituteProvider_t959379135  : public Il2CppObject
{
public:
	// NSubstitute.Core.ISubstituteFactory NSubstitute.Routing.AutoValues.AutoSubstituteProvider::_substituteFactory
	Il2CppObject * ____substituteFactory_0;

public:
	inline static int32_t get_offset_of__substituteFactory_0() { return static_cast<int32_t>(offsetof(AutoSubstituteProvider_t959379135, ____substituteFactory_0)); }
	inline Il2CppObject * get__substituteFactory_0() const { return ____substituteFactory_0; }
	inline Il2CppObject ** get_address_of__substituteFactory_0() { return &____substituteFactory_0; }
	inline void set__substituteFactory_0(Il2CppObject * value)
	{
		____substituteFactory_0 = value;
		Il2CppCodeGenWriteBarrier(&____substituteFactory_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
