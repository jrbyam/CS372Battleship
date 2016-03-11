#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NSubstitute.Core.IEventHandlerRegistry
struct IEventHandlerRegistry_t2676519933;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Routing.Handlers.EventSubscriptionHandler
struct  EventSubscriptionHandler_t832984672  : public Il2CppObject
{
public:
	// NSubstitute.Core.IEventHandlerRegistry NSubstitute.Routing.Handlers.EventSubscriptionHandler::_eventHandlerRegistry
	Il2CppObject * ____eventHandlerRegistry_0;

public:
	inline static int32_t get_offset_of__eventHandlerRegistry_0() { return static_cast<int32_t>(offsetof(EventSubscriptionHandler_t832984672, ____eventHandlerRegistry_0)); }
	inline Il2CppObject * get__eventHandlerRegistry_0() const { return ____eventHandlerRegistry_0; }
	inline Il2CppObject ** get_address_of__eventHandlerRegistry_0() { return &____eventHandlerRegistry_0; }
	inline void set__eventHandlerRegistry_0(Il2CppObject * value)
	{
		____eventHandlerRegistry_0 = value;
		Il2CppCodeGenWriteBarrier(&____eventHandlerRegistry_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
