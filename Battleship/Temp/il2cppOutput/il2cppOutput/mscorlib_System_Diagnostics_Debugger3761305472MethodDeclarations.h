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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Diagnostics.Debugger::.cctor()
extern "C"  void Debugger__cctor_m917011931 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Debugger::get_IsAttached()
extern "C"  bool Debugger_get_IsAttached_m3024608679 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Debugger::IsAttached_internal()
extern "C"  bool Debugger_IsAttached_internal_m223251680 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Debugger::IsLogging()
extern "C"  bool Debugger_IsLogging_m2580507719 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Debugger::Log(System.Int32,System.String,System.String)
extern "C"  void Debugger_Log_m2197638269 (Il2CppObject * __this /* static, unused */, int32_t ___level, String_t* ___category, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
