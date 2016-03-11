#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Diagnostics.SourceSwitch
struct SourceSwitch_t348536462;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t4109843382;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceSource
struct  TraceSource_t742114527  : public Il2CppObject
{
public:
	// System.Diagnostics.SourceSwitch System.Diagnostics.TraceSource::source_switch
	SourceSwitch_t348536462 * ___source_switch_0;
	// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceSource::listeners
	TraceListenerCollection_t4109843382 * ___listeners_1;

public:
	inline static int32_t get_offset_of_source_switch_0() { return static_cast<int32_t>(offsetof(TraceSource_t742114527, ___source_switch_0)); }
	inline SourceSwitch_t348536462 * get_source_switch_0() const { return ___source_switch_0; }
	inline SourceSwitch_t348536462 ** get_address_of_source_switch_0() { return &___source_switch_0; }
	inline void set_source_switch_0(SourceSwitch_t348536462 * value)
	{
		___source_switch_0 = value;
		Il2CppCodeGenWriteBarrier(&___source_switch_0, value);
	}

	inline static int32_t get_offset_of_listeners_1() { return static_cast<int32_t>(offsetof(TraceSource_t742114527, ___listeners_1)); }
	inline TraceListenerCollection_t4109843382 * get_listeners_1() const { return ___listeners_1; }
	inline TraceListenerCollection_t4109843382 ** get_address_of_listeners_1() { return &___listeners_1; }
	inline void set_listeners_1(TraceListenerCollection_t4109843382 * value)
	{
		___listeners_1 = value;
		Il2CppCodeGenWriteBarrier(&___listeners_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
