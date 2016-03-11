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

// Castle.Core.Logging.LevelFilteredLogger
struct LevelFilteredLogger_t1323759245;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "NSubstitute_Castle_Core_Logging_LoggerLevel4090103606.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void Castle.Core.Logging.LevelFilteredLogger::.ctor()
extern "C"  void LevelFilteredLogger__ctor_m2678735694 (LevelFilteredLogger_t1323759245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.Core.Logging.LevelFilteredLogger::.ctor(Castle.Core.Logging.LoggerLevel)
extern "C"  void LevelFilteredLogger__ctor_m3437655800 (LevelFilteredLogger_t1323759245 * __this, int32_t ___loggerLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.Core.Logging.LevelFilteredLogger::.ctor(System.String,Castle.Core.Logging.LoggerLevel)
extern "C"  void LevelFilteredLogger__ctor_m2962222388 (LevelFilteredLogger_t1323759245 * __this, String_t* ___loggerName, int32_t ___loggerLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Castle.Core.Logging.LevelFilteredLogger::InitializeLifetimeService()
extern "C"  Il2CppObject * LevelFilteredLogger_InitializeLifetimeService_m929390493 (LevelFilteredLogger_t1323759245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.Core.Logging.LoggerLevel Castle.Core.Logging.LevelFilteredLogger::get_Level()
extern "C"  int32_t LevelFilteredLogger_get_Level_m938246062 (LevelFilteredLogger_t1323759245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.Core.Logging.LevelFilteredLogger::set_Level(Castle.Core.Logging.LoggerLevel)
extern "C"  void LevelFilteredLogger_set_Level_m3138386707 (LevelFilteredLogger_t1323759245 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Castle.Core.Logging.LevelFilteredLogger::get_Name()
extern "C"  String_t* LevelFilteredLogger_get_Name_m347407623 (LevelFilteredLogger_t1323759245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.Core.Logging.LevelFilteredLogger::DebugFormat(System.String,System.Object[])
extern "C"  void LevelFilteredLogger_DebugFormat_m3639873368 (LevelFilteredLogger_t1323759245 * __this, String_t* ___format, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.Core.Logging.LevelFilteredLogger::WarnFormat(System.String,System.Object[])
extern "C"  void LevelFilteredLogger_WarnFormat_m3305685755 (LevelFilteredLogger_t1323759245 * __this, String_t* ___format, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.Core.Logging.LevelFilteredLogger::get_IsDebugEnabled()
extern "C"  bool LevelFilteredLogger_get_IsDebugEnabled_m4230868111 (LevelFilteredLogger_t1323759245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.Core.Logging.LevelFilteredLogger::get_IsWarnEnabled()
extern "C"  bool LevelFilteredLogger_get_IsWarnEnabled_m932373116 (LevelFilteredLogger_t1323759245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.Core.Logging.LevelFilteredLogger::ChangeName(System.String)
extern "C"  void LevelFilteredLogger_ChangeName_m107427473 (LevelFilteredLogger_t1323759245 * __this, String_t* ___newName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.Core.Logging.LevelFilteredLogger::Log(Castle.Core.Logging.LoggerLevel,System.String,System.Exception)
extern "C"  void LevelFilteredLogger_Log_m2586541348 (LevelFilteredLogger_t1323759245 * __this, int32_t ___loggerLevel, String_t* ___message, Exception_t1967233988 * ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
