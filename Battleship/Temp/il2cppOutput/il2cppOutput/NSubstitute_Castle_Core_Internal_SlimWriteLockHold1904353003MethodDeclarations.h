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

// Castle.Core.Internal.SlimWriteLockHolder
struct SlimWriteLockHolder_t1904353003;
// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t2580547393;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Threading_ReaderWriterLockSlim2580547393.h"

// System.Void Castle.Core.Internal.SlimWriteLockHolder::.ctor(System.Threading.ReaderWriterLockSlim,System.Boolean)
extern "C"  void SlimWriteLockHolder__ctor_m178020370 (SlimWriteLockHolder_t1904353003 * __this, ReaderWriterLockSlim_t2580547393 * ___locker, bool ___waitForLock, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.Core.Internal.SlimWriteLockHolder::Dispose()
extern "C"  void SlimWriteLockHolder_Dispose_m1466511409 (SlimWriteLockHolder_t1904353003 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.Core.Internal.SlimWriteLockHolder::get_LockAcquired()
extern "C"  bool SlimWriteLockHolder_get_LockAcquired_m3110677786 (SlimWriteLockHolder_t1904353003 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
