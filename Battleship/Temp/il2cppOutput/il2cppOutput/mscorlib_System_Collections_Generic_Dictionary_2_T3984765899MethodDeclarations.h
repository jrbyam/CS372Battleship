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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Reflection.Emit.OpCode,System.Object>
struct Transform_1_t3984765899;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Reflection_Emit_OpCode4028977979.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Reflection.Emit.OpCode,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m359991292_gshared (Transform_1_t3984765899 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m359991292(__this, ___object, ___method, method) ((  void (*) (Transform_1_t3984765899 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m359991292_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Reflection.Emit.OpCode,System.Object>::Invoke(TKey,TValue)
extern "C"  Il2CppObject * Transform_1_Invoke_m1717040832_gshared (Transform_1_t3984765899 * __this, Il2CppObject * ___key, OpCode_t4028977979  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1717040832(__this, ___key, ___value, method) ((  Il2CppObject * (*) (Transform_1_t3984765899 *, Il2CppObject *, OpCode_t4028977979 , const MethodInfo*))Transform_1_Invoke_m1717040832_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Reflection.Emit.OpCode,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3039563551_gshared (Transform_1_t3984765899 * __this, Il2CppObject * ___key, OpCode_t4028977979  ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3039563551(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t3984765899 *, Il2CppObject *, OpCode_t4028977979 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3039563551_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Reflection.Emit.OpCode,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Transform_1_EndInvoke_m2451108298_gshared (Transform_1_t3984765899 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m2451108298(__this, ___result, method) ((  Il2CppObject * (*) (Transform_1_t3984765899 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2451108298_gshared)(__this, ___result, method)
