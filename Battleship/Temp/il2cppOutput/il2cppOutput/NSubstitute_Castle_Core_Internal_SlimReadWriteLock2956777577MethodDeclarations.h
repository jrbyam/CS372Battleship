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

// Castle.Core.Internal.SlimReadWriteLock
struct SlimReadWriteLock_t2956777577;
// Castle.Core.Internal.IUpgradeableLockHolder
struct IUpgradeableLockHolder_t3014257174;

#include "codegen/il2cpp-codegen.h"

// Castle.Core.Internal.IUpgradeableLockHolder Castle.Core.Internal.SlimReadWriteLock::ForReadingUpgradeable()
extern "C"  Il2CppObject * SlimReadWriteLock_ForReadingUpgradeable_m2585972528 (SlimReadWriteLock_t2956777577 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.Core.Internal.IUpgradeableLockHolder Castle.Core.Internal.SlimReadWriteLock::ForReadingUpgradeable(System.Boolean)
extern "C"  Il2CppObject * SlimReadWriteLock_ForReadingUpgradeable_m2098671783 (SlimReadWriteLock_t2956777577 * __this, bool ___waitForLock, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.Core.Internal.SlimReadWriteLock::.ctor()
extern "C"  void SlimReadWriteLock__ctor_m1306265526 (SlimReadWriteLock_t2956777577 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
