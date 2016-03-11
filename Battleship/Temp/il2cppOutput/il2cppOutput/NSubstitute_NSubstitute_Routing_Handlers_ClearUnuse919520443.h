#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NSubstitute.Core.ISubstituteState
struct ISubstituteState_t1664596725;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Routing.Handlers.ClearUnusedCallSpecHandler
struct  ClearUnusedCallSpecHandler_t919520443  : public Il2CppObject
{
public:
	// NSubstitute.Core.ISubstituteState NSubstitute.Routing.Handlers.ClearUnusedCallSpecHandler::_state
	Il2CppObject * ____state_0;

public:
	inline static int32_t get_offset_of__state_0() { return static_cast<int32_t>(offsetof(ClearUnusedCallSpecHandler_t919520443, ____state_0)); }
	inline Il2CppObject * get__state_0() const { return ____state_0; }
	inline Il2CppObject ** get_address_of__state_0() { return &____state_0; }
	inline void set__state_0(Il2CppObject * value)
	{
		____state_0 = value;
		Il2CppCodeGenWriteBarrier(&____state_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
