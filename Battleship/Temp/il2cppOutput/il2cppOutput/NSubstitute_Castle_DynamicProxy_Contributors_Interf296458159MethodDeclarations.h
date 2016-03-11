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

// Castle.DynamicProxy.Contributors.InterfaceMembersOnClassCollector
struct InterfaceMembersOnClassCollector_t296458159;
// System.Type
struct Type_t;
// Castle.DynamicProxy.Generators.MetaMethod
struct MetaMethod_t2289943065;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Castle.DynamicProxy.IProxyGenerationHook
struct IProxyGenerationHook_t479444615;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_InterfaceMapping455787459.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"

// System.Void Castle.DynamicProxy.Contributors.InterfaceMembersOnClassCollector::.ctor(System.Type,System.Boolean,System.Reflection.InterfaceMapping)
extern "C"  void InterfaceMembersOnClassCollector__ctor_m1613021625 (InterfaceMembersOnClassCollector_t296458159 * __this, Type_t * ___type, bool ___onlyProxyVirtual, InterfaceMapping_t455787459  ___map, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.MetaMethod Castle.DynamicProxy.Contributors.InterfaceMembersOnClassCollector::GetMethodToGenerate(System.Reflection.MethodInfo,Castle.DynamicProxy.IProxyGenerationHook,System.Boolean)
extern "C"  MetaMethod_t2289943065 * InterfaceMembersOnClassCollector_GetMethodToGenerate_m4101335178 (InterfaceMembersOnClassCollector_t296458159 * __this, MethodInfo_t * ___method, Il2CppObject * ___hook, bool ___isStandalone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Castle.DynamicProxy.Contributors.InterfaceMembersOnClassCollector::GetMethodOnTarget(System.Reflection.MethodInfo)
extern "C"  MethodInfo_t * InterfaceMembersOnClassCollector_GetMethodOnTarget_m157856 (InterfaceMembersOnClassCollector_t296458159 * __this, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Contributors.InterfaceMembersOnClassCollector::IsVirtuallyImplementedInterfaceMethod(System.Reflection.MethodInfo)
extern "C"  bool InterfaceMembersOnClassCollector_IsVirtuallyImplementedInterfaceMethod_m583021225 (InterfaceMembersOnClassCollector_t296458159 * __this, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
