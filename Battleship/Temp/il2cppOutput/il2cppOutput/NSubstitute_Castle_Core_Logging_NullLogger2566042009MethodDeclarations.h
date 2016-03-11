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

// Castle.Core.Logging.NullLogger
struct NullLogger_t2566042009;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t11523773;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Boolean Castle.Core.Logging.NullLogger::get_IsWarnEnabled()
extern "C"  bool NullLogger_get_IsWarnEnabled_m4228042100 (NullLogger_t2566042009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.Core.Logging.NullLogger::DebugFormat(System.String,System.Object[])
extern "C"  void NullLogger_DebugFormat_m109612944 (NullLogger_t2566042009 * __this, String_t* ___format, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.Core.Logging.NullLogger::WarnFormat(System.String,System.Object[])
extern "C"  void NullLogger_WarnFormat_m3745995715 (NullLogger_t2566042009 * __this, String_t* ___format, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.Core.Logging.NullLogger::.ctor()
extern "C"  void NullLogger__ctor_m2279968278 (NullLogger_t2566042009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.Core.Logging.NullLogger::.cctor()
extern "C"  void NullLogger__cctor_m1477443671 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
