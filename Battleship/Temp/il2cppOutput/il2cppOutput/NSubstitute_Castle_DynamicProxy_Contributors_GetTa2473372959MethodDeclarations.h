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

// Castle.DynamicProxy.Contributors.GetTargetExpressionDelegate
struct GetTargetExpressionDelegate_t2473372959;
// System.Object
struct Il2CppObject;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression
struct Expression_t707291260;
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

// System.Void Castle.DynamicProxy.Contributors.GetTargetExpressionDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void GetTargetExpressionDelegate__ctor_m2713834564 (GetTargetExpressionDelegate_t2473372959 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression Castle.DynamicProxy.Contributors.GetTargetExpressionDelegate::Invoke(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,System.Reflection.MethodInfo)
extern "C"  Expression_t707291260 * GetTargetExpressionDelegate_Invoke_m3095663640 (GetTargetExpressionDelegate_t2473372959 * __this, ClassEmitter_t3355090660 * ___class, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Expression_t707291260 * pinvoke_delegate_wrapper_GetTargetExpressionDelegate_t2473372959(Il2CppObject* delegate, ClassEmitter_t3355090660 * ___class, MethodInfo_t * ___method);
// System.IAsyncResult Castle.DynamicProxy.Contributors.GetTargetExpressionDelegate::BeginInvoke(Castle.DynamicProxy.Generators.Emitters.ClassEmitter,System.Reflection.MethodInfo,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GetTargetExpressionDelegate_BeginInvoke_m4054703646 (GetTargetExpressionDelegate_t2473372959 * __this, ClassEmitter_t3355090660 * ___class, MethodInfo_t * ___method, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Castle.DynamicProxy.Generators.Emitters.SimpleAST.Expression Castle.DynamicProxy.Contributors.GetTargetExpressionDelegate::EndInvoke(System.IAsyncResult)
extern "C"  Expression_t707291260 * GetTargetExpressionDelegate_EndInvoke_m4100243243 (GetTargetExpressionDelegate_t2473372959 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
