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

// Castle.DynamicProxy.Generators.Emitters.ApplyGenArgs
struct ApplyGenArgs_t439661837;
// System.Object
struct Il2CppObject;
// System.Reflection.Emit.GenericTypeParameterBuilder[]
struct GenericTypeParameterBuilderU5BU5D_t685103793;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Castle.DynamicProxy.Generators.Emitters.ApplyGenArgs::.ctor(System.Object,System.IntPtr)
extern "C"  void ApplyGenArgs__ctor_m580792400 (ApplyGenArgs_t439661837 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.GenericTypeParameterBuilder[] Castle.DynamicProxy.Generators.Emitters.ApplyGenArgs::Invoke(System.String[])
extern "C"  GenericTypeParameterBuilderU5BU5D_t685103793* ApplyGenArgs_Invoke_m2525560019 (ApplyGenArgs_t439661837 * __this, StringU5BU5D_t2956870243* ___argumentNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" GenericTypeParameterBuilderU5BU5D_t685103793* pinvoke_delegate_wrapper_ApplyGenArgs_t439661837(Il2CppObject* delegate, StringU5BU5D_t2956870243* ___argumentNames);
// System.IAsyncResult Castle.DynamicProxy.Generators.Emitters.ApplyGenArgs::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ApplyGenArgs_BeginInvoke_m694779007 (ApplyGenArgs_t439661837 * __this, StringU5BU5D_t2956870243* ___argumentNames, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.GenericTypeParameterBuilder[] Castle.DynamicProxy.Generators.Emitters.ApplyGenArgs::EndInvoke(System.IAsyncResult)
extern "C"  GenericTypeParameterBuilderU5BU5D_t685103793* ApplyGenArgs_EndInvoke_m2230757027 (ApplyGenArgs_t439661837 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
