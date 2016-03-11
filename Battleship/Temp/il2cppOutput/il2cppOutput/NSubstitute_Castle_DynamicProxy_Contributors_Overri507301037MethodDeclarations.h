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

// Castle.DynamicProxy.Contributors.OverrideMethodDelegate
struct OverrideMethodDelegate_t507301037;
// System.Object
struct Il2CppObject;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter
struct MethodEmitter_t2027936539;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Reflection_MethodAttributes455054214.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Castle.DynamicProxy.Contributors.OverrideMethodDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OverrideMethodDelegate__ctor_m3973611824 (OverrideMethodDelegate_t507301037 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter Castle.DynamicProxy.Contributors.OverrideMethodDelegate::Invoke(System.String,System.Reflection.MethodAttributes,System.Reflection.MethodInfo)
extern "C"  MethodEmitter_t2027936539 * OverrideMethodDelegate_Invoke_m1645132043 (OverrideMethodDelegate_t507301037 * __this, String_t* ___name, int32_t ___attributes, MethodInfo_t * ___methodToOverride, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" MethodEmitter_t2027936539 * pinvoke_delegate_wrapper_OverrideMethodDelegate_t507301037(Il2CppObject* delegate, String_t* ___name, int32_t ___attributes, MethodInfo_t * ___methodToOverride);
// System.IAsyncResult Castle.DynamicProxy.Contributors.OverrideMethodDelegate::BeginInvoke(System.String,System.Reflection.MethodAttributes,System.Reflection.MethodInfo,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OverrideMethodDelegate_BeginInvoke_m2232068700 (OverrideMethodDelegate_t507301037 * __this, String_t* ___name, int32_t ___attributes, MethodInfo_t * ___methodToOverride, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.MethodEmitter Castle.DynamicProxy.Contributors.OverrideMethodDelegate::EndInvoke(System.IAsyncResult)
extern "C"  MethodEmitter_t2027936539 * OverrideMethodDelegate_EndInvoke_m3579825398 (OverrideMethodDelegate_t507301037 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
