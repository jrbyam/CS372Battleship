#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t3271763293;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Core.EventHandlerRegistry
struct  EventHandlerRegistry_t132805172  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Object>> NSubstitute.Core.EventHandlerRegistry::_handlersForEvent
	Dictionary_2_t3271763293 * ____handlersForEvent_0;

public:
	inline static int32_t get_offset_of__handlersForEvent_0() { return static_cast<int32_t>(offsetof(EventHandlerRegistry_t132805172, ____handlersForEvent_0)); }
	inline Dictionary_2_t3271763293 * get__handlersForEvent_0() const { return ____handlersForEvent_0; }
	inline Dictionary_2_t3271763293 ** get_address_of__handlersForEvent_0() { return &____handlersForEvent_0; }
	inline void set__handlersForEvent_0(Dictionary_2_t3271763293 * value)
	{
		____handlersForEvent_0 = value;
		Il2CppCodeGenWriteBarrier(&____handlersForEvent_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
