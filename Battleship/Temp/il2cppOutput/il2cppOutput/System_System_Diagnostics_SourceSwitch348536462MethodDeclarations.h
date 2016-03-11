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

// System.Diagnostics.SourceSwitch
struct SourceSwitch_t348536462;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Diagnostics_SourceLevels131882185.h"
#include "System_System_Diagnostics_TraceEventType1742393486.h"

// System.Void System.Diagnostics.SourceSwitch::.ctor(System.String)
extern "C"  void SourceSwitch__ctor_m2374307624 (SourceSwitch_t348536462 * __this, String_t* ___displayName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.SourceSwitch::.ctor(System.String,System.String)
extern "C"  void SourceSwitch__ctor_m4139815268 (SourceSwitch_t348536462 * __this, String_t* ___displayName, String_t* ___defaultSwitchValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.SourceLevels System.Diagnostics.SourceSwitch::get_Level()
extern "C"  int32_t SourceSwitch_get_Level_m2811111643 (SourceSwitch_t348536462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.SourceSwitch::set_Level(System.Diagnostics.SourceLevels)
extern "C"  void SourceSwitch_set_Level_m874579496 (SourceSwitch_t348536462 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.SourceSwitch::ShouldTrace(System.Diagnostics.TraceEventType)
extern "C"  bool SourceSwitch_ShouldTrace_m1234367842 (SourceSwitch_t348536462 * __this, int32_t ___eventType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.SourceSwitch::OnValueChanged()
extern "C"  void SourceSwitch_OnValueChanged_m1041675180 (SourceSwitch_t348536462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
