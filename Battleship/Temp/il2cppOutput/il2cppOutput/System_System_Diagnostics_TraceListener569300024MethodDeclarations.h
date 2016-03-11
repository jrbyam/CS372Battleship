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

// System.Diagnostics.TraceListener
struct TraceListener_t569300024;
// System.String
struct String_t;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Diagnostics.TraceEventCache
struct TraceEventCache_t2481975116;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Diagnostics.TraceFilter
struct TraceFilter_t364128316;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Diagnostics_TraceEventCache2481975116.h"
#include "System_System_Diagnostics_TraceEventType1742393486.h"
#include "mscorlib_System_Object837106420.h"
#include "System_System_Diagnostics_TraceOptions2326927608.h"

// System.Void System.Diagnostics.TraceListener::.ctor(System.String)
extern "C"  void TraceListener__ctor_m1786092830 (TraceListener_t569300024 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListener::get_IndentLevel()
extern "C"  int32_t TraceListener_get_IndentLevel_m3894063393 (TraceListener_t569300024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::set_IndentLevel(System.Int32)
extern "C"  void TraceListener_set_IndentLevel_m1540755758 (TraceListener_t569300024 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListener::get_IndentSize()
extern "C"  int32_t TraceListener_get_IndentSize_m1576756134 (TraceListener_t569300024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::set_IndentSize(System.Int32)
extern "C"  void TraceListener_set_IndentSize_m4263380027 (TraceListener_t569300024 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.TraceListener::get_Name()
extern "C"  String_t* TraceListener_get_Name_m3769692055 (TraceListener_t569300024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::set_Name(System.String)
extern "C"  void TraceListener_set_Name_m3862755546 (TraceListener_t569300024 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceListener::get_NeedIndent()
extern "C"  bool TraceListener_get_NeedIndent_m1158458209 (TraceListener_t569300024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::set_NeedIndent(System.Boolean)
extern "C"  void TraceListener_set_NeedIndent_m1304704502 (TraceListener_t569300024 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::Dispose()
extern "C"  void TraceListener_Dispose_m2599266209 (TraceListener_t569300024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::Dispose(System.Boolean)
extern "C"  void TraceListener_Dispose_m534900568 (TraceListener_t569300024 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::Fail(System.String)
extern "C"  void TraceListener_Fail_m2941237188 (TraceListener_t569300024 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::Fail(System.String,System.String)
extern "C"  void TraceListener_Fail_m4000971008 (TraceListener_t569300024 * __this, String_t* ___message, String_t* ___detailMessage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::WriteIndent()
extern "C"  void TraceListener_WriteIndent_m2910061 (TraceListener_t569300024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.TraceListener::FormatArray(System.Collections.ICollection,System.String)
extern "C"  String_t* TraceListener_FormatArray_m62648974 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___list, String_t* ___joiner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::TraceData(System.Diagnostics.TraceEventCache,System.String,System.Diagnostics.TraceEventType,System.Int32,System.Object)
extern "C"  void TraceListener_TraceData_m1709117128 (TraceListener_t569300024 * __this, TraceEventCache_t2481975116 * ___eventCache, String_t* ___source, int32_t ___eventType, int32_t ___id, Il2CppObject * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::TraceData(System.Diagnostics.TraceEventCache,System.String,System.Diagnostics.TraceEventType,System.Int32,System.Object[])
extern "C"  void TraceListener_TraceData_m1784103910 (TraceListener_t569300024 * __this, TraceEventCache_t2481975116 * ___eventCache, String_t* ___source, int32_t ___eventType, int32_t ___id, ObjectU5BU5D_t11523773* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListener::TraceEvent(System.Diagnostics.TraceEventCache,System.String,System.Diagnostics.TraceEventType,System.Int32,System.String)
extern "C"  void TraceListener_TraceEvent_m1030604370 (TraceListener_t569300024 * __this, TraceEventCache_t2481975116 * ___eventCache, String_t* ___source, int32_t ___eventType, int32_t ___id, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceFilter System.Diagnostics.TraceListener::get_Filter()
extern "C"  TraceFilter_t364128316 * TraceListener_get_Filter_m448731524 (TraceListener_t569300024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceOptions System.Diagnostics.TraceListener::get_TraceOutputOptions()
extern "C"  int32_t TraceListener_get_TraceOutputOptions_m2296586746 (TraceListener_t569300024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
