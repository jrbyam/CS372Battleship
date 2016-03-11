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

// System.Diagnostics.TraceSource
struct TraceSource_t742114527;
// System.String
struct String_t;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t4109843382;
// System.Diagnostics.SourceSwitch
struct SourceSwitch_t348536462;
// System.Object[]
struct ObjectU5BU5D_t11523773;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Diagnostics_SourceLevels131882185.h"
#include "System_System_Diagnostics_SourceSwitch348536462.h"
#include "System_System_Diagnostics_TraceEventType1742393486.h"

// System.Void System.Diagnostics.TraceSource::.ctor(System.String,System.Diagnostics.SourceLevels)
extern "C"  void TraceSource__ctor_m2482623526 (TraceSource_t742114527 * __this, String_t* ___name, int32_t ___sourceLevels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceSource::get_Listeners()
extern "C"  TraceListenerCollection_t4109843382 * TraceSource_get_Listeners_m2029050504 (TraceSource_t742114527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.TraceSource::get_Name()
extern "C"  String_t* TraceSource_get_Name_m4109026302 (TraceSource_t742114527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.SourceSwitch System.Diagnostics.TraceSource::get_Switch()
extern "C"  SourceSwitch_t348536462 * TraceSource_get_Switch_m3097996519 (TraceSource_t742114527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSource::set_Switch(System.Diagnostics.SourceSwitch)
extern "C"  void TraceSource_set_Switch_m775901386 (TraceSource_t742114527 * __this, SourceSwitch_t348536462 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSource::TraceData(System.Diagnostics.TraceEventType,System.Int32,System.Object[])
extern "C"  void TraceSource_TraceData_m4095312843 (TraceSource_t742114527 * __this, int32_t ___eventType, int32_t ___id, ObjectU5BU5D_t11523773* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSource::TraceEvent(System.Diagnostics.TraceEventType,System.Int32,System.String)
extern "C"  void TraceSource_TraceEvent_m3526193005 (TraceSource_t742114527 * __this, int32_t ___eventType, int32_t ___id, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
