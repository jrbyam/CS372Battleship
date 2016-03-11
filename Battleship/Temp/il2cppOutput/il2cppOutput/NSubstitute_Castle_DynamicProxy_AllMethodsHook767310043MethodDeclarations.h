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

// Castle.DynamicProxy.AllMethodsHook
struct AllMethodsHook_t767310043;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "mscorlib_System_Reflection_MemberInfo2843033814.h"
#include "mscorlib_System_Object837106420.h"

// System.Boolean Castle.DynamicProxy.AllMethodsHook::ShouldInterceptMethod(System.Type,System.Reflection.MethodInfo)
extern "C"  bool AllMethodsHook_ShouldInterceptMethod_m1712538488 (AllMethodsHook_t767310043 * __this, Type_t * ___type, MethodInfo_t * ___methodInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.AllMethodsHook::NonProxyableMemberNotification(System.Type,System.Reflection.MemberInfo)
extern "C"  void AllMethodsHook_NonProxyableMemberNotification_m1893430381 (AllMethodsHook_t767310043 * __this, Type_t * ___type, MemberInfo_t * ___memberInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.AllMethodsHook::MethodsInspected()
extern "C"  void AllMethodsHook_MethodsInspected_m4211574541 (AllMethodsHook_t767310043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Castle.DynamicProxy.AllMethodsHook::Equals(System.Object)
extern "C"  bool AllMethodsHook_Equals_m2150164001 (AllMethodsHook_t767310043 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Castle.DynamicProxy.AllMethodsHook::GetHashCode()
extern "C"  int32_t AllMethodsHook_GetHashCode_m1975946821 (AllMethodsHook_t767310043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.AllMethodsHook::.ctor()
extern "C"  void AllMethodsHook__ctor_m992713880 (AllMethodsHook_t767310043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Castle.DynamicProxy.AllMethodsHook::.cctor()
extern "C"  void AllMethodsHook__cctor_m227262997 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
