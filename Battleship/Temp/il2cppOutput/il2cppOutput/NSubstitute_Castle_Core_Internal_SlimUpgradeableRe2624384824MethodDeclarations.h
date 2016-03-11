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

// Castle.Core.Internal.SlimUpgradeableReadLockHolder
struct SlimUpgradeableReadLockHolder_t2624384824;
// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t2580547393;
// Castle.Core.Internal.ILockHolder
struct ILockHolder_t4250695154;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Threading_ReaderWriterLockSlim2580547393.h"

// System.Void Castle.Core.Internal.SlimUpgradeableReadLockHolder::.ctor(System.Threading.ReaderWriterLockSlim,System.Boolean,System.Boolean)
extern "C"  void SlimUpgradeableReadLockHolder__ctor_m4241139320 (SlimUpgradeableReadLockHolder_t2624384824 * __this, ReaderWriterLockSlim_t2580547393 * ___locker, bool ___waitForLock, bool ___wasLockAlreadyHelf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.Core.Internal.SlimUpgradeableReadLockHolder::Dispose()
extern "C"  void SlimUpgradeableReadLockHolder_Dispose_m3045806404 (SlimUpgradeableReadLockHolder_t2624384824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.Core.Internal.ILockHolder Castle.Core.Internal.SlimUpgradeableReadLockHolder::Upgrade()
extern "C"  Il2CppObject * SlimUpgradeableReadLockHolder_Upgrade_m2816074104 (SlimUpgradeableReadLockHolder_t2624384824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.Core.Internal.ILockHolder Castle.Core.Internal.SlimUpgradeableReadLockHolder::Upgrade(System.Boolean)
extern "C"  Il2CppObject * SlimUpgradeableReadLockHolder_Upgrade_m1908188399 (SlimUpgradeableReadLockHolder_t2624384824 * __this, bool ___waitForLock, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.Core.Internal.SlimUpgradeableReadLockHolder::get_LockAcquired()
extern "C"  bool SlimUpgradeableReadLockHolder_get_LockAcquired_m3760549735 (SlimUpgradeableReadLockHolder_t2624384824 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
