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

// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t2580547393;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t1233883898;
// System.Threading.ReaderWriterLockSlim/LockDetails
struct LockDetails_t2707641975;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Threading_LockRecursionPolicy1727596364.h"
#include "mscorlib_System_Threading_EventWaitHandle1233883898.h"

// System.Void System.Threading.ReaderWriterLockSlim::.ctor(System.Threading.LockRecursionPolicy)
extern "C"  void ReaderWriterLockSlim__ctor_m1922217140 (ReaderWriterLockSlim_t2580547393 * __this, int32_t ___recursionPolicy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::.cctor()
extern "C"  void ReaderWriterLockSlim__cctor_m3006496101 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterWriteLock()
extern "C"  void ReaderWriterLockSlim_EnterWriteLock_m1780555886 (ReaderWriterLockSlim_t2580547393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterWriteLock(System.Int32)
extern "C"  bool ReaderWriterLockSlim_TryEnterWriteLock_m256674392 (ReaderWriterLockSlim_t2580547393 * __this, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitWriteLock()
extern "C"  void ReaderWriterLockSlim_ExitWriteLock_m2195644050 (ReaderWriterLockSlim_t2580547393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterUpgradeableReadLock()
extern "C"  void ReaderWriterLockSlim_EnterUpgradeableReadLock_m4030220091 (ReaderWriterLockSlim_t2580547393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterUpgradeableReadLock(System.Int32)
extern "C"  bool ReaderWriterLockSlim_TryEnterUpgradeableReadLock_m2521701 (ReaderWriterLockSlim_t2580547393 * __this, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitUpgradeableReadLock()
extern "C"  void ReaderWriterLockSlim_ExitUpgradeableReadLock_m2911479903 (ReaderWriterLockSlim_t2580547393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::Dispose()
extern "C"  void ReaderWriterLockSlim_Dispose_m670462341 (ReaderWriterLockSlim_t2580547393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::get_IsWriteLockHeld()
extern "C"  bool ReaderWriterLockSlim_get_IsWriteLockHeld_m1916920134 (ReaderWriterLockSlim_t2580547393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::get_IsUpgradeableReadLockHeld()
extern "C"  bool ReaderWriterLockSlim_get_IsUpgradeableReadLockHeld_m3724632531 (ReaderWriterLockSlim_t2580547393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.ReaderWriterLockSlim::get_RecursiveUpgradeCount()
extern "C"  int32_t ReaderWriterLockSlim_get_RecursiveUpgradeCount_m355905744 (ReaderWriterLockSlim_t2580547393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.ReaderWriterLockSlim::get_RecursiveWriteCount()
extern "C"  int32_t ReaderWriterLockSlim_get_RecursiveWriteCount_m455958701 (ReaderWriterLockSlim_t2580547393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterMyLock()
extern "C"  void ReaderWriterLockSlim_EnterMyLock_m1546976981 (ReaderWriterLockSlim_t2580547393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterMyLockSpin()
extern "C"  void ReaderWriterLockSlim_EnterMyLockSpin_m1991889079 (ReaderWriterLockSlim_t2580547393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitMyLock()
extern "C"  void ReaderWriterLockSlim_ExitMyLock_m1376293681 (ReaderWriterLockSlim_t2580547393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitAndWakeUpAppropriateWaiters()
extern "C"  void ReaderWriterLockSlim_ExitAndWakeUpAppropriateWaiters_m3155071558 (ReaderWriterLockSlim_t2580547393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::LazyCreateEvent(System.Threading.EventWaitHandle&,System.Boolean)
extern "C"  void ReaderWriterLockSlim_LazyCreateEvent_m2128955967 (ReaderWriterLockSlim_t2580547393 * __this, EventWaitHandle_t1233883898 ** ___waitEvent, bool ___makeAutoResetEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::WaitOnEvent(System.Threading.EventWaitHandle,System.UInt32&,System.Int32)
extern "C"  bool ReaderWriterLockSlim_WaitOnEvent_m2000219325 (ReaderWriterLockSlim_t2580547393 * __this, EventWaitHandle_t1233883898 * ___waitEvent, uint32_t* ___numWaiters, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ReaderWriterLockSlim/LockDetails System.Threading.ReaderWriterLockSlim::GetReadLockDetails(System.Int32,System.Boolean)
extern "C"  LockDetails_t2707641975 * ReaderWriterLockSlim_GetReadLockDetails_m2359274365 (ReaderWriterLockSlim_t2580547393 * __this, int32_t ___threadId, bool ___create, const MethodInfo* method) IL2CPP_METHOD_ATTR;
