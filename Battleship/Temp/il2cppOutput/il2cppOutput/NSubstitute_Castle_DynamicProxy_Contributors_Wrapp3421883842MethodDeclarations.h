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

// Castle.DynamicProxy.Contributors.WrappedClassMembersCollector
struct WrappedClassMembersCollector_t3421883842;
// System.Type
struct Type_t;
// Castle.DynamicProxy.IProxyGenerationHook
struct IProxyGenerationHook_t479444615;
// Castle.DynamicProxy.Generators.MetaMethod
struct MetaMethod_t2289943065;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "mscorlib_System_Reflection_FieldInfo1164929782.h"

// System.Void Castle.DynamicProxy.Contributors.WrappedClassMembersCollector::.ctor(System.Type)
extern "C"  void WrappedClassMembersCollector__ctor_m538100188 (WrappedClassMembersCollector_t3421883842 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.WrappedClassMembersCollector::CollectMembersToProxy(Castle.DynamicProxy.IProxyGenerationHook)
extern "C"  void WrappedClassMembersCollector_CollectMembersToProxy_m3054571734 (WrappedClassMembersCollector_t3421883842 * __this, Il2CppObject * ___hook, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.MetaMethod Castle.DynamicProxy.Contributors.WrappedClassMembersCollector::GetMethodToGenerate(System.Reflection.MethodInfo,Castle.DynamicProxy.IProxyGenerationHook,System.Boolean)
extern "C"  MetaMethod_t2289943065 * WrappedClassMembersCollector_GetMethodToGenerate_m4262832407 (WrappedClassMembersCollector_t3421883842 * __this, MethodInfo_t * ___method, Il2CppObject * ___hook, bool ___isStandalone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Contributors.WrappedClassMembersCollector::IsGeneratedByTheCompiler(System.Reflection.FieldInfo)
extern "C"  bool WrappedClassMembersCollector_IsGeneratedByTheCompiler_m3886582779 (WrappedClassMembersCollector_t3421883842 * __this, FieldInfo_t * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Contributors.WrappedClassMembersCollector::IsOKToBeOnProxy(System.Reflection.FieldInfo)
extern "C"  bool WrappedClassMembersCollector_IsOKToBeOnProxy_m3866507392 (WrappedClassMembersCollector_t3421883842 * __this, FieldInfo_t * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Contributors.WrappedClassMembersCollector::CollectFields(Castle.DynamicProxy.IProxyGenerationHook)
extern "C"  void WrappedClassMembersCollector_CollectFields_m126409589 (WrappedClassMembersCollector_t3421883842 * __this, Il2CppObject * ___hook, const MethodInfo* method) IL2CPP_METHOD_ATTR;
