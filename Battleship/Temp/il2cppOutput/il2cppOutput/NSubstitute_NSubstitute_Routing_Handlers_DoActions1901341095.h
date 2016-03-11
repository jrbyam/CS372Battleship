#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NSubstitute.Core.ICallActions
struct ICallActions_t741748509;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Routing.Handlers.DoActionsCallHandler
struct  DoActionsCallHandler_t1901341095  : public Il2CppObject
{
public:
	// NSubstitute.Core.ICallActions NSubstitute.Routing.Handlers.DoActionsCallHandler::_callActions
	Il2CppObject * ____callActions_0;

public:
	inline static int32_t get_offset_of__callActions_0() { return static_cast<int32_t>(offsetof(DoActionsCallHandler_t1901341095, ____callActions_0)); }
	inline Il2CppObject * get__callActions_0() const { return ____callActions_0; }
	inline Il2CppObject ** get_address_of__callActions_0() { return &____callActions_0; }
	inline void set__callActions_0(Il2CppObject * value)
	{
		____callActions_0 = value;
		Il2CppCodeGenWriteBarrier(&____callActions_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
