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

// Castle.DynamicProxy.Contributors.GetTargetReferenceDelegate
struct GetTargetReferenceDelegate_t3954391140;
// System.Object
struct Il2CppObject;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference
struct Reference_t1588091119;
// Castle.DynamicProxy.Generators.Emitters.ClassEmitter
struct ClassEmitter_t3355090660;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "NSubstitute_Castle_DynamicProxy_Generators_Emitter3355090660.h"
#include "mscorlib_System_Reflection_MethodInfo3461221277.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Castle.DynamicProxy.Contributors.GetTargetReferenceDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void GetTargetReferenceDelegate__ctor_m2024314343 (GetTargetReferenceDelegate_t3954391140 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference Castle.DynamicProxy.Contributors.GetTargetReferenceDelegate::Invoke(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,System.Reflection.MethodInfo)
extern "C"  Reference_t1588091119 * GetTargetReferenceDelegate_Invoke_m1386332470 (GetTargetReferenceDelegate_t3954391140 * __this, ClassEmitter_t3355090660 * ___class, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Reference_t1588091119 * pinvoke_delegate_wrapper_GetTargetReferenceDelegate_t3954391140(Il2CppObject* delegate, ClassEmitter_t3355090660 * ___class, MethodInfo_t * ___method);
// System.IAsyncResult Castle.DynamicProxy.Contributors.GetTargetReferenceDelegate::BeginInvoke(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,System.Reflection.MethodInfo,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GetTargetReferenceDelegate_BeginInvoke_m914334883 (GetTargetReferenceDelegate_t3954391140 * __this, ClassEmitter_t3355090660 * ___class, MethodInfo_t * ___method, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Reference Castle.DynamicProxy.Contributors.GetTargetReferenceDelegate::EndInvoke(System.IAsyncResult)
extern "C"  Reference_t1588091119 * GetTargetReferenceDelegate_EndInvoke_m1014670541 (GetTargetReferenceDelegate_t3954391140 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
