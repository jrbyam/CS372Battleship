#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.Diagnostics.TraceSource>
struct Dictionary_2_t2379812431;
// System.Diagnostics.TraceSource
struct TraceSource_t742114527;

#include "NSubstitute_Castle_Core_Logging_LevelFilteredLogge1323759245.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Castle.Core.Logging.TraceLogger
struct  TraceLogger_t532832919  : public LevelFilteredLogger_t1323759245
{
public:
	// System.Diagnostics.TraceSource Castle.Core.Logging.TraceLogger::traceSource
	TraceSource_t742114527 * ___traceSource_4;

public:
	inline static int32_t get_offset_of_traceSource_4() { return static_cast<int32_t>(offsetof(TraceLogger_t532832919, ___traceSource_4)); }
	inline TraceSource_t742114527 * get_traceSource_4() const { return ___traceSource_4; }
	inline TraceSource_t742114527 ** get_address_of_traceSource_4() { return &___traceSource_4; }
	inline void set_traceSource_4(TraceSource_t742114527 * value)
	{
		___traceSource_4 = value;
		Il2CppCodeGenWriteBarrier(&___traceSource_4, value);
	}
};

struct TraceLogger_t532832919_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Diagnostics.TraceSource> Castle.Core.Logging.TraceLogger::cache
	Dictionary_2_t2379812431 * ___cache_3;

public:
	inline static int32_t get_offset_of_cache_3() { return static_cast<int32_t>(offsetof(TraceLogger_t532832919_StaticFields, ___cache_3)); }
	inline Dictionary_2_t2379812431 * get_cache_3() const { return ___cache_3; }
	inline Dictionary_2_t2379812431 ** get_address_of_cache_3() { return &___cache_3; }
	inline void set_cache_3(Dictionary_2_t2379812431 * value)
	{
		___cache_3 = value;
		Il2CppCodeGenWriteBarrier(&___cache_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
