#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Diagnostics.TraceEventCache
struct TraceEventCache_t2481975116;
// System.String
struct String_t;
// System.Collections.Stack
struct Stack_t1623036922;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime339033936.h"

// System.String System.Diagnostics.TraceEventCache::get_Callstack()
extern "C"  String_t* TraceEventCache_get_Callstack_m3035743020 (TraceEventCache_t2481975116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Diagnostics.TraceEventCache::get_DateTime()
extern "C"  DateTime_t339033936  TraceEventCache_get_DateTime_m1936024945 (TraceEventCache_t2481975116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Stack System.Diagnostics.TraceEventCache::get_LogicalOperationStack()
extern "C"  Stack_t1623036922 * TraceEventCache_get_LogicalOperationStack_m3729253088 (TraceEventCache_t2481975116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceEventCache::get_ProcessId()
extern "C"  int32_t TraceEventCache_get_ProcessId_m1032903999 (TraceEventCache_t2481975116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.TraceEventCache::get_ThreadId()
extern "C"  String_t* TraceEventCache_get_ThreadId_m841984677 (TraceEventCache_t2481975116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.TraceEventCache::get_Timestamp()
extern "C"  int64_t TraceEventCache_get_Timestamp_m4025418314 (TraceEventCache_t2481975116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
