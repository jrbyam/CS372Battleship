#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NSubstitute.Core.ICallResults
struct ICallResults_t3001098774;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Routing.Handlers.ReturnConfiguredResultHandler
struct  ReturnConfiguredResultHandler_t2028754732  : public Il2CppObject
{
public:
	// NSubstitute.Core.ICallResults NSubstitute.Routing.Handlers.ReturnConfiguredResultHandler::_callResults
	Il2CppObject * ____callResults_0;

public:
	inline static int32_t get_offset_of__callResults_0() { return static_cast<int32_t>(offsetof(ReturnConfiguredResultHandler_t2028754732, ____callResults_0)); }
	inline Il2CppObject * get__callResults_0() const { return ____callResults_0; }
	inline Il2CppObject ** get_address_of__callResults_0() { return &____callResults_0; }
	inline void set__callResults_0(Il2CppObject * value)
	{
		____callResults_0 = value;
		Il2CppCodeGenWriteBarrier(&____callResults_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
