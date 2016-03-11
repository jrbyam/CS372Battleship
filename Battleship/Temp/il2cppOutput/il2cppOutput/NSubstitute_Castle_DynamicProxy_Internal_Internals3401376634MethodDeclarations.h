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

// System.Reflection.MethodBase
struct MethodBase_t3461000640;
// System.Reflection.Assembly
struct Assembly_t1882292308;
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct InternalsVisibleToAttribute_t1035815915;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MethodBase3461000640.h"
#include "mscorlib_System_Reflection_Assembly1882292308.h"
#include "mscorlib_System_Runtime_CompilerServices_Internals1035815915.h"

// System.Boolean Castle.DynamicProxy.Internal.InternalsUtil::IsInternal(System.Reflection.MethodBase)
extern "C"  bool InternalsUtil_IsInternal_m1561319640 (Il2CppObject * __this /* static, unused */, MethodBase_t3461000640 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Internal.InternalsUtil::IsInternalToDynamicProxy(System.Reflection.Assembly)
extern "C"  bool InternalsUtil_IsInternalToDynamicProxy_m3815018222 (Il2CppObject * __this /* static, unused */, Assembly_t1882292308 * ___asm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Internal.InternalsUtil::VisibleToDynamicProxy(System.Runtime.CompilerServices.InternalsVisibleToAttribute)
extern "C"  bool InternalsUtil_VisibleToDynamicProxy_m2951121874 (Il2CppObject * __this /* static, unused */, InternalsVisibleToAttribute_t1035815915 * ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.Internal.InternalsUtil::IsAccessible(System.Reflection.MethodBase)
extern "C"  bool InternalsUtil_IsAccessible_m1813366801 (Il2CppObject * __this /* static, unused */, MethodBase_t3461000640 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.Internal.InternalsUtil::.cctor()
extern "C"  void InternalsUtil__cctor_m2903011496 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
