#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IEnumerable`1<NSubstitute.Core.ICallHandler>
struct IEnumerable_1_t1173542494;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NSubstitute.Routing.Route
struct  Route_t3105792233  : public Il2CppObject
{
public:
	// System.Boolean NSubstitute.Routing.Route::_isRecordReplayRoute
	bool ____isRecordReplayRoute_0;
	// System.Collections.Generic.IEnumerable`1<NSubstitute.Core.ICallHandler> NSubstitute.Routing.Route::_handlers
	Il2CppObject* ____handlers_1;

public:
	inline static int32_t get_offset_of__isRecordReplayRoute_0() { return static_cast<int32_t>(offsetof(Route_t3105792233, ____isRecordReplayRoute_0)); }
	inline bool get__isRecordReplayRoute_0() const { return ____isRecordReplayRoute_0; }
	inline bool* get_address_of__isRecordReplayRoute_0() { return &____isRecordReplayRoute_0; }
	inline void set__isRecordReplayRoute_0(bool value)
	{
		____isRecordReplayRoute_0 = value;
	}

	inline static int32_t get_offset_of__handlers_1() { return static_cast<int32_t>(offsetof(Route_t3105792233, ____handlers_1)); }
	inline Il2CppObject* get__handlers_1() const { return ____handlers_1; }
	inline Il2CppObject** get_address_of__handlers_1() { return &____handlers_1; }
	inline void set__handlers_1(Il2CppObject* value)
	{
		____handlers_1 = value;
		Il2CppCodeGenWriteBarrier(&____handlers_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
