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

// System.Security.Permissions.IsolatedStorageFilePermission
struct IsolatedStorageFilePermission_t2479005444;
// System.Security.IPermission
struct IPermission_t2562055037;
// System.Security.SecurityElement
struct SecurityElement_t2475331585;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta3569926873.h"

// System.Void System.Security.Permissions.IsolatedStorageFilePermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void IsolatedStorageFilePermission__ctor_m3990648777 (IsolatedStorageFilePermission_t2479005444 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.IsolatedStorageFilePermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool IsolatedStorageFilePermission_IsSubsetOf_m3644678308 (IsolatedStorageFilePermission_t2479005444 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.IsolatedStorageFilePermission::ToXml()
extern "C"  SecurityElement_t2475331585 * IsolatedStorageFilePermission_ToXml_m138485760 (IsolatedStorageFilePermission_t2479005444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.IsolatedStorageFilePermission System.Security.Permissions.IsolatedStorageFilePermission::Cast(System.Security.IPermission)
extern "C"  IsolatedStorageFilePermission_t2479005444 * IsolatedStorageFilePermission_Cast_m1171738277 (IsolatedStorageFilePermission_t2479005444 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
