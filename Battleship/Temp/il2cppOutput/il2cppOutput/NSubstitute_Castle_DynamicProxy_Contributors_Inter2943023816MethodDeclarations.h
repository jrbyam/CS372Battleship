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

// Castle.DynamicProxy.Contributors.InterfaceMembersCollector
struct InterfaceMembersCollector_t2943023816;
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
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"

// System.Void Castle.DynamicProxy.Contributors.InterfaceMembersCollector::.ctor(System.Type)
extern "C"  void InterfaceMembersCollector__ctor_m4162029316 (InterfaceMembersCollector_t2943023816 * __this, Type_t * ___interface, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.MetaMethod Castle.DynamicProxy.Contributors.InterfaceMembersCollector::GetMethodToGenerate(System.Reflection.MethodInfo,Castle.DynamicProxy.IProxyGenerationHook,System.Boolean)
extern "C"  MetaMethod_t2289943065 * InterfaceMembersCollector_GetMethodToGenerate_m1166266463 (InterfaceMembersCollector_t2943023816 * __this, MethodInfo_t * ___method, Il2CppObject * ___hook, bool ___isStandalone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
