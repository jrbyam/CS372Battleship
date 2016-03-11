#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NSubstitute.Core.ISubstitutionContext
struct ISubstitutionContext_t3786902352;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Core.CallFactory
struct  CallFactory_t4273532691  : public Il2CppObject
{
public:
	// NSubstitute.Core.ISubstitutionContext NSubstitute.Core.CallFactory::_context
	Il2CppObject * ____context_0;

public:
	inline static int32_t get_offset_of__context_0() { return static_cast<int32_t>(offsetof(CallFactory_t4273532691, ____context_0)); }
	inline Il2CppObject * get__context_0() const { return ____context_0; }
	inline Il2CppObject ** get_address_of__context_0() { return &____context_0; }
	inline void set__context_0(Il2CppObject * value)
	{
		____context_0 = value;
		Il2CppCodeGenWriteBarrier(&____context_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
