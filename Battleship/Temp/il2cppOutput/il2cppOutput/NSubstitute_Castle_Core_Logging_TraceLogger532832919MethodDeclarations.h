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

// Castle.Core.Logging.TraceLogger
struct TraceLogger_t532832919;
// System.String
struct String_t;
// System.Exception
struct Exception_t1967233988;
// System.Diagnostics.TraceSource
struct TraceSource_t742114527;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "NSubstitute_Castle_Core_Logging_LoggerLevel4090103606.h"
#include "mscorlib_System_Exception1967233988.h"
#include "System_System_Diagnostics_TraceSource742114527.h"
#include "System_System_Diagnostics_SourceLevels131882185.h"
#include "System_System_Diagnostics_TraceEventType1742393486.h"

// System.Void Castle.Core.Logging.TraceLogger::.ctor(System.String,Castle.Core.Logging.LoggerLevel)
extern "C"  void TraceLogger__ctor_m2591135678 (TraceLogger_t532832919 * __this, String_t* ___name, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.Core.Logging.TraceLogger::Log(Castle.Core.Logging.LoggerLevel,System.String,System.String,System.Exception)
extern "C"  void TraceLogger_Log_m1674835358 (TraceLogger_t532832919 * __this, int32_t ___loggerLevel, String_t* ___loggerName, String_t* ___message, Exception_t1967233988 * ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.Core.Logging.TraceLogger::Initialize()
extern "C"  void TraceLogger_Initialize_m2642702480 (TraceLogger_t532832919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Castle.Core.Logging.TraceLogger::ShortenName(System.String)
extern "C"  String_t* TraceLogger_ShortenName_m3372980877 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.Core.Logging.TraceLogger::IsSourceConfigured(System.Diagnostics.TraceSource)
extern "C"  bool TraceLogger_IsSourceConfigured_m1540765596 (Il2CppObject * __this /* static, unused */, TraceSource_t742114527 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.Core.Logging.LoggerLevel Castle.Core.Logging.TraceLogger::MapLoggerLevel(System.Diagnostics.SourceLevels)
extern "C"  int32_t TraceLogger_MapLoggerLevel_m1478278070 (Il2CppObject * __this /* static, unused */, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.SourceLevels Castle.Core.Logging.TraceLogger::MapSourceLevels(Castle.Core.Logging.LoggerLevel)
extern "C"  int32_t TraceLogger_MapSourceLevels_m4267358006 (Il2CppObject * __this /* static, unused */, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceEventType Castle.Core.Logging.TraceLogger::MapTraceEventType(Castle.Core.Logging.LoggerLevel)
extern "C"  int32_t TraceLogger_MapTraceEventType_m1535722646 (Il2CppObject * __this /* static, unused */, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.Core.Logging.TraceLogger::.cctor()
extern "C"  void TraceLogger__cctor_m3079685033 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
